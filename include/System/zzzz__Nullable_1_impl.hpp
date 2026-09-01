#pragma once
// IWYU pragma private; include "System\Nullable_1.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline void System::Nullable_1<T>::_ctor(T value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Nullable_1<T>>(), { ".ctor", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline bool System::Nullable_1<T>::get_HasValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Nullable_1<T>>(), { "get_HasValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline T System::Nullable_1<T>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Nullable_1<T>>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline T System::Nullable_1<T>::GetValueOrDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Nullable_1<T>>(), { "GetValueOrDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline T System::Nullable_1<T>::GetValueOrDefault(T defaultValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Nullable_1<T>>(), { "GetValueOrDefault", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, defaultValue);
}
template <typename T> inline bool System::Nullable_1<T>::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Nullable_1<T>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename T> inline int32_t System::Nullable_1<T>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Nullable_1<T>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline ::StringW System::Nullable_1<T>::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Nullable_1<T>>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Nullable_1<T>::Box(::System::Nullable_1<T> o) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Nullable_1<T>>(), { "Box", {}, { ::i2c::type_of<::System::Nullable_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, o);
}
template <typename T> inline ::System::Nullable_1<T> System::Nullable_1<T>::Unbox(::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Nullable_1<T>>(), { "Unbox", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<T>>(nullptr, ___internal_method, o);
}
template <typename T> inline ::System::Nullable_1<T> System::Nullable_1<T>::UnboxExact(::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Nullable_1<T>>(), { "UnboxExact", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<T>>(nullptr, ___internal_method, o);
}
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "T", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::Nullable_1<T>::Nullable_1(bool hasValue, T value) noexcept {
  this->hasValue = hasValue;
  this->value = value;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Nullable_1<T>::Nullable_1() {}
