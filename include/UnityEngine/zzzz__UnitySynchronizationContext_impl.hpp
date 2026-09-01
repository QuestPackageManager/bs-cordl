#pragma once
// IWYU pragma private; include "UnityEngine\UnitySynchronizationContext.hpp"
#include "System/Threading/zzzz__SynchronizationContext_impl.hpp"
#include "UnityEngine/zzzz__UnitySynchronizationContext_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__UnitySynchronizationContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext_WorkRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UnitySynchronizationContext_WorkRequest::*)(
    ::System::Threading::SendOrPostCallback*, ::System::Object*, ::System::Threading::ManualResetEvent*)>(&::UnityEngine::UnitySynchronizationContext_WorkRequest::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6aeb754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UnitySynchronizationContext_WorkRequest>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Threading::SendOrPostCallback*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::ManualResetEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext_WorkRequest.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UnitySynchronizationContext_WorkRequest::*)()>(&::UnityEngine::UnitySynchronizationContext_WorkRequest::Invoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6aebb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext_WorkRequest>(), { "Invoke", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UnitySynchronizationContext_WorkRequest::_ctor(::System::Threading::SendOrPostCallback* callback, ::System::Object* state, ::System::Threading::ManualResetEvent* waitHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UnitySynchronizationContext_WorkRequest>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Threading::SendOrPostCallback*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::ManualResetEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callback, state, waitHandle);
}
inline void UnityEngine::UnitySynchronizationContext_WorkRequest::Invoke() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext_WorkRequest>(), { "Invoke", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_DelagateCallback", ty: "::System::Threading::SendOrPostCallback*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DelagateState", ty:
// "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_WaitHandle", ty: "::System::Threading::ManualResetEvent*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UnitySynchronizationContext_WorkRequest::UnitySynchronizationContext_WorkRequest(::System::Threading::SendOrPostCallback* m_DelagateCallback,
                                                                                                          ::System::Object* m_DelagateState,
                                                                                                          ::System::Threading::ManualResetEvent* m_WaitHandle) noexcept {
  this->m_DelagateCallback = m_DelagateCallback;
  this->m_DelagateState = m_DelagateState;
  this->m_WaitHandle = m_WaitHandle;
}
// Ctor Parameters []
constexpr ::UnityEngine::UnitySynchronizationContext_WorkRequest::UnitySynchronizationContext_WorkRequest() {}
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.get_MainThreadId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UnitySynchronizationContext::*)()>(&::UnityEngine::UnitySynchronizationContext::get_MainThreadId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aeb344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), { "get_MainThreadId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)(int32_t)>(&::UnityEngine::UnitySynchronizationContext::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6aeb34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>*, int32_t)>(&::UnityEngine::UnitySynchronizationContext::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6aeb3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.Send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)(::System::Threading::SendOrPostCallback*, ::System::Object*)>(
    &::UnityEngine::UnitySynchronizationContext::Send)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x6aeb480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), { ::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.OperationStarted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)()>(&::UnityEngine::UnitySynchronizationContext::OperationStarted)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6aeb760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), { ::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.OperationCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)()>(&::UnityEngine::UnitySynchronizationContext::OperationCompleted)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6aeb77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), { ::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.Post
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)(::System::Threading::SendOrPostCallback*, ::System::Object*)>(
    &::UnityEngine::UnitySynchronizationContext::Post)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6aeb798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), { ::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.CreateCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SynchronizationContext* (::UnityEngine::UnitySynchronizationContext::*)()>(
    &::UnityEngine::UnitySynchronizationContext::CreateCopy)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6aeb8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), { ::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.Exec
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UnitySynchronizationContext::*)()>(&::UnityEngine::UnitySynchronizationContext::Exec)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6aeb960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), { "Exec", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.HasPendingTasks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UnitySynchronizationContext::*)()>(&::UnityEngine::UnitySynchronizationContext::HasPendingTasks)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6aebc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), { "HasPendingTasks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.InitializeSynchronizationContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UnitySynchronizationContext::InitializeSynchronizationContext)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6aebc8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), { "InitializeSynchronizationContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.ExecuteTasks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UnitySynchronizationContext::ExecuteTasks)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6aebd38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), { "ExecuteTasks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnitySynchronizationContext.ExecutePendingTasks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t)>(&::UnityEngine::UnitySynchronizationContext::ExecutePendingTasks)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6aebda0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), { "ExecutePendingTasks", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>*& UnityEngine::UnitySynchronizationContext::__cordl_internal_get_m_AsyncWorkQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AsyncWorkQueue;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* const&
UnityEngine::UnitySynchronizationContext::__cordl_internal_get_m_AsyncWorkQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AsyncWorkQueue;
}
constexpr void UnityEngine::UnitySynchronizationContext::__cordl_internal_set_m_AsyncWorkQueue(::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AsyncWorkQueue = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>*& UnityEngine::UnitySynchronizationContext::__cordl_internal_get_m_CurrentFrameWork() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFrameWork;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* const&
UnityEngine::UnitySynchronizationContext::__cordl_internal_get_m_CurrentFrameWork() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFrameWork;
}
constexpr void
UnityEngine::UnitySynchronizationContext::__cordl_internal_set_m_CurrentFrameWork(::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentFrameWork = value;
}
constexpr int32_t& UnityEngine::UnitySynchronizationContext::__cordl_internal_get_m_MainThreadID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainThreadID;
}
constexpr int32_t const& UnityEngine::UnitySynchronizationContext::__cordl_internal_get_m_MainThreadID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainThreadID;
}
constexpr void UnityEngine::UnitySynchronizationContext::__cordl_internal_set_m_MainThreadID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MainThreadID = value;
}
constexpr int32_t& UnityEngine::UnitySynchronizationContext::__cordl_internal_get_m_TrackedCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackedCount;
}
constexpr int32_t const& UnityEngine::UnitySynchronizationContext::__cordl_internal_get_m_TrackedCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackedCount;
}
constexpr void UnityEngine::UnitySynchronizationContext::__cordl_internal_set_m_TrackedCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TrackedCount = value;
}
inline int32_t UnityEngine::UnitySynchronizationContext::get_MainThreadId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), { "get_MainThreadId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UnitySynchronizationContext::_ctor(int32_t mainThreadID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mainThreadID);
}
inline void UnityEngine::UnitySynchronizationContext::_ctor(::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* queue, int32_t mainThreadID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, queue, mainThreadID);
}
inline void UnityEngine::UnitySynchronizationContext::Send(::System::Threading::SendOrPostCallback* callback, ::System::Object* state) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, state);
}
inline void UnityEngine::UnitySynchronizationContext::OperationStarted() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UnitySynchronizationContext::OperationCompleted() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UnitySynchronizationContext::Post(::System::Threading::SendOrPostCallback* callback, ::System::Object* state) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, state);
}
inline ::System::Threading::SynchronizationContext* UnityEngine::UnitySynchronizationContext::CreateCopy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*>(this, ___internal_method);
}
inline void UnityEngine::UnitySynchronizationContext::Exec() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), { "Exec", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UnitySynchronizationContext::HasPendingTasks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), { "HasPendingTasks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UnitySynchronizationContext::InitializeSynchronizationContext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), { "InitializeSynchronizationContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UnitySynchronizationContext::ExecuteTasks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), { "ExecuteTasks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::UnitySynchronizationContext::ExecutePendingTasks(int64_t millisecondsTimeout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UnitySynchronizationContext*>(), { "ExecutePendingTasks", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, millisecondsTimeout);
}
inline ::UnityEngine::UnitySynchronizationContext* UnityEngine::UnitySynchronizationContext::New_ctor(int32_t mainThreadID) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UnitySynchronizationContext*>(mainThreadID));
}
inline ::UnityEngine::UnitySynchronizationContext*
UnityEngine::UnitySynchronizationContext::New_ctor(::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* queue, int32_t mainThreadID) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UnitySynchronizationContext*>(queue, mainThreadID));
}
// Ctor Parameters []
constexpr ::UnityEngine::UnitySynchronizationContext::UnitySynchronizationContext() {}
