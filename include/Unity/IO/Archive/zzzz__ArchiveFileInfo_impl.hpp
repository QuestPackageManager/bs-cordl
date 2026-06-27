#pragma once
// IWYU pragma private; include "Unity/IO/Archive/ArchiveFileInfo.hpp"
#include "Unity/IO/Archive/zzzz__ArchiveFileInfo_def.hpp"
// Ctor Parameters [CppParam { name: "Filename", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "FileSize", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::IO::Archive::ArchiveFileInfo::ArchiveFileInfo(::StringW  Filename, uint64_t  FileSize) noexcept  {
this->Filename = Filename;
this->FileSize = FileSize;
}
// Ctor Parameters []
constexpr ::Unity::IO::Archive::ArchiveFileInfo::ArchiveFileInfo()   {
}
