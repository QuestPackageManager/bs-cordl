#pragma once
// IWYU pragma private; include "System/Threading/QueueUserWorkItemCallback.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__QueueUserWorkItemCallback_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::QueueUserWorkItemCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::QueueUserWorkItemCallback::*)(
    ::System::Threading::WaitCallback*, ::System::Object*, bool, ::by_ref<::System::Threading::StackCrawlMark>)>(&::System::Threading::QueueUserWorkItemCallback::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5cb4380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::QueueUserWorkItemCallback*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Threading::WaitCallback*>(), ::i2c::type_of<::System::Object*>(),
                                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::QueueUserWorkItemCallback.System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::QueueUserWorkItemCallback::*)()>(
    &::System::Threading::QueueUserWorkItemCallback::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5cb4430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::QueueUserWorkItemCallback*>(), { "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::QueueUserWorkItemCallback.System_Threading_IThreadPoolWorkItem_MarkAborted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::QueueUserWorkItemCallback::*)(::System::Threading::ThreadAbortException*)>(
    &::System::Threading::QueueUserWorkItemCallback::System_Threading_IThreadPoolWorkItem_MarkAborted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb4504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::QueueUserWorkItemCallback*>(),
                                                             { "System.Threading.IThreadPoolWorkItem.MarkAborted", {}, { ::i2c::type_of<::System::Threading::ThreadAbortException*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::QueueUserWorkItemCallback.WaitCallback_Context
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::QueueUserWorkItemCallback::WaitCallback_Context)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5cb4508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::QueueUserWorkItemCallback*>(), { "WaitCallback_Context", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::WaitCallback*& System::Threading::QueueUserWorkItemCallback::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr ::System::Threading::WaitCallback* const& System::Threading::QueueUserWorkItemCallback::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr void System::Threading::QueueUserWorkItemCallback::__cordl_internal_set_callback(::System::Threading::WaitCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
constexpr ::System::Threading::ExecutionContext*& System::Threading::QueueUserWorkItemCallback::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::System::Threading::ExecutionContext* const& System::Threading::QueueUserWorkItemCallback::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void System::Threading::QueueUserWorkItemCallback::__cordl_internal_set_context(::System::Threading::ExecutionContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context = value;
}
constexpr ::System::Object*& System::Threading::QueueUserWorkItemCallback::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::System::Object* const& System::Threading::QueueUserWorkItemCallback::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void System::Threading::QueueUserWorkItemCallback::__cordl_internal_set_state(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
inline void System::Threading::QueueUserWorkItemCallback::setStaticF_ccb(::System::Threading::ContextCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "ccb", ::System::Threading::QueueUserWorkItemCallback*>(std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Threading::QueueUserWorkItemCallback::getStaticF_ccb() {
  return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "ccb", ::System::Threading::QueueUserWorkItemCallback*>();
}
inline void System::Threading::QueueUserWorkItemCallback::_ctor(::System::Threading::WaitCallback* waitCallback, ::System::Object* stateObj, bool compressStack,
                                                                ::by_ref<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::QueueUserWorkItemCallback*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Threading::WaitCallback*>(), ::i2c::type_of<::System::Object*>(),
                                                                                             ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, waitCallback, stateObj, compressStack, stackMark);
}
inline void System::Threading::QueueUserWorkItemCallback::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::QueueUserWorkItemCallback*>(), { "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::QueueUserWorkItemCallback::System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* tae) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::QueueUserWorkItemCallback*>(),
                                                           { "System.Threading.IThreadPoolWorkItem.MarkAborted", {}, { ::i2c::type_of<::System::Threading::ThreadAbortException*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tae);
}
inline void System::Threading::QueueUserWorkItemCallback::WaitCallback_Context(::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::QueueUserWorkItemCallback*>(), { "WaitCallback_Context", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline ::System::Threading::QueueUserWorkItemCallback* System::Threading::QueueUserWorkItemCallback::New_ctor(::System::Threading::WaitCallback* waitCallback, ::System::Object* stateObj,
                                                                                                              bool compressStack, ::by_ref<::System::Threading::StackCrawlMark> stackMark) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::QueueUserWorkItemCallback*>(waitCallback, stateObj, compressStack, stackMark));
}
/// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
constexpr System::Threading::QueueUserWorkItemCallback::operator ::System::Threading::IThreadPoolWorkItem*() noexcept {
  return static_cast<::System::Threading::IThreadPoolWorkItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::IThreadPoolWorkItem"
constexpr ::System::Threading::IThreadPoolWorkItem* System::Threading::QueueUserWorkItemCallback::i___System__Threading__IThreadPoolWorkItem() noexcept {
  return static_cast<::System::Threading::IThreadPoolWorkItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Threading::QueueUserWorkItemCallback::QueueUserWorkItemCallback() {}
