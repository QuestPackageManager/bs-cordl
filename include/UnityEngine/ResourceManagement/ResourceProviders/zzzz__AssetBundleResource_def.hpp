#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssetBundleResource)
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace UnityEngine::Networking {
class DownloadHandlerAssetBundle;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine {
class AssetBundleRequest;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class AssetBundleRequestOptions;
}
namespace UnityEngine::ResourceManagement {
class IUpdateReceiver;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IAssetBundleResource;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct __AssetBundleResource__LoadType;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement {
class WebRequestQueueOperation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct __AssetBundleResource__LoadType;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class AssetBundleResource;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource);
// Type: ::LoadType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14263))
// CS Name: ::AssetBundleResource::LoadType
struct CORDL_TYPE __AssetBundleResource__LoadType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AssetBundleResource__LoadType_Unwrapped
  enum struct ____AssetBundleResource__LoadType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Local = static_cast<int32_t>(0x1),
    __E_Web = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AssetBundleResource__LoadType_Unwrapped() const noexcept {
    return static_cast<____AssetBundleResource__LoadType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AssetBundleResource__LoadType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AssetBundleResource__LoadType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType const None;

  /// @brief Field Local value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType const Local;

  /// @brief Field Web value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType const Web;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
// Type: UnityEngine.ResourceManagement.ResourceProviders::AssetBundleResource
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(14273))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14264))
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::AssetBundleResource*
class CORDL_TYPE AssetBundleResource : public ::System::Object {
public:
  // Declarations
  using LoadType = ::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType;

  /// @brief Field m_AssetBundle, offset 0x10, size 0x8
  __declspec(property(get = __get_m_AssetBundle, put = __set_m_AssetBundle))::UnityEngine::AssetBundle* m_AssetBundle;

  /// @brief Field m_downloadHandler, offset 0x18, size 0x8
  __declspec(property(get = __get_m_downloadHandler, put = __set_m_downloadHandler))::UnityEngine::Networking::DownloadHandlerAssetBundle* m_downloadHandler;

  /// @brief Field m_RequestOperation, offset 0x20, size 0x8
  __declspec(property(get = __get_m_RequestOperation, put = __set_m_RequestOperation))::UnityEngine::AsyncOperation* m_RequestOperation;

  /// @brief Field m_WebRequestQueueOperation, offset 0x28, size 0x8
  __declspec(property(get = __get_m_WebRequestQueueOperation, put = __set_m_WebRequestQueueOperation))::UnityEngine::ResourceManagement::WebRequestQueueOperation* m_WebRequestQueueOperation;

  /// @brief Field m_ProvideHandle, offset 0x30, size 0x18
  __declspec(property(get = __get_m_ProvideHandle, put = __set_m_ProvideHandle))::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle m_ProvideHandle;

  /// @brief Field m_Options, offset 0x48, size 0x8
  __declspec(property(get = __get_m_Options, put = __set_m_Options))::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions* m_Options;

  /// @brief Field m_WebRequestCompletedCallbackCalled, offset 0x50, size 0x1
  __declspec(property(get = __get_m_WebRequestCompletedCallbackCalled, put = __set_m_WebRequestCompletedCallbackCalled)) bool m_WebRequestCompletedCallbackCalled;

  /// @brief Field m_Retries, offset 0x54, size 0x4
  __declspec(property(get = __get_m_Retries, put = __set_m_Retries)) int32_t m_Retries;

  /// @brief Field m_BytesToDownload, offset 0x58, size 0x8
  __declspec(property(get = __get_m_BytesToDownload, put = __set_m_BytesToDownload)) int64_t m_BytesToDownload;

  /// @brief Field m_DownloadedBytes, offset 0x60, size 0x8
  __declspec(property(get = __get_m_DownloadedBytes, put = __set_m_DownloadedBytes)) int64_t m_DownloadedBytes;

  /// @brief Field m_Completed, offset 0x68, size 0x1
  __declspec(property(get = __get_m_Completed, put = __set_m_Completed)) bool m_Completed;

  /// @brief Field m_TransformedInternalId, offset 0x70, size 0x8
  __declspec(property(get = __get_m_TransformedInternalId, put = __set_m_TransformedInternalId))::StringW m_TransformedInternalId;

  /// @brief Field m_PreloadRequest, offset 0x78, size 0x8
  __declspec(property(get = __get_m_PreloadRequest, put = __set_m_PreloadRequest))::UnityEngine::AssetBundleRequest* m_PreloadRequest;

  /// @brief Field m_PreloadCompleted, offset 0x80, size 0x1
  __declspec(property(get = __get_m_PreloadCompleted, put = __set_m_PreloadCompleted)) bool m_PreloadCompleted;

  /// @brief Field m_LastDownloadedByteCount, offset 0x88, size 0x8
  __declspec(property(get = __get_m_LastDownloadedByteCount, put = __set_m_LastDownloadedByteCount)) uint64_t m_LastDownloadedByteCount;

  /// @brief Field m_TimeoutTimer, offset 0x90, size 0x4
  __declspec(property(get = __get_m_TimeoutTimer, put = __set_m_TimeoutTimer)) float_t m_TimeoutTimer;

  /// @brief Field m_TimeoutOverFrames, offset 0x94, size 0x4
  __declspec(property(get = __get_m_TimeoutOverFrames, put = __set_m_TimeoutOverFrames)) int32_t m_TimeoutOverFrames;

  __declspec(property(get = get_HasTimedOut)) bool HasTimedOut;

  __declspec(property(get = get_BytesToDownload)) int64_t BytesToDownload;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource"
  constexpr operator ::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::IUpdateReceiver"
  constexpr operator ::UnityEngine::ResourceManagement::IUpdateReceiver*() noexcept;

  constexpr ::UnityEngine::AssetBundle*& __get_m_AssetBundle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundle*> const& __get_m_AssetBundle() const;

  constexpr void __set_m_AssetBundle(::UnityEngine::AssetBundle* value);

  constexpr ::UnityEngine::Networking::DownloadHandlerAssetBundle*& __get_m_downloadHandler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::DownloadHandlerAssetBundle*> const& __get_m_downloadHandler() const;

  constexpr void __set_m_downloadHandler(::UnityEngine::Networking::DownloadHandlerAssetBundle* value);

  constexpr ::UnityEngine::AsyncOperation*& __get_m_RequestOperation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AsyncOperation*> const& __get_m_RequestOperation() const;

  constexpr void __set_m_RequestOperation(::UnityEngine::AsyncOperation* value);

  constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation*& __get_m_WebRequestQueueOperation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::WebRequestQueueOperation*> const& __get_m_WebRequestQueueOperation() const;

  constexpr void __set_m_WebRequestQueueOperation(::UnityEngine::ResourceManagement::WebRequestQueueOperation* value);

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& __get_m_ProvideHandle();

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle const& __get_m_ProvideHandle() const;

  constexpr void __set_m_ProvideHandle(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value);

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*& __get_m_Options();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*> const& __get_m_Options() const;

  constexpr void __set_m_Options(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions* value);

  constexpr bool& __get_m_WebRequestCompletedCallbackCalled();

  constexpr bool const& __get_m_WebRequestCompletedCallbackCalled() const;

  constexpr void __set_m_WebRequestCompletedCallbackCalled(bool value);

  constexpr int32_t& __get_m_Retries();

  constexpr int32_t const& __get_m_Retries() const;

  constexpr void __set_m_Retries(int32_t value);

  constexpr int64_t& __get_m_BytesToDownload();

  constexpr int64_t const& __get_m_BytesToDownload() const;

  constexpr void __set_m_BytesToDownload(int64_t value);

  constexpr int64_t& __get_m_DownloadedBytes();

  constexpr int64_t const& __get_m_DownloadedBytes() const;

  constexpr void __set_m_DownloadedBytes(int64_t value);

  constexpr bool& __get_m_Completed();

  constexpr bool const& __get_m_Completed() const;

  constexpr void __set_m_Completed(bool value);

  constexpr ::StringW& __get_m_TransformedInternalId();

  constexpr ::StringW const& __get_m_TransformedInternalId() const;

  constexpr void __set_m_TransformedInternalId(::StringW value);

  constexpr ::UnityEngine::AssetBundleRequest*& __get_m_PreloadRequest();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundleRequest*> const& __get_m_PreloadRequest() const;

  constexpr void __set_m_PreloadRequest(::UnityEngine::AssetBundleRequest* value);

  constexpr bool& __get_m_PreloadCompleted();

  constexpr bool const& __get_m_PreloadCompleted() const;

  constexpr void __set_m_PreloadCompleted(bool value);

  constexpr uint64_t& __get_m_LastDownloadedByteCount();

  constexpr uint64_t const& __get_m_LastDownloadedByteCount() const;

  constexpr void __set_m_LastDownloadedByteCount(uint64_t value);

  constexpr float_t& __get_m_TimeoutTimer();

  constexpr float_t const& __get_m_TimeoutTimer() const;

  constexpr void __set_m_TimeoutTimer(float_t value);

  constexpr int32_t& __get_m_TimeoutOverFrames();

  constexpr int32_t const& __get_m_TimeoutOverFrames() const;

  constexpr void __set_m_TimeoutOverFrames(int32_t value);

  /// @brief Method get_HasTimedOut addr 0x2a50da4 size 0x40 virtual false final false
  inline bool get_HasTimedOut();

  /// @brief Method get_BytesToDownload addr 0x2a50de4 size 0x58 virtual false final false
  inline int64_t get_BytesToDownload();

  /// @brief Method CreateWebRequest addr 0x2a50ee8 size 0x28 virtual false final false
  inline ::UnityEngine::Networking::UnityWebRequest* CreateWebRequest(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc);

  /// @brief Method CreateWebRequest addr 0x2a50f10 size 0x1bc virtual false final false
  inline ::UnityEngine::Networking::UnityWebRequest* CreateWebRequest(::StringW url);

  /// @brief Method GetAssetPreloadRequest addr 0x2a510cc size 0x124 virtual false final false
  inline ::UnityEngine::AssetBundleRequest* GetAssetPreloadRequest();

  /// @brief Method PercentComplete addr 0x2a512e8 size 0x18 virtual false final false
  inline float_t PercentComplete();

  /// @brief Method GetDownloadStatus addr 0x2a51300 size 0x150 virtual false final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus();

  /// @brief Method GetAssetBundle addr 0x2a511f0 size 0xf8 virtual true final true
  inline ::UnityEngine::AssetBundle* GetAssetBundle();

  /// @brief Method Start addr 0x2a51450 size 0x238 virtual false final false
  inline void Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle);

  /// @brief Method WaitForCompletionHandler addr 0x2a51c1c size 0x240 virtual false final false
  inline bool WaitForCompletionHandler();

  /// @brief Method AddCallbackInvokeIfDone addr 0x2a5244c size 0x60 virtual false final false
  inline void AddCallbackInvokeIfDone(::UnityEngine::AsyncOperation* operation, ::System::Action_1<::UnityEngine::AsyncOperation*>* callback);

  /// @brief Method GetLoadInfo addr 0x2a524ac size 0x30 virtual false final false
  static inline void GetLoadInfo(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle handle,
                                 ByRef<::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType> loadType, ByRef<::StringW> path);

  /// @brief Method GetLoadInfo addr 0x2a524dc size 0x1f4 virtual false final false
  static inline void GetLoadInfo(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
                                 ByRef<::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType> loadType, ByRef<::StringW> path);

  /// @brief Method BeginOperation addr 0x2a518a4 size 0x378 virtual false final false
  inline void BeginOperation();

  /// @brief Method BeginWebRequestOperation addr 0x2a526d0 size 0xec virtual false final false
  inline void BeginWebRequestOperation(::UnityEngine::AsyncOperation* asyncOp);

  /// @brief Method Update addr 0x2a527bc size 0x120 virtual true final true
  inline void Update(float_t unscaledDeltaTime);

  /// @brief Method LocalRequestOperationCompleted addr 0x2a528dc size 0x8c virtual false final false
  inline void LocalRequestOperationCompleted(::UnityEngine::AsyncOperation* op);

  /// @brief Method CompleteBundleLoad addr 0x2a52968 size 0x13c virtual false final false
  inline void CompleteBundleLoad(::UnityEngine::AssetBundle* bundle);

  /// @brief Method WebRequestOperationCompleted addr 0x2a51e5c size 0x5f0 virtual false final false
  inline void WebRequestOperationCompleted(::UnityEngine::AsyncOperation* op);

  /// @brief Method Unload addr 0x2a52aa4 size 0xa0 virtual false final false
  inline void Unload();

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource* New_ctor();

  /// @brief Method .ctor addr 0x2a52b44 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetAssetPreloadRequest>b__25_0 addr 0x2a52b4c size 0xc virtual false final false
  inline void _GetAssetPreloadRequest_b__25_0(::UnityEngine::AsyncOperation* operation);

  /// @brief Method <BeginOperation>b__34_0 addr 0x2a52b58 size 0x4 virtual false final false
  inline void _BeginOperation_b__34_0(::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOp);

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleResource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundleResource(AssetBundleResource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleResource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundleResource(AssetBundleResource const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleResource();

public:
  /// @brief Field m_AssetBundle, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AssetBundle* ___m_AssetBundle;

  /// @brief Field m_downloadHandler, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Networking::DownloadHandlerAssetBundle* ___m_downloadHandler;

  /// @brief Field m_RequestOperation, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AsyncOperation* ___m_RequestOperation;

  /// @brief Field m_WebRequestQueueOperation, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::WebRequestQueueOperation* ___m_WebRequestQueueOperation;

  /// @brief Field m_ProvideHandle, offset: 0x30, size: 0x18, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle ___m_ProvideHandle;

  /// @brief Field m_Options, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions* ___m_Options;

  /// @brief Field m_WebRequestCompletedCallbackCalled, offset: 0x50, size: 0x1, def value: None
  bool ___m_WebRequestCompletedCallbackCalled;

  /// @brief Field m_Retries, offset: 0x54, size: 0x4, def value: None
  int32_t ___m_Retries;

  /// @brief Field m_BytesToDownload, offset: 0x58, size: 0x8, def value: None
  int64_t ___m_BytesToDownload;

  /// @brief Field m_DownloadedBytes, offset: 0x60, size: 0x8, def value: None
  int64_t ___m_DownloadedBytes;

  /// @brief Field m_Completed, offset: 0x68, size: 0x1, def value: None
  bool ___m_Completed;

  /// @brief Field m_TransformedInternalId, offset: 0x70, size: 0x8, def value: None
  ::StringW ___m_TransformedInternalId;

  /// @brief Field m_PreloadRequest, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::AssetBundleRequest* ___m_PreloadRequest;

  /// @brief Field m_PreloadCompleted, offset: 0x80, size: 0x1, def value: None
  bool ___m_PreloadCompleted;

  /// @brief Field m_LastDownloadedByteCount, offset: 0x88, size: 0x8, def value: None
  uint64_t ___m_LastDownloadedByteCount;

  /// @brief Field m_TimeoutTimer, offset: 0x90, size: 0x4, def value: None
  float_t ___m_TimeoutTimer;

  /// @brief Field m_TimeoutOverFrames, offset: 0x94, size: 0x4, def value: None
  int32_t ___m_TimeoutOverFrames;

  /// @brief Field k_WaitForWebRequestMainThreadSleep offset 0xffffffff size 0x4
  static constexpr int32_t k_WaitForWebRequestMainThreadSleep{ static_cast<int32_t>(0x1) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, 0x98>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_AssetBundle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_downloadHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_RequestOperation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_WebRequestQueueOperation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_ProvideHandle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_Options) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_WebRequestCompletedCallbackCalled) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_Retries) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_BytesToDownload) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_DownloadedBytes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_Completed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_TransformedInternalId) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_PreloadRequest) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_PreloadCompleted) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_LastDownloadedByteCount) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_TimeoutTimer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, ___m_TimeoutOverFrames) == 0x94, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType, "UnityEngine.ResourceManagement.ResourceProviders", "AssetBundleResource/LoadType");
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*, "UnityEngine.ResourceManagement.ResourceProviders", "AssetBundleResource");
