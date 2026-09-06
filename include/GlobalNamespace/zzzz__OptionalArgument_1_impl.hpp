#pragma once
// IWYU pragma private; include "GlobalNamespace/OptionalArgument_1.hpp"
#include "GlobalNamespace/zzzz__RequiredArgument_1_impl.hpp"
#include "GlobalNamespace/zzzz__OptionalArgument_1_def.hpp"
template <typename T> constexpr T& GlobalNamespace::OptionalArgument_1<T>::__cordl_internal_get__defaultValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue;
}
template <typename T> constexpr T const& GlobalNamespace::OptionalArgument_1<T>::__cordl_internal_get__defaultValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue;
}
template <typename T> constexpr void GlobalNamespace::OptionalArgument_1<T>::__cordl_internal_set__defaultValue(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultValue = value;
}
template <typename T> inline bool GlobalNamespace::OptionalArgument_1<T>::get_isOptional() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OptionalArgument_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OptionalArgument_1<T>::_ctor(::StringW name, ::StringW description, T defaultValue, ::ArrayW<::StringW> autocompleteValues) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OptionalArgument_1<T>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, description, defaultValue, autocompleteValues);
}
template <typename T> inline T GlobalNamespace::OptionalArgument_1<T>::GetValueOrDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OptionalArgument_1<T>*>(), { "GetValueOrDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T>
inline ::GlobalNamespace::OptionalArgument_1<T>* GlobalNamespace::OptionalArgument_1<T>::New_ctor(::StringW name, ::StringW description, T defaultValue, ::ArrayW<::StringW> autocompleteValues) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OptionalArgument_1<T>*>(name, description, defaultValue, autocompleteValues));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OptionalArgument_1<T>::OptionalArgument_1() {}
