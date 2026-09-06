#pragma once
// IWYU pragma private; include "System/Threading/Tasks/UnwrapPromise_1.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__UnwrapPromise_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__UnwrapPromise_1_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1___c<TResult>::setStaticF___9(::System::Threading::Tasks::UnwrapPromise_1___c<TResult>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::UnwrapPromise_1___c<TResult>*, "<>9", ::System::Threading::Tasks::UnwrapPromise_1___c<TResult>*>(
      std::forward<::System::Threading::Tasks::UnwrapPromise_1___c<TResult>*>(value));
}
template <typename TResult> inline ::System::Threading::Tasks::UnwrapPromise_1___c<TResult>* System::Threading::Tasks::UnwrapPromise_1___c<TResult>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::UnwrapPromise_1___c<TResult>*, "<>9", ::System::Threading::Tasks::UnwrapPromise_1___c<TResult>*>();
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1___c<TResult>::setStaticF___9__8_0(::System::Threading::WaitCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::WaitCallback*, "<>9__8_0", ::System::Threading::Tasks::UnwrapPromise_1___c<TResult>*>(std::forward<::System::Threading::WaitCallback*>(value));
}
template <typename TResult> inline ::System::Threading::WaitCallback* System::Threading::Tasks::UnwrapPromise_1___c<TResult>::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Threading::WaitCallback*, "<>9__8_0", ::System::Threading::Tasks::UnwrapPromise_1___c<TResult>*>();
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1___c<TResult>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::UnwrapPromise_1___c<TResult>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1___c<TResult>::_InvokeCoreAsync_b__8_0(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::UnwrapPromise_1___c<TResult>*>(), { "<InvokeCoreAsync>b__8_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
template <typename TResult> inline ::System::Threading::Tasks::UnwrapPromise_1___c<TResult>* System::Threading::Tasks::UnwrapPromise_1___c<TResult>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::UnwrapPromise_1___c<TResult>*>());
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Threading::Tasks::UnwrapPromise_1___c<TResult>::UnwrapPromise_1___c() {}
template <typename TResult> constexpr uint8_t& System::Threading::Tasks::UnwrapPromise_1<TResult>::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
template <typename TResult> constexpr uint8_t const& System::Threading::Tasks::UnwrapPromise_1<TResult>::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
template <typename TResult> constexpr void System::Threading::Tasks::UnwrapPromise_1<TResult>::__cordl_internal_set__state(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
template <typename TResult> constexpr bool& System::Threading::Tasks::UnwrapPromise_1<TResult>::__cordl_internal_get__lookForOce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lookForOce;
}
template <typename TResult> constexpr bool const& System::Threading::Tasks::UnwrapPromise_1<TResult>::__cordl_internal_get__lookForOce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lookForOce;
}
template <typename TResult> constexpr void System::Threading::Tasks::UnwrapPromise_1<TResult>::__cordl_internal_set__lookForOce(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lookForOce = value;
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1<TResult>::_ctor(::System::Threading::Tasks::Task* outerTask, bool lookForOce) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outerTask, lookForOce);
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1<TResult>::Invoke(::System::Threading::Tasks::Task* completingTask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>(), { "Invoke", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, completingTask);
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1<TResult>::InvokeCore(::System::Threading::Tasks::Task* completingTask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>(), { "InvokeCore", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, completingTask);
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1<TResult>::InvokeCoreAsync(::System::Threading::Tasks::Task* completingTask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>(), { "InvokeCoreAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, completingTask);
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1<TResult>::ProcessCompletedOuterTask(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>(),
                                                                                         { "ProcessCompletedOuterTask", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task);
}
template <typename TResult> inline bool System::Threading::Tasks::UnwrapPromise_1<TResult>::TrySetFromTask(::System::Threading::Tasks::Task* task, bool lookForOce) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>(),
                                                                                         { "TrySetFromTask", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, task, lookForOce);
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1<TResult>::ProcessInnerTask(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>(), { "ProcessInnerTask", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task);
}
template <typename TResult> inline bool System::Threading::Tasks::UnwrapPromise_1<TResult>::get_InvokeMayRunArbitraryCode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>(), { "get_InvokeMayRunArbitraryCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TResult>
inline ::System::Threading::Tasks::UnwrapPromise_1<TResult>* System::Threading::Tasks::UnwrapPromise_1<TResult>::New_ctor(::System::Threading::Tasks::Task* outerTask, bool lookForOce) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>(outerTask, lookForOce));
}
/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
template <typename TResult> constexpr System::Threading::Tasks::UnwrapPromise_1<TResult>::operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept {
  return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::ITaskCompletionAction"
template <typename TResult>
constexpr ::System::Threading::Tasks::ITaskCompletionAction* System::Threading::Tasks::UnwrapPromise_1<TResult>::i___System__Threading__Tasks__ITaskCompletionAction() noexcept {
  return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Threading::Tasks::UnwrapPromise_1<TResult>::UnwrapPromise_1() {}
