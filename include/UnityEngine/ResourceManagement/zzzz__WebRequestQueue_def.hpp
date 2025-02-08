#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/WebRequestQueue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebRequestQueue)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::ResourceManagement {
class WebRequestQueueOperation;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement {
class WebRequestQueue;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::WebRequestQueue);
// Dependencies System.Object
namespace UnityEngine::ResourceManagement {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.WebRequestQueue
class CORDL_TYPE WebRequestQueue : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_ActiveRequests, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ActiveRequests,
                      put = setStaticF_s_ActiveRequests)) ::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>* s_ActiveRequests;

  /// @brief Field s_MaxRequest, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_MaxRequest, put = setStaticF_s_MaxRequest)) int32_t s_MaxRequest;

  /// @brief Field s_QueuedOperations, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_QueuedOperations,
                      put = setStaticF_s_QueuedOperations)) ::System::Collections::Generic::Queue_1<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>* s_QueuedOperations;

  /// @brief Method BeginWebRequest, addr 0x4795f70, size 0x28c, virtual false, abstract: false, final false
  static inline void BeginWebRequest(::UnityEngine::ResourceManagement::WebRequestQueueOperation* queueOperation);

  /// @brief Method DequeueRequest, addr 0x479681c, size 0xb8, virtual false, abstract: false, final false
  static inline void DequeueRequest(::UnityEngine::Networking::UnityWebRequestAsyncOperation* operation);

  /// @brief Method OnWebAsyncOpComplete, addr 0x47968d4, size 0xa4, virtual false, abstract: false, final false
  static inline void OnWebAsyncOpComplete(::UnityEngine::AsyncOperation* operation);

  /// @brief Method OnWebAsyncOpComplete, addr 0x4796714, size 0x108, virtual false, abstract: false, final false
  static inline void OnWebAsyncOpComplete(::UnityEngine::Networking::UnityWebRequestAsyncOperation* operation);

  /// @brief Method QueueRequest, addr 0x4795e70, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::WebRequestQueueOperation* QueueRequest(::UnityEngine::Networking::UnityWebRequest* request);

  /// @brief Method SetMaxConcurrentRequests, addr 0x4795db0, size 0xc0, virtual false, abstract: false, final false
  static inline void SetMaxConcurrentRequests(int32_t maxRequests);

  /// @brief Method WaitForRequestToBeActive, addr 0x47961fc, size 0x474, virtual false, abstract: false, final false
  static inline void WaitForRequestToBeActive(::UnityEngine::ResourceManagement::WebRequestQueueOperation* request, int32_t millisecondsTimeout);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>* getStaticF_s_ActiveRequests();

  static inline int32_t getStaticF_s_MaxRequest();

  static inline ::System::Collections::Generic::Queue_1<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>* getStaticF_s_QueuedOperations();

  static inline void setStaticF_s_ActiveRequests(::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>* value);

  static inline void setStaticF_s_MaxRequest(int32_t value);

  static inline void setStaticF_s_QueuedOperations(::System::Collections::Generic::Queue_1<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequestQueue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebRequestQueue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebRequestQueue(WebRequestQueue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebRequestQueue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebRequestQueue(WebRequestQueue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15602 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::WebRequestQueue, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement
NEED_NO_BOX(::UnityEngine::ResourceManagement::WebRequestQueue);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::WebRequestQueue*, "UnityEngine.ResourceManagement", "WebRequestQueue");
