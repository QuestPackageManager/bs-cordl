#pragma once
// IWYU pragma private; include "UnityEngine\AssetBundle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetBundle)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class AssetBundleCreateRequest;
}
namespace UnityEngine {
class AssetBundleRequest;
}
namespace UnityEngine {
class AssetBundleUnloadOperation;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AssetBundle;
}
// Write type traits
MARK_REF_T(::UnityEngine::AssetBundle*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AssetBundle*, "UnityEngine", "AssetBundle");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AssetBundle
class CORDL_TYPE AssetBundle : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Method GetAllAssetNames, addr 0x6a4bc2c, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetAllAssetNames();

  /// @brief Method GetAllAssetNames_Injected, addr 0x6a4bcac, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetAllAssetNames_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetAllLoadedAssetBundles, addr 0x6a4a8c8, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::AssetBundle>>* GetAllLoadedAssetBundles();

  /// @brief Method GetAllLoadedAssetBundles_Native, addr 0x6a4a8a0, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::AssetBundle>> GetAllLoadedAssetBundles_Native();

  /// @brief Method GetAllScenePaths, addr 0x6a4bce8, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetAllScenePaths();

  /// @brief Method GetAllScenePaths_Injected, addr 0x6a4bd68, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetAllScenePaths_Injected(::System::IntPtr _unity_self);

  /// @brief Method LoadAllAssetsAsync, addr 0x6a4b868, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::AssetBundleRequest* LoadAllAssetsAsync();

  /// @brief Method LoadAllAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::UnityEngine::AssetBundleRequest* LoadAllAssetsAsync();

  /// @brief Method LoadAllAssetsAsync, addr 0x6a4b8d8, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::AssetBundleRequest* LoadAllAssetsAsync(::System::Type* type);

  /// @brief Method LoadAsset, addr 0x6a4ae20, size 0x80, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> LoadAsset(::StringW name);

  /// @brief Method LoadAsset, addr 0x6a4aea0, size 0xec, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> LoadAsset(::StringW name, ::System::Type* type);

  /// @brief Method LoadAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T LoadAsset(::StringW name);

  /// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::UnityEngine::AssetBundleRequest* LoadAssetAsync(::StringW name);

  /// @brief Method LoadAssetAsync, addr 0x6a4b280, size 0xec, virtual false, abstract: false, final false
  inline ::UnityEngine::AssetBundleRequest* LoadAssetAsync(::StringW name, ::System::Type* type);

  /// @brief Method LoadAssetAsync_Internal, addr 0x6a4b36c, size 0x208, virtual false, abstract: false, final false
  inline ::UnityEngine::AssetBundleRequest* LoadAssetAsync_Internal(::StringW name, ::System::Type* type);

  /// @brief Method LoadAssetAsync_Internal_Injected, addr 0x6a4b994, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr LoadAssetAsync_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, ::System::Type* type);

  /// @brief Method LoadAssetWithSubAssetsAsync, addr 0x6a4b574, size 0xec, virtual false, abstract: false, final false
  inline ::UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsync(::StringW name, ::System::Type* type);

  /// @brief Method LoadAssetWithSubAssetsAsync_Internal, addr 0x6a4b660, size 0x208, virtual false, abstract: false, final false
  inline ::UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsync_Internal(::StringW name, ::System::Type* type);

  /// @brief Method LoadAssetWithSubAssetsAsync_Internal_Injected, addr 0x6a4bda4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr LoadAssetWithSubAssetsAsync_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, ::System::Type* type);

  /// @brief Method LoadAsset_Internal, addr 0x6a4af8c, size 0x2a0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> LoadAsset_Internal(::StringW name, ::System::Type* type);

  /// @brief Method LoadAsset_Internal_Injected, addr 0x6a4b22c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr LoadAsset_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, ::System::Type* type);

  /// @brief Method LoadFromFile, addr 0x6a4ae14, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AssetBundle> LoadFromFile(::StringW path);

  /// @brief Method LoadFromFileAsync, addr 0x6a4ab28, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync(::StringW path);

  /// @brief Method LoadFromFileAsync, addr 0x6a4ab34, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync(::StringW path, uint32_t crc);

  /// @brief Method LoadFromFileAsync_Internal, addr 0x6a4a8f0, size 0x1e4, virtual false, abstract: false, final false
  static inline ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync_Internal(::StringW path, uint32_t crc, uint64_t offset);

  /// @brief Method LoadFromFileAsync_Internal_Injected, addr 0x6a4aad4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr LoadFromFileAsync_Internal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> path, uint32_t crc, uint64_t offset);

  /// @brief Method LoadFromFile_Internal, addr 0x6a4ab3c, size 0x284, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AssetBundle> LoadFromFile_Internal(::StringW path, uint32_t crc, uint64_t offset);

  /// @brief Method LoadFromFile_Internal_Injected, addr 0x6a4adc0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr LoadFromFile_Internal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> path, uint32_t crc, uint64_t offset);

  static inline ::UnityEngine::AssetBundle* New_ctor();

  /// @brief Method Unload, addr 0x6a4b9e8, size 0x90, virtual false, abstract: false, final false
  inline void Unload(bool unloadAllLoadedObjects);

  /// @brief Method UnloadAsync, addr 0x6a4babc, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::AssetBundleUnloadOperation* UnloadAsync(bool unloadAllLoadedObjects);

  /// @brief Method UnloadAsync_Injected, addr 0x6a4bb64, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr UnloadAsync_Injected(::System::IntPtr _unity_self, bool unloadAllLoadedObjects);

  /// @brief Method Unload_Injected, addr 0x6a4ba78, size 0x44, virtual false, abstract: false, final false
  static inline void Unload_Injected(::System::IntPtr _unity_self, bool unloadAllLoadedObjects);

  /// @brief Method .ctor, addr 0x6a4a848, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetBundle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundle(AssetBundle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundle(AssetBundle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23092 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AssetBundle) == 0x18, "Size mismatch!");

} // namespace UnityEngine
