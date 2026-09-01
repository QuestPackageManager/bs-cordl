#pragma once
// IWYU pragma private; include "GlobalNamespace\RequiredArgument_1.hpp"
#include "GlobalNamespace/zzzz__ArgumentBase_impl.hpp"
#include "GlobalNamespace/zzzz__RequiredArgument_1_def.hpp"
template <typename T> constexpr T& GlobalNamespace::RequiredArgument_1<T>::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename T> constexpr T const& GlobalNamespace::RequiredArgument_1<T>::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename T> constexpr void GlobalNamespace::RequiredArgument_1<T>::__cordl_internal_set__value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
template <typename T> constexpr bool& GlobalNamespace::RequiredArgument_1<T>::__cordl_internal_get__hasValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasValue;
}
template <typename T> constexpr bool const& GlobalNamespace::RequiredArgument_1<T>::__cordl_internal_get__hasValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasValue;
}
template <typename T> constexpr void GlobalNamespace::RequiredArgument_1<T>::__cordl_internal_set__hasValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasValue = value;
}
template <typename T> inline T GlobalNamespace::RequiredArgument_1<T>::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RequiredArgument_1<T>*>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::RequiredArgument_1<T>::get_hasValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RequiredArgument_1<T>*>(), { "get_hasValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::RequiredArgument_1<T>::get_isOptional() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RequiredArgument_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::RequiredArgument_1<T>::_ctor(::StringW name, ::StringW description, ::ArrayW<::StringW> autocompleteValues) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RequiredArgument_1<T>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, description, autocompleteValues);
}
template <typename T> inline void GlobalNamespace::RequiredArgument_1<T>::SetAutocompleteValues(::ArrayW<::StringW> newAutocompleteValues) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RequiredArgument_1<T>*>(), { "SetAutocompleteValues", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newAutocompleteValues);
}
template <typename T> inline bool GlobalNamespace::RequiredArgument_1<T>::TryParseWithValue(::StringW inValue, ::by_ref<::StringW> outError) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RequiredArgument_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, inValue, outError);
}
template <typename T> inline void GlobalNamespace::RequiredArgument_1<T>::Reset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RequiredArgument_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::RequiredArgument_1<T>::op_Implicit_T(::GlobalNamespace::RequiredArgument_1<T>* argument) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RequiredArgument_1<T>*>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::RequiredArgument_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, argument);
}
template <typename T> inline ::StringW GlobalNamespace::RequiredArgument_1<T>::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RequiredArgument_1<T>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::RequiredArgument_1<T>* GlobalNamespace::RequiredArgument_1<T>::New_ctor(::StringW name, ::StringW description, ::ArrayW<::StringW> autocompleteValues) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RequiredArgument_1<T>*>(name, description, autocompleteValues));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::RequiredArgument_1<T>::RequiredArgument_1() {}
