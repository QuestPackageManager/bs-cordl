#pragma once
// IWYU pragma private; include "System/Threading/AsyncLocal_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__AsyncLocal_1_def.hpp"
#include "System/Threading/zzzz__AsyncLocalValueChangedArgs_1_def.hpp"
#include "System/Threading/zzzz__IAsyncLocal_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::Threading::IAsyncLocal"
template <typename T> constexpr System::Threading::AsyncLocal_1<T>::operator ::System::Threading::IAsyncLocal*() noexcept {
  return static_cast<::System::Threading::IAsyncLocal*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::IAsyncLocal"
template <typename T> constexpr ::System::Threading::IAsyncLocal* System::Threading::AsyncLocal_1<T>::i___System__Threading__IAsyncLocal() noexcept {
  return static_cast<::System::Threading::IAsyncLocal*>(static_cast<void*>(this));
}
template <typename T> constexpr ::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*& System::Threading::AsyncLocal_1<T>::__cordl_internal_get_m_valueChangedHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_valueChangedHandler;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*> const&
System::Threading::AsyncLocal_1<T>::__cordl_internal_get_m_valueChangedHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_valueChangedHandler;
}
template <typename T> constexpr void System::Threading::AsyncLocal_1<T>::__cordl_internal_set_m_valueChangedHandler(::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_valueChangedHandler, value);
}
template <typename T>
inline ::System::Threading::AsyncLocal_1<T>* System::Threading::AsyncLocal_1<T>::New_ctor(::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>* valueChangedHandler) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::AsyncLocal_1<T>*>(valueChangedHandler));
}
template <typename T> inline void System::Threading::AsyncLocal_1<T>::_ctor(::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>* valueChangedHandler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AsyncLocal_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, valueChangedHandler);
}
template <typename T> inline void System::Threading::AsyncLocal_1<T>::set_Value(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AsyncLocal_1<T>*>::get(), "set_Value",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T>
inline void System::Threading::AsyncLocal_1<T>::System_Threading_IAsyncLocal_OnValueChanged(::System::Object* previousValueObj, ::System::Object* currentValueObj, bool contextChanged) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AsyncLocal_1<T>*>::get(), "System.Threading.IAsyncLocal.OnValueChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, previousValueObj, currentValueObj, contextChanged);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Threading::AsyncLocal_1<T>::AsyncLocal_1() {}
