#pragma once
// IWYU pragma private; include "System\Threading\Tasks\Task_WhenAllPromise_1.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_WhenAllPromise_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
template <typename T> constexpr ::ArrayW<::System::Threading::Tasks::Task_1<T>*>& GlobalNamespace::Task_WhenAllPromise_1<T>::__cordl_internal_get_m_tasks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tasks;
}
template <typename T> constexpr ::ArrayW<::System::Threading::Tasks::Task_1<T>*> const& GlobalNamespace::Task_WhenAllPromise_1<T>::__cordl_internal_get_m_tasks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tasks;
}
template <typename T> constexpr void GlobalNamespace::Task_WhenAllPromise_1<T>::__cordl_internal_set_m_tasks(::ArrayW<::System::Threading::Tasks::Task_1<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_tasks = value;
}
template <typename T> constexpr int32_t& GlobalNamespace::Task_WhenAllPromise_1<T>::__cordl_internal_get_m_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_count;
}
template <typename T> constexpr int32_t const& GlobalNamespace::Task_WhenAllPromise_1<T>::__cordl_internal_get_m_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_count;
}
template <typename T> constexpr void GlobalNamespace::Task_WhenAllPromise_1<T>::__cordl_internal_set_m_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_count = value;
}
template <typename T> inline void GlobalNamespace::Task_WhenAllPromise_1<T>::_ctor(::ArrayW<::System::Threading::Tasks::Task_1<T>*> tasks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Task_WhenAllPromise_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task_1<T>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tasks);
}
template <typename T> inline void GlobalNamespace::Task_WhenAllPromise_1<T>::Invoke(::System::Threading::Tasks::Task* ignored) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Task_WhenAllPromise_1<T>*>(), { "Invoke", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ignored);
}
template <typename T> inline bool GlobalNamespace::Task_WhenAllPromise_1<T>::get_ShouldNotifyDebuggerOfWaitCompletion() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Task_WhenAllPromise_1<T>*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::Task_WhenAllPromise_1<T>::get_InvokeMayRunArbitraryCode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Task_WhenAllPromise_1<T>*>(), { "get_InvokeMayRunArbitraryCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::Task_WhenAllPromise_1<T>* GlobalNamespace::Task_WhenAllPromise_1<T>::New_ctor(::ArrayW<::System::Threading::Tasks::Task_1<T>*> tasks) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Task_WhenAllPromise_1<T>*>(tasks));
}
/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
template <typename T> constexpr GlobalNamespace::Task_WhenAllPromise_1<T>::operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept {
  return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::ITaskCompletionAction"
template <typename T> constexpr ::System::Threading::Tasks::ITaskCompletionAction* GlobalNamespace::Task_WhenAllPromise_1<T>::i___System__Threading__Tasks__ITaskCompletionAction() noexcept {
  return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::Task_WhenAllPromise_1<T>::Task_WhenAllPromise_1() {}
