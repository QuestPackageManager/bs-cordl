#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/AssetBundleResource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IAssetBundleResource_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__BundleSource_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__IUpdateReceiver_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssetBundleResource)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class AssetBundleRequestOptions;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct AssetBundleResource_LoadType;
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
class AssetBundleRequest;
}
namespace UnityEngine {
class AssetBundleUnloadOperation;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct AssetBundleResource_LoadType;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class AssetBundleResource;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource);
// Dependencies
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.AssetBundleResource/LoadType
struct CORDL_TYPE AssetBundleResource_LoadType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AssetBundleResource_LoadType_Unwrapped
  enum struct __AssetBundleResource_LoadType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Local = static_cast<int32_t>(0x1),
    __E_Web = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AssetBundleResource_LoadType_Unwrapped() const noexcept {
    return static_cast<__AssetBundleResource_LoadType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleResource_LoadType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AssetBundleResource_LoadType(int32_t value__) noexcept;

  /// @brief Field Local value: I32(1)
  static ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType const Local;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType const None;

  /// @brief Field Web value: I32(2)
  static ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType const Web;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15652 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
// Dependencies System.Object, UnityEngine.ResourceManagement.IUpdateReceiver, UnityEngine.ResourceManagement.ResourceProviders.IAssetBundleResource,
// UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle, UnityEngine.ResourceManagement.Util.BundleSource
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.AssetBundleResource
class CORDL_TYPE AssetBundleResource : public ::System::Object {
public:
  // Declarations
  using LoadType = ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType;

  __declspec(property(get = get_BytesToDownload)) int64_t BytesToDownload;

  __declspec(property(get = get_HasTimedOut)) bool HasTimedOut;

  /// @brief Field m_AssetBundle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AssetBundle, put = __cordl_internal_set_m_AssetBundle)) ::UnityW<::UnityEngine::AssetBundle> m_AssetBundle;

  /// @brief Field m_BytesToDownload, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BytesToDownload, put = __cordl_internal_set_m_BytesToDownload)) int64_t m_BytesToDownload;

  /// @brief Field m_Completed, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Completed, put = __cordl_internal_set_m_Completed)) bool m_Completed;

  /// @brief Field m_DownloadedBytes, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DownloadedBytes, put = __cordl_internal_set_m_DownloadedBytes)) int64_t m_DownloadedBytes;

  /// @brief Field m_LastDownloadedByteCount, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastDownloadedByteCount, put = __cordl_internal_set_m_LastDownloadedByteCount)) uint64_t m_LastDownloadedByteCount;

  /// @brief Field m_Options, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Options, put = __cordl_internal_set_m_Options)) ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions* m_Options;

  /// @brief Field m_PreloadCompleted, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PreloadCompleted, put = __cordl_internal_set_m_PreloadCompleted)) bool m_PreloadCompleted;

  /// @brief Field m_PreloadRequest, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreloadRequest, put = __cordl_internal_set_m_PreloadRequest)) ::UnityEngine::AssetBundleRequest* m_PreloadRequest;

  /// @brief Field m_ProvideHandle, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get_m_ProvideHandle, put = __cordl_internal_set_m_ProvideHandle)) ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle m_ProvideHandle;

  /// @brief Field m_RequestCompletedCallbackCalled, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RequestCompletedCallbackCalled, put = __cordl_internal_set_m_RequestCompletedCallbackCalled)) bool m_RequestCompletedCallbackCalled;

  /// @brief Field m_RequestOperation, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RequestOperation, put = __cordl_internal_set_m_RequestOperation)) ::UnityEngine::AsyncOperation* m_RequestOperation;

  /// @brief Field m_Retries, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Retries, put = __cordl_internal_set_m_Retries)) int32_t m_Retries;

  /// @brief Field m_Source, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Source, put = __cordl_internal_set_m_Source)) ::UnityEngine::ResourceManagement::Util::BundleSource m_Source;

  /// @brief Field m_TimeoutOverFrames, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TimeoutOverFrames, put = __cordl_internal_set_m_TimeoutOverFrames)) int32_t m_TimeoutOverFrames;

  /// @brief Field m_TimeoutTimer, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TimeoutTimer, put = __cordl_internal_set_m_TimeoutTimer)) float_t m_TimeoutTimer;

  /// @brief Field m_TransformedInternalId, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TransformedInternalId, put = __cordl_internal_set_m_TransformedInternalId)) ::StringW m_TransformedInternalId;

  /// @brief Field m_UnloadOperation, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnloadOperation, put = __cordl_internal_set_m_UnloadOperation)) ::UnityEngine::AssetBundleUnloadOperation* m_UnloadOperation;

  /// @brief Field m_WebRequestQueueOperation, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WebRequestQueueOperation,
                      put = __cordl_internal_set_m_WebRequestQueueOperation)) ::UnityEngine::ResourceManagement::WebRequestQueueOperation* m_WebRequestQueueOperation;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::IUpdateReceiver"
  constexpr operator ::UnityEngine::ResourceManagement::IUpdateReceiver*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource"
  constexpr operator ::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*() noexcept;

  /// @brief Method AddBeginWebRequestHandler, addr 0x479fa20, size 0x110, virtual false, abstract: false, final false
  inline void AddBeginWebRequestHandler(::UnityEngine::ResourceManagement::WebRequestQueueOperation* webRequestQueueOperation);

  /// @brief Method AddCallbackInvokeIfDone, addr 0x479f58c, size 0x60, virtual false, abstract: false, final false
  inline void AddCallbackInvokeIfDone(::UnityEngine::AsyncOperation* operation, ::System::Action_1<::UnityEngine::AsyncOperation*>* callback);

  /// @brief Method BeginOperation, addr 0x479e4fc, size 0x15c, virtual false, abstract: false, final false
  inline void BeginOperation();

  /// @brief Method BeginWebRequestOperation, addr 0x479fb30, size 0xe8, virtual false, abstract: false, final false
  inline void BeginWebRequestOperation(::UnityEngine::AsyncOperation* asyncOp);

  /// @brief Method CompleteBundleLoad, addr 0x479fd38, size 0x134, virtual false, abstract: false, final false
  inline void CompleteBundleLoad(::UnityEngine::AssetBundle* bundle);

  /// @brief Method CreateWebRequest, addr 0x479df3c, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::UnityWebRequest* CreateWebRequest(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc);

  /// @brief Method CreateWebRequest, addr 0x479df64, size 0x238, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::UnityWebRequest* CreateWebRequest(::StringW url);

  /// @brief Method EnqueueWebRequest, addr 0x479f910, size 0x110, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::WebRequestQueueOperation* EnqueueWebRequest(::StringW internalId);

  /// @brief Method GetAssetBundle, addr 0x479e2b8, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::AssetBundle> GetAssetBundle();

  /// @brief Method GetAssetPreloadRequest, addr 0x479e19c, size 0x11c, virtual false, abstract: false, final false
  inline ::UnityEngine::AssetBundleRequest* GetAssetPreloadRequest();

  /// @brief Method GetDownloadStatus, addr 0x479e2ec, size 0x150, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus();

  /// @brief Method GetLoadInfo, addr 0x479f5ec, size 0x30, virtual false, abstract: false, final false
  static inline void GetLoadInfo(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle handle,
                                 ::ByRef<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType> loadType, ::ByRef<::StringW> path);

  /// @brief Method GetLoadInfo, addr 0x479f61c, size 0x244, virtual false, abstract: false, final false
  static inline void GetLoadInfo(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
                                 ::ByRef<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType> loadType, ::ByRef<::StringW> path);

  /// @brief Method LoadLocalBundle, addr 0x479f860, size 0xb0, virtual false, abstract: false, final false
  inline void LoadLocalBundle();

  /// @brief Method LocalRequestOperationCompleted, addr 0x479f4e4, size 0xa8, virtual false, abstract: false, final false
  inline void LocalRequestOperationCompleted(::UnityEngine::AsyncOperation* op);

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource* New_ctor();

  /// @brief Method OnUnloadOperationComplete, addr 0x479e4f4, size 0x8, virtual false, abstract: false, final false
  inline void OnUnloadOperationComplete(::UnityEngine::AsyncOperation* op);

  /// @brief Method PercentComplete, addr 0x479e2d4, size 0x18, virtual false, abstract: false, final false
  inline float_t PercentComplete();

  /// @brief Method Start, addr 0x479e658, size 0x2cc, virtual false, abstract: false, final false
  inline void Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle, ::UnityEngine::AssetBundleUnloadOperation* unloadOp);

  /// @brief Method Unload, addr 0x479fe6c, size 0xa8, virtual false, abstract: false, final false
  inline bool Unload(::ByRef<::UnityEngine::AssetBundleUnloadOperation*> unloadOp);

  /// @brief Method Update, addr 0x479fc18, size 0x120, virtual true, abstract: false, final true
  inline void Update(float_t unscaledDeltaTime);

  /// @brief Method WaitForCompletionHandler, addr 0x479eb40, size 0x384, virtual false, abstract: false, final false
  inline bool WaitForCompletionHandler();

  /// @brief Method WebRequestOperationCompleted, addr 0x479eec4, size 0x620, virtual false, abstract: false, final false
  inline void WebRequestOperationCompleted(::UnityEngine::AsyncOperation* op);

  /// @brief Method <AddBeginWebRequestHandler>b__39_0, addr 0x479ff28, size 0x4, virtual false, abstract: false, final false
  inline void _AddBeginWebRequestHandler_b__39_0(::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOp);

  /// @brief Method <GetAssetPreloadRequest>b__26_0, addr 0x479ff1c, size 0xc, virtual false, abstract: false, final false
  inline void _GetAssetPreloadRequest_b__26_0(::UnityEngine::AsyncOperation* operation);

  constexpr ::UnityW<::UnityEngine::AssetBundle> const& __cordl_internal_get_m_AssetBundle() const;

  constexpr ::UnityW<::UnityEngine::AssetBundle>& __cordl_internal_get_m_AssetBundle();

  constexpr int64_t const& __cordl_internal_get_m_BytesToDownload() const;

  constexpr int64_t& __cordl_internal_get_m_BytesToDownload();

  constexpr bool const& __cordl_internal_get_m_Completed() const;

  constexpr bool& __cordl_internal_get_m_Completed();

  constexpr int64_t const& __cordl_internal_get_m_DownloadedBytes() const;

  constexpr int64_t& __cordl_internal_get_m_DownloadedBytes();

  constexpr uint64_t const& __cordl_internal_get_m_LastDownloadedByteCount() const;

  constexpr uint64_t& __cordl_internal_get_m_LastDownloadedByteCount();

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions* const& __cordl_internal_get_m_Options() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*& __cordl_internal_get_m_Options();

  constexpr bool const& __cordl_internal_get_m_PreloadCompleted() const;

  constexpr bool& __cordl_internal_get_m_PreloadCompleted();

  constexpr ::UnityEngine::AssetBundleRequest* const& __cordl_internal_get_m_PreloadRequest() const;

  constexpr ::UnityEngine::AssetBundleRequest*& __cordl_internal_get_m_PreloadRequest();

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle const& __cordl_internal_get_m_ProvideHandle() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& __cordl_internal_get_m_ProvideHandle();

  constexpr bool const& __cordl_internal_get_m_RequestCompletedCallbackCalled() const;

  constexpr bool& __cordl_internal_get_m_RequestCompletedCallbackCalled();

  constexpr ::UnityEngine::AsyncOperation* const& __cordl_internal_get_m_RequestOperation() const;

  constexpr ::UnityEngine::AsyncOperation*& __cordl_internal_get_m_RequestOperation();

  constexpr int32_t const& __cordl_internal_get_m_Retries() const;

  constexpr int32_t& __cordl_internal_get_m_Retries();

  constexpr ::UnityEngine::ResourceManagement::Util::BundleSource const& __cordl_internal_get_m_Source() const;

  constexpr ::UnityEngine::ResourceManagement::Util::BundleSource& __cordl_internal_get_m_Source();

  constexpr int32_t const& __cordl_internal_get_m_TimeoutOverFrames() const;

  constexpr int32_t& __cordl_internal_get_m_TimeoutOverFrames();

  constexpr float_t const& __cordl_internal_get_m_TimeoutTimer() const;

  constexpr float_t& __cordl_internal_get_m_TimeoutTimer();

  constexpr ::StringW const& __cordl_internal_get_m_TransformedInternalId() const;

  constexpr ::StringW& __cordl_internal_get_m_TransformedInternalId();

  constexpr ::UnityEngine::AssetBundleUnloadOperation* const& __cordl_internal_get_m_UnloadOperation() const;

  constexpr ::UnityEngine::AssetBundleUnloadOperation*& __cordl_internal_get_m_UnloadOperation();

  constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation* const& __cordl_internal_get_m_WebRequestQueueOperation() const;

  constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation*& __cordl_internal_get_m_WebRequestQueueOperation();

  constexpr void __cordl_internal_set_m_AssetBundle(::UnityW<::UnityEngine::AssetBundle> value);

  constexpr void __cordl_internal_set_m_BytesToDownload(int64_t value);

  constexpr void __cordl_internal_set_m_Completed(bool value);

  constexpr void __cordl_internal_set_m_DownloadedBytes(int64_t value);

  constexpr void __cordl_internal_set_m_LastDownloadedByteCount(uint64_t value);

  constexpr void __cordl_internal_set_m_Options(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions* value);

  constexpr void __cordl_internal_set_m_PreloadCompleted(bool value);

  constexpr void __cordl_internal_set_m_PreloadRequest(::UnityEngine::AssetBundleRequest* value);

  constexpr void __cordl_internal_set_m_ProvideHandle(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value);

  constexpr void __cordl_internal_set_m_RequestCompletedCallbackCalled(bool value);

  constexpr void __cordl_internal_set_m_RequestOperation(::UnityEngine::AsyncOperation* value);

  constexpr void __cordl_internal_set_m_Retries(int32_t value);

  constexpr void __cordl_internal_set_m_Source(::UnityEngine::ResourceManagement::Util::BundleSource value);

  constexpr void __cordl_internal_set_m_TimeoutOverFrames(int32_t value);

  constexpr void __cordl_internal_set_m_TimeoutTimer(float_t value);

  constexpr void __cordl_internal_set_m_TransformedInternalId(::StringW value);

  constexpr void __cordl_internal_set_m_UnloadOperation(::UnityEngine::AssetBundleUnloadOperation* value);

  constexpr void __cordl_internal_set_m_WebRequestQueueOperation(::UnityEngine::ResourceManagement::WebRequestQueueOperation* value);

  /// @brief Method .ctor, addr 0x479ff14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BytesToDownload, addr 0x479de38, size 0x58, virtual false, abstract: false, final false
  inline int64_t get_BytesToDownload();

  /// @brief Method get_HasTimedOut, addr 0x479ddf8, size 0x40, virtual false, abstract: false, final false
  inline bool get_HasTimedOut();

  /// @brief Convert to "::UnityEngine::ResourceManagement::IUpdateReceiver"
  constexpr ::UnityEngine::ResourceManagement::IUpdateReceiver* i___UnityEngine__ResourceManagement__IUpdateReceiver() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource"
  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource* i___UnityEngine__ResourceManagement__ResourceProviders__IAssetBundleResource() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleResource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleResource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundleResource(AssetBundleResource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleResource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundleResource(AssetBundleResource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15653 };

  /// @brief Field k_WaitForWebRequestMainThreadSleep offset 0xffffffff size 0x4
  static constexpr int32_t k_WaitForWebRequestMainThreadSleep{ static_cast<int32_t>(0x1) };

  /// @brief Field m_AssetBundle, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AssetBundle> ___m_AssetBundle;

  /// @brief Field m_RequestOperation, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AsyncOperation* ___m_RequestOperation;

  /// @brief Field m_WebRequestQueueOperation, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::WebRequestQueueOperation* ___m_WebRequestQueueOperation;

  /// @brief Field m_ProvideHandle, offset: 0x28, size: 0x18, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle ___m_ProvideHandle;

  /// @brief Field m_Options, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions* ___m_Options;

  /// @brief Field m_RequestCompletedCallbackCalled, offset: 0x48, size: 0x1, def value: None
  bool ___m_RequestCompletedCallbackCalled;

  /// @brief Field m_Retries, offset: 0x4c, size: 0x4, def value: None
  int32_t ___m_Retries;

  /// @brief Field m_Source, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::ResourceManagement::Util::BundleSource ___m_Source;

  /// @brief Field m_BytesToDownload, offset: 0x58, size: 0x8, def value: None
  int64_t ___m_BytesToDownload;

  /// @brief Field m_DownloadedBytes, offset: 0x60, size: 0x8, def value: None
  int64_t ___m_DownloadedBytes;

  /// @brief Field m_Completed, offset: 0x68, size: 0x1, def value: None
  bool ___m_Completed;

  /// @brief Field m_UnloadOperation, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::AssetBundleUnloadOperation* ___m_UnloadOperation;

  /// @brief Field m_TransformedInternalId, offset: 0x78, size: 0x8, def value: None
  ::StringW ___m_TransformedInternalId;

  /// @brief Field m_PreloadRequest, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::AssetBundleRequest* ___m_PreloadRequest;

  /// @brief Field m_PreloadCompleted, offset: 0x88, size: 0x1, def value: None
  bool ___m_PreloadCompleted;

  /// @brief Field m_LastDownloadedByteCount, offset: 0x90, size: 0x8, def value: None
  uint64_t ___m_LastDownloadedByteCount;

  /// @brief Field m_TimeoutTimer, offset: 0x98, size: 0x4, def value: None
  float_t ___m_TimeoutTimer;

  /// @brief Field m_TimeoutOverFrames, offset: 0x9c, size: 0x4, def value: None
  int32_t ___m_TimeoutOverFrames;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_AssetBundle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_RequestOperation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_WebRequestQueueOperation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_ProvideHandle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_Options) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_RequestCompletedCallbackCalled) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_Retries) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_Source) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_BytesToDownload) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_DownloadedBytes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_Completed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_UnloadOperation) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_TransformedInternalId) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_PreloadRequest) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_PreloadCompleted) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_LastDownloadedByteCount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_TimeoutTimer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_TimeoutOverFrames) == 0x9c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource_LoadType, "UnityEngine.ResourceManagement.ResourceProviders", "AssetBundleResource/LoadType");
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*, "UnityEngine.ResourceManagement.ResourceProviders", "AssetBundleResource");
