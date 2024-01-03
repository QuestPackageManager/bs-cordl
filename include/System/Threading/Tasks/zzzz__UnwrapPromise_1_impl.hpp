#pragma once
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__UnwrapPromise_1_def.hpp"
#include "System/Threading/Tasks/zzzz__UnwrapPromise_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
template <typename TResult> inline void System::Threading::Tasks::__UnwrapPromise_1____c<TResult>::setStaticF___9(::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>*>::get>(
      std::forward<::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>*>(value));
}
template <typename TResult> inline ::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>* System::Threading::Tasks::__UnwrapPromise_1____c<TResult>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>*>::get>();
}
template <typename TResult> inline void System::Threading::Tasks::__UnwrapPromise_1____c<TResult>::setStaticF___9__8_0(::System::Threading::WaitCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::WaitCallback*, "<>9__8_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>*>::get>(
      std::forward<::System::Threading::WaitCallback*>(value));
}
template <typename TResult> inline ::System::Threading::WaitCallback* System::Threading::Tasks::__UnwrapPromise_1____c<TResult>::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Threading::WaitCallback*, "<>9__8_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>*>::get>();
}
template <typename TResult> inline ::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>* System::Threading::Tasks::__UnwrapPromise_1____c<TResult>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>*>());
}
template <typename TResult> inline void System::Threading::Tasks::__UnwrapPromise_1____c<TResult>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline void System::Threading::Tasks::__UnwrapPromise_1____c<TResult>::_InvokeCoreAsync_b__8_0(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>*>::get(), "<InvokeCoreAsync>b__8_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Threading::Tasks::__UnwrapPromise_1____c<TResult>::__UnwrapPromise_1____c() {}
/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
template <typename TResult> constexpr System::Threading::Tasks::UnwrapPromise_1<TResult>::operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept {
  return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
template <typename TResult> constexpr uint8_t& System::Threading::Tasks::UnwrapPromise_1<TResult>::__get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
template <typename TResult> constexpr uint8_t const& System::Threading::Tasks::UnwrapPromise_1<TResult>::__get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
template <typename TResult> constexpr void System::Threading::Tasks::UnwrapPromise_1<TResult>::__set__state(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
template <typename TResult> constexpr bool& System::Threading::Tasks::UnwrapPromise_1<TResult>::__get__lookForOce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lookForOce;
}
template <typename TResult> constexpr bool const& System::Threading::Tasks::UnwrapPromise_1<TResult>::__get__lookForOce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lookForOce;
}
template <typename TResult> constexpr void System::Threading::Tasks::UnwrapPromise_1<TResult>::__set__lookForOce(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lookForOce = value;
}
template <typename TResult>
inline ::System::Threading::Tasks::UnwrapPromise_1<TResult>* System::Threading::Tasks::UnwrapPromise_1<TResult>::New_ctor(::System::Threading::Tasks::Task* outerTask, bool lookForOce) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>(outerTask, lookForOce));
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1<TResult>::_ctor(::System::Threading::Tasks::Task* outerTask, bool lookForOce) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outerTask, lookForOce);
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1<TResult>::Invoke(::System::Threading::Tasks::Task* completingTask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, completingTask);
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1<TResult>::InvokeCore(::System::Threading::Tasks::Task* completingTask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>::get(), "InvokeCore", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, completingTask);
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1<TResult>::InvokeCoreAsync(::System::Threading::Tasks::Task* completingTask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>::get(), "InvokeCoreAsync", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, completingTask);
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1<TResult>::ProcessCompletedOuterTask(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>::get(), "ProcessCompletedOuterTask",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
template <typename TResult> inline bool System::Threading::Tasks::UnwrapPromise_1<TResult>::TrySetFromTask(::System::Threading::Tasks::Task* task, bool lookForOce) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>::get(), "TrySetFromTask", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, task, lookForOce);
}
template <typename TResult> inline void System::Threading::Tasks::UnwrapPromise_1<TResult>::ProcessInnerTask(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>::get(), "ProcessInnerTask", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
template <typename TResult> inline bool System::Threading::Tasks::UnwrapPromise_1<TResult>::get_InvokeMayRunArbitraryCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnwrapPromise_1<TResult>*>::get(),
                                                                             "get_InvokeMayRunArbitraryCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Threading::Tasks::UnwrapPromise_1<TResult>::UnwrapPromise_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
