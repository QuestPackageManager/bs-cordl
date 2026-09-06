#pragma once
// IWYU pragma private; include "Unity/Properties/ContainerPropertyBag_1.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Properties/zzzz__INamedProperties_1_def.hpp"
#include "Unity/Properties/zzzz__IProperty_1_def.hpp"
#include "Unity/Properties/zzzz__PropertyCollection_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
template <typename TContainer>
constexpr ::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>*& Unity::Properties::ContainerPropertyBag_1<TContainer>::__cordl_internal_get_m_PropertiesList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PropertiesList;
}
template <typename TContainer>
constexpr ::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>* const&
Unity::Properties::ContainerPropertyBag_1<TContainer>::__cordl_internal_get_m_PropertiesList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PropertiesList;
}
template <typename TContainer>
constexpr void
Unity::Properties::ContainerPropertyBag_1<TContainer>::__cordl_internal_set_m_PropertiesList(::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PropertiesList = value;
}
template <typename TContainer>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Unity::Properties::IProperty_1<TContainer>*>*&
Unity::Properties::ContainerPropertyBag_1<TContainer>::__cordl_internal_get_m_PropertiesHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PropertiesHash;
}
template <typename TContainer>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Unity::Properties::IProperty_1<TContainer>*>* const&
Unity::Properties::ContainerPropertyBag_1<TContainer>::__cordl_internal_get_m_PropertiesHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PropertiesHash;
}
template <typename TContainer>
constexpr void Unity::Properties::ContainerPropertyBag_1<TContainer>::__cordl_internal_set_m_PropertiesHash(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Unity::Properties::IProperty_1<TContainer>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PropertiesHash = value;
}
template <typename TContainer>
template <typename TValue>
inline void Unity::Properties::ContainerPropertyBag_1<TContainer>::AddProperty(::Unity::Properties::Property_2<TContainer, TValue>* property) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ContainerPropertyBag_1<TContainer>*>(),
                                                           { "AddProperty", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<::Unity::Properties::Property_2<TContainer, TValue>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property);
}
template <typename TContainer> inline ::Unity::Properties::PropertyCollection_1<TContainer> Unity::Properties::ContainerPropertyBag_1<TContainer>::GetProperties() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::ContainerPropertyBag_1<TContainer>*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<TContainer>>(this, ___internal_method);
}
template <typename TContainer> inline ::Unity::Properties::PropertyCollection_1<TContainer> Unity::Properties::ContainerPropertyBag_1<TContainer>::GetProperties(::by_ref<TContainer> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::ContainerPropertyBag_1<TContainer>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<TContainer>>(this, ___internal_method, container);
}
template <typename TContainer>
inline bool Unity::Properties::ContainerPropertyBag_1<TContainer>::TryGetProperty(::by_ref<TContainer> container, ::StringW name, ::by_ref<::Unity::Properties::IProperty_1<TContainer>*> property) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Unity::Properties::ContainerPropertyBag_1<TContainer>*>(),
                       { "TryGetProperty", {}, { ::i2c::type_of<::by_ref<TContainer>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Unity::Properties::IProperty_1<TContainer>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, container, name, property);
}
template <typename TContainer> inline void Unity::Properties::ContainerPropertyBag_1<TContainer>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::ContainerPropertyBag_1<TContainer>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContainer> inline ::Unity::Properties::ContainerPropertyBag_1<TContainer>* Unity::Properties::ContainerPropertyBag_1<TContainer>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::ContainerPropertyBag_1<TContainer>*>());
}
/// @brief Convert operator to "::Unity::Properties::INamedProperties_1<TContainer>"
template <typename TContainer> constexpr Unity::Properties::ContainerPropertyBag_1<TContainer>::operator ::Unity::Properties::INamedProperties_1<TContainer>*() noexcept {
  return static_cast<::Unity::Properties::INamedProperties_1<TContainer>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::INamedProperties_1<TContainer>"
template <typename TContainer>
constexpr ::Unity::Properties::INamedProperties_1<TContainer>* Unity::Properties::ContainerPropertyBag_1<TContainer>::i___Unity__Properties__INamedProperties_1_TContainer_() noexcept {
  return static_cast<::Unity::Properties::INamedProperties_1<TContainer>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TContainer> constexpr ::Unity::Properties::ContainerPropertyBag_1<TContainer>::ContainerPropertyBag_1() {}
