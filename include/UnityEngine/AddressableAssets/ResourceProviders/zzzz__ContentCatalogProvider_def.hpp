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
struct ContentCatalogProvider_DependencyHashIndex;
}
namespace UnityEngine::AddressableAssets::ResourceProviders {
class ContentCatalogProvider_InternalOp;
}
namespace UnityEngine::AddressableAssets::ResourceProviders {
class InternalOp_ContentCatalogProvider_BundledCatalog;
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
struct ContentCatalogProvider_DependencyHashIndex;
}
namespace UnityEngine::AddressableAssets::ResourceProviders {
class ContentCatalogProvider;
}
namespace UnityEngine::AddressableAssets::ResourceProviders {
class ContentCatalogProvider_InternalOp;
}
namespace UnityEngine::AddressableAssets::ResourceProviders {
class InternalOp_ContentCatalogProvider_BundledCatalog;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_DependencyHashIndex);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog);
// Dependencies
namespace UnityEngine::AddressableAssets::ResourceProviders {
// Is value type: true
// CS Name: UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/DependencyHashIndex
struct CORDL_TYPE ContentCatalogProvider_DependencyHashIndex {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ContentCatalogProvider_DependencyHashIndex_Unwrapped
  enum struct __ContentCatalogProvider_DependencyHashIndex_Unwrapped : int32_t {
    __E_Remote = static_cast<int32_t>(0x0),
    __E_Cache = static_cast<int32_t>(0x1),
    __E_Count = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ContentCatalogProvider_DependencyHashIndex_Unwrapped() const noexcept {
    return static_cast<__ContentCatalogProvider_DependencyHashIndex_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentCatalogProvider_DependencyHashIndex();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ContentCatalogProvider_DependencyHashIndex(int32_t value__) noexcept;

  /// @brief Field Cache value: I32(1)
  static ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_DependencyHashIndex const Cache;

  /// @brief Field Count value: I32(2)
  static ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_DependencyHashIndex const Count;

  /// @brief Field Remote value: I32(0)
  static ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_DependencyHashIndex const Remote;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16206 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_DependencyHashIndex, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_DependencyHashIndex, 0x4>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::ResourceProviders
// Dependencies System.Object
namespace UnityEngine::AddressableAssets::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp/BundledCatalog
class CORDL_TYPE InternalOp_ContentCatalogProvider_BundledCatalog : public ::System::Object {
public:
  // Declarations
  /// @brief Field OnLoaded, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_OnLoaded, put = __cordl_internal_set_OnLoaded)) ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* OnLoaded;

  __declspec(property(get = get_OpInProgress)) bool OpInProgress;

  __declspec(property(get = get_OpIsSuccess)) bool OpIsSuccess;

  /// @brief Field m_BundlePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BundlePath, put = __cordl_internal_set_m_BundlePath)) ::StringW m_BundlePath;

  /// @brief Field m_CatalogAssetBundle, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CatalogAssetBundle, put = __cordl_internal_set_m_CatalogAssetBundle)) ::UnityW<::UnityEngine::AssetBundle> m_CatalogAssetBundle;

  /// @brief Field m_CatalogData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CatalogData, put = __cordl_internal_set_m_CatalogData)) ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* m_CatalogData;

  /// @brief Field m_LoadBundleRequest, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LoadBundleRequest, put = __cordl_internal_set_m_LoadBundleRequest)) ::UnityEngine::AssetBundleCreateRequest* m_LoadBundleRequest;

  /// @brief Field m_LoadTextAssetRequest, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LoadTextAssetRequest, put = __cordl_internal_set_m_LoadTextAssetRequest)) ::UnityEngine::AssetBundleRequest* m_LoadTextAssetRequest;

  /// @brief Field m_OpInProgress, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OpInProgress, put = __cordl_internal_set_m_OpInProgress)) bool m_OpInProgress;

  /// @brief Field m_RequestOperation, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RequestOperation, put = __cordl_internal_set_m_RequestOperation)) ::UnityEngine::AsyncOperation* m_RequestOperation;

  /// @brief Field m_WebRequestQueueOperation, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WebRequestQueueOperation,
                      put = __cordl_internal_set_m_WebRequestQueueOperation)) ::UnityEngine::ResourceManagement::WebRequestQueueOperation* m_WebRequestQueueOperation;

  /// @brief Field m_WebRequestTimeout, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_WebRequestTimeout, put = __cordl_internal_set_m_WebRequestTimeout)) int32_t m_WebRequestTimeout;

  /// @brief Method Finalize, addr 0x44faee4, size 0xa8, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method LoadCatalogFromBundleAsync, addr 0x44fa220, size 0x28c, virtual false, abstract: false, final false
  inline void LoadCatalogFromBundleAsync();

  /// @brief Method LoadTextAssetRequestComplete, addr 0x44fb1b8, size 0x198, virtual false, abstract: false, final false
  inline void LoadTextAssetRequestComplete(::UnityEngine::AsyncOperation* op);

  static inline ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog* New_ctor(::StringW bundlePath, int32_t webRequestTimeout);

  /// @brief Method Unload, addr 0x44faf8c, size 0x28, virtual false, abstract: false, final false
  inline void Unload();

  /// @brief Method WaitForCompletion, addr 0x44f9e50, size 0xe4, virtual false, abstract: false, final false
  inline bool WaitForCompletion();

  /// @brief Method WebRequestOperationCompleted, addr 0x44fafb4, size 0x204, virtual false, abstract: false, final false
  inline void WebRequestOperationCompleted(::UnityEngine::AsyncOperation* op);

  /// @brief Method <LoadCatalogFromBundleAsync>b__19_0, addr 0x44fb3e4, size 0x1d4, virtual false, abstract: false, final false
  inline void _LoadCatalogFromBundleAsync_b__19_0(::UnityEngine::AsyncOperation* loadOp);

  /// @brief Method <LoadCatalogFromBundleAsync>b__19_1, addr 0x44fb350, size 0x94, virtual false, abstract: false, final false
  inline void _LoadCatalogFromBundleAsync_b__19_1(::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOp);

  constexpr ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* const& __cordl_internal_get_OnLoaded() const;

  constexpr ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*& __cordl_internal_get_OnLoaded();

  constexpr ::StringW const& __cordl_internal_get_m_BundlePath() const;

  constexpr ::StringW& __cordl_internal_get_m_BundlePath();

  constexpr ::UnityW<::UnityEngine::AssetBundle> const& __cordl_internal_get_m_CatalogAssetBundle() const;

  constexpr ::UnityW<::UnityEngine::AssetBundle>& __cordl_internal_get_m_CatalogAssetBundle();

  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* const& __cordl_internal_get_m_CatalogData() const;

  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*& __cordl_internal_get_m_CatalogData();

  constexpr ::UnityEngine::AssetBundleCreateRequest* const& __cordl_internal_get_m_LoadBundleRequest() const;

  constexpr ::UnityEngine::AssetBundleCreateRequest*& __cordl_internal_get_m_LoadBundleRequest();

  constexpr ::UnityEngine::AssetBundleRequest* const& __cordl_internal_get_m_LoadTextAssetRequest() const;

  constexpr ::UnityEngine::AssetBundleRequest*& __cordl_internal_get_m_LoadTextAssetRequest();

  constexpr bool const& __cordl_internal_get_m_OpInProgress() const;

  constexpr bool& __cordl_internal_get_m_OpInProgress();

  constexpr ::UnityEngine::AsyncOperation* const& __cordl_internal_get_m_RequestOperation() const;

  constexpr ::UnityEngine::AsyncOperation*& __cordl_internal_get_m_RequestOperation();

  constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation* const& __cordl_internal_get_m_WebRequestQueueOperation() const;

  constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation*& __cordl_internal_get_m_WebRequestQueueOperation();

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

  /// @brief Method .ctor, addr 0x44fa04c, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::StringW bundlePath, int32_t webRequestTimeout);

  /// @brief Method add_OnLoaded, addr 0x44fa170, size 0xb0, virtual false, abstract: false, final false
  inline void add_OnLoaded(::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* value);

  /// @brief Method get_OpInProgress, addr 0x44faebc, size 0x8, virtual false, abstract: false, final false
  inline bool get_OpInProgress();

  /// @brief Method get_OpIsSuccess, addr 0x44faec4, size 0x20, virtual false, abstract: false, final false
  inline bool get_OpIsSuccess();

  /// @brief Method remove_OnLoaded, addr 0x44fae0c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_OnLoaded(::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalOp_ContentCatalogProvider_BundledCatalog();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalOp_ContentCatalogProvider_BundledCatalog", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalOp_ContentCatalogProvider_BundledCatalog(InternalOp_ContentCatalogProvider_BundledCatalog&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalOp_ContentCatalogProvider_BundledCatalog", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalOp_ContentCatalogProvider_BundledCatalog(InternalOp_ContentCatalogProvider_BundledCatalog const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16207 };

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
static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog, ___m_BundlePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog, ___m_OpInProgress) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog, ___m_LoadBundleRequest) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog, ___m_CatalogAssetBundle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog, ___m_LoadTextAssetRequest) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog, ___m_CatalogData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog, ___m_WebRequestQueueOperation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog, ___m_RequestOperation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog, ___m_WebRequestTimeout) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog, ___OnLoaded) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog, 0x60>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::ResourceProviders
// Dependencies System.Object, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>, UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
namespace UnityEngine::AddressableAssets::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp
class CORDL_TYPE ContentCatalogProvider_InternalOp : public ::System::Object {
public:
  // Declarations
  using BundledCatalog = ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog;

  /// @brief Field m_BundledCatalog, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BundledCatalog,
                      put = __cordl_internal_set_m_BundledCatalog)) ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog* m_BundledCatalog;

  /// @brief Field m_ContentCatalogData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContentCatalogData,
                      put = __cordl_internal_set_m_ContentCatalogData)) ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* m_ContentCatalogData;

  /// @brief Field m_ContentCatalogDataLoadOp, offset 0x48, size 0x20
  __declspec(property(get = __cordl_internal_get_m_ContentCatalogDataLoadOp, put = __cordl_internal_set_m_ContentCatalogDataLoadOp)) ::UnityEngine::ResourceManagement::AsyncOperations::
      AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>
          m_ContentCatalogDataLoadOp;

  /// @brief Field m_DisableCatalogUpdateOnStart, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DisableCatalogUpdateOnStart, put = __cordl_internal_set_m_DisableCatalogUpdateOnStart)) bool m_DisableCatalogUpdateOnStart;

  /// @brief Field m_IsLocalCatalogInBundle, offset 0x72, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsLocalCatalogInBundle, put = __cordl_internal_set_m_IsLocalCatalogInBundle)) bool m_IsLocalCatalogInBundle;

  /// @brief Field m_LocalDataPath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LocalDataPath, put = __cordl_internal_set_m_LocalDataPath)) ::StringW m_LocalDataPath;

  /// @brief Field m_LocalHashValue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LocalHashValue, put = __cordl_internal_set_m_LocalHashValue)) ::StringW m_LocalHashValue;

  /// @brief Field m_ProviderInterface, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get_m_ProviderInterface,
                      put = __cordl_internal_set_m_ProviderInterface)) ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle m_ProviderInterface;

  /// @brief Field m_RemoteHashValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RemoteHashValue, put = __cordl_internal_set_m_RemoteHashValue)) ::StringW m_RemoteHashValue;

  /// @brief Field m_Retried, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Retried, put = __cordl_internal_set_m_Retried)) bool m_Retried;

  /// @brief Method CanLoadCatalogFromBundle, addr 0x44f982c, size 0xc4, virtual false, abstract: false, final false
  inline bool CanLoadCatalogFromBundle(::StringW idToLoad, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method CatalogLoadOpCompleteCallback, addr 0x44fa4ac, size 0xe0, virtual false, abstract: false, final false
  inline void CatalogLoadOpCompleteCallback(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> op);

  /// @brief Method DetermineIdToLoad, addr 0x44f9050, size 0x7dc, virtual false, abstract: false, final false
  inline ::StringW DetermineIdToLoad(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Collections::Generic::IList_1<::System::Object*>* dependencyObjects,
                                     bool disableCatalogUpdateOnStart);

  /// @brief Method GetTransformedInternalId, addr 0x44f9f90, size 0xbc, virtual false, abstract: false, final false
  inline ::StringW GetTransformedInternalId(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc);

  /// @brief Method LoadCatalog, addr 0x44f98f0, size 0x498, virtual false, abstract: false, final false
  inline void LoadCatalog(::StringW idToLoad, bool loadCatalogFromLocalBundle);

  static inline ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp* New_ctor();

  /// @brief Method OnCatalogLoaded, addr 0x44fa58c, size 0x878, virtual false, abstract: false, final false
  inline void OnCatalogLoaded(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* ccd);

  /// @brief Method Release, addr 0x44f8d6c, size 0x10, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method Start, addr 0x44f8edc, size 0x174, virtual false, abstract: false, final false
  inline void Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface, bool disableCatalogUpdateOnStart, bool isLocalCatalogInBundle);

  /// @brief Method WaitForCompletionCallback, addr 0x44f9d88, size 0xc8, virtual false, abstract: false, final false
  inline bool WaitForCompletionCallback();

  /// @brief Method <LoadCatalog>b__14_0, addr 0x44fae04, size 0x8, virtual false, abstract: false, final false
  inline void _LoadCatalog_b__14_0(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* ccd);

  constexpr ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog* const& __cordl_internal_get_m_BundledCatalog() const;

  constexpr ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*& __cordl_internal_get_m_BundledCatalog();

  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* const& __cordl_internal_get_m_ContentCatalogData() const;

  constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*& __cordl_internal_get_m_ContentCatalogData();

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

  constexpr void __cordl_internal_set_m_BundledCatalog(::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog* value);

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

  /// @brief Method .ctor, addr 0x44f8ed4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentCatalogProvider_InternalOp();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContentCatalogProvider_InternalOp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentCatalogProvider_InternalOp(ContentCatalogProvider_InternalOp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentCatalogProvider_InternalOp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentCatalogProvider_InternalOp(ContentCatalogProvider_InternalOp const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16208 };

  /// @brief Field kCatalogExt offset 0xffffffff size 0x8
  static constexpr ::ConstString kCatalogExt{ u".json" };

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
  ::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog* ___m_BundledCatalog;

  /// @brief Field m_Retried, offset: 0x70, size: 0x1, def value: None
  bool ___m_Retried;

  /// @brief Field m_DisableCatalogUpdateOnStart, offset: 0x71, size: 0x1, def value: None
  bool ___m_DisableCatalogUpdateOnStart;

  /// @brief Field m_IsLocalCatalogInBundle, offset: 0x72, size: 0x1, def value: None
  bool ___m_IsLocalCatalogInBundle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp, ___m_LocalDataPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp, ___m_RemoteHashValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp, ___m_LocalHashValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp, ___m_ProviderInterface) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp, ___m_ContentCatalogData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp, ___m_ContentCatalogDataLoadOp) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp, ___m_BundledCatalog) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp, ___m_Retried) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp, ___m_DisableCatalogUpdateOnStart) == 0x71, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp, ___m_IsLocalCatalogInBundle) == 0x72, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp, 0x78>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::ResourceProviders
// Dependencies UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
namespace UnityEngine::AddressableAssets::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider
class CORDL_TYPE ContentCatalogProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
public:
  // Declarations
  using DependencyHashIndex = ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_DependencyHashIndex;

  using InternalOp = ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp;

  /// @brief Field DisableCatalogUpdateOnStart, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_DisableCatalogUpdateOnStart, put = __cordl_internal_set_DisableCatalogUpdateOnStart)) bool DisableCatalogUpdateOnStart;

  /// @brief Field IsLocalCatalogInBundle, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_IsLocalCatalogInBundle, put = __cordl_internal_set_IsLocalCatalogInBundle)) bool IsLocalCatalogInBundle;

  /// @brief Field m_LocationToCatalogLoadOpMap, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LocationToCatalogLoadOpMap, put = __cordl_internal_set_m_LocationToCatalogLoadOpMap)) ::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>* m_LocationToCatalogLoadOpMap;

  /// @brief Field m_RM, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RM, put = __cordl_internal_set_m_RM)) ::UnityEngine::ResourceManagement::ResourceManager* m_RM;

  static inline ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider* New_ctor(::UnityEngine::ResourceManagement::ResourceManager* resourceManagerInstance);

  /// @brief Method Provide, addr 0x44f8d7c, size 0x158, virtual true, abstract: false, final false
  inline void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface);

  /// @brief Method Release, addr 0x44f8c90, size 0xdc, virtual true, abstract: false, final false
  inline void Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Object* obj);

  constexpr bool const& __cordl_internal_get_DisableCatalogUpdateOnStart() const;

  constexpr bool& __cordl_internal_get_DisableCatalogUpdateOnStart();

  constexpr bool const& __cordl_internal_get_IsLocalCatalogInBundle() const;

  constexpr bool& __cordl_internal_get_IsLocalCatalogInBundle();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
                                                         ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>* const&
  __cordl_internal_get_m_LocationToCatalogLoadOpMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
                                                         ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>*&
  __cordl_internal_get_m_LocationToCatalogLoadOpMap();

  constexpr ::UnityEngine::ResourceManagement::ResourceManager* const& __cordl_internal_get_m_RM() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceManager*& __cordl_internal_get_m_RM();

  constexpr void __cordl_internal_set_DisableCatalogUpdateOnStart(bool value);

  constexpr void __cordl_internal_set_IsLocalCatalogInBundle(bool value);

  constexpr void
  __cordl_internal_set_m_LocationToCatalogLoadOpMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
                                                                                                 ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>* value);

  constexpr void __cordl_internal_set_m_RM(::UnityEngine::ResourceManagement::ResourceManager* value);

  /// @brief Method .ctor, addr 0x44f8c00, size 0x90, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16209 };

  /// @brief Field DisableCatalogUpdateOnStart, offset: 0x1c, size: 0x1, def value: None
  bool ___DisableCatalogUpdateOnStart;

  /// @brief Field IsLocalCatalogInBundle, offset: 0x1d, size: 0x1, def value: None
  bool ___IsLocalCatalogInBundle;

  /// @brief Field m_LocationToCatalogLoadOpMap, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
                                               ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*>* ___m_LocationToCatalogLoadOpMap;

  /// @brief Field m_RM, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceManager* ___m_RM;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider, ___DisableCatalogUpdateOnStart) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider, ___IsLocalCatalogInBundle) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider, ___m_LocationToCatalogLoadOpMap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider, ___m_RM) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider, 0x30>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::ResourceProviders
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_DependencyHashIndex, "UnityEngine.AddressableAssets.ResourceProviders",
                       "ContentCatalogProvider/DependencyHashIndex");
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*, "UnityEngine.AddressableAssets.ResourceProviders", "ContentCatalogProvider");
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider_InternalOp*, "UnityEngine.AddressableAssets.ResourceProviders", "ContentCatalogProvider/InternalOp");
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceProviders::InternalOp_ContentCatalogProvider_BundledCatalog*, "UnityEngine.AddressableAssets.ResourceProviders",
                       "ContentCatalogProvider/InternalOp/BundledCatalog");
