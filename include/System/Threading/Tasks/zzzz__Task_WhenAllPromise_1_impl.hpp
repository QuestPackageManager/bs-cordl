#pragma once
// IWYU pragma private; include "System/Threading/Tasks/Task_WhenAllPromise_1.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_WhenAllPromise_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
template <typename T>
constexpr ::ArrayW<::System::Threading::Tasks::Task_1<T>*, ::Array<::System::Threading::Tasks::Task_1<T>*>*>& GlobalNamespace::Task_WhenAllPromise_1<T>::__cordl_internal_get_m_tasks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tasks;
}
template <typename T>
constexpr ::ArrayW<::System::Threading::Tasks::Task_1<T>*, ::Array<::System::Threading::Tasks::Task_1<T>*>*> const& GlobalNamespace::Task_WhenAllPromise_1<T>::__cordl_internal_get_m_tasks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tasks;
}
template <typename T>
constexpr void GlobalNamespace::Task_WhenAllPromise_1<T>::__cordl_internal_set_m_tasks(::ArrayW<::System::Threading::Tasks::Task_1<T>*, ::Array<::System::Threading::Tasks::Task_1<T>*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_tasks, value);
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
template <typename T> inline void GlobalNamespace::Task_WhenAllPromise_1<T>::_ctor(::ArrayW<::System::Threading::Tasks::Task_1<T>*, ::Array<::System::Threading::Tasks::Task_1<T>*>*> tasks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Task_WhenAllPromise_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::Tasks::Task_1<T>*, ::Array<::System::Threading::Tasks::Task_1<T>*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tasks);
}
template <typename T> inline void GlobalNamespace::Task_WhenAllPromise_1<T>::Invoke(::System::Threading::Tasks::Task* ignored) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Task_WhenAllPromise_1<T>*>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ignored);
}
template <typename T> inline bool GlobalNamespace::Task_WhenAllPromise_1<T>::get_ShouldNotifyDebuggerOfWaitCompletion() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Task_WhenAllPromise_1<T>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::Task_WhenAllPromise_1<T>::get_InvokeMayRunArbitraryCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Task_WhenAllPromise_1<T>*>::get(),
                                                                             "get_InvokeMayRunArbitraryCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T>
inline ::GlobalNamespace::Task_WhenAllPromise_1<T>*
GlobalNamespace::Task_WhenAllPromise_1<T>::New_ctor(::ArrayW<::System::Threading::Tasks::Task_1<T>*, ::Array<::System::Threading::Tasks::Task_1<T>*>*> tasks) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::Task_WhenAllPromise_1<T>*>(tasks));
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
