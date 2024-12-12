#pragma once
// IWYU pragma private; include "System/Threading/Tasks/UnwrapPromise_1.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__UnwrapPromise_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__UnwrapPromise_1_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1___c<TResult>::setStaticF___9(::System::Threading::Tasks::UnwrapPromise_1___c<TResult>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::UnwrapPromise_1___c<TResult>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnwrapPromise_1___c<TResult>*>::get>(
      std::forward<::System::Threading::Tasks::UnwrapPromise_1___c<TResult>*>(value));
}
template <typename TResult> inline ::System::Threading::Tasks::UnwrapPromise_1___c<TResult>* System::Threading::Tasks::UnwrapPromise_1___c<TResult>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::UnwrapPromise_1___c<TResult>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnwrapPromise_1___c<TResult>*>::get>();
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1___c<TResult>::setStaticF___9__8_0(::System::Threading::WaitCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::WaitCallback*, "<>9__8_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnwrapPromise_1___c<TResult>*>::get>(
      std::forward<::System::Threading::WaitCallback*>(value));
}
template <typename TResult> inline ::System::Threading::WaitCallback* System::Threading::Tasks::UnwrapPromise_1___c<TResult>::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Threading::WaitCallback*, "<>9__8_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnwrapPromise_1___c<TResult>*>::get>();
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1___c<TResult>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnwrapPromise_1___c<TResult>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1___c<TResult>::_InvokeCoreAsync_b__8_0(::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnwrapPromise_1___c<TResult>*>::get(), "<InvokeCoreAsync>b__8_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
template <typename TResult> inline ::System::Threading::Tasks::UnwrapPromise_1___c<TResult>* System::Threading::Tasks::UnwrapPromise_1___c<TResult>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::UnwrapPromise_1___c<TResult>*>());
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outerTask, lookForOce);
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1<TResult>::Invoke(::System::Threading::Tasks::Task* completingTask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, completingTask);
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1<TResult>::InvokeCore(::System::Threading::Tasks::Task* completingTask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>::get(), "InvokeCore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, completingTask);
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1<TResult>::InvokeCoreAsync(::System::Threading::Tasks::Task* completingTask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>::get(), "InvokeCoreAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, completingTask);
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1<TResult>::ProcessCompletedOuterTask(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>::get(), "ProcessCompletedOuterTask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
template <typename TResult> inline bool System::Threading::Tasks::UnwrapPromise_1<TResult>::TrySetFromTask(::System::Threading::Tasks::Task* task, bool lookForOce) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>::get(), "TrySetFromTask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, task, lookForOce);
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1<TResult>::ProcessInnerTask(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>::get(), "ProcessInnerTask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
template <typename TResult> inline bool System::Threading::Tasks::UnwrapPromise_1<TResult>::get_InvokeMayRunArbitraryCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>::get(),
                                                                             "get_InvokeMayRunArbitraryCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TResult>
inline ::System::Threading::Tasks::UnwrapPromise_1<TResult>* System::Threading::Tasks::UnwrapPromise_1<TResult>::New_ctor(::System::Threading::Tasks::Task* outerTask, bool lookForOce) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>(outerTask, lookForOce));
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
