#pragma once
// IWYU pragma private; include "UnityEngine/AssetBundle.hpp"
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
// [NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadAssetUtility.h")]
// [NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadFromMemoryAsyncOperation.h")]
// [NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadFromManagedStreamAsyncOperation.h")]
// [NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadAssetOperation.h")]
// [NativeHeader("Runtime/Scripting/ScriptingExportUtility.h")]
// [NativeHeader("Runtime/Scripting/ScriptingUtility.h")]
// [NativeHeader("AssetBundleScriptingClasses.h")]
// [NativeHeader("Modules/AssetBundle/Public/AssetBundleSaveAndLoadHelper.h")]
// [NativeHeader("Modules/AssetBundle/Public/AssetBundleUtility.h")]
// [NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadFromFileAsyncOperation.h")]
// [ExcludeFromPreset]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AssetBundle
class CORDL_TYPE AssetBundle : public ::UnityEngine::Object {
public:
  // Declarations
  /// [NativeMethod("GetAllAssetNames")]
  /// @brief Method GetAllAssetNames, addr 0x6ed72b0, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetAllAssetNames();

  /// @brief Method GetAllAssetNames_Injected, addr 0x6ed7330, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetAllAssetNames_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetAllLoadedAssetBundles, addr 0x6ed5f48, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::AssetBundle>>* GetAllLoadedAssetBundles();

  /// [FreeFunction("GetAllAssetBundles")]
  /// @brief Method GetAllLoadedAssetBundles_Native, addr 0x6ed5f20, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::AssetBundle>> GetAllLoadedAssetBundles_Native();

  /// [NativeMethod("GetAllScenePaths")]
  /// @brief Method GetAllScenePaths, addr 0x6ed736c, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> GetAllScenePaths();

  /// @brief Method GetAllScenePaths_Injected, addr 0x6ed73ec, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetAllScenePaths_Injected(::System::IntPtr _unity_self);

  /// @brief Method LoadAllAssetsAsync, addr 0x6ed6ee8, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::AssetBundleRequest* LoadAllAssetsAsync();

  /// @brief Method LoadAllAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::UnityEngine::AssetBundleRequest* LoadAllAssetsAsync();

  /// @brief Method LoadAllAssetsAsync, addr 0x6ed6f58, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::AssetBundleRequest* LoadAllAssetsAsync(::System::Type* type);

  /// @brief Method LoadAsset, addr 0x6ed64a0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> LoadAsset(::StringW name);

  /// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)1)]
  /// @brief Method LoadAsset, addr 0x6ed6520, size 0xec, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> LoadAsset(::StringW name, ::System::Type* type);

  /// @brief Method LoadAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
  inline T LoadAsset(::StringW name);

  /// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::UnityEngine::AssetBundleRequest* LoadAssetAsync(::StringW name);

  /// @brief Method LoadAssetAsync, addr 0x6ed6900, size 0xec, virtual false, abstract: false, final false
  inline ::UnityEngine::AssetBundleRequest* LoadAssetAsync(::StringW name, ::System::Type* type);

  /// [NativeMethod("LoadAssetAsync_Internal")]
  /// [NativeThrows]
  /// @brief Method LoadAssetAsync_Internal, addr 0x6ed69ec, size 0x208, virtual false, abstract: false, final false
  inline ::UnityEngine::AssetBundleRequest* LoadAssetAsync_Internal(::StringW name, ::System::Type* type);

  /// @brief Method LoadAssetAsync_Internal_Injected, addr 0x6ed7014, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr LoadAssetAsync_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, ::System::Type* type);

  /// @brief Method LoadAssetWithSubAssetsAsync, addr 0x6ed6bf4, size 0xec, virtual false, abstract: false, final false
  inline ::UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsync(::StringW name, ::System::Type* type);

  /// [NativeThrows]
  /// [NativeMethod("LoadAssetWithSubAssetsAsync_Internal")]
  /// @brief Method LoadAssetWithSubAssetsAsync_Internal, addr 0x6ed6ce0, size 0x208, virtual false, abstract: false, final false
  inline ::UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsync_Internal(::StringW name, ::System::Type* type);

  /// @brief Method LoadAssetWithSubAssetsAsync_Internal_Injected, addr 0x6ed7428, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr LoadAssetWithSubAssetsAsync_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, ::System::Type* type);

  /// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)1)]
  /// [NativeMethod("LoadAsset_Internal")]
  /// [NativeThrows]
  /// @brief Method LoadAsset_Internal, addr 0x6ed660c, size 0x2a0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> LoadAsset_Internal(::StringW name, ::System::Type* type);

  /// @brief Method LoadAsset_Internal_Injected, addr 0x6ed68ac, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr LoadAsset_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, ::System::Type* type);

  /// @brief Method LoadFromFile, addr 0x6ed6494, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AssetBundle> LoadFromFile(::StringW path);

  /// @brief Method LoadFromFileAsync, addr 0x6ed61a8, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync(::StringW path);

  /// @brief Method LoadFromFileAsync, addr 0x6ed61b4, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync(::StringW path, uint32_t crc);

  /// [FreeFunction("LoadFromFileAsync")]
  /// @brief Method LoadFromFileAsync_Internal, addr 0x6ed5f70, size 0x1e4, virtual false, abstract: false, final false
  static inline ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync_Internal(::StringW path, uint32_t crc, uint64_t offset);

  /// @brief Method LoadFromFileAsync_Internal_Injected, addr 0x6ed6154, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr LoadFromFileAsync_Internal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> path, uint32_t crc, uint64_t offset);

  /// [FreeFunction("LoadFromFile")]
  /// @brief Method LoadFromFile_Internal, addr 0x6ed61bc, size 0x284, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AssetBundle> LoadFromFile_Internal(::StringW path, uint32_t crc, uint64_t offset);

  /// @brief Method LoadFromFile_Internal_Injected, addr 0x6ed6440, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr LoadFromFile_Internal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> path, uint32_t crc, uint64_t offset);

  static inline ::UnityEngine::AssetBundle* New_ctor();

  /// [NativeMethod("Unload")]
  /// [NativeThrows]
  /// @brief Method Unload, addr 0x6ed7068, size 0x90, virtual false, abstract: false, final false
  inline void Unload(bool unloadAllLoadedObjects);

  /// [NativeThrows]
  /// [NativeMethod("UnloadAsync")]
  /// @brief Method UnloadAsync, addr 0x6ed713c, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::AssetBundleUnloadOperation* UnloadAsync(bool unloadAllLoadedObjects);

  /// @brief Method UnloadAsync_Injected, addr 0x6ed71e4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr UnloadAsync_Injected(::System::IntPtr _unity_self, bool unloadAllLoadedObjects);

  /// @brief Method Unload_Injected, addr 0x6ed70f8, size 0x44, virtual false, abstract: false, final false
  static inline void Unload_Injected(::System::IntPtr _unity_self, bool unloadAllLoadedObjects);

  /// @brief Method .ctor, addr 0x6ed5ec8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetBundle", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundle(AssetBundle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundle", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundle(AssetBundle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23630 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AssetBundle) == 0x18, "Size mismatch!");

} // namespace UnityEngine
