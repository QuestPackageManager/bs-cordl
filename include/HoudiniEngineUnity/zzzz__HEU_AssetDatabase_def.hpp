#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_AssetDatabase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_AssetDatabase)
namespace HoudiniEngineUnity {
struct HEU_AssetDatabase_HEU_ImportAssetOptions;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_AssetDatabase_HEU_ImportAssetOptions;
}
namespace HoudiniEngineUnity {
class HEU_AssetDatabase;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HEU_AssetDatabase_HEU_ImportAssetOptions);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_AssetDatabase);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_AssetDatabase/HEU_ImportAssetOptions
struct CORDL_TYPE HEU_AssetDatabase_HEU_ImportAssetOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_AssetDatabase_HEU_ImportAssetOptions_Unwrapped
  enum struct __HEU_AssetDatabase_HEU_ImportAssetOptions_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_ForceUpdate = static_cast<int32_t>(0x1),
    __E_ForceSynchronousImport = static_cast<int32_t>(0x8),
    __E_ImportRecursive = static_cast<int32_t>(0x100),
    __E_DontDownloadFromCacheServer = static_cast<int32_t>(0x2000),
    __E_ForceUncompressedImport = static_cast<int32_t>(0x4000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_AssetDatabase_HEU_ImportAssetOptions_Unwrapped() const noexcept {
    return static_cast<__HEU_AssetDatabase_HEU_ImportAssetOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AssetDatabase_HEU_ImportAssetOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_AssetDatabase_HEU_ImportAssetOptions(int32_t value__) noexcept;

  /// @brief Field Default value: I32(0)
  static ::HoudiniEngineUnity::HEU_AssetDatabase_HEU_ImportAssetOptions const Default;

  /// @brief Field DontDownloadFromCacheServer value: I32(8192)
  static ::HoudiniEngineUnity::HEU_AssetDatabase_HEU_ImportAssetOptions const DontDownloadFromCacheServer;

  /// @brief Field ForceSynchronousImport value: I32(8)
  static ::HoudiniEngineUnity::HEU_AssetDatabase_HEU_ImportAssetOptions const ForceSynchronousImport;

  /// @brief Field ForceUncompressedImport value: I32(16384)
  static ::HoudiniEngineUnity::HEU_AssetDatabase_HEU_ImportAssetOptions const ForceUncompressedImport;

  /// @brief Field ForceUpdate value: I32(1)
  static ::HoudiniEngineUnity::HEU_AssetDatabase_HEU_ImportAssetOptions const ForceUpdate;

  /// @brief Field ImportRecursive value: I32(256)
  static ::HoudiniEngineUnity::HEU_AssetDatabase_HEU_ImportAssetOptions const ImportRecursive;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11656 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetDatabase_HEU_ImportAssetOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AssetDatabase_HEU_ImportAssetOptions, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_AssetDatabase
class CORDL_TYPE HEU_AssetDatabase : public ::System::Object {
public:
  // Declarations
  using HEU_ImportAssetOptions = ::HoudiniEngineUnity::HEU_AssetDatabase_HEU_ImportAssetOptions;

  /// @brief Method AddObjectToAsset, addr 0x3a3b514, size 0x44, virtual false, abstract: false, final false
  static inline void AddObjectToAsset(::UnityEngine::Object* objectToAdd, ::UnityEngine::Object* assetObject);

  /// @brief Method AppendMaterialsPathToAssetFolder, addr 0x3a3bae8, size 0xd8, virtual false, abstract: false, final false
  static inline ::StringW AppendMaterialsPathToAssetFolder(::StringW inAssetCacheFolder);

  /// @brief Method AppendMeshesAssetFileName, addr 0x3a3be6c, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW AppendMeshesAssetFileName(::StringW assetName);

  /// @brief Method AppendMeshesPathToAssetFolder, addr 0x3a3b814, size 0xd8, virtual false, abstract: false, final false
  static inline ::StringW AppendMeshesPathToAssetFolder(::StringW inAssetCacheFolder);

  /// @brief Method AppendPrefabPath, addr 0x3a3bd7c, size 0xf0, virtual false, abstract: false, final false
  static inline ::StringW AppendPrefabPath(::StringW inAssetCacheFolder, ::StringW assetName);

  /// @brief Method AppendTerrainPathToAssetFolder, addr 0x3a3bbc0, size 0xd8, virtual false, abstract: false, final false
  static inline ::StringW AppendTerrainPathToAssetFolder(::StringW inAssetCacheFolder);

  /// @brief Method AppendTexturesPathToAssetFolder, addr 0x3a3ba10, size 0xd8, virtual false, abstract: false, final false
  static inline ::StringW AppendTexturesPathToAssetFolder(::StringW inAssetCacheFolder);

  /// @brief Method ContainsAsset, addr 0x3a3b234, size 0x4c, virtual false, abstract: false, final false
  static inline bool ContainsAsset(::UnityEngine::Object* assetObject);

  /// @brief Method CopyAndLoadAssetAtAnyPath, addr 0x3a3b364, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> CopyAndLoadAssetAtAnyPath(::UnityEngine::Object* srcAsset, ::StringW copyPath, ::System::Type* type, bool bOverwriteExisting);

  /// @brief Method CopyAndLoadAssetAtGivenPath, addr 0x3a3b3b0, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> CopyAndLoadAssetAtGivenPath(::UnityEngine::Object* srcAsset, ::StringW targetPath, ::System::Type* type);

  /// @brief Method CopyAndLoadAssetFromAssetCachePath, addr 0x3a3b318, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> CopyAndLoadAssetFromAssetCachePath(::UnityEngine::Object* srcAsset, ::StringW copyPath, ::System::Type* type, bool bOverwriteExisting);

  /// @brief Method CopyAndLoadAssetWithRelativePath, addr 0x3a3b2cc, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> CopyAndLoadAssetWithRelativePath(::UnityEngine::Object* srcAsset, ::StringW copyAssetFolder, ::StringW relativePath, ::System::Type* type,
                                                                                 bool bOverwriteExisting);

  /// @brief Method CopyAsset, addr 0x3a3b280, size 0x4c, virtual false, abstract: false, final false
  static inline bool CopyAsset(::StringW path, ::StringW newPath);

  /// @brief Method CopyUniqueAndLoadAssetAtAnyPath, addr 0x3a3b3fc, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> CopyUniqueAndLoadAssetAtAnyPath(::UnityEngine::Object* srcAsset, ::StringW copyPath, ::System::Type* type);

  /// @brief Method CreateAddObjectInAssetCacheFolder, addr 0x3a3b4d0, size 0x44, virtual false, abstract: false, final false
  static inline void CreateAddObjectInAssetCacheFolder(::StringW assetName, ::StringW assetObjectFileName, ::UnityEngine::Object* objectToAdd, ::StringW relativeFolderPath,
                                                       ::ByRef<::StringW> exportRootPath, ::ByRef<::UnityEngine::Object*> assetDBObject);

  /// @brief Method CreateAsset, addr 0x3a3b48c, size 0x44, virtual false, abstract: false, final false
  static inline void CreateAsset(::UnityEngine::Object* asset, ::StringW path);

  /// @brief Method CreateAssetCacheFolder, addr 0x3a3b0d8, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW CreateAssetCacheFolder(::StringW suggestedAssetPath, int32_t hash);

  /// @brief Method CreateObjectInAssetCacheFolder, addr 0x3a3b448, size 0x44, virtual false, abstract: false, final false
  static inline void CreateObjectInAssetCacheFolder(::UnityEngine::Object* objectToCreate, ::StringW assetCacheRoot, ::StringW relativeFolderPath, ::StringW assetFileName, ::System::Type* type,
                                                    bool bOverwriteExisting);

  /// @brief Method CreatePathWithFolders, addr 0x3a3b7d0, size 0x44, virtual false, abstract: false, final false
  static inline void CreatePathWithFolders(::StringW inPath);

  /// @brief Method CreateUniqueBakePath, addr 0x3a3b784, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW CreateUniqueBakePath(::StringW assetName);

  /// @brief Method DeleteAsset, addr 0x3a3b168, size 0x44, virtual false, abstract: false, final false
  static inline void DeleteAsset(::UnityEngine::Object* asset);

  /// @brief Method DeleteAssetAtPath, addr 0x3a3b1ac, size 0x44, virtual false, abstract: false, final false
  static inline void DeleteAssetAtPath(::StringW path);

  /// @brief Method DeleteAssetCacheFolder, addr 0x3a3b124, size 0x44, virtual false, abstract: false, final false
  static inline void DeleteAssetCacheFolder(::StringW assetCacheFolderPath);

  /// @brief Method DeleteAssetIfInBakedFolder, addr 0x3a3b1f0, size 0x44, virtual false, abstract: false, final false
  static inline void DeleteAssetIfInBakedFolder(::UnityEngine::Object* asset);

  /// @brief Method GetAssetBakedPath, addr 0x3a3b6ec, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetBakedPath();

  /// @brief Method GetAssetBakedPathWithAssetName, addr 0x3a3b738, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetBakedPathWithAssetName(::StringW assetName);

  /// @brief Method GetAssetCachePath, addr 0x3a3a4f0, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW GetAssetCachePath();

  /// @brief Method GetAssetFullPath, addr 0x3a3ad38, size 0x54, virtual false, abstract: false, final false
  static inline ::StringW GetAssetFullPath(::StringW inPath);

  /// @brief Method GetAssetOrScenePath, addr 0x3a3aecc, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetOrScenePath(::UnityEngine::Object* inputObject);

  /// @brief Method GetAssetPath, addr 0x3a3aa7c, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetPath(::UnityEngine::Object* asset);

  /// @brief Method GetAssetPathWithSubAssetSupport, addr 0x3a3aac8, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetPathWithSubAssetSupport(::UnityEngine::Object* asset);

  /// @brief Method GetAssetPathsFromAssetBundle, addr 0x3a3bec0, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetAssetPathsFromAssetBundle(::StringW assetBundleFileName);

  /// @brief Method GetAssetRelativePath, addr 0x3a3a5e0, size 0x16c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetRelativePath(::StringW inFullPath);

  /// @brief Method GetAssetRelativePathStart, addr 0x3a3ac10, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW GetAssetRelativePathStart();

  /// @brief Method GetAssetRootPath, addr 0x3a3ae34, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetRootPath(::UnityEngine::Object* asset);

  /// @brief Method GetAssetSubFolders, addr 0x3a3bc98, size 0xe4, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetAssetSubFolders();

  /// @brief Method GetAssetWorkingPath, addr 0x3a3b6a0, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetWorkingPath();

  /// @brief Method GetBuiltinExtraResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetBuiltinExtraResource(::StringW resourceName);

  /// @brief Method GetPackagesRelativePath, addr 0x3a3a78c, size 0x124, virtual false, abstract: false, final false
  static inline ::StringW GetPackagesRelativePath(::StringW inFullPath);

  /// @brief Method GetPackagesRelativePathStart, addr 0x3a3aca4, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW GetPackagesRelativePathStart();

  /// @brief Method GetSubAssetPathFromPath, addr 0x3a3ab14, size 0xfc, virtual false, abstract: false, final false
  static inline void GetSubAssetPathFromPath(::StringW fullPath, ::ByRef<::StringW> mainPath, ::ByRef<::StringW> subPath);

  /// @brief Method GetUniqueAssetPath, addr 0x3a3ae80, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetUniqueAssetPath(::StringW path);

  /// @brief Method GetUniqueAssetPathForUnityAsset, addr 0x3a3bf1c, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW GetUniqueAssetPathForUnityAsset(::UnityEngine::Object* obj);

  /// @brief Method GetUnityProjectPath, addr 0x3a3a550, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW GetUnityProjectPath();

  /// @brief Method GetValidAssetPath, addr 0x3a3a8b0, size 0x1cc, virtual false, abstract: false, final false
  static inline ::StringW GetValidAssetPath(::StringW inPath);

  /// @brief Method ImportAsset, addr 0x3a3b65c, size 0x44, virtual false, abstract: false, final false
  static inline void ImportAsset(::StringW assetPath, ::HoudiniEngineUnity::HEU_AssetDatabase_HEU_ImportAssetOptions heuOptions);

  /// @brief Method IsAssetInAssetCacheBakedFolder, addr 0x3a3b040, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsAssetInAssetCacheBakedFolder(::UnityEngine::Object* asset);

  /// @brief Method IsAssetInAssetCacheWorkingFolder, addr 0x3a3b08c, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsAssetInAssetCacheWorkingFolder(::UnityEngine::Object* asset);

  /// @brief Method IsAssetSavedInScene, addr 0x3a3bec8, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsAssetSavedInScene(::UnityEngine::GameObject* go);

  /// @brief Method IsPathInAssetCache, addr 0x3a3af18, size 0x90, virtual false, abstract: false, final false
  static inline bool IsPathInAssetCache(::StringW path);

  /// @brief Method IsPathInAssetCacheBakedFolder, addr 0x3a3afa8, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsPathInAssetCacheBakedFolder(::StringW path);

  /// @brief Method IsPathInAssetCacheWorkingFolder, addr 0x3a3aff4, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsPathInAssetCacheWorkingFolder(::StringW path);

  /// @brief Method IsPathRelativeToAssets, addr 0x3a3ade4, size 0x28, virtual false, abstract: false, final false
  static inline bool IsPathRelativeToAssets(::StringW inPath);

  /// @brief Method IsPathRelativeToPackages, addr 0x3a3ae0c, size 0x28, virtual false, abstract: false, final false
  static inline bool IsPathRelativeToPackages(::StringW inPath);

  /// @brief Method IsSubAsset, addr 0x3a3beb8, size 0x8, virtual false, abstract: false, final false
  static inline bool IsSubAsset(::UnityEngine::Object* obj);

  /// @brief Method LoadAllAssetRepresentationsAtPath, addr 0x3a3b5c4, size 0x4c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> LoadAllAssetRepresentationsAtPath(::StringW assetPath);

  /// @brief Method LoadAllAssetsAtPath, addr 0x3a3b610, size 0x4c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> LoadAllAssetsAtPath(::StringW assetPath);

  /// @brief Method LoadAssetAtPath, addr 0x3a3b564, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> LoadAssetAtPath(::StringW assetPath, ::System::Type* type);

  /// @brief Method LoadSubAssetAtPath, addr 0x3a3b5b0, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> LoadSubAssetAtPath(::StringW mainPath, ::StringW subAssetPath);

  /// @brief Method LoadUnityAssetFromUniqueAssetPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T LoadUnityAssetFromUniqueAssetPath(::StringW assetPath);

  /// @brief Method PrintDependencies, addr 0x3a3bf18, size 0x4, virtual false, abstract: false, final false
  static inline void PrintDependencies(::UnityEngine::GameObject* targetGO);

  /// @brief Method RefreshAssetDatabase, addr 0x3a3b560, size 0x4, virtual false, abstract: false, final false
  static inline void RefreshAssetDatabase();

  /// @brief Method SaveAndRefreshDatabase, addr 0x3a3b558, size 0x4, virtual false, abstract: false, final false
  static inline void SaveAndRefreshDatabase();

  /// @brief Method SaveAssetDatabase, addr 0x3a3b55c, size 0x4, virtual false, abstract: false, final false
  static inline void SaveAssetDatabase();

  /// @brief Method SelectAssetAtPath, addr 0x3a3bf14, size 0x4, virtual false, abstract: false, final false
  static inline void SelectAssetAtPath(::StringW path);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AssetDatabase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetDatabase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_AssetDatabase(HEU_AssetDatabase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetDatabase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_AssetDatabase(HEU_AssetDatabase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11657 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AssetDatabase, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetDatabase_HEU_ImportAssetOptions, "HoudiniEngineUnity", "HEU_AssetDatabase/HEU_ImportAssetOptions");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetDatabase);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetDatabase*, "HoudiniEngineUnity", "HEU_AssetDatabase");
