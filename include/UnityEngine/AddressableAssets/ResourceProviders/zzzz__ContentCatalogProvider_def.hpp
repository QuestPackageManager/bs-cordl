#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__ContentCatalogData_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContentCatalogProvider)
namespace UnityEngine::ResourceManagement {
class WebRequestQueueOperation;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ContentCatalogData;
}
namespace UnityEngine {
class AssetBundle;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class AssetBundleCreateRequest;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class AssetBundleRequest;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace System {
class Object;
}
namespace UnityEngine::AddressableAssets::ResourceProviders {
struct __ContentCatalogProvider__DependencyHashIndex;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace UnityEngine::AddressableAssets::ResourceProviders {
class __ContentCatalogProvider__InternalOp;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace GlobalNamespace {
class __ContentCatalogProvider__InternalOp__BundledCatalog;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::ResourceProviders {
struct __ContentCatalogProvider__DependencyHashIndex;
}
namespace GlobalNamespace {
class __ContentCatalogProvider__InternalOp__BundledCatalog;
}
namespace UnityEngine::AddressableAssets::ResourceProviders {
class ContentCatalogProvider;
}
namespace UnityEngine::AddressableAssets::ResourceProviders {
class __ContentCatalogProvider__InternalOp;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex);
MARK_REF_PTR_T(::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp);
// Type: ::DependencyHashIndex
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::ResourceProviders {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14375))
// CS Name: ::ContentCatalogProvider::DependencyHashIndex
struct CORDL_TYPE __ContentCatalogProvider__DependencyHashIndex {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ContentCatalogProvider__DependencyHashIndex_Unwrapped
  enum struct ____ContentCatalogProvider__DependencyHashIndex_Unwrapped : int32_t {
    __E_Remote = static_cast<int32_t>(0x0),
    __E_Cache = static_cast<int32_t>(0x1),
    __E_Count = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ContentCatalogProvider__DependencyHashIndex_Unwrapped() const noexcept {
    return static_cast<____ContentCatalogProvider__DependencyHashIndex_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ContentCatalogProvider__DependencyHashIndex(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ContentCatalogProvider__DependencyHashIndex();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Remote value: static_cast<int32_t>(0x0)
  static ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex const Remote;

  /// @brief Field Cache value: static_cast<int32_t>(0x1)
  static ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex const Cache;

  /// @brief Field Count value: static_cast<int32_t>(0x2)
  static ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex const Count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets::ResourceProviders
// Type: ::BundledCatalog
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14376))
// CS Name: ::ContentCatalogProvider::InternalOp::BundledCatalog*
class CORDL_TYPE __ContentCatalogProvider__InternalOp__BundledCatalog : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_BundlePath, offset 0x10, size 0x8
  __declspec(property(get = __get_m_BundlePath, put = __set_m_BundlePath))::StringW m_BundlePath;

  /// @brief Field m_OpInProgress, offset 0x18, size 0x1
  __declspec(property(get = __get_m_OpInProgress, put = __set_m_OpInProgress)) bool m_OpInProgress;

  /// @brief Field m_LoadBundleRequest, offset 0x20, size 0x8
  __declspec(property(get = __get_m_LoadBundleRequest, put = __set_m_LoadBundleRequest))::UnityEngine::AssetBundleCreateRequest* m_LoadBundleRequest;

  /// @brief Field m_CatalogAssetBundle, offset 0x28, size 0x8
  __declspec(property(get = __get_m_CatalogAssetBundle, put = __set_m_CatalogAssetBundle))::UnityEngine::AssetBundle* m_CatalogAssetBundle;

  /// @brief Field m_LoadTextAssetRequest, offset 0x30, size 0x8
  __declspec(property(get = __get_m_LoadTextAssetRequest, put = __set_m_LoadTextAssetRequest))::UnityEngine::AssetBundleRequest* m_LoadTextAssetRequest;

  /// @brief Field m_CatalogData, offset 0x38, size 0x8
  __declspec(property(get = __get_m_CatalogData, put = __set_m_CatalogData))::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* m_CatalogData;

  /// @brief Field m_WebRequestQueueOperation, offset 0x40, size 0x8
  __declspec(property(get = __get_m_WebRequestQueueOperation, put = __set_m_WebRequestQueueOperation))::UnityEngine::ResourceManagement::WebRequestQueueOperation* m_WebRequestQueueOperation;

  /// @brief Field m_RequestOperation, offset 0x48, size 0x8
  __declspec(property(get = __get_m_RequestOperation, put = __set_m_RequestOperation))::UnityEngine::AsyncOperation* m_RequestOperation;

  /// @brief Field m_WebRequestTimeout, offset 0x50, size 0x4
  __declspec(property(get = __get_m_WebRequestTimeout, put = __set_m_WebRequestTimeout)) int32_t m_WebRequestTimeout;

  /// @brief Field OnLoaded, offset 0x58, size 0x8
  __declspec(property(get = __get_OnLoaded, put = __set_OnLoaded))::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* OnLoaded;

  __declspec(property(get = get_OpInProgress)) bool OpInProgress;

  __declspec(property(get = get_OpIsSuccess)) bool OpIsSuccess;

  constexpr ::StringW& __get_m_BundlePath();

  constexpr ::StringW const& __get_m_BundlePath() const;

  constexpr void __set_m_BundlePath(::StringW value);

  constexpr bool& __get_m_OpInProgress();

  constexpr bool const& __get_m_OpInProgress() const;

  constexpr void __set_m_OpInProgress(bool value);

  constexpr ::UnityEngine::AssetBundleCreateRequest*& __get_m_LoadBundleRequest();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundleCreateRequest*> const& __get_m_LoadBundleRequest() const;

  constexpr void __set_m_LoadBundleRequest(::UnityEngine::AssetBundleCreateRequest* value);

  constexpr ::UnityEngine::AssetBundle*& __get_m_CatalogAssetBundle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundle*> const& __get_m_CatalogAssetBundle() const;

  constexpr void __set_m_CatalogAssetBundle(::UnityEngine::AssetBundle* value);

  constexpr ::UnityEngine::AssetBundleRequest*& __get_m_LoadTextAssetRequest();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundleRequest*> const& __get_m_LoadTextAssetRequest() const;

  constexpr void __set_m_LoadTextAssetRequest(::UnityEngine::AssetBundleRequest* value);

  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*& __get_m_CatalogData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> const& __get_m_CatalogData() const;

  constexpr void __set_m_CatalogData(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* value);

  constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation*& __get_m_WebRequestQueueOperation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::WebRequestQueueOperation*> const& __get_m_WebRequestQueueOperation() const;

  constexpr void __set_m_WebRequestQueueOperation(::UnityEngine::ResourceManagement::WebRequestQueueOperation* value);

  constexpr ::UnityEngine::AsyncOperation*& __get_m_RequestOperation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AsyncOperation*> const& __get_m_RequestOperation() const;

  constexpr void __set_m_RequestOperation(::UnityEngine::AsyncOperation* value);

  constexpr int32_t& __get_m_WebRequestTimeout();

  constexpr int32_t const& __get_m_WebRequestTimeout() const;

  constexpr void __set_m_WebRequestTimeout(int32_t value);

  constexpr ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*& __get_OnLoaded();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*> const& __get_OnLoaded() const;

  constexpr void __set_OnLoaded(::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* value);

  /// @brief Method add_OnLoaded addr 0x28adf00 size 0xb0 virtual false final false
  inline void add_OnLoaded(::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* value);

  /// @brief Method remove_OnLoaded addr 0x28aeaec size 0xb0 virtual false final false
  inline void remove_OnLoaded(::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* value);

  /// @brief Method get_OpInProgress addr 0x28aeb9c size 0x8 virtual false final false
  inline bool get_OpInProgress();

  /// @brief Method get_OpIsSuccess addr 0x28aeba4 size 0x20 virtual false final false
  inline bool get_OpIsSuccess();

  static inline ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog* New_ctor(::StringW bundlePath, int32_t webRequestTimeout);

  /// @brief Method .ctor addr 0x28addd8 size 0x128 virtual false final false
  inline void _ctor(::StringW bundlePath, int32_t webRequestTimeout);

  /// @brief Method Finalize addr 0x28aebc4 size 0xa8 virtual true final false
  inline void Finalize();

  /// @brief Method Unload addr 0x28aec6c size 0x28 virtual false final false
  inline void Unload();

  /// @brief Method LoadCatalogFromBundleAsync addr 0x28adfb0 size 0x294 virtual false final false
  inline void LoadCatalogFromBundleAsync();

  /// @brief Method WebRequestOperationCompleted addr 0x28aec94 size 0x1fc virtual false final false
  inline void WebRequestOperationCompleted(::UnityEngine::AsyncOperation* op);

  /// @brief Method LoadTextAssetRequestComplete addr 0x28aee90 size 0x198 virtual false final false
  inline void LoadTextAssetRequestComplete(::UnityEngine::AsyncOperation* op);

  /// @brief Method WaitForCompletion addr 0x28adbe0 size 0xe4 virtual false final false
  inline bool WaitForCompletion();

  /// @brief Method <LoadCatalogFromBundleAsync>b__19_1 addr 0x28af028 size 0x98 virtual false final false
  inline void _LoadCatalogFromBundleAsync_b__19_1(::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOp);

  /// @brief Method <LoadCatalogFromBundleAsync>b__19_0 addr 0x28af0c0 size 0x1d8 virtual false final false
  inline void _LoadCatalogFromBundleAsync_b__19_0(::UnityEngine::AsyncOperation* loadOp);

  // Ctor Parameters [CppParam { name: "", ty: "__ContentCatalogProvider__InternalOp__BundledCatalog", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ContentCatalogProvider__InternalOp__BundledCatalog(__ContentCatalogProvider__InternalOp__BundledCatalog&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ContentCatalogProvider__InternalOp__BundledCatalog", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ContentCatalogProvider__InternalOp__BundledCatalog(__ContentCatalogProvider__InternalOp__BundledCatalog const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ContentCatalogProvider__InternalOp__BundledCatalog();

public:
  /// @brief Field m_BundlePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_BundlePath;

  /// @brief Field m_OpInProgress, offset: 0x18, size: 0x1, def value: None
  bool ___m_OpInProgress;

  /// @brief Field m_LoadBundleRequest, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AssetBundleCreateRequest* ___m_LoadBundleRequest;

  /// @brief Field m_CatalogAssetBundle, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AssetBundle* ___m_CatalogAssetBundle;

  /// @brief Field m_LoadTextAssetRequest, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AssetBundleRequest* ___m_LoadTextAssetRequest;

  /// @brief Field m_CatalogData, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* ___m_CatalogData;

  /// @brief Field m_WebRequestQueueOperation, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::WebRequestQueueOperation* ___m_WebRequestQueueOperation;

  /// @brief Field m_RequestOperation, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::AsyncOperation* ___m_RequestOperation;

  /// @brief Field m_WebRequestTimeout, offset: 0x50, size: 0x4, def value: None
  int32_t ___m_WebRequestTimeout;

  /// @brief Field OnLoaded, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* ___OnLoaded;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog, ___m_BundlePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog, ___m_OpInProgress) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog, ___m_LoadBundleRequest) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog, ___m_CatalogAssetBundle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog, ___m_LoadTextAssetRequest) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog, ___m_CatalogData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog, ___m_WebRequestQueueOperation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog, ___m_RequestOperation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog, ___m_WebRequestTimeout) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog, ___OnLoaded) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::InternalOp
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 115, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::ResourceProviders {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14304), inst: 297 }), TypeDefinitionIndex(TypeDefinitionIndex(14304)),
// TypeDefinitionIndex(TypeDefinitionIndex(14273)), TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(14382))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(14377)) CS Name: ::ContentCatalogProvider::InternalOp*
class CORDL_TYPE __ContentCatalogProvider__InternalOp : public ::System::Object {
public:
  // Declarations
  using BundledCatalog = ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog;

  /// @brief Field m_LocalDataPath, offset 0x10, size 0x8
  __declspec(property(get = __get_m_LocalDataPath, put = __set_m_LocalDataPath))::StringW m_LocalDataPath;

  /// @brief Field m_RemoteHashValue, offset 0x18, size 0x8
  __declspec(property(get = __get_m_RemoteHashValue, put = __set_m_RemoteHashValue))::StringW m_RemoteHashValue;

  /// @brief Field m_LocalHashValue, offset 0x20, size 0x8
  __declspec(property(get = __get_m_LocalHashValue, put = __set_m_LocalHashValue))::StringW m_LocalHashValue;

  /// @brief Field m_ProviderInterface, offset 0x28, size 0x18
  __declspec(property(get = __get_m_ProviderInterface, put = __set_m_ProviderInterface))::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle m_ProviderInterface;

  /// @brief Field m_ContentCatalogData, offset 0x40, size 0x8
  __declspec(property(get = __get_m_ContentCatalogData, put = __set_m_ContentCatalogData))::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* m_ContentCatalogData;

  /// @brief Field m_ContentCatalogDataLoadOp, offset 0x48, size 0x20
  __declspec(property(get = __get_m_ContentCatalogDataLoadOp, put = __set_m_ContentCatalogDataLoadOp))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> m_ContentCatalogDataLoadOp;

  /// @brief Field m_BundledCatalog, offset 0x68, size 0x8
  __declspec(property(get = __get_m_BundledCatalog, put = __set_m_BundledCatalog))::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog* m_BundledCatalog;

  /// @brief Field m_Retried, offset 0x70, size 0x1
  __declspec(property(get = __get_m_Retried, put = __set_m_Retried)) bool m_Retried;

  /// @brief Field m_DisableCatalogUpdateOnStart, offset 0x71, size 0x1
  __declspec(property(get = __get_m_DisableCatalogUpdateOnStart, put = __set_m_DisableCatalogUpdateOnStart)) bool m_DisableCatalogUpdateOnStart;

  /// @brief Field m_IsLocalCatalogInBundle, offset 0x72, size 0x1
  __declspec(property(get = __get_m_IsLocalCatalogInBundle, put = __set_m_IsLocalCatalogInBundle)) bool m_IsLocalCatalogInBundle;

  constexpr ::StringW& __get_m_LocalDataPath();

  constexpr ::StringW const& __get_m_LocalDataPath() const;

  constexpr void __set_m_LocalDataPath(::StringW value);

  constexpr ::StringW& __get_m_RemoteHashValue();

  constexpr ::StringW const& __get_m_RemoteHashValue() const;

  constexpr void __set_m_RemoteHashValue(::StringW value);

  constexpr ::StringW& __get_m_LocalHashValue();

  constexpr ::StringW const& __get_m_LocalHashValue() const;

  constexpr void __set_m_LocalHashValue(::StringW value);

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& __get_m_ProviderInterface();

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle const& __get_m_ProviderInterface() const;

  constexpr void __set_m_ProviderInterface(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value);

  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*& __get_m_ContentCatalogData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> const& __get_m_ContentCatalogData() const;

  constexpr void __set_m_ContentCatalogData(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* value);

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>& __get_m_ContentCatalogDataLoadOp();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> const&
  __get_m_ContentCatalogDataLoadOp() const;

  constexpr void
  __set_m_ContentCatalogDataLoadOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> value);

  constexpr ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*& __get_m_BundledCatalog();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*> const& __get_m_BundledCatalog() const;

  constexpr void __set_m_BundledCatalog(::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog* value);

  constexpr bool& __get_m_Retried();

  constexpr bool const& __get_m_Retried() const;

  constexpr void __set_m_Retried(bool value);

  constexpr bool& __get_m_DisableCatalogUpdateOnStart();

  constexpr bool const& __get_m_DisableCatalogUpdateOnStart() const;

  constexpr void __set_m_DisableCatalogUpdateOnStart(bool value);

  constexpr bool& __get_m_IsLocalCatalogInBundle();

  constexpr bool const& __get_m_IsLocalCatalogInBundle() const;

  constexpr void __set_m_IsLocalCatalogInBundle(bool value);

  /// @brief Method Start addr 0x28accf4 size 0x17c virtual false final false
  inline void Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface, bool disableCatalogUpdateOnStart, bool isLocalCatalogInBundle);

  /// @brief Method WaitForCompletionCallback addr 0x28adb18 size 0xc8 virtual false final false
  inline bool WaitForCompletionCallback();

  /// @brief Method Release addr 0x28acb80 size 0x10 virtual false final false
  inline void Release();

  /// @brief Method CanLoadCatalogFromBundle addr 0x28ad5b8 size 0xc4 virtual false final false
  inline bool CanLoadCatalogFromBundle(::StringW idToLoad, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method LoadCatalog addr 0x28ad67c size 0x49c virtual false final false
  inline void LoadCatalog(::StringW idToLoad, bool loadCatalogFromLocalBundle);

  /// @brief Method CatalogLoadOpCompleteCallback addr 0x28ae244 size 0xe0 virtual false final false
  inline void CatalogLoadOpCompleteCallback(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> op);

  /// @brief Method GetTransformedInternalId addr 0x28add1c size 0xbc virtual false final false
  inline ::StringW GetTransformedInternalId(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc);

  /// @brief Method DetermineIdToLoad addr 0x28ace70 size 0x748 virtual false final false
  inline ::StringW DetermineIdToLoad(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Collections::Generic::IList_1<::System::Object*>* dependencyObjects,
                                     bool disableCatalogUpdateOnStart);

  /// @brief Method OnCatalogLoaded addr 0x28ae324 size 0x7c0 virtual false final false
  inline void OnCatalogLoaded(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* ccd);

  static inline ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp* New_ctor();

  /// @brief Method .ctor addr 0x28accec size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <LoadCatalog>b__14_0 addr 0x28aeae4 size 0x8 virtual false final false
  inline void _LoadCatalog_b__14_0(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* ccd);

  // Ctor Parameters [CppParam { name: "", ty: "__ContentCatalogProvider__InternalOp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ContentCatalogProvider__InternalOp(__ContentCatalogProvider__InternalOp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ContentCatalogProvider__InternalOp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ContentCatalogProvider__InternalOp(__ContentCatalogProvider__InternalOp const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ContentCatalogProvider__InternalOp();

public:
  /// @brief Field m_LocalDataPath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_LocalDataPath;

  /// @brief Field m_RemoteHashValue, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_RemoteHashValue;

  /// @brief Field m_LocalHashValue, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_LocalHashValue;

  /// @brief Field m_ProviderInterface, offset: 0x28, size: 0x18, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle ___m_ProviderInterface;

  /// @brief Field m_ContentCatalogData, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* ___m_ContentCatalogData;

  /// @brief Field m_ContentCatalogDataLoadOp, offset: 0x48, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> ___m_ContentCatalogDataLoadOp;

  /// @brief Field m_BundledCatalog, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog* ___m_BundledCatalog;

  /// @brief Field m_Retried, offset: 0x70, size: 0x1, def value: None
  bool ___m_Retried;

  /// @brief Field m_DisableCatalogUpdateOnStart, offset: 0x71, size: 0x1, def value: None
  bool ___m_DisableCatalogUpdateOnStart;

  /// @brief Field m_IsLocalCatalogInBundle, offset: 0x72, size: 0x1, def value: None
  bool ___m_IsLocalCatalogInBundle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp, ___m_LocalDataPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp, ___m_RemoteHashValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp, ___m_LocalHashValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp, ___m_ProviderInterface) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp, ___m_ContentCatalogData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp, ___m_ContentCatalogDataLoadOp) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp, ___m_BundledCatalog) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp, ___m_Retried) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp, ___m_DisableCatalogUpdateOnStart) == 0x71, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp, ___m_IsLocalCatalogInBundle) == 0x72, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets::ResourceProviders
// Type: UnityEngine.AddressableAssets.ResourceProviders::ContentCatalogProvider
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14284))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14378))
// CS Name: ::UnityEngine.AddressableAssets.ResourceProviders::ContentCatalogProvider*
class CORDL_TYPE ContentCatalogProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
public:
  // Declarations
  using InternalOp = ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp;

  using DependencyHashIndex = ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex;

  /// @brief Field DisableCatalogUpdateOnStart, offset 0x1c, size 0x1
  __declspec(property(get = __get_DisableCatalogUpdateOnStart, put = __set_DisableCatalogUpdateOnStart)) bool DisableCatalogUpdateOnStart;

  /// @brief Field IsLocalCatalogInBundle, offset 0x1d, size 0x1
  __declspec(property(get = __get_IsLocalCatalogInBundle, put = __set_IsLocalCatalogInBundle)) bool IsLocalCatalogInBundle;

  /// @brief Field m_LocationToCatalogLoadOpMap, offset 0x20, size 0x8
  __declspec(property(get = __get_m_LocationToCatalogLoadOpMap, put = __set_m_LocationToCatalogLoadOpMap))::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
      ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>* m_LocationToCatalogLoadOpMap;

  /// @brief Field m_RM, offset 0x28, size 0x8
  __declspec(property(get = __get_m_RM, put = __set_m_RM))::UnityEngine::ResourceManagement::ResourceManager* m_RM;

  constexpr bool& __get_DisableCatalogUpdateOnStart();

  constexpr bool const& __get_DisableCatalogUpdateOnStart() const;

  constexpr void __set_DisableCatalogUpdateOnStart(bool value);

  constexpr bool& __get_IsLocalCatalogInBundle();

  constexpr bool const& __get_IsLocalCatalogInBundle() const;

  constexpr void __set_IsLocalCatalogInBundle(bool value);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
                                                         ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>*&
  __get_m_LocationToCatalogLoadOpMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
                                                                                             ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>*> const&
  __get_m_LocationToCatalogLoadOpMap() const;

  constexpr void __set_m_LocationToCatalogLoadOpMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
                                                                                                 ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>* value);

  constexpr ::UnityEngine::ResourceManagement::ResourceManager*& __get_m_RM();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceManager*> const& __get_m_RM() const;

  constexpr void __set_m_RM(::UnityEngine::ResourceManagement::ResourceManager* value);

  static inline ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider* New_ctor(::UnityEngine::ResourceManagement::ResourceManager* resourceManagerInstance);

  /// @brief Method .ctor addr 0x28aca0c size 0x98 virtual false final false
  inline void _ctor(::UnityEngine::ResourceManagement::ResourceManager* resourceManagerInstance);

  /// @brief Method Release addr 0x28acaa4 size 0xdc virtual true final false
  inline void Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Object* obj);

  /// @brief Method Provide addr 0x28acb90 size 0x15c virtual true final false
  inline void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface);

  // Ctor Parameters [CppParam { name: "", ty: "ContentCatalogProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentCatalogProvider(ContentCatalogProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentCatalogProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentCatalogProvider(ContentCatalogProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentCatalogProvider();

public:
  /// @brief Field DisableCatalogUpdateOnStart, offset: 0x1c, size: 0x1, def value: None
  bool ___DisableCatalogUpdateOnStart;

  /// @brief Field IsLocalCatalogInBundle, offset: 0x1d, size: 0x1, def value: None
  bool ___IsLocalCatalogInBundle;

  /// @brief Field m_LocationToCatalogLoadOpMap, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
                                               ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>* ___m_LocationToCatalogLoadOpMap;

  /// @brief Field m_RM, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceManager* ___m_RM;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider, ___DisableCatalogUpdateOnStart) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider, ___IsLocalCatalogInBundle) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider, ___m_LocationToCatalogLoadOpMap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider, ___m_RM) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets::ResourceProviders
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex, "UnityEngine.AddressableAssets.ResourceProviders",
                       "ContentCatalogProvider/DependencyHashIndex");
NEED_NO_BOX(::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*, "UnityEngine.AddressableAssets.ResourceProviders", "ContentCatalogProvider/InternalOp/BundledCatalog");
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*, "UnityEngine.AddressableAssets.ResourceProviders", "ContentCatalogProvider");
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*, "UnityEngine.AddressableAssets.ResourceProviders",
                       "ContentCatalogProvider/InternalOp");
