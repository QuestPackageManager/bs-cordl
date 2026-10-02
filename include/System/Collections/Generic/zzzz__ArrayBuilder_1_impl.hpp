#pragma once
// IWYU pragma private; include "System/Collections/Generic/ArrayBuilder_1.hpp"
#include "System/Collections/Generic/zzzz__ArrayBuilder_1_def.hpp"
template <typename T> inline void System::Collections::Generic::ArrayBuilder_1<T>::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArrayBuilder_1<T>>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity);
}
template <typename T> inline ::ArrayW<T> System::Collections::Generic::ArrayBuilder_1<T>::ToArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArrayBuilder_1<T>>(), { "ToArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(*this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::ArrayBuilder_1<T>::UncheckedAdd(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArrayBuilder_1<T>>(), { "UncheckedAdd", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
// Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}"),
// comment: None }]
template <typename T> constexpr ::System::Collections::Generic::ArrayBuilder_1<T>::ArrayBuilder_1(::ArrayW<T> _array, int32_t _count) noexcept {
  this->_array = _array;
  this->_count = _count;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::ArrayBuilder_1<T>::ArrayBuilder_1() {}
