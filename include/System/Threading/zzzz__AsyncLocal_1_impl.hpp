#pragma once
// IWYU pragma private; include "System\Threading\AsyncLocal_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__AsyncLocal_1_def.hpp"
#include "System/Threading/zzzz__AsyncLocalValueChangedArgs_1_def.hpp"
#include "System/Threading/zzzz__IAsyncLocal_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> constexpr ::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*& System::Threading::AsyncLocal_1<T>::__cordl_internal_get_m_valueChangedHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_valueChangedHandler;
}
template <typename T>
constexpr ::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>* const& System::Threading::AsyncLocal_1<T>::__cordl_internal_get_m_valueChangedHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_valueChangedHandler;
}
template <typename T> constexpr void System::Threading::AsyncLocal_1<T>::__cordl_internal_set_m_valueChangedHandler(::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_valueChangedHandler = value;
}
template <typename T> inline void System::Threading::AsyncLocal_1<T>::_ctor(::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>* valueChangedHandler) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::AsyncLocal_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, valueChangedHandler);
}
template <typename T> inline void System::Threading::AsyncLocal_1<T>::set_Value(T value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::AsyncLocal_1<T>*>(), { "set_Value", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T>
inline void System::Threading::AsyncLocal_1<T>::System_Threading_IAsyncLocal_OnValueChanged(::System::Object* previousValueObj, ::System::Object* currentValueObj, bool contextChanged) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::AsyncLocal_1<T>*>(),
                                       { "System.Threading.IAsyncLocal.OnValueChanged", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previousValueObj, currentValueObj, contextChanged);
}
template <typename T>
inline ::System::Threading::AsyncLocal_1<T>* System::Threading::AsyncLocal_1<T>::New_ctor(::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>* valueChangedHandler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::AsyncLocal_1<T>*>(valueChangedHandler));
}
/// @brief Convert operator to "::System::Threading::IAsyncLocal"
template <typename T> constexpr System::Threading::AsyncLocal_1<T>::operator ::System::Threading::IAsyncLocal*() noexcept {
  return static_cast<::System::Threading::IAsyncLocal*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::IAsyncLocal"
template <typename T> constexpr ::System::Threading::IAsyncLocal* System::Threading::AsyncLocal_1<T>::i___System__Threading__IAsyncLocal() noexcept {
  return static_cast<::System::Threading::IAsyncLocal*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Threading::AsyncLocal_1<T>::AsyncLocal_1() {}
