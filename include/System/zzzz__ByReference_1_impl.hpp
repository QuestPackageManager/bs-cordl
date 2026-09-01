#pragma once
// IWYU pragma private; include "System\ByReference_1.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__ByReference_1_def.hpp"
template <typename T> inline void System::ByReference_1<T>::_ctor(::by_ref<T> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ByReference_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline ::by_ref<T> System::ByReference_1<T>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ByReference_1<T>>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_value", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::ByReference_1<T>::ByReference_1(::System::IntPtr _value) noexcept {
  this->_value = _value;
}
// Ctor Parameters []
template <typename T> constexpr ::System::ByReference_1<T>::ByReference_1() {}
