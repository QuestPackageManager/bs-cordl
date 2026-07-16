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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IOAsyncResult::*)()>(&::System::IOAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6374da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOAsyncResult*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOAsyncResult.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IOAsyncResult::*)(::System::AsyncCallback*, ::System::Object*)>(&::System::IOAsyncResult::Init)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6374dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOAsyncResult*>(), { "Init", {}, { ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOAsyncResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IOAsyncResult::*)(::System::AsyncCallback*, ::System::Object*)>(&::System::IOAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6374dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOAsyncResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOAsyncResult.get_AsyncCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::AsyncCallback* (::System::IOAsyncResult::*)()>(&::System::IOAsyncResult::get_AsyncCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6374dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOAsyncResult*>(), { "get_AsyncCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOAsyncResult.get_AsyncState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::IOAsyncResult::*)()>(&::System::IOAsyncResult::get_AsyncState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6374ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOAsyncResult*>(), { "get_AsyncState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOAsyncResult.get_AsyncWaitHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::WaitHandle* (::System::IOAsyncResult::*)()>(&::System::IOAsyncResult::get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6374de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOAsyncResult*>(), { "get_AsyncWaitHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOAsyncResult.get_CompletedSynchronously
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IOAsyncResult::*)()>(&::System::IOAsyncResult::get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6374f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOAsyncResult*>(), { "get_CompletedSynchronously", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOAsyncResult.set_CompletedSynchronously
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IOAsyncResult::*)(bool)>(&::System::IOAsyncResult::set_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6374f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOAsyncResult*>(), { "set_CompletedSynchronously", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOAsyncResult.get_IsCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IOAsyncResult::*)()>(&::System::IOAsyncResult::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6374f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOAsyncResult*>(), { "get_IsCompleted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOAsyncResult.set_IsCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IOAsyncResult::*)(bool)>(&::System::IOAsyncResult::set_IsCompleted)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6374f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOAsyncResult*>(), { "set_IsCompleted", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOAsyncResult.CompleteDisposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IOAsyncResult::*)()>(&::System::IOAsyncResult::CompleteDisposed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IOAsyncResult*>(), { ::i2c::class_of<::System::IOAsyncResult*>(), 8 }));
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
  this->___async_callback = value;
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
  this->___async_state = value;
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
  this->___wait_handle = value;
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOAsyncResult*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IOAsyncResult::Init(::System::AsyncCallback* async_callback, ::System::Object* async_state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOAsyncResult*>(), { "Init", {}, { ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, async_callback, async_state);
}
inline void System::IOAsyncResult::_ctor(::System::AsyncCallback* async_callback, ::System::Object* async_state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOAsyncResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, async_callback, async_state);
}
inline ::System::AsyncCallback* System::IOAsyncResult::get_AsyncCallback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOAsyncResult*>(), { "get_AsyncCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::AsyncCallback*>(this, ___internal_method);
}
inline ::System::Object* System::IOAsyncResult::get_AsyncState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOAsyncResult*>(), { "get_AsyncState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Threading::WaitHandle* System::IOAsyncResult::get_AsyncWaitHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOAsyncResult*>(), { "get_AsyncWaitHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle*>(this, ___internal_method);
}
inline bool System::IOAsyncResult::get_CompletedSynchronously() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOAsyncResult*>(), { "get_CompletedSynchronously", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::IOAsyncResult::set_CompletedSynchronously(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOAsyncResult*>(), { "set_CompletedSynchronously", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::IOAsyncResult::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOAsyncResult*>(), { "get_IsCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::IOAsyncResult::set_IsCompleted(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOAsyncResult*>(), { "set_IsCompleted", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IOAsyncResult::CompleteDisposed() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IOAsyncResult*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IOAsyncResult* System::IOAsyncResult::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IOAsyncResult*>());
}
inline ::System::IOAsyncResult* System::IOAsyncResult::New_ctor(::System::AsyncCallback* async_callback, ::System::Object* async_state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IOAsyncResult*>(async_callback, async_state));
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
