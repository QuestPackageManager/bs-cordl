#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\WebRequestQueue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/zzzz__WebRequestQueue_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__WebRequestQueueOperation_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::WebRequestQueue.SetMaxConcurrentRequests
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::ResourceManagement::WebRequestQueue::SetMaxConcurrentRequests)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6910af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::WebRequestQueue*>(), { "SetMaxConcurrentRequests", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::WebRequestQueue.QueueRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::WebRequestQueueOperation* (*)(::UnityEngine::Networking::UnityWebRequest*)>(
    &::UnityEngine::ResourceManagement::WebRequestQueue::QueueRequest)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6910bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::WebRequestQueue*>(),
                                                                                           { "QueueRequest", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::WebRequestQueue.WaitForRequestToBeActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ResourceManagement::WebRequestQueueOperation*, int32_t)>(
    &::UnityEngine::ResourceManagement::WebRequestQueue::WaitForRequestToBeActive)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x6910f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::WebRequestQueue*>(),
                                                { "WaitForRequestToBeActive", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::WebRequestQueue.DequeueRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(&::UnityEngine::ResourceManagement::WebRequestQueue::DequeueRequest)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6911510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::WebRequestQueue*>(),
                                                                                           { "DequeueRequest", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::WebRequestQueue.OnWebAsyncOpComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AsyncOperation*)>(&::UnityEngine::ResourceManagement::WebRequestQueue::OnWebAsyncOpComplete)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x69115cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::WebRequestQueue*>(),
                                                                                           { "OnWebAsyncOpComplete", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::WebRequestQueue.OnWebAsyncOpComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(
    &::UnityEngine::ResourceManagement::WebRequestQueue::OnWebAsyncOpComplete)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x69113f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::WebRequestQueue*>(),
                                                             { "OnWebAsyncOpComplete", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::WebRequestQueue.BeginWebRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ResourceManagement::WebRequestQueueOperation*)>(&::UnityEngine::ResourceManagement::WebRequestQueue::BeginWebRequest)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x6910ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::WebRequestQueue*>(),
                                                             { "BeginWebRequest", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ResourceManagement::WebRequestQueue::setStaticF_s_MaxRequest(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_MaxRequest", ::UnityEngine::ResourceManagement::WebRequestQueue*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::ResourceManagement::WebRequestQueue::getStaticF_s_MaxRequest() {
  return ::cordl_internals::getStaticField<int32_t, "s_MaxRequest", ::UnityEngine::ResourceManagement::WebRequestQueue*>();
}
inline void
UnityEngine::ResourceManagement::WebRequestQueue::setStaticF_s_QueuedOperations(::System::Collections::Generic::Queue_1<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>*, "s_QueuedOperations",
                                    ::UnityEngine::ResourceManagement::WebRequestQueue*>(
      std::forward<::System::Collections::Generic::Queue_1<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>* UnityEngine::ResourceManagement::WebRequestQueue::getStaticF_s_QueuedOperations() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>*, "s_QueuedOperations",
                                           ::UnityEngine::ResourceManagement::WebRequestQueue*>();
}
inline void UnityEngine::ResourceManagement::WebRequestQueue::setStaticF_s_ActiveRequests(::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>*, "s_ActiveRequests",
                                    ::UnityEngine::ResourceManagement::WebRequestQueue*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>* UnityEngine::ResourceManagement::WebRequestQueue::getStaticF_s_ActiveRequests() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>*, "s_ActiveRequests",
                                           ::UnityEngine::ResourceManagement::WebRequestQueue*>();
}
inline void UnityEngine::ResourceManagement::WebRequestQueue::SetMaxConcurrentRequests(int32_t maxRequests) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::WebRequestQueue*>(), { "SetMaxConcurrentRequests", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, maxRequests);
}
inline ::UnityEngine::ResourceManagement::WebRequestQueueOperation* UnityEngine::ResourceManagement::WebRequestQueue::QueueRequest(::UnityEngine::Networking::UnityWebRequest* request) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::WebRequestQueue*>(),
                                                                                         { "QueueRequest", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>(nullptr, ___internal_method, request);
}
inline void UnityEngine::ResourceManagement::WebRequestQueue::WaitForRequestToBeActive(::UnityEngine::ResourceManagement::WebRequestQueueOperation* request, int32_t millisecondsTimeout) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::WebRequestQueue*>(),
                                              { "WaitForRequestToBeActive", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, millisecondsTimeout);
}
inline void UnityEngine::ResourceManagement::WebRequestQueue::DequeueRequest(::UnityEngine::Networking::UnityWebRequestAsyncOperation* operation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::WebRequestQueue*>(),
                                                                                         { "DequeueRequest", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, operation);
}
inline void UnityEngine::ResourceManagement::WebRequestQueue::OnWebAsyncOpComplete(::UnityEngine::AsyncOperation* operation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::WebRequestQueue*>(), { "OnWebAsyncOpComplete", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, operation);
}
inline void UnityEngine::ResourceManagement::WebRequestQueue::OnWebAsyncOpComplete(::UnityEngine::Networking::UnityWebRequestAsyncOperation* operation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::WebRequestQueue*>(),
                                                           { "OnWebAsyncOpComplete", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, operation);
}
inline void UnityEngine::ResourceManagement::WebRequestQueue::BeginWebRequest(::UnityEngine::ResourceManagement::WebRequestQueueOperation* queueOperation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::WebRequestQueue*>(),
                                                           { "BeginWebRequest", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::WebRequestQueueOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, queueOperation);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::WebRequestQueue::WebRequestQueue() {}
