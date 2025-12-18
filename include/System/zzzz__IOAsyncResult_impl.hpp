#pragma once
// IWYU pragma private; include "System/IOAsyncResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__IOAsyncResult_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::IOAsyncResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IOAsyncResult::*)()>(&::System::IOAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61c5a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOAsyncResult.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IOAsyncResult::*)(::System::AsyncCallback*, ::System::Object*)>(&::System::IOAsyncResult::Init)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61c5a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOAsyncResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IOAsyncResult::*)(::System::AsyncCallback*, ::System::Object*)>(&::System::IOAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c5a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOAsyncResult.get_AsyncCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::AsyncCallback* (::System::IOAsyncResult::*)()>(&::System::IOAsyncResult::get_AsyncCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c5a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(), "get_AsyncCallback",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOAsyncResult.get_AsyncState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::IOAsyncResult::*)()>(&::System::IOAsyncResult::get_AsyncState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c5a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(), "get_AsyncState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOAsyncResult.get_AsyncWaitHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle* (::System::IOAsyncResult::*)()>(&::System::IOAsyncResult::get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x61c5aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(), "get_AsyncWaitHandle",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOAsyncResult.get_CompletedSynchronously
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IOAsyncResult::*)()>(&::System::IOAsyncResult::get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c5bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(), "get_CompletedSynchronously",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOAsyncResult.set_CompletedSynchronously
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IOAsyncResult::*)(bool)>(&::System::IOAsyncResult::set_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c5bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(), "set_CompletedSynchronously",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOAsyncResult.get_IsCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IOAsyncResult::*)()>(&::System::IOAsyncResult::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c5bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(), "get_IsCompleted",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOAsyncResult.set_IsCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IOAsyncResult::*)(bool)>(&::System::IOAsyncResult::set_IsCompleted)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x61c5bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(), "set_IsCompleted", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOAsyncResult.CompleteDisposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IOAsyncResult::*)()>(&::System::IOAsyncResult::CompleteDisposed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(), 8));
    return ___internal_method;
  }
};
constexpr ::System::AsyncCallback*& System::IOAsyncResult::__cordl_internal_get_async_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___async_callback;
}
constexpr ::System::AsyncCallback* const& System::IOAsyncResult::__cordl_internal_get_async_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___async_callback;
}
constexpr void System::IOAsyncResult::__cordl_internal_set_async_callback(::System::AsyncCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___async_callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::IOAsyncResult::__cordl_internal_get_async_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___async_state;
}
constexpr ::System::Object* const& System::IOAsyncResult::__cordl_internal_get_async_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___async_state;
}
constexpr void System::IOAsyncResult::__cordl_internal_set_async_state(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___async_state)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::ManualResetEvent*& System::IOAsyncResult::__cordl_internal_get_wait_handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wait_handle;
}
constexpr ::System::Threading::ManualResetEvent* const& System::IOAsyncResult::__cordl_internal_get_wait_handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wait_handle;
}
constexpr void System::IOAsyncResult::__cordl_internal_set_wait_handle(::System::Threading::ManualResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___wait_handle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::IOAsyncResult::__cordl_internal_get_completed_synchronously() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completed_synchronously;
}
constexpr bool const& System::IOAsyncResult::__cordl_internal_get_completed_synchronously() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completed_synchronously;
}
constexpr void System::IOAsyncResult::__cordl_internal_set_completed_synchronously(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___completed_synchronously = value;
}
constexpr bool& System::IOAsyncResult::__cordl_internal_get_completed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completed;
}
constexpr bool const& System::IOAsyncResult::__cordl_internal_get_completed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completed;
}
constexpr void System::IOAsyncResult::__cordl_internal_set_completed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___completed = value;
}
inline void System::IOAsyncResult::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IOAsyncResult::Init(::System::AsyncCallback* async_callback, ::System::Object* async_state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, async_callback, async_state);
}
inline void System::IOAsyncResult::_ctor(::System::AsyncCallback* async_callback, ::System::Object* async_state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, async_callback, async_state);
}
inline ::System::AsyncCallback* System::IOAsyncResult::get_AsyncCallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(), "get_AsyncCallback",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::AsyncCallback*, false>(this, ___internal_method);
}
inline ::System::Object* System::IOAsyncResult::get_AsyncState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(), "get_AsyncState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Threading::WaitHandle* System::IOAsyncResult::get_AsyncWaitHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(), "get_AsyncWaitHandle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle*, false>(this, ___internal_method);
}
inline bool System::IOAsyncResult::get_CompletedSynchronously() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(), "get_CompletedSynchronously",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::IOAsyncResult::set_CompletedSynchronously(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(), "set_CompletedSynchronously",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::IOAsyncResult::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(), "get_IsCompleted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::IOAsyncResult::set_IsCompleted(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(), "set_IsCompleted", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::IOAsyncResult::CompleteDisposed() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOAsyncResult*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IOAsyncResult* System::IOAsyncResult::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IOAsyncResult*>());
}
inline ::System::IOAsyncResult* System::IOAsyncResult::New_ctor(::System::AsyncCallback* async_callback, ::System::Object* async_state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IOAsyncResult*>(async_callback, async_state));
}
/// @brief Convert operator to "::System::IAsyncResult"
constexpr System::IOAsyncResult::operator ::System::IAsyncResult*() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IAsyncResult"
constexpr ::System::IAsyncResult* System::IOAsyncResult::i___System__IAsyncResult() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::IOAsyncResult::IOAsyncResult() {}
