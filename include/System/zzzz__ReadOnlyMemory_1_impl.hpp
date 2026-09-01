#pragma once
// IWYU pragma private; include "System\ReadOnlyMemory_1.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
template <typename T> inline void System::ReadOnlyMemory_1<T>::_ctor(::ArrayW<T> array) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ReadOnlyMemory_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
template <typename T> inline void System::ReadOnlyMemory_1<T>::_ctor(::ArrayW<T> array, int32_t start, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ReadOnlyMemory_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array, start, length);
}
template <typename T> inline void System::ReadOnlyMemory_1<T>::_ctor(::System::Object* obj, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ReadOnlyMemory_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, obj, start, length);
}
template <typename T> inline int32_t System::ReadOnlyMemory_1<T>::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ReadOnlyMemory_1<T>>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline ::StringW System::ReadOnlyMemory_1<T>::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ReadOnlyMemory_1<T>>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template <typename T> inline ::System::ReadOnlyMemory_1<T> System::ReadOnlyMemory_1<T>::Slice(int32_t start) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ReadOnlyMemory_1<T>>(), { "Slice", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlyMemory_1<T>>(*this, ___internal_method, start);
}
template <typename T> inline ::System::ReadOnlySpan_1<T> System::ReadOnlyMemory_1<T>::get_Span() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ReadOnlyMemory_1<T>>(), { "get_Span", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>>(*this, ___internal_method);
}
template <typename T> inline bool System::ReadOnlyMemory_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ReadOnlyMemory_1<T>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename T> inline bool System::ReadOnlyMemory_1<T>::Equals(::System::ReadOnlyMemory_1<T> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ReadOnlyMemory_1<T>>(), { "Equals", {}, { ::i2c::type_of<::System::ReadOnlyMemory_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename T> inline int32_t System::ReadOnlyMemory_1<T>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ReadOnlyMemory_1<T>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline int32_t System::ReadOnlyMemory_1<T>::CombineHashCodes(int32_t left, int32_t right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ReadOnlyMemory_1<T>>(), { "CombineHashCodes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, left, right);
}
template <typename T> inline int32_t System::ReadOnlyMemory_1<T>::CombineHashCodes(int32_t h1, int32_t h2, int32_t h3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ReadOnlyMemory_1<T>>(), { "CombineHashCodes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, h1, h2, h3);
}
template <typename T> inline ::System::Object* System::ReadOnlyMemory_1<T>::GetObjectStartLength(::by_ref<int32_t> start, ::by_ref<int32_t> length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ReadOnlyMemory_1<T>>(), { "GetObjectStartLength", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method, start, length);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::ReadOnlyMemory_1<T>>"
template <typename T> constexpr System::ReadOnlyMemory_1<T>::operator ::System::IEquatable_1<::System::ReadOnlyMemory_1<T>>*() {
  return static_cast<::System::IEquatable_1<::System::ReadOnlyMemory_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::ReadOnlyMemory_1<T>>"
template <typename T> constexpr ::System::IEquatable_1<::System::ReadOnlyMemory_1<T>>* System::ReadOnlyMemory_1<T>::i___System__IEquatable_1___System__ReadOnlyMemory_1_T__() {
  return static_cast<::System::IEquatable_1<::System::ReadOnlyMemory_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_object", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::ReadOnlyMemory_1<T>::ReadOnlyMemory_1(::System::Object* _object, int32_t _index, int32_t _length) noexcept {
  this->_object = _object;
  this->_index = _index;
  this->_length = _length;
}
// Ctor Parameters []
template <typename T> constexpr ::System::ReadOnlyMemory_1<T>::ReadOnlyMemory_1() {}
