#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_AssetDatabase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_AssetDatabase)
namespace HoudiniEngineUnity {
struct __HEU_AssetDatabase__HEU_ImportAssetOptions;
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
struct __HEU_AssetDatabase__HEU_ImportAssetOptions;
}
namespace HoudiniEngineUnity {
class HEU_AssetDatabase;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_AssetDatabase);
// Type: ::HEU_ImportAssetOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HEU_AssetDatabase::HEU_ImportAssetOptions
struct CORDL_TYPE __HEU_AssetDatabase__HEU_ImportAssetOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_AssetDatabase__HEU_ImportAssetOptions_Unwrapped
  enum struct ____HEU_AssetDatabase__HEU_ImportAssetOptions_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_ForceUpdate = static_cast<int32_t>(0x1),
    __E_ForceSynchronousImport = static_cast<int32_t>(0x8),
    __E_ImportRecursive = static_cast<int32_t>(0x100),
    __E_DontDownloadFromCacheServer = static_cast<int32_t>(0x2000),
    __E_ForceUncompressedImport = static_cast<int32_t>(0x4000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_AssetDatabase__HEU_ImportAssetOptions_Unwrapped() const noexcept {
    return static_cast<____HEU_AssetDatabase__HEU_ImportAssetOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_AssetDatabase__HEU_ImportAssetOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_AssetDatabase__HEU_ImportAssetOptions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions const Default;

  /// @brief Field DontDownloadFromCacheServer value: static_cast<int32_t>(0x2000)
  static ::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions const DontDownloadFromCacheServer;

  /// @brief Field ForceSynchronousImport value: static_cast<int32_t>(0x8)
  static ::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions const ForceSynchronousImport;

  /// @brief Field ForceUncompressedImport value: static_cast<int32_t>(0x4000)
  static ::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions const ForceUncompressedImport;

  /// @brief Field ForceUpdate value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions const ForceUpdate;

  /// @brief Field ImportRecursive value: static_cast<int32_t>(0x100)
  static ::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions const ImportRecursive;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11618 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_AssetDatabase
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_AssetDatabase*
class CORDL_TYPE HEU_AssetDatabase : public ::System::Object {
public:
  // Declarations
  using HEU_ImportAssetOptions = ::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions;

  /// @brief Method AddObjectToAsset, addr 0x39e50e4, size 0x44, virtual false, abstract: false, final false
  static inline void AddObjectToAsset(::UnityEngine::Object* objectToAdd, ::UnityEngine::Object* assetObject);

  /// @brief Method AppendMaterialsPathToAssetFolder, addr 0x39e56b8, size 0xd8, virtual false, abstract: false, final false
  static inline ::StringW AppendMaterialsPathToAssetFolder(::StringW inAssetCacheFolder);

  /// @brief Method AppendMeshesAssetFileName, addr 0x39e5a3c, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW AppendMeshesAssetFileName(::StringW assetName);

  /// @brief Method AppendMeshesPathToAssetFolder, addr 0x39e53e4, size 0xd8, virtual false, abstract: false, final false
  static inline ::StringW AppendMeshesPathToAssetFolder(::StringW inAssetCacheFolder);

  /// @brief Method AppendPrefabPath, addr 0x39e594c, size 0xf0, virtual false, abstract: false, final false
  static inline ::StringW AppendPrefabPath(::StringW inAssetCacheFolder, ::StringW assetName);

  /// @brief Method AppendTerrainPathToAssetFolder, addr 0x39e5790, size 0xd8, virtual false, abstract: false, final false
  static inline ::StringW AppendTerrainPathToAssetFolder(::StringW inAssetCacheFolder);

  /// @brief Method AppendTexturesPathToAssetFolder, addr 0x39e55e0, size 0xd8, virtual false, abstract: false, final false
  static inline ::StringW AppendTexturesPathToAssetFolder(::StringW inAssetCacheFolder);

  /// @brief Method ContainsAsset, addr 0x39e4e04, size 0x4c, virtual false, abstract: false, final false
  static inline bool ContainsAsset(::UnityEngine::Object* assetObject);

  /// @brief Method CopyAndLoadAssetAtAnyPath, addr 0x39e4f34, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> CopyAndLoadAssetAtAnyPath(::UnityEngine::Object* srcAsset, ::StringW copyPath, ::System::Type* type, bool bOverwriteExisting);

  /// @brief Method CopyAndLoadAssetAtGivenPath, addr 0x39e4f80, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> CopyAndLoadAssetAtGivenPath(::UnityEngine::Object* srcAsset, ::StringW targetPath, ::System::Type* type);

  /// @brief Method CopyAndLoadAssetFromAssetCachePath, addr 0x39e4ee8, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> CopyAndLoadAssetFromAssetCachePath(::UnityEngine::Object* srcAsset, ::StringW copyPath, ::System::Type* type, bool bOverwriteExisting);

  /// @brief Method CopyAndLoadAssetWithRelativePath, addr 0x39e4e9c, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> CopyAndLoadAssetWithRelativePath(::UnityEngine::Object* srcAsset, ::StringW copyAssetFolder, ::StringW relativePath, ::System::Type* type,
                                                                                 bool bOverwriteExisting);

  /// @brief Method CopyAsset, addr 0x39e4e50, size 0x4c, virtual false, abstract: false, final false
  static inline bool CopyAsset(::StringW path, ::StringW newPath);

  /// @brief Method CopyUniqueAndLoadAssetAtAnyPath, addr 0x39e4fcc, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> CopyUniqueAndLoadAssetAtAnyPath(::UnityEngine::Object* srcAsset, ::StringW copyPath, ::System::Type* type);

  /// @brief Method CreateAddObjectInAssetCacheFolder, addr 0x39e50a0, size 0x44, virtual false, abstract: false, final false
  static inline void CreateAddObjectInAssetCacheFolder(::StringW assetName, ::StringW assetObjectFileName, ::UnityEngine::Object* objectToAdd, ::StringW relativeFolderPath,
                                                       ByRef<::StringW> exportRootPath, ByRef<::UnityEngine::Object*> assetDBObject);

  /// @brief Method CreateAsset, addr 0x39e505c, size 0x44, virtual false, abstract: false, final false
  static inline void CreateAsset(::UnityEngine::Object* asset, ::StringW path);

  /// @brief Method CreateAssetCacheFolder, addr 0x39e4ca8, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW CreateAssetCacheFolder(::StringW suggestedAssetPath, int32_t hash);

  /// @brief Method CreateObjectInAssetCacheFolder, addr 0x39e5018, size 0x44, virtual false, abstract: false, final false
  static inline void CreateObjectInAssetCacheFolder(::UnityEngine::Object* objectToCreate, ::StringW assetCacheRoot, ::StringW relativeFolderPath, ::StringW assetFileName, ::System::Type* type,
                                                    bool bOverwriteExisting);

  /// @brief Method CreatePathWithFolders, addr 0x39e53a0, size 0x44, virtual false, abstract: false, final false
  static inline void CreatePathWithFolders(::StringW inPath);

  /// @brief Method CreateUniqueBakePath, addr 0x39e5354, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW CreateUniqueBakePath(::StringW assetName);

  /// @brief Method DeleteAsset, addr 0x39e4d38, size 0x44, virtual false, abstract: false, final false
  static inline void DeleteAsset(::UnityEngine::Object* asset);

  /// @brief Method DeleteAssetAtPath, addr 0x39e4d7c, size 0x44, virtual false, abstract: false, final false
  static inline void DeleteAssetAtPath(::StringW path);

  /// @brief Method DeleteAssetCacheFolder, addr 0x39e4cf4, size 0x44, virtual false, abstract: false, final false
  static inline void DeleteAssetCacheFolder(::StringW assetCacheFolderPath);

  /// @brief Method DeleteAssetIfInBakedFolder, addr 0x39e4dc0, size 0x44, virtual false, abstract: false, final false
  static inline void DeleteAssetIfInBakedFolder(::UnityEngine::Object* asset);

  /// @brief Method GetAssetBakedPath, addr 0x39e52bc, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetBakedPath();

  /// @brief Method GetAssetBakedPathWithAssetName, addr 0x39e5308, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetBakedPathWithAssetName(::StringW assetName);

  /// @brief Method GetAssetCachePath, addr 0x39e40c0, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW GetAssetCachePath();

  /// @brief Method GetAssetFullPath, addr 0x39e4908, size 0x54, virtual false, abstract: false, final false
  static inline ::StringW GetAssetFullPath(::StringW inPath);

  /// @brief Method GetAssetOrScenePath, addr 0x39e4a9c, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetOrScenePath(::UnityEngine::Object* inputObject);

  /// @brief Method GetAssetPath, addr 0x39e464c, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetPath(::UnityEngine::Object* asset);

  /// @brief Method GetAssetPathWithSubAssetSupport, addr 0x39e4698, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetPathWithSubAssetSupport(::UnityEngine::Object* asset);

  /// @brief Method GetAssetPathsFromAssetBundle, addr 0x39e5a90, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetAssetPathsFromAssetBundle(::StringW assetBundleFileName);

  /// @brief Method GetAssetRelativePath, addr 0x39e41b0, size 0x16c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetRelativePath(::StringW inFullPath);

  /// @brief Method GetAssetRelativePathStart, addr 0x39e47e0, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW GetAssetRelativePathStart();

  /// @brief Method GetAssetRootPath, addr 0x39e4a04, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetRootPath(::UnityEngine::Object* asset);

  /// @brief Method GetAssetSubFolders, addr 0x39e5868, size 0xe4, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetAssetSubFolders();

  /// @brief Method GetAssetWorkingPath, addr 0x39e5270, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetWorkingPath();

  /// @brief Method GetBuiltinExtraResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetBuiltinExtraResource(::StringW resourceName);

  /// @brief Method GetPackagesRelativePath, addr 0x39e435c, size 0x124, virtual false, abstract: false, final false
  static inline ::StringW GetPackagesRelativePath(::StringW inFullPath);

  /// @brief Method GetPackagesRelativePathStart, addr 0x39e4874, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW GetPackagesRelativePathStart();

  /// @brief Method GetSubAssetPathFromPath, addr 0x39e46e4, size 0xfc, virtual false, abstract: false, final false
  static inline void GetSubAssetPathFromPath(::StringW fullPath, ByRef<::StringW> mainPath, ByRef<::StringW> subPath);

  /// @brief Method GetUniqueAssetPath, addr 0x39e4a50, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetUniqueAssetPath(::StringW path);

  /// @brief Method GetUniqueAssetPathForUnityAsset, addr 0x39e5aec, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW GetUniqueAssetPathForUnityAsset(::UnityEngine::Object* obj);

  /// @brief Method GetUnityProjectPath, addr 0x39e4120, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW GetUnityProjectPath();

  /// @brief Method GetValidAssetPath, addr 0x39e4480, size 0x1cc, virtual false, abstract: false, final false
  static inline ::StringW GetValidAssetPath(::StringW inPath);

  /// @brief Method ImportAsset, addr 0x39e522c, size 0x44, virtual false, abstract: false, final false
  static inline void ImportAsset(::StringW assetPath, ::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions heuOptions);

  /// @brief Method IsAssetInAssetCacheBakedFolder, addr 0x39e4c10, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsAssetInAssetCacheBakedFolder(::UnityEngine::Object* asset);

  /// @brief Method IsAssetInAssetCacheWorkingFolder, addr 0x39e4c5c, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsAssetInAssetCacheWorkingFolder(::UnityEngine::Object* asset);

  /// @brief Method IsAssetSavedInScene, addr 0x39e5a98, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsAssetSavedInScene(::UnityEngine::GameObject* go);

  /// @brief Method IsPathInAssetCache, addr 0x39e4ae8, size 0x90, virtual false, abstract: false, final false
  static inline bool IsPathInAssetCache(::StringW path);

  /// @brief Method IsPathInAssetCacheBakedFolder, addr 0x39e4b78, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsPathInAssetCacheBakedFolder(::StringW path);

  /// @brief Method IsPathInAssetCacheWorkingFolder, addr 0x39e4bc4, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsPathInAssetCacheWorkingFolder(::StringW path);

  /// @brief Method IsPathRelativeToAssets, addr 0x39e49b4, size 0x28, virtual false, abstract: false, final false
  static inline bool IsPathRelativeToAssets(::StringW inPath);

  /// @brief Method IsPathRelativeToPackages, addr 0x39e49dc, size 0x28, virtual false, abstract: false, final false
  static inline bool IsPathRelativeToPackages(::StringW inPath);

  /// @brief Method IsSubAsset, addr 0x39e5a88, size 0x8, virtual false, abstract: false, final false
  static inline bool IsSubAsset(::UnityEngine::Object* obj);

  /// @brief Method LoadAllAssetRepresentationsAtPath, addr 0x39e5194, size 0x4c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> LoadAllAssetRepresentationsAtPath(::StringW assetPath);

  /// @brief Method LoadAllAssetsAtPath, addr 0x39e51e0, size 0x4c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> LoadAllAssetsAtPath(::StringW assetPath);

  /// @brief Method LoadAssetAtPath, addr 0x39e5134, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> LoadAssetAtPath(::StringW assetPath, ::System::Type* type);

  /// @brief Method LoadSubAssetAtPath, addr 0x39e5180, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> LoadSubAssetAtPath(::StringW mainPath, ::StringW subAssetPath);

  /// @brief Method LoadUnityAssetFromUniqueAssetPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T LoadUnityAssetFromUniqueAssetPath(::StringW assetPath);

  /// @brief Method PrintDependencies, addr 0x39e5ae8, size 0x4, virtual false, abstract: false, final false
  static inline void PrintDependencies(::UnityEngine::GameObject* targetGO);

  /// @brief Method RefreshAssetDatabase, addr 0x39e5130, size 0x4, virtual false, abstract: false, final false
  static inline void RefreshAssetDatabase();

  /// @brief Method SaveAndRefreshDatabase, addr 0x39e5128, size 0x4, virtual false, abstract: false, final false
  static inline void SaveAndRefreshDatabase();

  /// @brief Method SaveAssetDatabase, addr 0x39e512c, size 0x4, virtual false, abstract: false, final false
  static inline void SaveAssetDatabase();

  /// @brief Method SelectAssetAtPath, addr 0x39e5ae4, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11619 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AssetDatabase, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions, "HoudiniEngineUnity", "HEU_AssetDatabase/HEU_ImportAssetOptions");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetDatabase);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetDatabase*, "HoudiniEngineUnity", "HEU_AssetDatabase");
