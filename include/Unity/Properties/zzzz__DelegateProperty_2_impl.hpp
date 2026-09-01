#pragma once
// IWYU pragma private; include "Unity\Properties\DelegateProperty_2.hpp"
#include "Unity/Properties/zzzz__Property_2_impl.hpp"
#include "Unity/Properties/zzzz__DelegateProperty_2_def.hpp"
#include "Unity/Properties/zzzz__PropertyGetter_2_def.hpp"
#include "Unity/Properties/zzzz__PropertySetter_2_def.hpp"
template <typename TContainer, typename TValue>
constexpr ::Unity::Properties::PropertyGetter_2<TContainer, TValue>*& Unity::Properties::DelegateProperty_2<TContainer, TValue>::__cordl_internal_get_m_Getter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Getter;
}
template <typename TContainer, typename TValue>
constexpr ::Unity::Properties::PropertyGetter_2<TContainer, TValue>* const& Unity::Properties::DelegateProperty_2<TContainer, TValue>::__cordl_internal_get_m_Getter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Getter;
}
template <typename TContainer, typename TValue>
constexpr void Unity::Properties::DelegateProperty_2<TContainer, TValue>::__cordl_internal_set_m_Getter(::Unity::Properties::PropertyGetter_2<TContainer, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Getter = value;
}
template <typename TContainer, typename TValue>
constexpr ::Unity::Properties::PropertySetter_2<TContainer, TValue>*& Unity::Properties::DelegateProperty_2<TContainer, TValue>::__cordl_internal_get_m_Setter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Setter;
}
template <typename TContainer, typename TValue>
constexpr ::Unity::Properties::PropertySetter_2<TContainer, TValue>* const& Unity::Properties::DelegateProperty_2<TContainer, TValue>::__cordl_internal_get_m_Setter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Setter;
}
template <typename TContainer, typename TValue>
constexpr void Unity::Properties::DelegateProperty_2<TContainer, TValue>::__cordl_internal_set_m_Setter(::Unity::Properties::PropertySetter_2<TContainer, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Setter = value;
}
template <typename TContainer, typename TValue> constexpr ::StringW& Unity::Properties::DelegateProperty_2<TContainer, TValue>::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
template <typename TContainer, typename TValue> constexpr ::StringW const& Unity::Properties::DelegateProperty_2<TContainer, TValue>::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
template <typename TContainer, typename TValue> constexpr void Unity::Properties::DelegateProperty_2<TContainer, TValue>::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
template <typename TContainer, typename TValue> inline ::StringW Unity::Properties::DelegateProperty_2<TContainer, TValue>::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::DelegateProperty_2<TContainer, TValue>*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TContainer, typename TValue> inline bool Unity::Properties::DelegateProperty_2<TContainer, TValue>::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::DelegateProperty_2<TContainer, TValue>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TContainer, typename TValue>
inline void Unity::Properties::DelegateProperty_2<TContainer, TValue>::_ctor(::StringW name, ::Unity::Properties::PropertyGetter_2<TContainer, TValue>* getter,
                                                                             ::Unity::Properties::PropertySetter_2<TContainer, TValue>* setter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::DelegateProperty_2<TContainer, TValue>*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::Properties::PropertyGetter_2<TContainer, TValue>*>(),
                                                                                             ::i2c::type_of<::Unity::Properties::PropertySetter_2<TContainer, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, getter, setter);
}
template <typename TContainer, typename TValue> inline TValue Unity::Properties::DelegateProperty_2<TContainer, TValue>::GetValue(::by_ref<TContainer> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::DelegateProperty_2<TContainer, TValue>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, container);
}
template <typename TContainer, typename TValue> inline void Unity::Properties::DelegateProperty_2<TContainer, TValue>::SetValue(::by_ref<TContainer> container, TValue value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::DelegateProperty_2<TContainer, TValue>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
template <typename TContainer, typename TValue>
inline ::Unity::Properties::DelegateProperty_2<TContainer, TValue>*
Unity::Properties::DelegateProperty_2<TContainer, TValue>::New_ctor(::StringW name, ::Unity::Properties::PropertyGetter_2<TContainer, TValue>* getter,
                                                                    ::Unity::Properties::PropertySetter_2<TContainer, TValue>* setter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::DelegateProperty_2<TContainer, TValue>*>(name, getter, setter));
}
// Ctor Parameters []
template <typename TContainer, typename TValue> constexpr ::Unity::Properties::DelegateProperty_2<TContainer, TValue>::DelegateProperty_2() {}
