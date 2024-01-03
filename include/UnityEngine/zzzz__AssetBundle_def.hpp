#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetBundle)
namespace System {
class Type;
}
namespace UnityEngine {
class AssetBundleCreateRequest;
}
namespace UnityEngine {
class AssetBundleRequest;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AssetBundle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AssetBundle);
// Type: UnityEngine::AssetBundle
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10200))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16102))
// CS Name: ::UnityEngine::AssetBundle*
class CORDL_TYPE AssetBundle : public ::UnityEngine::Object {
public:
  // Declarations
  static inline ::UnityEngine::AssetBundle* New_ctor();

  /// @brief Method .ctor, addr 0x2c995d0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method UnloadAllAssetBundles, addr 0x2c99628, size 0x3c, virtual false, abstract: false, final false
  static inline void UnloadAllAssetBundles(bool unloadAllObjects);

  /// @brief Method LoadFromFileAsync_Internal, addr 0x2c99664, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync_Internal(::StringW path, uint32_t crc, uint64_t offset);

  /// @brief Method LoadFromFileAsync, addr 0x2c996b8, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync(::StringW path);

  /// @brief Method LoadFromFileAsync, addr 0x2c996fc, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync(::StringW path, uint32_t crc);

  /// @brief Method LoadFromFile_Internal, addr 0x2c99744, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::AssetBundle* LoadFromFile_Internal(::StringW path, uint32_t crc, uint64_t offset);

  /// @brief Method LoadFromFile, addr 0x2c99798, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::AssetBundle* LoadFromFile(::StringW path);

  /// @brief Method LoadAsset, addr 0x2c997dc, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::Object* LoadAsset(::StringW name);

  /// @brief Method LoadAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T LoadAsset(::StringW name);

  /// @brief Method LoadAsset, addr 0x2c99868, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::Object* LoadAsset(::StringW name, ::System::Type* type);

  /// @brief Method LoadAsset_Internal, addr 0x2c99974, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Object* LoadAsset_Internal(::StringW name, ::System::Type* type);

  /// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::UnityEngine::AssetBundleRequest* LoadAssetAsync(::StringW name);

  /// @brief Method LoadAssetAsync, addr 0x2c999c8, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::AssetBundleRequest* LoadAssetAsync(::StringW name, ::System::Type* type);

  /// @brief Method LoadAssetWithSubAssetsAsync, addr 0x2c99b28, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsync(::StringW name, ::System::Type* type);

  /// @brief Method LoadAllAssetsAsync, addr 0x2c99c88, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::AssetBundleRequest* LoadAllAssetsAsync();

  /// @brief Method LoadAllAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::UnityEngine::AssetBundleRequest* LoadAllAssetsAsync();

  /// @brief Method LoadAllAssetsAsync, addr 0x2c99d0c, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::AssetBundleRequest* LoadAllAssetsAsync(::System::Type* type);

  /// @brief Method LoadAssetAsync_Internal, addr 0x2c99ad4, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::AssetBundleRequest* LoadAssetAsync_Internal(::StringW name, ::System::Type* type);

  /// @brief Method Unload, addr 0x2c99dd8, size 0x44, virtual false, abstract: false, final false
  inline void Unload(bool unloadAllLoadedObjects);

  /// @brief Method GetAllAssetNames, addr 0x2c99e1c, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetAllAssetNames();

  /// @brief Method GetAllScenePaths, addr 0x2c99e58, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetAllScenePaths();

  /// @brief Method LoadAssetWithSubAssetsAsync_Internal, addr 0x2c99c34, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsync_Internal(::StringW name, ::System::Type* type);

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundle(AssetBundle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundle(AssetBundle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundle();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssetBundle, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AssetBundle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetBundle*, "UnityEngine", "AssetBundle");
