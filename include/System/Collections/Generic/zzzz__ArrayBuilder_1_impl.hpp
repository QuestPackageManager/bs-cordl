#pragma once
// IWYU pragma private; include "System\Collections\Generic\ArrayBuilder_1.hpp"
#include "System/Collections/Generic/zzzz__ArrayBuilder_1_def.hpp"
template <typename T> inline int32_t System::Collections::Generic::ArrayBuilder_1<T>::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArrayBuilder_1<T>>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline int32_t System::Collections::Generic::ArrayBuilder_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArrayBuilder_1<T>>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline T System::Collections::Generic::ArrayBuilder_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArrayBuilder_1<T>>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template <typename T> inline void System::Collections::Generic::ArrayBuilder_1<T>::Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArrayBuilder_1<T>>(), { "Add", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
template <typename T> inline void System::Collections::Generic::ArrayBuilder_1<T>::UncheckedAdd(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArrayBuilder_1<T>>(), { "UncheckedAdd", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
template <typename T> inline void System::Collections::Generic::ArrayBuilder_1<T>::EnsureCapacity(int32_t minimum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArrayBuilder_1<T>>(), { "EnsureCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, minimum);
}
// Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::Collections::Generic::ArrayBuilder_1<T>::ArrayBuilder_1(::ArrayW<T> _array, int32_t _count) noexcept {
  this->_array = _array;
  this->_count = _count;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::ArrayBuilder_1<T>::ArrayBuilder_1() {}
