#pragma once
// IWYU pragma private; include "System\Span_1.hpp"
#include "System/zzzz__ByReference_1_impl.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
template <typename T> inline void System::Span_1<T>::_ctor(::ArrayW<T> array) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Span_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
template <typename T> inline void System::Span_1<T>::_ctor(::ArrayW<T> array, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Span_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array, start, length);
}
template <typename T> inline void System::Span_1<T>::_ctor(void* pointer, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Span_1<T>>(), { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pointer, length);
}
template <typename T> inline void System::Span_1<T>::_ctor(::by_ref<T> ptr, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Span_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, length);
}
template <typename T> inline ::by_ref<T> System::Span_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Span_1<T>>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method, index);
}
template <typename T> inline ::by_ref<T> System::Span_1<T>::GetPinnableReference() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Span_1<T>>(), { "GetPinnableReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method);
}
template <typename T> inline void System::Span_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Span_1<T>>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void System::Span_1<T>::Fill(T value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Span_1<T>>(), { "Fill", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline void System::Span_1<T>::CopyTo(::System::Span_1<T> destination) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Span_1<T>>(), { "CopyTo", {}, { ::i2c::type_of<::System::Span_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, destination);
}
template <typename T> inline bool System::Span_1<T>::TryCopyTo(::System::Span_1<T> destination) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Span_1<T>>(), { "TryCopyTo", {}, { ::i2c::type_of<::System::Span_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, destination);
}
template <typename T> inline ::System::ReadOnlySpan_1<T> System::Span_1<T>::op_Implicit___System__ReadOnlySpan_1_T_(::System::Span_1<T> span) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Span_1<T>>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Span_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>>(nullptr, ___internal_method, span);
}
template <typename T> inline ::StringW System::Span_1<T>::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Span_1<T>>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template <typename T> inline ::System::Span_1<T> System::Span_1<T>::Slice(int32_t start) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Span_1<T>>(), { "Slice", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>>(*this, ___internal_method, start);
}
template <typename T> inline ::System::Span_1<T> System::Span_1<T>::Slice(int32_t start, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Span_1<T>>(), { "Slice", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>>(*this, ___internal_method, start, length);
}
template <typename T> inline ::ArrayW<T> System::Span_1<T>::ToArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Span_1<T>>(), { "ToArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(*this, ___internal_method);
}
template <typename T> inline int32_t System::Span_1<T>::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Span_1<T>>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline bool System::Span_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Span_1<T>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename T> inline int32_t System::Span_1<T>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Span_1<T>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline ::System::Span_1<T> System::Span_1<T>::op_Implicit___System__Span_1_T_(::ArrayW<T> array) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Span_1<T>>(), { "op_Implicit", {}, { ::i2c::type_of<::ArrayW<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>>(nullptr, ___internal_method, array);
}
// Ctor Parameters [CppParam { name: "_pointer", ty: "::System::ByReference_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
template <typename T> constexpr ::System::Span_1<T>::Span_1(::System::ByReference_1<T> _pointer, int32_t _length) noexcept {
  this->_pointer = _pointer;
  this->_length = _length;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Span_1<T>::Span_1() {}
