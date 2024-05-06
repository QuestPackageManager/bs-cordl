#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/ResourceProviders/ContentCatalogProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContentCatalogProvider)
namespace GlobalNamespace {
class __ContentCatalogProvider__InternalOp__BundledCatalog;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ContentCatalogData;
}
namespace UnityEngine::AddressableAssets::ResourceProviders {
struct __ContentCatalogProvider__DependencyHashIndex;
}
namespace UnityEngine::AddressableAssets::ResourceProviders {
class __ContentCatalogProvider__InternalOp;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement {
class WebRequestQueueOperation;
}
namespace UnityEngine {
class AssetBundleCreateRequest;
}
namespace UnityEngine {
class AssetBundleRequest;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class AsyncOperation;
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ContentCatalogProvider__DependencyHashIndex();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ContentCatalogProvider__DependencyHashIndex(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Cache value: static_cast<int32_t>(0x1)
  static ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex const Cache;

  /// @brief Field Count value: static_cast<int32_t>(0x2)
  static ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex const Count;

  /// @brief Field Remote value: static_cast<int32_t>(0x0)
  static ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex const Remote;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

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
// CS Name: ::ContentCatalogProvider::InternalOp::BundledCatalog*
class CORDL_TYPE __ContentCatalogProvider__InternalOp__BundledCatalog : public ::System::Object {
public:
  // Declarations
  /// @brief Field OnLoaded, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_OnLoaded, put = __cordl_internal_set_OnLoaded))::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* OnLoaded;

  __declspec(property(get = get_OpInProgress)) bool OpInProgress;

  __declspec(property(get = get_OpIsSuccess)) bool OpIsSuccess;

  /// @brief Field m_BundlePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BundlePath, put = __cordl_internal_set_m_BundlePath))::StringW m_BundlePath;

  /// @brief Field m_CatalogAssetBundle, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CatalogAssetBundle, put = __cordl_internal_set_m_CatalogAssetBundle))::UnityW<::UnityEngine::AssetBundle> m_CatalogAssetBundle;

  /// @brief Field m_CatalogData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CatalogData, put = __cordl_internal_set_m_CatalogData))::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* m_CatalogData;

  /// @brief Field m_LoadBundleRequest, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LoadBundleRequest, put = __cordl_internal_set_m_LoadBundleRequest))::UnityEngine::AssetBundleCreateRequest* m_LoadBundleRequest;

  /// @brief Field m_LoadTextAssetRequest, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LoadTextAssetRequest, put = __cordl_internal_set_m_LoadTextAssetRequest))::UnityEngine::AssetBundleRequest* m_LoadTextAssetRequest;

  /// @brief Field m_OpInProgress, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OpInProgress, put = __cordl_internal_set_m_OpInProgress)) bool m_OpInProgress;

  /// @brief Field m_RequestOperation, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RequestOperation, put = __cordl_internal_set_m_RequestOperation))::UnityEngine::AsyncOperation* m_RequestOperation;

  /// @brief Field m_WebRequestQueueOperation, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WebRequestQueueOperation,
                      put = __cordl_internal_set_m_WebRequestQueueOperation))::UnityEngine::ResourceManagement::WebRequestQueueOperation* m_WebRequestQueueOperation;

  /// @brief Field m_WebRequestTimeout, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_WebRequestTimeout, put = __cordl_internal_set_m_WebRequestTimeout)) int32_t m_WebRequestTimeout;

  /// @brief Method Finalize, addr 0x3062b30, size 0xa8, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method LoadCatalogFromBundleAsync, addr 0x3061f1c, size 0x294, virtual false, abstract: false, final false
  inline void LoadCatalogFromBundleAsync();

  /// @brief Method LoadTextAssetRequestComplete, addr 0x3062dfc, size 0x198, virtual false, abstract: false, final false
  inline void LoadTextAssetRequestComplete(::UnityEngine::AsyncOperation* op);

  static inline ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog* New_ctor(::StringW bundlePath, int32_t webRequestTimeout);

  /// @brief Method Unload, addr 0x3062bd8, size 0x28, virtual false, abstract: false, final false
  inline void Unload();

  /// @brief Method WaitForCompletion, addr 0x3061b4c, size 0xe4, virtual false, abstract: false, final false
  inline bool WaitForCompletion();

  /// @brief Method WebRequestOperationCompleted, addr 0x3062c00, size 0x1fc, virtual false, abstract: false, final false
  inline void WebRequestOperationCompleted(::UnityEngine::AsyncOperation* op);

  /// @brief Method <LoadCatalogFromBundleAsync>b__19_0, addr 0x306302c, size 0x1d8, virtual false, abstract: false, final false
  inline void _LoadCatalogFromBundleAsync_b__19_0(::UnityEngine::AsyncOperation* loadOp);

  /// @brief Method <LoadCatalogFromBundleAsync>b__19_1, addr 0x3062f94, size 0x98, virtual false, abstract: false, final false
  inline void _LoadCatalogFromBundleAsync_b__19_1(::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOp);

  constexpr ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*& __cordl_internal_get_OnLoaded();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*> const& __cordl_internal_get_OnLoaded() const;

  constexpr ::StringW const& __cordl_internal_get_m_BundlePath() const;

  constexpr ::StringW& __cordl_internal_get_m_BundlePath();

  constexpr ::UnityW<::UnityEngine::AssetBundle> const& __cordl_internal_get_m_CatalogAssetBundle() const;

  constexpr ::UnityW<::UnityEngine::AssetBundle>& __cordl_internal_get_m_CatalogAssetBundle();

  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*& __cordl_internal_get_m_CatalogData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> const& __cordl_internal_get_m_CatalogData() const;

  constexpr ::UnityEngine::AssetBundleCreateRequest*& __cordl_internal_get_m_LoadBundleRequest();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundleCreateRequest*> const& __cordl_internal_get_m_LoadBundleRequest() const;

  constexpr ::UnityEngine::AssetBundleRequest*& __cordl_internal_get_m_LoadTextAssetRequest();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundleRequest*> const& __cordl_internal_get_m_LoadTextAssetRequest() const;

  constexpr bool const& __cordl_internal_get_m_OpInProgress() const;

  constexpr bool& __cordl_internal_get_m_OpInProgress();

  constexpr ::UnityEngine::AsyncOperation*& __cordl_internal_get_m_RequestOperation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AsyncOperation*> const& __cordl_internal_get_m_RequestOperation() const;

  constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation*& __cordl_internal_get_m_WebRequestQueueOperation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::WebRequestQueueOperation*> const& __cordl_internal_get_m_WebRequestQueueOperation() const;

  constexpr int32_t const& __cordl_internal_get_m_WebRequestTimeout() const;

  constexpr int32_t& __cordl_internal_get_m_WebRequestTimeout();

  constexpr void __cordl_internal_set_OnLoaded(::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* value);

  constexpr void __cordl_internal_set_m_BundlePath(::StringW value);

  constexpr void __cordl_internal_set_m_CatalogAssetBundle(::UnityW<::UnityEngine::AssetBundle> value);

  constexpr void __cordl_internal_set_m_CatalogData(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* value);

  constexpr void __cordl_internal_set_m_LoadBundleRequest(::UnityEngine::AssetBundleCreateRequest* value);

  constexpr void __cordl_internal_set_m_LoadTextAssetRequest(::UnityEngine::AssetBundleRequest* value);

  constexpr void __cordl_internal_set_m_OpInProgress(bool value);

  constexpr void __cordl_internal_set_m_RequestOperation(::UnityEngine::AsyncOperation* value);

  constexpr void __cordl_internal_set_m_WebRequestQueueOperation(::UnityEngine::ResourceManagement::WebRequestQueueOperation* value);

  constexpr void __cordl_internal_set_m_WebRequestTimeout(int32_t value);

  /// @brief Method .ctor, addr 0x3061d44, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(::StringW bundlePath, int32_t webRequestTimeout);

  /// @brief Method add_OnLoaded, addr 0x3061e6c, size 0xb0, virtual false, abstract: false, final false
  inline void add_OnLoaded(::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* value);

  /// @brief Method get_OpInProgress, addr 0x3062b08, size 0x8, virtual false, abstract: false, final false
  inline bool get_OpInProgress();

  /// @brief Method get_OpIsSuccess, addr 0x3062b10, size 0x20, virtual false, abstract: false, final false
  inline bool get_OpIsSuccess();

  /// @brief Method remove_OnLoaded, addr 0x3062a58, size 0xb0, virtual false, abstract: false, final false
  inline void remove_OnLoaded(::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ContentCatalogProvider__InternalOp__BundledCatalog();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ContentCatalogProvider__InternalOp__BundledCatalog", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ContentCatalogProvider__InternalOp__BundledCatalog(__ContentCatalogProvider__InternalOp__BundledCatalog&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ContentCatalogProvider__InternalOp__BundledCatalog", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ContentCatalogProvider__InternalOp__BundledCatalog(__ContentCatalogProvider__InternalOp__BundledCatalog const&) = delete;

  /// @brief Field m_BundlePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_BundlePath;

  /// @brief Field m_OpInProgress, offset: 0x18, size: 0x1, def value: None
  bool ___m_OpInProgress;

  /// @brief Field m_LoadBundleRequest, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AssetBundleCreateRequest* ___m_LoadBundleRequest;

  /// @brief Field m_CatalogAssetBundle, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AssetBundle> ___m_CatalogAssetBundle;

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
// CS Name: ::ContentCatalogProvider::InternalOp*
class CORDL_TYPE __ContentCatalogProvider__InternalOp : public ::System::Object {
public:
  // Declarations
  using BundledCatalog = ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog;

  /// @brief Field m_BundledCatalog, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BundledCatalog,
                      put = __cordl_internal_set_m_BundledCatalog))::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog* m_BundledCatalog;

  /// @brief Field m_ContentCatalogData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContentCatalogData,
                      put = __cordl_internal_set_m_ContentCatalogData))::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* m_ContentCatalogData;

  /// @brief Field m_ContentCatalogDataLoadOp, offset 0x48, size 0x20
  __declspec(property(get = __cordl_internal_get_m_ContentCatalogDataLoadOp, put = __cordl_internal_set_m_ContentCatalogDataLoadOp))::UnityEngine::ResourceManagement::AsyncOperations::
      AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> m_ContentCatalogDataLoadOp;

  /// @brief Field m_DisableCatalogUpdateOnStart, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DisableCatalogUpdateOnStart, put = __cordl_internal_set_m_DisableCatalogUpdateOnStart)) bool m_DisableCatalogUpdateOnStart;

  /// @brief Field m_IsLocalCatalogInBundle, offset 0x72, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsLocalCatalogInBundle, put = __cordl_internal_set_m_IsLocalCatalogInBundle)) bool m_IsLocalCatalogInBundle;

  /// @brief Field m_LocalDataPath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LocalDataPath, put = __cordl_internal_set_m_LocalDataPath))::StringW m_LocalDataPath;

  /// @brief Field m_LocalHashValue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LocalHashValue, put = __cordl_internal_set_m_LocalHashValue))::StringW m_LocalHashValue;

  /// @brief Field m_ProviderInterface, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get_m_ProviderInterface,
                      put = __cordl_internal_set_m_ProviderInterface))::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle m_ProviderInterface;

  /// @brief Field m_RemoteHashValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RemoteHashValue, put = __cordl_internal_set_m_RemoteHashValue))::StringW m_RemoteHashValue;

  /// @brief Field m_Retried, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Retried, put = __cordl_internal_set_m_Retried)) bool m_Retried;

  /// @brief Method CanLoadCatalogFromBundle, addr 0x3061524, size 0xc4, virtual false, abstract: false, final false
  inline bool CanLoadCatalogFromBundle(::StringW idToLoad, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method CatalogLoadOpCompleteCallback, addr 0x30621b0, size 0xe0, virtual false, abstract: false, final false
  inline void CatalogLoadOpCompleteCallback(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> op);

  /// @brief Method DetermineIdToLoad, addr 0x3060ddc, size 0x748, virtual false, abstract: false, final false
  inline ::StringW DetermineIdToLoad(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Collections::Generic::IList_1<::System::Object*>* dependencyObjects,
                                     bool disableCatalogUpdateOnStart);

  /// @brief Method GetTransformedInternalId, addr 0x3061c88, size 0xbc, virtual false, abstract: false, final false
  inline ::StringW GetTransformedInternalId(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc);

  /// @brief Method LoadCatalog, addr 0x30615e8, size 0x49c, virtual false, abstract: false, final false
  inline void LoadCatalog(::StringW idToLoad, bool loadCatalogFromLocalBundle);

  static inline ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp* New_ctor();

  /// @brief Method OnCatalogLoaded, addr 0x3062290, size 0x7c0, virtual false, abstract: false, final false
  inline void OnCatalogLoaded(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* ccd);

  /// @brief Method Release, addr 0x3060aec, size 0x10, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method Start, addr 0x3060c60, size 0x17c, virtual false, abstract: false, final false
  inline void Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface, bool disableCatalogUpdateOnStart, bool isLocalCatalogInBundle);

  /// @brief Method WaitForCompletionCallback, addr 0x3061a84, size 0xc8, virtual false, abstract: false, final false
  inline bool WaitForCompletionCallback();

  /// @brief Method <LoadCatalog>b__14_0, addr 0x3062a50, size 0x8, virtual false, abstract: false, final false
  inline void _LoadCatalog_b__14_0(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* ccd);

  constexpr ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*& __cordl_internal_get_m_BundledCatalog();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*> const& __cordl_internal_get_m_BundledCatalog() const;

  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*& __cordl_internal_get_m_ContentCatalogData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> const& __cordl_internal_get_m_ContentCatalogData() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> const&
  __cordl_internal_get_m_ContentCatalogDataLoadOp() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>&
  __cordl_internal_get_m_ContentCatalogDataLoadOp();

  constexpr bool const& __cordl_internal_get_m_DisableCatalogUpdateOnStart() const;

  constexpr bool& __cordl_internal_get_m_DisableCatalogUpdateOnStart();

  constexpr bool const& __cordl_internal_get_m_IsLocalCatalogInBundle() const;

  constexpr bool& __cordl_internal_get_m_IsLocalCatalogInBundle();

  constexpr ::StringW const& __cordl_internal_get_m_LocalDataPath() const;

  constexpr ::StringW& __cordl_internal_get_m_LocalDataPath();

  constexpr ::StringW const& __cordl_internal_get_m_LocalHashValue() const;

  constexpr ::StringW& __cordl_internal_get_m_LocalHashValue();

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle const& __cordl_internal_get_m_ProviderInterface() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& __cordl_internal_get_m_ProviderInterface();

  constexpr ::StringW const& __cordl_internal_get_m_RemoteHashValue() const;

  constexpr ::StringW& __cordl_internal_get_m_RemoteHashValue();

  constexpr bool const& __cordl_internal_get_m_Retried() const;

  constexpr bool& __cordl_internal_get_m_Retried();

  constexpr void __cordl_internal_set_m_BundledCatalog(::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog* value);

  constexpr void __cordl_internal_set_m_ContentCatalogData(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* value);

  constexpr void __cordl_internal_set_m_ContentCatalogDataLoadOp(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> value);

  constexpr void __cordl_internal_set_m_DisableCatalogUpdateOnStart(bool value);

  constexpr void __cordl_internal_set_m_IsLocalCatalogInBundle(bool value);

  constexpr void __cordl_internal_set_m_LocalDataPath(::StringW value);

  constexpr void __cordl_internal_set_m_LocalHashValue(::StringW value);

  constexpr void __cordl_internal_set_m_ProviderInterface(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value);

  constexpr void __cordl_internal_set_m_RemoteHashValue(::StringW value);

  constexpr void __cordl_internal_set_m_Retried(bool value);

  /// @brief Method .ctor, addr 0x3060c58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ContentCatalogProvider__InternalOp();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ContentCatalogProvider__InternalOp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ContentCatalogProvider__InternalOp(__ContentCatalogProvider__InternalOp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ContentCatalogProvider__InternalOp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ContentCatalogProvider__InternalOp(__ContentCatalogProvider__InternalOp const&) = delete;

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
// CS Name: ::UnityEngine.AddressableAssets.ResourceProviders::ContentCatalogProvider*
class CORDL_TYPE ContentCatalogProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
public:
  // Declarations
  using DependencyHashIndex = ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex;

  using InternalOp = ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp;

  /// @brief Field DisableCatalogUpdateOnStart, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_DisableCatalogUpdateOnStart, put = __cordl_internal_set_DisableCatalogUpdateOnStart)) bool DisableCatalogUpdateOnStart;

  /// @brief Field IsLocalCatalogInBundle, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_IsLocalCatalogInBundle, put = __cordl_internal_set_IsLocalCatalogInBundle)) bool IsLocalCatalogInBundle;

  /// @brief Field m_LocationToCatalogLoadOpMap, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LocationToCatalogLoadOpMap, put = __cordl_internal_set_m_LocationToCatalogLoadOpMap))::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
      ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>* m_LocationToCatalogLoadOpMap;

  /// @brief Field m_RM, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RM, put = __cordl_internal_set_m_RM))::UnityEngine::ResourceManagement::ResourceManager* m_RM;

  static inline ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider* New_ctor(::UnityEngine::ResourceManagement::ResourceManager* resourceManagerInstance);

  /// @brief Method Provide, addr 0x3060afc, size 0x15c, virtual true, abstract: false, final false
  inline void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface);

  /// @brief Method Release, addr 0x3060a10, size 0xdc, virtual true, abstract: false, final false
  inline void Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Object* obj);

  constexpr bool const& __cordl_internal_get_DisableCatalogUpdateOnStart() const;

  constexpr bool& __cordl_internal_get_DisableCatalogUpdateOnStart();

  constexpr bool const& __cordl_internal_get_IsLocalCatalogInBundle() const;

  constexpr bool& __cordl_internal_get_IsLocalCatalogInBundle();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
                                                         ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>*&
  __cordl_internal_get_m_LocationToCatalogLoadOpMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
                                                                                             ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>*> const&
  __cordl_internal_get_m_LocationToCatalogLoadOpMap() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceManager*& __cordl_internal_get_m_RM();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceManager*> const& __cordl_internal_get_m_RM() const;

  constexpr void __cordl_internal_set_DisableCatalogUpdateOnStart(bool value);

  constexpr void __cordl_internal_set_IsLocalCatalogInBundle(bool value);

  constexpr void
  __cordl_internal_set_m_LocationToCatalogLoadOpMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
                                                                                                 ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>* value);

  constexpr void __cordl_internal_set_m_RM(::UnityEngine::ResourceManagement::ResourceManager* value);

  /// @brief Method .ctor, addr 0x3060978, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ResourceManagement::ResourceManager* resourceManagerInstance);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentCatalogProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContentCatalogProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentCatalogProvider(ContentCatalogProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentCatalogProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentCatalogProvider(ContentCatalogProvider const&) = delete;

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
