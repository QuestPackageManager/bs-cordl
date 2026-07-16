#pragma once
// IWYU pragma private; include "System/Net/ListenerAsyncResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ListenerAsyncResult_def.hpp"
#include "System/Net/zzzz__HttpListenerContext_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::ListenerAsyncResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ListenerAsyncResult::*)(::System::AsyncCallback*, ::System::Object*)>(&::System::Net::ListenerAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6332a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ListenerAsyncResult*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ListenerAsyncResult::*)(::System::Exception*)>(&::System::Net::ListenerAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6332a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ListenerAsyncResult*>(), { "Complete", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.InvokeCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Net::ListenerAsyncResult::InvokeCallback)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6332c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ListenerAsyncResult*>(), { "InvokeCallback", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ListenerAsyncResult::*)(::System::Net::HttpListenerContext*)>(&::System::Net::ListenerAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6332df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ListenerAsyncResult*>(), { "Complete", {}, { ::i2c::type_of<::System::Net::HttpListenerContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ListenerAsyncResult::*)(::System::Net::HttpListenerContext*, bool)>(&::System::Net::ListenerAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x6332df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ListenerAsyncResult*>(),
                                                                                           { "Complete", {}, { ::i2c::type_of<::System::Net::HttpListenerContext*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.GetContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpListenerContext* (::System::Net::ListenerAsyncResult::*)()>(&::System::Net::ListenerAsyncResult::GetContext)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6333368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ListenerAsyncResult*>(), { "GetContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.get_AsyncState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::ListenerAsyncResult::*)()>(&::System::Net::ListenerAsyncResult::get_AsyncState)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x63333a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ListenerAsyncResult*>(), { "get_AsyncState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.get_AsyncWaitHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::WaitHandle* (::System::Net::ListenerAsyncResult::*)()>(&::System::Net::ListenerAsyncResult::get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x63333b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ListenerAsyncResult*>(), { "get_AsyncWaitHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.get_CompletedSynchronously
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ListenerAsyncResult::*)()>(&::System::Net::ListenerAsyncResult::get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x63334ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ListenerAsyncResult*>(), { "get_CompletedSynchronously", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.get_IsCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ListenerAsyncResult::*)()>(&::System::Net::ListenerAsyncResult::get_IsCompleted)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6333500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ListenerAsyncResult*>(), { "get_IsCompleted", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::ManualResetEvent*& System::Net::ListenerAsyncResult::__cordl_internal_get_handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handle;
}
constexpr ::System::Threading::ManualResetEvent* const& System::Net::ListenerAsyncResult::__cordl_internal_get_handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handle;
}
constexpr void System::Net::ListenerAsyncResult::__cordl_internal_set_handle(::System::Threading::ManualResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handle = value;
}
constexpr bool& System::Net::ListenerAsyncResult::__cordl_internal_get_synch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___synch;
}
constexpr bool const& System::Net::ListenerAsyncResult::__cordl_internal_get_synch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___synch;
}
constexpr void System::Net::ListenerAsyncResult::__cordl_internal_set_synch(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___synch = value;
}
constexpr bool& System::Net::ListenerAsyncResult::__cordl_internal_get_completed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completed;
}
constexpr bool const& System::Net::ListenerAsyncResult::__cordl_internal_get_completed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completed;
}
constexpr void System::Net::ListenerAsyncResult::__cordl_internal_set_completed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___completed = value;
}
constexpr ::System::AsyncCallback*& System::Net::ListenerAsyncResult::__cordl_internal_get_cb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cb;
}
constexpr ::System::AsyncCallback* const& System::Net::ListenerAsyncResult::__cordl_internal_get_cb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cb;
}
constexpr void System::Net::ListenerAsyncResult::__cordl_internal_set_cb(::System::AsyncCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cb = value;
}
constexpr ::System::Object*& System::Net::ListenerAsyncResult::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::System::Object* const& System::Net::ListenerAsyncResult::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void System::Net::ListenerAsyncResult::__cordl_internal_set_state(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
constexpr ::System::Exception*& System::Net::ListenerAsyncResult::__cordl_internal_get_exception() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exception;
}
constexpr ::System::Exception* const& System::Net::ListenerAsyncResult::__cordl_internal_get_exception() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exception;
}
constexpr void System::Net::ListenerAsyncResult::__cordl_internal_set_exception(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___exception = value;
}
constexpr ::System::Net::HttpListenerContext*& System::Net::ListenerAsyncResult::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::System::Net::HttpListenerContext* const& System::Net::ListenerAsyncResult::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void System::Net::ListenerAsyncResult::__cordl_internal_set_context(::System::Net::HttpListenerContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context = value;
}
constexpr ::System::Object*& System::Net::ListenerAsyncResult::__cordl_internal_get_locker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locker;
}
constexpr ::System::Object* const& System::Net::ListenerAsyncResult::__cordl_internal_get_locker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locker;
}
constexpr void System::Net::ListenerAsyncResult::__cordl_internal_set_locker(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___locker = value;
}
constexpr ::System::Net::ListenerAsyncResult*& System::Net::ListenerAsyncResult::__cordl_internal_get_forward() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forward;
}
constexpr ::System::Net::ListenerAsyncResult* const& System::Net::ListenerAsyncResult::__cordl_internal_get_forward() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forward;
}
constexpr void System::Net::ListenerAsyncResult::__cordl_internal_set_forward(::System::Net::ListenerAsyncResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forward = value;
}
constexpr bool& System::Net::ListenerAsyncResult::__cordl_internal_get_EndCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndCalled;
}
constexpr bool const& System::Net::ListenerAsyncResult::__cordl_internal_get_EndCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndCalled;
}
constexpr void System::Net::ListenerAsyncResult::__cordl_internal_set_EndCalled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EndCalled = value;
}
constexpr bool& System::Net::ListenerAsyncResult::__cordl_internal_get_InGet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InGet;
}
constexpr bool const& System::Net::ListenerAsyncResult::__cordl_internal_get_InGet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InGet;
}
constexpr void System::Net::ListenerAsyncResult::__cordl_internal_set_InGet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InGet = value;
}
inline void System::Net::ListenerAsyncResult::setStaticF_InvokeCB(::System::Threading::WaitCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::WaitCallback*, "InvokeCB", ::System::Net::ListenerAsyncResult*>(std::forward<::System::Threading::WaitCallback*>(value));
}
inline ::System::Threading::WaitCallback* System::Net::ListenerAsyncResult::getStaticF_InvokeCB() {
  return ::cordl_internals::getStaticField<::System::Threading::WaitCallback*, "InvokeCB", ::System::Net::ListenerAsyncResult*>();
}
inline void System::Net::ListenerAsyncResult::_ctor(::System::AsyncCallback* cb, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::ListenerAsyncResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cb, state);
}
inline void System::Net::ListenerAsyncResult::Complete(::System::Exception* exc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ListenerAsyncResult*>(), { "Complete", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exc);
}
inline void System::Net::ListenerAsyncResult::InvokeCallback(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ListenerAsyncResult*>(), { "InvokeCallback", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, o);
}
inline void System::Net::ListenerAsyncResult::Complete(::System::Net::HttpListenerContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ListenerAsyncResult*>(), { "Complete", {}, { ::i2c::type_of<::System::Net::HttpListenerContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void System::Net::ListenerAsyncResult::Complete(::System::Net::HttpListenerContext* context, bool synch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::ListenerAsyncResult*>(), { "Complete", {}, { ::i2c::type_of<::System::Net::HttpListenerContext*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, synch);
}
inline ::System::Net::HttpListenerContext* System::Net::ListenerAsyncResult::GetContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ListenerAsyncResult*>(), { "GetContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListenerContext*>(this, ___internal_method);
}
inline ::System::Object* System::Net::ListenerAsyncResult::get_AsyncState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ListenerAsyncResult*>(), { "get_AsyncState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Threading::WaitHandle* System::Net::ListenerAsyncResult::get_AsyncWaitHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ListenerAsyncResult*>(), { "get_AsyncWaitHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle*>(this, ___internal_method);
}
inline bool System::Net::ListenerAsyncResult::get_CompletedSynchronously() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ListenerAsyncResult*>(), { "get_CompletedSynchronously", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::ListenerAsyncResult::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ListenerAsyncResult*>(), { "get_IsCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Net::ListenerAsyncResult* System::Net::ListenerAsyncResult::New_ctor(::System::AsyncCallback* cb, ::System::Object* state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ListenerAsyncResult*>(cb, state));
}
/// @brief Convert operator to "::System::IAsyncResult"
constexpr System::Net::ListenerAsyncResult::operator ::System::IAsyncResult*() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IAsyncResult"
constexpr ::System::IAsyncResult* System::Net::ListenerAsyncResult::i___System__IAsyncResult() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::ListenerAsyncResult::ListenerAsyncResult() {}
