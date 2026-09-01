#pragma once
// IWYU pragma private; include "Unity\Properties\Property_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Properties/Internal/zzzz__IAttributes_def.hpp"
#include "Unity/Properties/zzzz__AttributesScope_def.hpp"
#include "Unity/Properties/zzzz__IPropertyAccept_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyVisitor_def.hpp"
#include "Unity/Properties/zzzz__IProperty_1_def.hpp"
#include "Unity/Properties/zzzz__IProperty_def.hpp"
template <typename TContainer, typename TValue>
constexpr ::System::Collections::Generic::List_1<::System::Attribute*>*& Unity::Properties::Property_2<TContainer, TValue>::__cordl_internal_get_m_Attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Attributes;
}
template <typename TContainer, typename TValue>
constexpr ::System::Collections::Generic::List_1<::System::Attribute*>* const& Unity::Properties::Property_2<TContainer, TValue>::__cordl_internal_get_m_Attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Attributes;
}
template <typename TContainer, typename TValue>
constexpr void Unity::Properties::Property_2<TContainer, TValue>::__cordl_internal_set_m_Attributes(::System::Collections::Generic::List_1<::System::Attribute*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Attributes = value;
}
template <typename TContainer, typename TValue>
inline ::System::Collections::Generic::List_1<::System::Attribute*>* Unity::Properties::Property_2<TContainer, TValue>::Unity_Properties_Internal_IAttributes_get_Attributes() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Property_2<TContainer, TValue>*>(), { "Unity.Properties.Internal.IAttributes.get_Attributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Attribute*>*>(this, ___internal_method);
}
template <typename TContainer, typename TValue>
inline void Unity::Properties::Property_2<TContainer, TValue>::Unity_Properties_Internal_IAttributes_set_Attributes(::System::Collections::Generic::List_1<::System::Attribute*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Property_2<TContainer, TValue>*>(),
                                              { "Unity.Properties.Internal.IAttributes.set_Attributes", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Attribute*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TContainer, typename TValue> inline ::StringW Unity::Properties::Property_2<TContainer, TValue>::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Property_2<TContainer, TValue>*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TContainer, typename TValue> inline bool Unity::Properties::Property_2<TContainer, TValue>::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Property_2<TContainer, TValue>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TContainer, typename TValue> inline ::System::Type* Unity::Properties::Property_2<TContainer, TValue>::DeclaredValueType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Property_2<TContainer, TValue>*>(), { "DeclaredValueType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
template <typename TContainer, typename TValue> inline void Unity::Properties::Property_2<TContainer, TValue>::Accept(::Unity::Properties::IPropertyVisitor* visitor, ::by_ref<TContainer> container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Property_2<TContainer, TValue>*>(),
                                                           { "Accept", {}, { ::i2c::type_of<::Unity::Properties::IPropertyVisitor*>(), ::i2c::type_of<::by_ref<TContainer>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visitor, container);
}
template <typename TContainer, typename TValue> inline TValue Unity::Properties::Property_2<TContainer, TValue>::GetValue(::by_ref<TContainer> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Property_2<TContainer, TValue>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, container);
}
template <typename TContainer, typename TValue> inline void Unity::Properties::Property_2<TContainer, TValue>::SetValue(::by_ref<TContainer> container, TValue value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Property_2<TContainer, TValue>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
template <typename TContainer, typename TValue> inline void Unity::Properties::Property_2<TContainer, TValue>::AddAttribute(::System::Attribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Property_2<TContainer, TValue>*>(), { "AddAttribute", {}, { ::i2c::type_of<::System::Attribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attribute);
}
template <typename TContainer, typename TValue>
inline void Unity::Properties::Property_2<TContainer, TValue>::AddAttributes(::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Property_2<TContainer, TValue>*>(),
                                                           { "AddAttributes", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
template <typename TContainer, typename TValue> inline void Unity::Properties::Property_2<TContainer, TValue>::Unity_Properties_Internal_IAttributes_AddAttribute(::System::Attribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Property_2<TContainer, TValue>*>(),
                                                                                         { "Unity.Properties.Internal.IAttributes.AddAttribute", {}, { ::i2c::type_of<::System::Attribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attribute);
}
template <typename TContainer, typename TValue>
inline void Unity::Properties::Property_2<TContainer, TValue>::Unity_Properties_Internal_IAttributes_AddAttributes(::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Properties::Property_2<TContainer, TValue>*>(),
                                       { "Unity.Properties.Internal.IAttributes.AddAttributes", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
template <typename TContainer, typename TValue> template <typename TAttribute> inline bool Unity::Properties::Property_2<TContainer, TValue>::HasAttribute() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Property_2<TContainer, TValue>*>(), { "HasAttribute", { ::i2c::class_of<TAttribute>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TAttribute>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TContainer, typename TValue> template <typename TAttribute> inline TAttribute Unity::Properties::Property_2<TContainer, TValue>::GetAttribute() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Property_2<TContainer, TValue>*>(), { "GetAttribute", { ::i2c::class_of<TAttribute>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TAttribute>() })));
  return ::cordl_internals::RunMethodRethrow<TAttribute>(this, ___internal_method);
}
template <typename TContainer, typename TValue>
inline ::Unity::Properties::AttributesScope
Unity::Properties::Property_2<TContainer, TValue>::Unity_Properties_Internal_IAttributes_CreateAttributesScope(::Unity::Properties::Internal::IAttributes* attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Property_2<TContainer, TValue>*>(),
                                                           { "Unity.Properties.Internal.IAttributes.CreateAttributesScope", {}, { ::i2c::type_of<::Unity::Properties::Internal::IAttributes*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::AttributesScope>(this, ___internal_method, attributes);
}
template <typename TContainer, typename TValue> inline void Unity::Properties::Property_2<TContainer, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Property_2<TContainer, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContainer, typename TValue> inline ::Unity::Properties::Property_2<TContainer, TValue>* Unity::Properties::Property_2<TContainer, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Property_2<TContainer, TValue>*>());
}
/// @brief Convert operator to "::Unity::Properties::IProperty_1<TContainer>"
template <typename TContainer, typename TValue> constexpr Unity::Properties::Property_2<TContainer, TValue>::operator ::Unity::Properties::IProperty_1<TContainer>*() noexcept {
  return static_cast<::Unity::Properties::IProperty_1<TContainer>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IProperty_1<TContainer>"
template <typename TContainer, typename TValue>
constexpr ::Unity::Properties::IProperty_1<TContainer>* Unity::Properties::Property_2<TContainer, TValue>::i___Unity__Properties__IProperty_1_TContainer_() noexcept {
  return static_cast<::Unity::Properties::IProperty_1<TContainer>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IProperty"
template <typename TContainer, typename TValue> constexpr Unity::Properties::Property_2<TContainer, TValue>::operator ::Unity::Properties::IProperty*() noexcept {
  return static_cast<::Unity::Properties::IProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IProperty"
template <typename TContainer, typename TValue> constexpr ::Unity::Properties::IProperty* Unity::Properties::Property_2<TContainer, TValue>::i___Unity__Properties__IProperty() noexcept {
  return static_cast<::Unity::Properties::IProperty*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IPropertyAccept_1<TContainer>"
template <typename TContainer, typename TValue> constexpr Unity::Properties::Property_2<TContainer, TValue>::operator ::Unity::Properties::IPropertyAccept_1<TContainer>*() noexcept {
  return static_cast<::Unity::Properties::IPropertyAccept_1<TContainer>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyAccept_1<TContainer>"
template <typename TContainer, typename TValue>
constexpr ::Unity::Properties::IPropertyAccept_1<TContainer>* Unity::Properties::Property_2<TContainer, TValue>::i___Unity__Properties__IPropertyAccept_1_TContainer_() noexcept {
  return static_cast<::Unity::Properties::IPropertyAccept_1<TContainer>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::Internal::IAttributes"
template <typename TContainer, typename TValue> constexpr Unity::Properties::Property_2<TContainer, TValue>::operator ::Unity::Properties::Internal::IAttributes*() noexcept {
  return static_cast<::Unity::Properties::Internal::IAttributes*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::Internal::IAttributes"
template <typename TContainer, typename TValue>
constexpr ::Unity::Properties::Internal::IAttributes* Unity::Properties::Property_2<TContainer, TValue>::i___Unity__Properties__Internal__IAttributes() noexcept {
  return static_cast<::Unity::Properties::Internal::IAttributes*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TContainer, typename TValue> constexpr ::Unity::Properties::Property_2<TContainer, TValue>::Property_2() {}
