#pragma once
// IWYU pragma private; include "System\IO\FileStreamAsyncResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__FileStreamAsyncResult_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::IO::FileStreamAsyncResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStreamAsyncResult::*)(::System::AsyncCallback*, ::System::Object*)>(&::System::IO::FileStreamAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5c1d58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStreamAsyncResult*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStreamAsyncResult.CBWrapper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::IO::FileStreamAsyncResult::CBWrapper)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c1e4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStreamAsyncResult*>(), { "CBWrapper", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStreamAsyncResult.get_AsyncState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::IO::FileStreamAsyncResult::*)()>(&::System::IO::FileStreamAsyncResult::get_AsyncState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1e58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStreamAsyncResult*>(), { "get_AsyncState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStreamAsyncResult.get_CompletedSynchronously
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::FileStreamAsyncResult::*)()>(&::System::IO::FileStreamAsyncResult::get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1e594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStreamAsyncResult*>(), { "get_CompletedSynchronously", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStreamAsyncResult.get_AsyncWaitHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::WaitHandle* (::System::IO::FileStreamAsyncResult::*)()>(&::System::IO::FileStreamAsyncResult::get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1e59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStreamAsyncResult*>(), { "get_AsyncWaitHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStreamAsyncResult.get_IsCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::FileStreamAsyncResult::*)()>(&::System::IO::FileStreamAsyncResult::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1e5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStreamAsyncResult*>(), { "get_IsCompleted", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::IO::FileStreamAsyncResult::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::System::Object* const& System::IO::FileStreamAsyncResult::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void System::IO::FileStreamAsyncResult::__cordl_internal_set_state(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
constexpr bool& System::IO::FileStreamAsyncResult::__cordl_internal_get_completed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completed;
}
constexpr bool const& System::IO::FileStreamAsyncResult::__cordl_internal_get_completed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completed;
}
constexpr void System::IO::FileStreamAsyncResult::__cordl_internal_set_completed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___completed = value;
}
constexpr ::System::Threading::ManualResetEvent*& System::IO::FileStreamAsyncResult::__cordl_internal_get_wh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wh;
}
constexpr ::System::Threading::ManualResetEvent* const& System::IO::FileStreamAsyncResult::__cordl_internal_get_wh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wh;
}
constexpr void System::IO::FileStreamAsyncResult::__cordl_internal_set_wh(::System::Threading::ManualResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wh = value;
}
constexpr ::System::AsyncCallback*& System::IO::FileStreamAsyncResult::__cordl_internal_get_cb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cb;
}
constexpr ::System::AsyncCallback* const& System::IO::FileStreamAsyncResult::__cordl_internal_get_cb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cb;
}
constexpr void System::IO::FileStreamAsyncResult::__cordl_internal_set_cb(::System::AsyncCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cb = value;
}
constexpr bool& System::IO::FileStreamAsyncResult::__cordl_internal_get_completedSynch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completedSynch;
}
constexpr bool const& System::IO::FileStreamAsyncResult::__cordl_internal_get_completedSynch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completedSynch;
}
constexpr void System::IO::FileStreamAsyncResult::__cordl_internal_set_completedSynch(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___completedSynch = value;
}
constexpr int32_t& System::IO::FileStreamAsyncResult::__cordl_internal_get_Count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Count;
}
constexpr int32_t const& System::IO::FileStreamAsyncResult::__cordl_internal_get_Count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Count;
}
constexpr void System::IO::FileStreamAsyncResult::__cordl_internal_set_Count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Count = value;
}
constexpr int32_t& System::IO::FileStreamAsyncResult::__cordl_internal_get_OriginalCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OriginalCount;
}
constexpr int32_t const& System::IO::FileStreamAsyncResult::__cordl_internal_get_OriginalCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OriginalCount;
}
constexpr void System::IO::FileStreamAsyncResult::__cordl_internal_set_OriginalCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OriginalCount = value;
}
constexpr int32_t& System::IO::FileStreamAsyncResult::__cordl_internal_get_BytesRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BytesRead;
}
constexpr int32_t const& System::IO::FileStreamAsyncResult::__cordl_internal_get_BytesRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BytesRead;
}
constexpr void System::IO::FileStreamAsyncResult::__cordl_internal_set_BytesRead(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BytesRead = value;
}
constexpr ::System::AsyncCallback*& System::IO::FileStreamAsyncResult::__cordl_internal_get_realcb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___realcb;
}
constexpr ::System::AsyncCallback* const& System::IO::FileStreamAsyncResult::__cordl_internal_get_realcb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___realcb;
}
constexpr void System::IO::FileStreamAsyncResult::__cordl_internal_set_realcb(::System::AsyncCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___realcb = value;
}
inline void System::IO::FileStreamAsyncResult::_ctor(::System::AsyncCallback* cb, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::FileStreamAsyncResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cb, state);
}
inline void System::IO::FileStreamAsyncResult::CBWrapper(::System::IAsyncResult* ares) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStreamAsyncResult*>(), { "CBWrapper", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ares);
}
inline ::System::Object* System::IO::FileStreamAsyncResult::get_AsyncState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStreamAsyncResult*>(), { "get_AsyncState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::IO::FileStreamAsyncResult::get_CompletedSynchronously() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStreamAsyncResult*>(), { "get_CompletedSynchronously", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::WaitHandle* System::IO::FileStreamAsyncResult::get_AsyncWaitHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStreamAsyncResult*>(), { "get_AsyncWaitHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle*>(this, ___internal_method);
}
inline bool System::IO::FileStreamAsyncResult::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileStreamAsyncResult*>(), { "get_IsCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IO::FileStreamAsyncResult* System::IO::FileStreamAsyncResult::New_ctor(::System::AsyncCallback* cb, ::System::Object* state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileStreamAsyncResult*>(cb, state));
}
/// @brief Convert operator to "::System::IAsyncResult"
constexpr System::IO::FileStreamAsyncResult::operator ::System::IAsyncResult*() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IAsyncResult"
constexpr ::System::IAsyncResult* System::IO::FileStreamAsyncResult::i___System__IAsyncResult() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::IO::FileStreamAsyncResult::FileStreamAsyncResult() {}
