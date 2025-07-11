#pragma once
// IWYU pragma private; include "System/Net/ListenerAsyncResult.hpp"
#include "System/zzzz__IAsyncResult_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ListenerAsyncResult_def.hpp"
#include "System/Net/zzzz__HttpListenerContext_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::ListenerAsyncResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ListenerAsyncResult::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::ListenerAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x43d05bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ListenerAsyncResult::*)(::System::Exception*)>(&::System::Net::ListenerAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x43d0634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(), "Complete", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.InvokeCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::Net::ListenerAsyncResult::InvokeCallback)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x43d081c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(), "InvokeCallback", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ListenerAsyncResult::*)(::System::Net::HttpListenerContext*)>(
    &::System::Net::ListenerAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43d0958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(), "Complete", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ListenerAsyncResult::*)(::System::Net::HttpListenerContext*, bool)>(
    &::System::Net::ListenerAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x43d0960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(), "Complete", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.GetContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpListenerContext* (::System::Net::ListenerAsyncResult::*)()>(
    &::System::Net::ListenerAsyncResult::GetContext)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x43d0e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(), "GetContext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.get_AsyncState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Net::ListenerAsyncResult::*)()>(&::System::Net::ListenerAsyncResult::get_AsyncState)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x43d0eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(), "get_AsyncState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.get_AsyncWaitHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle* (::System::Net::ListenerAsyncResult::*)()>(
    &::System::Net::ListenerAsyncResult::get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x43d0ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                                                                               "get_AsyncWaitHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.get_CompletedSynchronously
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ListenerAsyncResult::*)()>(&::System::Net::ListenerAsyncResult::get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x43d0ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                                                                               "get_CompletedSynchronously", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ListenerAsyncResult.get_IsCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ListenerAsyncResult::*)()>(&::System::Net::ListenerAsyncResult::get_IsCompleted)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x43d1008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(), "get_IsCompleted",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___handle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cb)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___state)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___exception)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___locker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___forward)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  ::cordl_internals::setStaticField<::System::Threading::WaitCallback*, "InvokeCB", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get>(
      std::forward<::System::Threading::WaitCallback*>(value));
}
inline ::System::Threading::WaitCallback* System::Net::ListenerAsyncResult::getStaticF_InvokeCB() {
  return ::cordl_internals::getStaticField<::System::Threading::WaitCallback*, "InvokeCB", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get>();
}
inline void System::Net::ListenerAsyncResult::_ctor(::System::AsyncCallback* cb, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cb, state);
}
inline void System::Net::ListenerAsyncResult::Complete(::System::Exception* exc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(), "Complete", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exc);
}
inline void System::Net::ListenerAsyncResult::InvokeCallback(::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(), "InvokeCallback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, o);
}
inline void System::Net::ListenerAsyncResult::Complete(::System::Net::HttpListenerContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(), "Complete", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void System::Net::ListenerAsyncResult::Complete(::System::Net::HttpListenerContext* context, bool synch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(), "Complete", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, synch);
}
inline ::System::Net::HttpListenerContext* System::Net::ListenerAsyncResult::GetContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(), "GetContext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListenerContext*, false>(this, ___internal_method);
}
inline ::System::Object* System::Net::ListenerAsyncResult::get_AsyncState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(), "get_AsyncState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Threading::WaitHandle* System::Net::ListenerAsyncResult::get_AsyncWaitHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(), "get_AsyncWaitHandle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle*, false>(this, ___internal_method);
}
inline bool System::Net::ListenerAsyncResult::get_CompletedSynchronously() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(),
                                                                             "get_CompletedSynchronously", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::ListenerAsyncResult::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ListenerAsyncResult*>::get(), "get_IsCompleted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Net::ListenerAsyncResult* System::Net::ListenerAsyncResult::New_ctor(::System::AsyncCallback* cb, ::System::Object* state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::ListenerAsyncResult*>(cb, state));
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
