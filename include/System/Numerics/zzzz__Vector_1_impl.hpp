#pragma once
// IWYU pragma private; include "System\Numerics\Vector_1.hpp"
#include "System/Numerics/zzzz__Register_impl.hpp"
#include "System/Numerics/zzzz__Vector_1_def.hpp"
#include "System/Numerics/zzzz__Register_def.hpp"
#include "System/Numerics/zzzz__Vector_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline void System::Numerics::Vector_1<T>::setStaticF_s_count(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_count", ::System::Numerics::Vector_1<T>>(std::forward<int32_t>(value));
}
template <typename T> inline int32_t System::Numerics::Vector_1<T>::getStaticF_s_count() {
  return ::cordl_internals::getStaticField<int32_t, "s_count", ::System::Numerics::Vector_1<T>>();
}
template <typename T> inline void System::Numerics::Vector_1<T>::setStaticF_s_zero(::System::Numerics::Vector_1<T> value) {
  ::cordl_internals::setStaticField<::System::Numerics::Vector_1<T>, "s_zero", ::System::Numerics::Vector_1<T>>(std::forward<::System::Numerics::Vector_1<T>>(value));
}
template <typename T> inline ::System::Numerics::Vector_1<T> System::Numerics::Vector_1<T>::getStaticF_s_zero() {
  return ::cordl_internals::getStaticField<::System::Numerics::Vector_1<T>, "s_zero", ::System::Numerics::Vector_1<T>>();
}
template <typename T> inline void System::Numerics::Vector_1<T>::setStaticF_s_one(::System::Numerics::Vector_1<T> value) {
  ::cordl_internals::setStaticField<::System::Numerics::Vector_1<T>, "s_one", ::System::Numerics::Vector_1<T>>(std::forward<::System::Numerics::Vector_1<T>>(value));
}
template <typename T> inline ::System::Numerics::Vector_1<T> System::Numerics::Vector_1<T>::getStaticF_s_one() {
  return ::cordl_internals::getStaticField<::System::Numerics::Vector_1<T>, "s_one", ::System::Numerics::Vector_1<T>>();
}
template <typename T> inline void System::Numerics::Vector_1<T>::setStaticF_s_allOnes(::System::Numerics::Vector_1<T> value) {
  ::cordl_internals::setStaticField<::System::Numerics::Vector_1<T>, "s_allOnes", ::System::Numerics::Vector_1<T>>(std::forward<::System::Numerics::Vector_1<T>>(value));
}
template <typename T> inline ::System::Numerics::Vector_1<T> System::Numerics::Vector_1<T>::getStaticF_s_allOnes() {
  return ::cordl_internals::getStaticField<::System::Numerics::Vector_1<T>, "s_allOnes", ::System::Numerics::Vector_1<T>>();
}
template <typename T> inline int32_t System::Numerics::Vector_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Vector_1<T>>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Numerics::Vector_1<T> System::Numerics::Vector_1<T>::get_Zero() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Vector_1<T>>(), { "get_Zero", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::Vector_1<T>>(nullptr, ___internal_method);
}
template <typename T> inline int32_t System::Numerics::Vector_1<T>::InitializeCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Vector_1<T>>(), { "InitializeCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
template <typename T> inline void System::Numerics::Vector_1<T>::_ctor(T value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Vector_1<T>>(), { ".ctor", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline void System::Numerics::Vector_1<T>::_ctor(void* dataPointer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Vector_1<T>>(), { ".ctor", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dataPointer);
}
template <typename T> inline void System::Numerics::Vector_1<T>::_ctor(void* dataPointer, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Vector_1<T>>(), { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dataPointer, offset);
}
template <typename T> inline void System::Numerics::Vector_1<T>::_ctor(::by_ref<::System::Numerics::Register> existingRegister) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Vector_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::System::Numerics::Register>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, existingRegister);
}
template <typename T> inline T System::Numerics::Vector_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Vector_1<T>>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template <typename T> inline bool System::Numerics::Vector_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Numerics::Vector_1<T>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename T> inline bool System::Numerics::Vector_1<T>::Equals(::System::Numerics::Vector_1<T> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Vector_1<T>>(), { "Equals", {}, { ::i2c::type_of<::System::Numerics::Vector_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename T> inline int32_t System::Numerics::Vector_1<T>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Numerics::Vector_1<T>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline ::StringW System::Numerics::Vector_1<T>::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Numerics::Vector_1<T>>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template <typename T> inline ::StringW System::Numerics::Vector_1<T>::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Vector_1<T>>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
template <typename T> inline bool System::Numerics::Vector_1<T>::op_Equality(::System::Numerics::Vector_1<T> left, ::System::Numerics::Vector_1<T> right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Vector_1<T>>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::System::Numerics::Vector_1<T>>(), ::i2c::type_of<::System::Numerics::Vector_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
template <typename T> inline bool System::Numerics::Vector_1<T>::op_Inequality(::System::Numerics::Vector_1<T> left, ::System::Numerics::Vector_1<T> right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Vector_1<T>>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::System::Numerics::Vector_1<T>>(), ::i2c::type_of<::System::Numerics::Vector_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
template <typename T> inline ::System::Numerics::Vector_1<uint64_t> System::Numerics::Vector_1<T>::op_Explicit___System__Numerics__Vector_1_uint64_t_(::System::Numerics::Vector_1<T> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Vector_1<T>>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Numerics::Vector_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::Vector_1<uint64_t>>(nullptr, ___internal_method, value);
}
template <typename T> inline ::System::Numerics::Vector_1<T> System::Numerics::Vector_1<T>::Equals(::System::Numerics::Vector_1<T> left, ::System::Numerics::Vector_1<T> right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Vector_1<T>>(),
                                                           { "Equals", {}, { ::i2c::type_of<::System::Numerics::Vector_1<T>>(), ::i2c::type_of<::System::Numerics::Vector_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::Vector_1<T>>(nullptr, ___internal_method, left, right);
}
template <typename T> inline bool System::Numerics::Vector_1<T>::ScalarEquals(T left, T right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Vector_1<T>>(), { "ScalarEquals", {}, { ::i2c::type_of<T>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
template <typename T> inline T System::Numerics::Vector_1<T>::GetOneValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Vector_1<T>>(), { "GetOneValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template <typename T> inline T System::Numerics::Vector_1<T>::GetAllBitsSetValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Vector_1<T>>(), { "GetAllBitsSetValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Numerics::Vector_1<T>>"
template <typename T> constexpr System::Numerics::Vector_1<T>::operator ::System::IEquatable_1<::System::Numerics::Vector_1<T>>*() {
  return static_cast<::System::IEquatable_1<::System::Numerics::Vector_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Numerics::Vector_1<T>>"
template <typename T> constexpr ::System::IEquatable_1<::System::Numerics::Vector_1<T>>* System::Numerics::Vector_1<T>::i___System__IEquatable_1___System__Numerics__Vector_1_T__() {
  return static_cast<::System::IEquatable_1<::System::Numerics::Vector_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
template <typename T> constexpr System::Numerics::Vector_1<T>::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
template <typename T> constexpr ::System::IFormattable* System::Numerics::Vector_1<T>::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_cordl_register", ty: "::System::Numerics::Register", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::Numerics::Vector_1<T>::Vector_1(::System::Numerics::Register _cordl_register) noexcept {
  this->_cordl_register = _cordl_register;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Numerics::Vector_1<T>::Vector_1() {}
// Ctor Parameters [CppParam { name: "_placeholder", ty: "::System::Numerics::Vector_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_byte", ty: "uint8_t", modifiers: "", def_value:
// Some("{}") }]
template <typename T> constexpr ::System::Numerics::Vector_1_VectorSizeHelper<T>::Vector_1_VectorSizeHelper(::System::Numerics::Vector_1<T> _placeholder, uint8_t _byte) noexcept {
  this->_placeholder = _placeholder;
  this->_byte = _byte;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Numerics::Vector_1_VectorSizeHelper<T>::Vector_1_VectorSizeHelper() {}
