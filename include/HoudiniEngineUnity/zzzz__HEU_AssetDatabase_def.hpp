#pragma once
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
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9669))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_AssetDatabase__HEU_ImportAssetOptions(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_AssetDatabase__HEU_ImportAssetOptions();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions const Default;

  /// @brief Field ForceUpdate value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions const ForceUpdate;

  /// @brief Field ForceSynchronousImport value: static_cast<int32_t>(0x8)
  static ::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions const ForceSynchronousImport;

  /// @brief Field ImportRecursive value: static_cast<int32_t>(0x100)
  static ::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions const ImportRecursive;

  /// @brief Field DontDownloadFromCacheServer value: static_cast<int32_t>(0x2000)
  static ::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions const DontDownloadFromCacheServer;

  /// @brief Field ForceUncompressedImport value: static_cast<int32_t>(0x4000)
  static ::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions const ForceUncompressedImport;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_AssetDatabase
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9670))
// CS Name: ::HoudiniEngineUnity::HEU_AssetDatabase*
class CORDL_TYPE HEU_AssetDatabase : public ::System::Object {
public:
  // Declarations
  using HEU_ImportAssetOptions = ::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions;

  /// @brief Method GetAssetCachePath, addr 0x2183c48, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW GetAssetCachePath();

  /// @brief Method GetUnityProjectPath, addr 0x2183ca8, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW GetUnityProjectPath();

  /// @brief Method GetAssetRelativePath, addr 0x2183d0c, size 0x144, virtual false, abstract: false, final false
  static inline ::StringW GetAssetRelativePath(::StringW inFullPath);

  /// @brief Method GetPackagesRelativePath, addr 0x2183e90, size 0x124, virtual false, abstract: false, final false
  static inline ::StringW GetPackagesRelativePath(::StringW inFullPath);

  /// @brief Method GetValidAssetPath, addr 0x2183fb4, size 0x1d0, virtual false, abstract: false, final false
  static inline ::StringW GetValidAssetPath(::StringW inPath);

  /// @brief Method GetAssetPath, addr 0x2184184, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetPath(::UnityEngine::Object* asset);

  /// @brief Method GetAssetPathWithSubAssetSupport, addr 0x21841d0, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetPathWithSubAssetSupport(::UnityEngine::Object* asset);

  /// @brief Method GetSubAssetPathFromPath, addr 0x218421c, size 0xfc, virtual false, abstract: false, final false
  static inline void GetSubAssetPathFromPath(::StringW fullPath, ByRef<::StringW> mainPath, ByRef<::StringW> subPath);

  /// @brief Method GetAssetRelativePathStart, addr 0x2184318, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW GetAssetRelativePathStart();

  /// @brief Method GetPackagesRelativePathStart, addr 0x21843ac, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW GetPackagesRelativePathStart();

  /// @brief Method GetAssetFullPath, addr 0x2184440, size 0x54, virtual false, abstract: false, final false
  static inline ::StringW GetAssetFullPath(::StringW inPath);

  /// @brief Method IsPathRelativeToAssets, addr 0x21844ec, size 0x28, virtual false, abstract: false, final false
  static inline bool IsPathRelativeToAssets(::StringW inPath);

  /// @brief Method IsPathRelativeToPackages, addr 0x2184514, size 0x28, virtual false, abstract: false, final false
  static inline bool IsPathRelativeToPackages(::StringW inPath);

  /// @brief Method GetAssetRootPath, addr 0x218453c, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetRootPath(::UnityEngine::Object* asset);

  /// @brief Method GetUniqueAssetPath, addr 0x2184588, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetUniqueAssetPath(::StringW path);

  /// @brief Method GetAssetOrScenePath, addr 0x21845d4, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetOrScenePath(::UnityEngine::Object* inputObject);

  /// @brief Method IsPathInAssetCache, addr 0x2184620, size 0x50, virtual false, abstract: false, final false
  static inline bool IsPathInAssetCache(::StringW path);

  /// @brief Method IsPathInAssetCacheBakedFolder, addr 0x2184670, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsPathInAssetCacheBakedFolder(::StringW path);

  /// @brief Method IsPathInAssetCacheWorkingFolder, addr 0x21846bc, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsPathInAssetCacheWorkingFolder(::StringW path);

  /// @brief Method IsAssetInAssetCacheBakedFolder, addr 0x2184708, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsAssetInAssetCacheBakedFolder(::UnityEngine::Object* asset);

  /// @brief Method IsAssetInAssetCacheWorkingFolder, addr 0x2184754, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsAssetInAssetCacheWorkingFolder(::UnityEngine::Object* asset);

  /// @brief Method CreateAssetCacheFolder, addr 0x21847a0, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW CreateAssetCacheFolder(::StringW suggestedAssetPath, int32_t hash);

  /// @brief Method DeleteAssetCacheFolder, addr 0x21847ec, size 0x44, virtual false, abstract: false, final false
  static inline void DeleteAssetCacheFolder(::StringW assetCacheFolderPath);

  /// @brief Method DeleteAsset, addr 0x2184830, size 0x44, virtual false, abstract: false, final false
  static inline void DeleteAsset(::UnityEngine::Object* asset);

  /// @brief Method DeleteAssetAtPath, addr 0x2184874, size 0x44, virtual false, abstract: false, final false
  static inline void DeleteAssetAtPath(::StringW path);

  /// @brief Method DeleteAssetIfInBakedFolder, addr 0x21848b8, size 0x44, virtual false, abstract: false, final false
  static inline void DeleteAssetIfInBakedFolder(::UnityEngine::Object* asset);

  /// @brief Method ContainsAsset, addr 0x21848fc, size 0x4c, virtual false, abstract: false, final false
  static inline bool ContainsAsset(::UnityEngine::Object* assetObject);

  /// @brief Method CopyAsset, addr 0x2184948, size 0x4c, virtual false, abstract: false, final false
  static inline bool CopyAsset(::StringW path, ::StringW newPath);

  /// @brief Method CopyAndLoadAssetWithRelativePath, addr 0x2184994, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Object* CopyAndLoadAssetWithRelativePath(::UnityEngine::Object* srcAsset, ::StringW copyAssetFolder, ::StringW relativePath, ::System::Type* type,
                                                                        bool bOverwriteExisting);

  /// @brief Method CopyAndLoadAssetFromAssetCachePath, addr 0x21849e0, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Object* CopyAndLoadAssetFromAssetCachePath(::UnityEngine::Object* srcAsset, ::StringW copyPath, ::System::Type* type, bool bOverwriteExisting);

  /// @brief Method CopyAndLoadAssetAtAnyPath, addr 0x2184a2c, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Object* CopyAndLoadAssetAtAnyPath(::UnityEngine::Object* srcAsset, ::StringW copyPath, ::System::Type* type, bool bOverwriteExisting);

  /// @brief Method CopyAndLoadAssetAtGivenPath, addr 0x2184a78, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Object* CopyAndLoadAssetAtGivenPath(::UnityEngine::Object* srcAsset, ::StringW targetPath, ::System::Type* type);

  /// @brief Method CopyUniqueAndLoadAssetAtAnyPath, addr 0x2184ac4, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Object* CopyUniqueAndLoadAssetAtAnyPath(::UnityEngine::Object* srcAsset, ::StringW copyPath, ::System::Type* type);

  /// @brief Method CreateObjectInAssetCacheFolder, addr 0x2184b10, size 0x44, virtual false, abstract: false, final false
  static inline void CreateObjectInAssetCacheFolder(::UnityEngine::Object* objectToCreate, ::StringW assetCacheRoot, ::StringW relativeFolderPath, ::StringW assetFileName, ::System::Type* type,
                                                    bool bOverwriteExisting);

  /// @brief Method CreateAsset, addr 0x2184b54, size 0x44, virtual false, abstract: false, final false
  static inline void CreateAsset(::UnityEngine::Object* asset, ::StringW path);

  /// @brief Method CreateAddObjectInAssetCacheFolder, addr 0x2184b98, size 0x44, virtual false, abstract: false, final false
  static inline void CreateAddObjectInAssetCacheFolder(::StringW assetName, ::StringW assetObjectFileName, ::UnityEngine::Object* objectToAdd, ::StringW relativeFolderPath,
                                                       ByRef<::StringW> exportRootPath, ByRef<::UnityEngine::Object*> assetDBObject);

  /// @brief Method AddObjectToAsset, addr 0x2184bdc, size 0x44, virtual false, abstract: false, final false
  static inline void AddObjectToAsset(::UnityEngine::Object* objectToAdd, ::UnityEngine::Object* assetObject);

  /// @brief Method SaveAndRefreshDatabase, addr 0x2184c20, size 0x4, virtual false, abstract: false, final false
  static inline void SaveAndRefreshDatabase();

  /// @brief Method SaveAssetDatabase, addr 0x2184c24, size 0x4, virtual false, abstract: false, final false
  static inline void SaveAssetDatabase();

  /// @brief Method RefreshAssetDatabase, addr 0x2184c28, size 0x4, virtual false, abstract: false, final false
  static inline void RefreshAssetDatabase();

  /// @brief Method LoadAssetAtPath, addr 0x2184c2c, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Object* LoadAssetAtPath(::StringW assetPath, ::System::Type* type);

  /// @brief Method LoadSubAssetAtPath, addr 0x2184c78, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Object* LoadSubAssetAtPath(::StringW mainPath, ::StringW subAssetPath);

  /// @brief Method LoadAllAssetsAtPath, addr 0x2184cd8, size 0x4c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> LoadAllAssetsAtPath(::StringW assetPath);

  /// @brief Method LoadAllAssetRepresentationsAtPath, addr 0x2184c8c, size 0x4c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> LoadAllAssetRepresentationsAtPath(::StringW assetPath);

  /// @brief Method ImportAsset, addr 0x2184d24, size 0x44, virtual false, abstract: false, final false
  static inline void ImportAsset(::StringW assetPath, ::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions heuOptions);

  /// @brief Method GetAssetWorkingPath, addr 0x2184d68, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetWorkingPath();

  /// @brief Method GetAssetBakedPath, addr 0x2184db4, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetBakedPath();

  /// @brief Method GetAssetBakedPathWithAssetName, addr 0x2184e00, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetAssetBakedPathWithAssetName(::StringW assetName);

  /// @brief Method CreateUniqueBakePath, addr 0x2184e4c, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW CreateUniqueBakePath(::StringW assetName);

  /// @brief Method CreatePathWithFolders, addr 0x2184e98, size 0x44, virtual false, abstract: false, final false
  static inline void CreatePathWithFolders(::StringW inPath);

  /// @brief Method AppendMeshesPathToAssetFolder, addr 0x2184edc, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW AppendMeshesPathToAssetFolder(::StringW inAssetCacheFolder);

  /// @brief Method AppendTexturesPathToAssetFolder, addr 0x21850c8, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW AppendTexturesPathToAssetFolder(::StringW inAssetCacheFolder);

  /// @brief Method AppendMaterialsPathToAssetFolder, addr 0x2185190, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW AppendMaterialsPathToAssetFolder(::StringW inAssetCacheFolder);

  /// @brief Method AppendTerrainPathToAssetFolder, addr 0x2185258, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW AppendTerrainPathToAssetFolder(::StringW inAssetCacheFolder);

  /// @brief Method GetAssetSubFolders, addr 0x2185320, size 0x164, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetAssetSubFolders();

  /// @brief Method AppendPrefabPath, addr 0x2185484, size 0xe0, virtual false, abstract: false, final false
  static inline ::StringW AppendPrefabPath(::StringW inAssetCacheFolder, ::StringW assetName);

  /// @brief Method AppendMeshesAssetFileName, addr 0x2185564, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW AppendMeshesAssetFileName(::StringW assetName);

  /// @brief Method IsSubAsset, addr 0x21855b0, size 0x8, virtual false, abstract: false, final false
  static inline bool IsSubAsset(::UnityEngine::Object* obj);

  /// @brief Method GetAssetPathsFromAssetBundle, addr 0x21855b8, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetAssetPathsFromAssetBundle(::StringW assetBundleFileName);

  /// @brief Method IsAssetSavedInScene, addr 0x21855c0, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsAssetSavedInScene(::UnityEngine::GameObject* go);

  /// @brief Method SelectAssetAtPath, addr 0x218560c, size 0x4, virtual false, abstract: false, final false
  static inline void SelectAssetAtPath(::StringW path);

  /// @brief Method PrintDependencies, addr 0x2185610, size 0x4, virtual false, abstract: false, final false
  static inline void PrintDependencies(::UnityEngine::GameObject* targetGO);

  /// @brief Method GetUniqueAssetPathForUnityAsset, addr 0x2185614, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW GetUniqueAssetPathForUnityAsset(::UnityEngine::Object* obj);

  /// @brief Method LoadUnityAssetFromUniqueAssetPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T LoadUnityAssetFromUniqueAssetPath(::StringW assetPath);

  /// @brief Method GetBuiltinExtraResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetBuiltinExtraResource(::StringW resourceName);

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetDatabase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_AssetDatabase(HEU_AssetDatabase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetDatabase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_AssetDatabase(HEU_AssetDatabase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AssetDatabase();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AssetDatabase, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_AssetDatabase__HEU_ImportAssetOptions, "HoudiniEngineUnity", "HEU_AssetDatabase/HEU_ImportAssetOptions");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetDatabase);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetDatabase*, "HoudiniEngineUnity", "HEU_AssetDatabase");
