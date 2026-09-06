#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/SerializableDictionary.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableDictionaryBase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableDictionary_def.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableDictionary_def.hpp"
template <typename T> constexpr T& BGLib::UnityExtension::SerializableDictionary_Storage_1<T>::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
template <typename T> constexpr T const& BGLib::UnityExtension::SerializableDictionary_Storage_1<T>::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
template <typename T> constexpr void BGLib::UnityExtension::SerializableDictionary_Storage_1<T>::__cordl_internal_set_data(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
template <typename T> inline void BGLib::UnityExtension::SerializableDictionary_Storage_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionary_Storage_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::BGLib::UnityExtension::SerializableDictionary_Storage_1<T>* BGLib::UnityExtension::SerializableDictionary_Storage_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::SerializableDictionary_Storage_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::BGLib::UnityExtension::SerializableDictionary_Storage_1<T>::SerializableDictionary_Storage_1() {}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::SerializableDictionary::SerializableDictionary() {}
