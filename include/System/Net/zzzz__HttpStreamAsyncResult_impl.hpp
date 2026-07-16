#pragma once
// IWYU pragma private; include "System/Net/HttpStreamAsyncResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpStreamAsyncResult_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::HttpStreamAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpStreamAsyncResult::*)(::System::Exception*)>(&::System::Net::HttpStreamAsyncResult::Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x632af14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpStreamAsyncResult*>(), { "Complete", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpStreamAsyncResult.Complete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpStreamAsyncResult::*)()>(&::System::Net::HttpStreamAsyncResult::Complete)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x632af1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpStreamAsyncResult*>(), { "Complete", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpStreamAsyncResult.get_AsyncState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::HttpStreamAsyncResult::*)()>(&::System::Net::HttpStreamAsyncResult::get_AsyncState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x632b008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpStreamAsyncResult*>(), { "get_AsyncState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpStreamAsyncResult.get_AsyncWaitHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::WaitHandle* (::System::Net::HttpStreamAsyncResult::*)()>(&::System::Net::HttpStreamAsyncResult::get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x632b010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpStreamAsyncResult*>(), { "get_AsyncWaitHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpStreamAsyncResult.get_CompletedSynchronously
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpStreamAsyncResult::*)()>(&::System::Net::HttpStreamAsyncResult::get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x632b140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpStreamAsyncResult*>(), { "get_CompletedSynchronously", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpStreamAsyncResult.get_IsCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpStreamAsyncResult::*)()>(&::System::Net::HttpStreamAsyncResult::get_IsCompleted)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x632b154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpStreamAsyncResult*>(), { "get_IsCompleted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpStreamAsyncResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpStreamAsyncResult::*)()>(&::System::Net::HttpStreamAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x632b214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpStreamAsyncResult*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Net::HttpStreamAsyncResult::__cordl_internal_get_locker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locker;
}
constexpr ::System::Object* const& System::Net::HttpStreamAsyncResult::__cordl_internal_get_locker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locker;
}
constexpr void System::Net::HttpStreamAsyncResult::__cordl_internal_set_locker(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___locker = value;
}
constexpr ::System::Threading::ManualResetEvent*& System::Net::HttpStreamAsyncResult::__cordl_internal_get_handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handle;
}
constexpr ::System::Threading::ManualResetEvent* const& System::Net::HttpStreamAsyncResult::__cordl_internal_get_handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handle;
}
constexpr void System::Net::HttpStreamAsyncResult::__cordl_internal_set_handle(::System::Threading::ManualResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handle = value;
}
constexpr bool& System::Net::HttpStreamAsyncResult::__cordl_internal_get_completed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completed;
}
constexpr bool const& System::Net::HttpStreamAsyncResult::__cordl_internal_get_completed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completed;
}
constexpr void System::Net::HttpStreamAsyncResult::__cordl_internal_set_completed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___completed = value;
}
constexpr ::ArrayW<uint8_t>& System::Net::HttpStreamAsyncResult::__cordl_internal_get_Buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Net::HttpStreamAsyncResult::__cordl_internal_get_Buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buffer;
}
constexpr void System::Net::HttpStreamAsyncResult::__cordl_internal_set_Buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Buffer = value;
}
constexpr int32_t& System::Net::HttpStreamAsyncResult::__cordl_internal_get_Offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Offset;
}
constexpr int32_t const& System::Net::HttpStreamAsyncResult::__cordl_internal_get_Offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Offset;
}
constexpr void System::Net::HttpStreamAsyncResult::__cordl_internal_set_Offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Offset = value;
}
constexpr int32_t& System::Net::HttpStreamAsyncResult::__cordl_internal_get_Count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Count;
}
constexpr int32_t const& System::Net::HttpStreamAsyncResult::__cordl_internal_get_Count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Count;
}
constexpr void System::Net::HttpStreamAsyncResult::__cordl_internal_set_Count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Count = value;
}
constexpr ::System::AsyncCallback*& System::Net::HttpStreamAsyncResult::__cordl_internal_get_Callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Callback;
}
constexpr ::System::AsyncCallback* const& System::Net::HttpStreamAsyncResult::__cordl_internal_get_Callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Callback;
}
constexpr void System::Net::HttpStreamAsyncResult::__cordl_internal_set_Callback(::System::AsyncCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Callback = value;
}
constexpr ::System::Object*& System::Net::HttpStreamAsyncResult::__cordl_internal_get_State() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___State;
}
constexpr ::System::Object* const& System::Net::HttpStreamAsyncResult::__cordl_internal_get_State() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___State;
}
constexpr void System::Net::HttpStreamAsyncResult::__cordl_internal_set_State(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___State = value;
}
constexpr int32_t& System::Net::HttpStreamAsyncResult::__cordl_internal_get_SynchRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SynchRead;
}
constexpr int32_t const& System::Net::HttpStreamAsyncResult::__cordl_internal_get_SynchRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SynchRead;
}
constexpr void System::Net::HttpStreamAsyncResult::__cordl_internal_set_SynchRead(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SynchRead = value;
}
constexpr ::System::Exception*& System::Net::HttpStreamAsyncResult::__cordl_internal_get_Error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Error;
}
constexpr ::System::Exception* const& System::Net::HttpStreamAsyncResult::__cordl_internal_get_Error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Error;
}
constexpr void System::Net::HttpStreamAsyncResult::__cordl_internal_set_Error(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Error = value;
}
inline void System::Net::HttpStreamAsyncResult::Complete(::System::Exception* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpStreamAsyncResult*>(), { "Complete", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Net::HttpStreamAsyncResult::Complete() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpStreamAsyncResult*>(), { "Complete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Net::HttpStreamAsyncResult::get_AsyncState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpStreamAsyncResult*>(), { "get_AsyncState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Threading::WaitHandle* System::Net::HttpStreamAsyncResult::get_AsyncWaitHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpStreamAsyncResult*>(), { "get_AsyncWaitHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle*>(this, ___internal_method);
}
inline bool System::Net::HttpStreamAsyncResult::get_CompletedSynchronously() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpStreamAsyncResult*>(), { "get_CompletedSynchronously", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::HttpStreamAsyncResult::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpStreamAsyncResult*>(), { "get_IsCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::HttpStreamAsyncResult::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpStreamAsyncResult*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::HttpStreamAsyncResult* System::Net::HttpStreamAsyncResult::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpStreamAsyncResult*>());
}
/// @brief Convert operator to "::System::IAsyncResult"
constexpr System::Net::HttpStreamAsyncResult::operator ::System::IAsyncResult*() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IAsyncResult"
constexpr ::System::IAsyncResult* System::Net::HttpStreamAsyncResult::i___System__IAsyncResult() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::HttpStreamAsyncResult::HttpStreamAsyncResult() {}
