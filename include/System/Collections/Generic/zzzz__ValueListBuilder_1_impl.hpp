#pragma once
// IWYU pragma private; include "System\Collections\Generic\ValueListBuilder_1.hpp"
#include "System/zzzz__Span_1_impl.hpp"
#include "System/Collections/Generic/zzzz__ValueListBuilder_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
template <typename T> inline void System::Collections::Generic::ValueListBuilder_1<T>::_ctor(::System::Span_1<T> initialSpan) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ValueListBuilder_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::System::Span_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initialSpan);
}
template <typename T> inline int32_t System::Collections::Generic::ValueListBuilder_1<T>::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ValueListBuilder_1<T>>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::ValueListBuilder_1<T>::Append(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ValueListBuilder_1<T>>(), { "Append", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
template <typename T> inline ::System::ReadOnlySpan_1<T> System::Collections::Generic::ValueListBuilder_1<T>::AsSpan() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ValueListBuilder_1<T>>(), { "AsSpan", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>>(*this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::ValueListBuilder_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ValueListBuilder_1<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::ValueListBuilder_1<T>::Grow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ValueListBuilder_1<T>>(), { "Grow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_span", ty: "::System::Span_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_arrayFromPool", ty: "::ArrayW<T>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::Collections::Generic::ValueListBuilder_1<T>::ValueListBuilder_1(::System::Span_1<T> _span, ::ArrayW<T> _arrayFromPool, int32_t _pos) noexcept {
  this->_span = _span;
  this->_arrayFromPool = _arrayFromPool;
  this->_pos = _pos;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::ValueListBuilder_1<T>::ValueListBuilder_1() {}
