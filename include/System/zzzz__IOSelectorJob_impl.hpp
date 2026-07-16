#pragma once
// IWYU pragma private; include "System/IOSelectorJob.hpp"
#include "System/zzzz__IOOperation_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__IOSelectorJob_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
#include "System/zzzz__IOAsyncCallback_def.hpp"
#include "System/zzzz__IOAsyncResult_def.hpp"
#include "System/zzzz__IOOperation_def.hpp"
//  Writing Method size for method: ::System::IOSelectorJob._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IOSelectorJob::*)(::System::IOOperation, ::System::IOAsyncCallback*, ::System::IOAsyncResult*)>(
    &::System::IOSelectorJob::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6374fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IOSelectorJob*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::System::IOOperation>(), ::i2c::type_of<::System::IOAsyncCallback*>(), ::i2c::type_of<::System::IOAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOSelectorJob.System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IOSelectorJob::*)()>(&::System::IOSelectorJob::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6374ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOSelectorJob*>(), { "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOSelectorJob.System_Threading_IThreadPoolWorkItem_MarkAborted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IOSelectorJob::*)(::System::Threading::ThreadAbortException*)>(
    &::System::IOSelectorJob::System_Threading_IThreadPoolWorkItem_MarkAborted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6375014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOSelectorJob*>(),
                                                             { "System.Threading.IThreadPoolWorkItem.MarkAborted", {}, { ::i2c::type_of<::System::Threading::ThreadAbortException*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOSelectorJob.MarkDisposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IOSelectorJob::*)()>(&::System::IOSelectorJob::MarkDisposed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6375018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOSelectorJob*>(), { "MarkDisposed", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::IOOperation& System::IOSelectorJob::__cordl_internal_get_operation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___operation;
}
constexpr ::System::IOOperation const& System::IOSelectorJob::__cordl_internal_get_operation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___operation;
}
constexpr void System::IOSelectorJob::__cordl_internal_set_operation(::System::IOOperation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___operation = value;
}
constexpr ::System::IOAsyncCallback*& System::IOSelectorJob::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr ::System::IOAsyncCallback* const& System::IOSelectorJob::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr void System::IOSelectorJob::__cordl_internal_set_callback(::System::IOAsyncCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
constexpr ::System::IOAsyncResult*& System::IOSelectorJob::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::System::IOAsyncResult* const& System::IOSelectorJob::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void System::IOSelectorJob::__cordl_internal_set_state(::System::IOAsyncResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
inline void System::IOSelectorJob::_ctor(::System::IOOperation operation, ::System::IOAsyncCallback* callback, ::System::IOAsyncResult* state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOSelectorJob*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::IOOperation>(), ::i2c::type_of<::System::IOAsyncCallback*>(), ::i2c::type_of<::System::IOAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operation, callback, state);
}
inline void System::IOSelectorJob::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOSelectorJob*>(), { "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IOSelectorJob::System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* tae) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IOSelectorJob*>(), { "System.Threading.IThreadPoolWorkItem.MarkAborted", {}, { ::i2c::type_of<::System::Threading::ThreadAbortException*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tae);
}
inline void System::IOSelectorJob::MarkDisposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOSelectorJob*>(), { "MarkDisposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IOSelectorJob* System::IOSelectorJob::New_ctor(::System::IOOperation operation, ::System::IOAsyncCallback* callback, ::System::IOAsyncResult* state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IOSelectorJob*>(operation, callback, state));
}
/// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
constexpr System::IOSelectorJob::operator ::System::Threading::IThreadPoolWorkItem*() noexcept {
  return static_cast<::System::Threading::IThreadPoolWorkItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::IThreadPoolWorkItem"
constexpr ::System::Threading::IThreadPoolWorkItem* System::IOSelectorJob::i___System__Threading__IThreadPoolWorkItem() noexcept {
  return static_cast<::System::Threading::IThreadPoolWorkItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::IOSelectorJob::IOSelectorJob() {}
