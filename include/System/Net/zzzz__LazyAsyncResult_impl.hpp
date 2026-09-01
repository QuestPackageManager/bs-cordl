#pragma once
// IWYU pragma private; include "System\Net\LazyAsyncResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__LazyAsyncResult_def.hpp"
#include "System/Net/zzzz__LazyAsyncResult_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::LazyAsyncResult_ThreadContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::LazyAsyncResult_ThreadContext::*)()>(&::System::Net::LazyAsyncResult_ThreadContext::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64171b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult_ThreadContext*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::LazyAsyncResult_ThreadContext::__cordl_internal_get_m_NestedIOCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NestedIOCount;
}
constexpr int32_t const& System::Net::LazyAsyncResult_ThreadContext::__cordl_internal_get_m_NestedIOCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NestedIOCount;
}
constexpr void System::Net::LazyAsyncResult_ThreadContext::__cordl_internal_set_m_NestedIOCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NestedIOCount = value;
}
inline void System::Net::LazyAsyncResult_ThreadContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult_ThreadContext*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::LazyAsyncResult_ThreadContext* System::Net::LazyAsyncResult_ThreadContext::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::LazyAsyncResult_ThreadContext*>());
}
// Ctor Parameters []
constexpr ::System::Net::LazyAsyncResult_ThreadContext::LazyAsyncResult_ThreadContext() {}
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_CurrentThreadContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::LazyAsyncResult_ThreadContext* (*)()>(&::System::Net::LazyAsyncResult::get_CurrentThreadContext)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x64170dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "get_CurrentThreadContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::LazyAsyncResult::*)(::System::Object*, ::System::Object*, ::System::AsyncCallback*)>(
    &::System::Net::LazyAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6403604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::AsyncCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_AsyncObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_AsyncObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64171bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "get_AsyncObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_AsyncState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_AsyncState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64171c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "get_AsyncState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_AsyncCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::AsyncCallback* (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_AsyncCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64171cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "get_AsyncCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_AsyncWaitHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::WaitHandle* (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x64171d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "get_AsyncWaitHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.LazilyCreateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::LazyAsyncResult::*)(::by_ref<::System::Threading::ManualResetEvent*>)>(
    &::System::Net::LazyAsyncResult::LazilyCreateEvent)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x641727c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "LazilyCreateEvent", {}, { ::i2c::type_of<::by_ref<::System::Threading::ManualResetEvent*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_CompletedSynchronously
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6417420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "get_CompletedSynchronously", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_IsCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_IsCompleted)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6403434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "get_IsCompleted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_InternalPeekCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_InternalPeekCompleted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6406e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "get_InternalPeekCompleted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.get_EndCalled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::get_EndCalled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6417454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "get_EndCalled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.set_EndCalled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::LazyAsyncResult::*)(bool)>(&::System::Net::LazyAsyncResult::set_EndCalled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x641745c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "set_EndCalled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.ProtectedInvokeCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::LazyAsyncResult::*)(::System::Object*, ::System::IntPtr)>(&::System::Net::LazyAsyncResult::ProtectedInvokeCallback)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6417464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "ProtectedInvokeCallback", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.InvokeCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::LazyAsyncResult::*)(::System::Object*)>(&::System::Net::LazyAsyncResult::InvokeCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x640342c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "InvokeCallback", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.InvokeCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::InvokeCallback)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6406e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "InvokeCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::LazyAsyncResult::*)(::System::IntPtr)>(&::System::Net::LazyAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x641764c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { ::i2c::class_of<::System::Net::LazyAsyncResult*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.WorkerThreadComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::LazyAsyncResult::*)(::System::Object*)>(&::System::Net::LazyAsyncResult::WorkerThreadComplete)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x64177dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "WorkerThreadComplete", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::Cleanup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6417880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { ::i2c::class_of<::System::Net::LazyAsyncResult*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.InternalWaitForCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::LazyAsyncResult::*)()>(&::System::Net::LazyAsyncResult::InternalWaitForCompletion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6403808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "InternalWaitForCompletion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::LazyAsyncResult.WaitForCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::LazyAsyncResult::*)(bool)>(&::System::Net::LazyAsyncResult::WaitForCompletion)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x6417884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "WaitForCompletion", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Net::LazyAsyncResult::__cordl_internal_get_m_AsyncObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AsyncObject;
}
constexpr ::System::Object* const& System::Net::LazyAsyncResult::__cordl_internal_get_m_AsyncObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AsyncObject;
}
constexpr void System::Net::LazyAsyncResult::__cordl_internal_set_m_AsyncObject(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AsyncObject = value;
}
constexpr ::System::Object*& System::Net::LazyAsyncResult::__cordl_internal_get_m_AsyncState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AsyncState;
}
constexpr ::System::Object* const& System::Net::LazyAsyncResult::__cordl_internal_get_m_AsyncState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AsyncState;
}
constexpr void System::Net::LazyAsyncResult::__cordl_internal_set_m_AsyncState(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AsyncState = value;
}
constexpr ::System::AsyncCallback*& System::Net::LazyAsyncResult::__cordl_internal_get_m_AsyncCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AsyncCallback;
}
constexpr ::System::AsyncCallback* const& System::Net::LazyAsyncResult::__cordl_internal_get_m_AsyncCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AsyncCallback;
}
constexpr void System::Net::LazyAsyncResult::__cordl_internal_set_m_AsyncCallback(::System::AsyncCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AsyncCallback = value;
}
constexpr ::System::Object*& System::Net::LazyAsyncResult::__cordl_internal_get_m_Result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Result;
}
constexpr ::System::Object* const& System::Net::LazyAsyncResult::__cordl_internal_get_m_Result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Result;
}
constexpr void System::Net::LazyAsyncResult::__cordl_internal_set_m_Result(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Result = value;
}
constexpr int32_t& System::Net::LazyAsyncResult::__cordl_internal_get_m_IntCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IntCompleted;
}
constexpr int32_t const& System::Net::LazyAsyncResult::__cordl_internal_get_m_IntCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IntCompleted;
}
constexpr void System::Net::LazyAsyncResult::__cordl_internal_set_m_IntCompleted(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IntCompleted = value;
}
constexpr bool& System::Net::LazyAsyncResult::__cordl_internal_get_m_EndCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EndCalled;
}
constexpr bool const& System::Net::LazyAsyncResult::__cordl_internal_get_m_EndCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EndCalled;
}
constexpr void System::Net::LazyAsyncResult::__cordl_internal_set_m_EndCalled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EndCalled = value;
}
constexpr bool& System::Net::LazyAsyncResult::__cordl_internal_get_m_UserEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UserEvent;
}
constexpr bool const& System::Net::LazyAsyncResult::__cordl_internal_get_m_UserEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UserEvent;
}
constexpr void System::Net::LazyAsyncResult::__cordl_internal_set_m_UserEvent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UserEvent = value;
}
constexpr ::System::Object*& System::Net::LazyAsyncResult::__cordl_internal_get_m_Event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Event;
}
constexpr ::System::Object* const& System::Net::LazyAsyncResult::__cordl_internal_get_m_Event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Event;
}
constexpr void System::Net::LazyAsyncResult::__cordl_internal_set_m_Event(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Event = value;
}
inline void System::Net::LazyAsyncResult::setStaticF_t_ThreadContext(::System::Net::LazyAsyncResult_ThreadContext* value) {
  ::cordl_internals::setStaticField<::System::Net::LazyAsyncResult_ThreadContext*, "t_ThreadContext", ::System::Net::LazyAsyncResult*>(
      std::forward<::System::Net::LazyAsyncResult_ThreadContext*>(value));
}
inline ::System::Net::LazyAsyncResult_ThreadContext* System::Net::LazyAsyncResult::getStaticF_t_ThreadContext() {
  return ::cordl_internals::getStaticField<::System::Net::LazyAsyncResult_ThreadContext*, "t_ThreadContext", ::System::Net::LazyAsyncResult*>();
}
inline ::System::Net::LazyAsyncResult_ThreadContext* System::Net::LazyAsyncResult::get_CurrentThreadContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "get_CurrentThreadContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::LazyAsyncResult_ThreadContext*>(nullptr, ___internal_method);
}
inline void System::Net::LazyAsyncResult::_ctor(::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::AsyncCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, myObject, myState, myCallBack);
}
inline ::System::Object* System::Net::LazyAsyncResult::get_AsyncObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "get_AsyncObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Net::LazyAsyncResult::get_AsyncState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "get_AsyncState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::AsyncCallback* System::Net::LazyAsyncResult::get_AsyncCallback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "get_AsyncCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::AsyncCallback*>(this, ___internal_method);
}
inline ::System::Threading::WaitHandle* System::Net::LazyAsyncResult::get_AsyncWaitHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "get_AsyncWaitHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle*>(this, ___internal_method);
}
inline bool System::Net::LazyAsyncResult::LazilyCreateEvent(::by_ref<::System::Threading::ManualResetEvent*> waitHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "LazilyCreateEvent", {}, { ::i2c::type_of<::by_ref<::System::Threading::ManualResetEvent*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, waitHandle);
}
inline bool System::Net::LazyAsyncResult::get_CompletedSynchronously() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "get_CompletedSynchronously", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::LazyAsyncResult::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "get_IsCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::LazyAsyncResult::get_InternalPeekCompleted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "get_InternalPeekCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::LazyAsyncResult::get_EndCalled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "get_EndCalled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::LazyAsyncResult::set_EndCalled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "set_EndCalled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::LazyAsyncResult::ProtectedInvokeCallback(::System::Object* result, ::System::IntPtr userToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "ProtectedInvokeCallback", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, userToken);
}
inline void System::Net::LazyAsyncResult::InvokeCallback(::System::Object* result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "InvokeCallback", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void System::Net::LazyAsyncResult::InvokeCallback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "InvokeCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::LazyAsyncResult::Complete(::System::IntPtr userToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::LazyAsyncResult*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userToken);
}
inline void System::Net::LazyAsyncResult::WorkerThreadComplete(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "WorkerThreadComplete", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void System::Net::LazyAsyncResult::Cleanup() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::LazyAsyncResult*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Net::LazyAsyncResult::InternalWaitForCompletion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "InternalWaitForCompletion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Net::LazyAsyncResult::WaitForCompletion(bool snap) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::LazyAsyncResult*>(), { "WaitForCompletion", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, snap);
}
inline ::System::Net::LazyAsyncResult* System::Net::LazyAsyncResult::New_ctor(::System::Object* myObject, ::System::Object* myState, ::System::AsyncCallback* myCallBack) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::LazyAsyncResult*>(myObject, myState, myCallBack));
}
/// @brief Convert operator to "::System::IAsyncResult"
constexpr System::Net::LazyAsyncResult::operator ::System::IAsyncResult*() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IAsyncResult"
constexpr ::System::IAsyncResult* System::Net::LazyAsyncResult::i___System__IAsyncResult() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::LazyAsyncResult::LazyAsyncResult() {}
