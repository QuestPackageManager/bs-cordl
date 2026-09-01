#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\StrongBox_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__StrongBox_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IStrongBox_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> constexpr T& System::Runtime::CompilerServices::StrongBox_1<T>::__cordl_internal_get_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
template <typename T> constexpr T const& System::Runtime::CompilerServices::StrongBox_1<T>::__cordl_internal_get_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
template <typename T> constexpr void System::Runtime::CompilerServices::StrongBox_1<T>::__cordl_internal_set_Value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Value = value;
}
template <typename T> inline void System::Runtime::CompilerServices::StrongBox_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::StrongBox_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::CompilerServices::StrongBox_1<T>::_ctor(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::StrongBox_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::System::Object* System::Runtime::CompilerServices::StrongBox_1<T>::System_Runtime_CompilerServices_IStrongBox_get_Value() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::StrongBox_1<T>*>(), { "System.Runtime.CompilerServices.IStrongBox.get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::CompilerServices::StrongBox_1<T>::System_Runtime_CompilerServices_IStrongBox_set_Value(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::StrongBox_1<T>*>(),
                                                                                         { "System.Runtime.CompilerServices.IStrongBox.set_Value", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::System::Runtime::CompilerServices::StrongBox_1<T>* System::Runtime::CompilerServices::StrongBox_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::StrongBox_1<T>*>());
}
template <typename T> inline ::System::Runtime::CompilerServices::StrongBox_1<T>* System::Runtime::CompilerServices::StrongBox_1<T>::New_ctor(T value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::StrongBox_1<T>*>(value));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IStrongBox"
template <typename T> constexpr System::Runtime::CompilerServices::StrongBox_1<T>::operator ::System::Runtime::CompilerServices::IStrongBox*() noexcept {
  return static_cast<::System::Runtime::CompilerServices::IStrongBox*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IStrongBox"
template <typename T> constexpr ::System::Runtime::CompilerServices::IStrongBox* System::Runtime::CompilerServices::StrongBox_1<T>::i___System__Runtime__CompilerServices__IStrongBox() noexcept {
  return static_cast<::System::Runtime::CompilerServices::IStrongBox*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Runtime::CompilerServices::StrongBox_1<T>::StrongBox_1() {}
