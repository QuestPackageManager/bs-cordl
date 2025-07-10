#! /usr/bin/pwsh

Param(
    [Parameter(Mandatory=$false)]
    [String] $file=""
)

if($file -eq "") {
    Write-Output "Expected apk filename as input"
    exit 1
}

# Reset files beforehand so nothing incorrect is commited
git reset --hard origin/main

# Extract il2cpp files from apk
apktool d $file -f -o $PSScriptRoot/apk
Copy-Item apk/lib/arm64-v8a/libil2cpp.so $PSScriptRoot
Copy-Item apk/assets/bin/Data/Managed/Metadata/global-metadata.dat $PSScriptRoot

cordl --metadata global-metadata.dat --libil2cpp libil2cpp.so cpp --format

# Move generated headers
Remove-Item -Recurse -Force include
Move-Item codegen/include $PSScriptRoot
Remove-Item -Recurse -Force codegen

# Generate types.json
cordl --metadata global-metadata.dat --libil2cpp libil2cpp.so single-json
Move-Item cordl.json types.json
if (Test-Path "types.json.zip" -ErrorAction SilentlyContinue) {
    Remove-Item "types.json.zip"
}
Compress-Archive -Path types.json -DestinationPath types.json.zip
Remove-Item types.json -Force

# Create version.txt
$content = Get-Content apk/apktool.yml
$versionline = $content -match 'versionName: [\.\d]+'
$version = $versionline.Trim().split(" ")[1]
Set-Content -NoNewline -Path "include/version.txt" -Value $version

Remove-Item -Recurse -Force apk
Remove-Item -Force libil2cpp.so
Remove-Item -Force global-metadata.dat

# Ensure generated headers are correct
qpm restore --update
qpm s build

git add include qpm.json qpm.shared.json types.json.zip
git commit -m "Update for $version"