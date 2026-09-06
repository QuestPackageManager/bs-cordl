#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyBag_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__InstantiationKind_impl.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/Internal/zzzz__IPropertyBagRegister_def.hpp"
#include "Unity/Properties/zzzz__IConstructor_1_def.hpp"
#include "Unity/Properties/zzzz__IConstructor_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_def.hpp"
#include "Unity/Properties/zzzz__ITypeVisitor_def.hpp"
#include "Unity/Properties/zzzz__InstantiationKind_def.hpp"
#include "Unity/Properties/zzzz__PropertyCollection_1_def.hpp"
template <typename TContainer> constexpr ::Unity::Properties::InstantiationKind& Unity::Properties::PropertyBag_1<TContainer>::__cordl_internal_get__InstantiationKind_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InstantiationKind_k__BackingField;
}
template <typename TContainer> constexpr ::Unity::Properties::InstantiationKind const& Unity::Properties::PropertyBag_1<TContainer>::__cordl_internal_get__InstantiationKind_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InstantiationKind_k__BackingField;
}
template <typename TContainer> constexpr void Unity::Properties::PropertyBag_1<TContainer>::__cordl_internal_set__InstantiationKind_k__BackingField(::Unity::Properties::InstantiationKind value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____InstantiationKind_k__BackingField = value;
}
template <typename TContainer> inline void Unity::Properties::PropertyBag_1<TContainer>::Unity_Properties_Internal_IPropertyBagRegister_Register() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyBag_1<TContainer>*>(), { "Unity.Properties.Internal.IPropertyBagRegister.Register", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContainer> inline void Unity::Properties::PropertyBag_1<TContainer>::Accept(::Unity::Properties::ITypeVisitor* visitor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyBag_1<TContainer>*>(), { "Accept", {}, { ::i2c::type_of<::Unity::Properties::ITypeVisitor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visitor);
}
template <typename TContainer>
inline void Unity::Properties::PropertyBag_1<TContainer>::Unity_Properties_IPropertyBag_Accept(::Unity::Properties::IPropertyBagVisitor* visitor, ::by_ref<::System::Object*> container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyBag_1<TContainer>*>(),
                          { "Unity.Properties.IPropertyBag.Accept", {}, { ::i2c::type_of<::Unity::Properties::IPropertyBagVisitor*>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visitor, container);
}
template <typename TContainer>
inline void Unity::Properties::PropertyBag_1<TContainer>::Unity_Properties_IPropertyBag_TContainer__Accept(::Unity::Properties::IPropertyBagVisitor* visitor, ::by_ref<TContainer> container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyBag_1<TContainer>*>(),
                          { "Unity.Properties.IPropertyBag<TContainer>.Accept", {}, { ::i2c::type_of<::Unity::Properties::IPropertyBagVisitor*>(), ::i2c::type_of<::by_ref<TContainer>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visitor, container);
}
template <typename TContainer> inline ::Unity::Properties::PropertyCollection_1<TContainer> Unity::Properties::PropertyBag_1<TContainer>::Unity_Properties_IPropertyBag_TContainer__GetProperties() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyBag_1<TContainer>*>(), { "Unity.Properties.IPropertyBag<TContainer>.GetProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<TContainer>>(this, ___internal_method);
}
template <typename TContainer>
inline ::Unity::Properties::PropertyCollection_1<TContainer> Unity::Properties::PropertyBag_1<TContainer>::Unity_Properties_IPropertyBag_TContainer__GetProperties(::by_ref<TContainer> container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyBag_1<TContainer>*>(),
                                                           { "Unity.Properties.IPropertyBag<TContainer>.GetProperties", {}, { ::i2c::type_of<::by_ref<TContainer>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<TContainer>>(this, ___internal_method, container);
}
template <typename TContainer> inline ::Unity::Properties::InstantiationKind Unity::Properties::PropertyBag_1<TContainer>::Unity_Properties_IConstructor_get_InstantiationKind() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyBag_1<TContainer>*>(), { "Unity.Properties.IConstructor.get_InstantiationKind", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::InstantiationKind>(this, ___internal_method);
}
template <typename TContainer> inline TContainer Unity::Properties::PropertyBag_1<TContainer>::Unity_Properties_IConstructor_TContainer__Instantiate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyBag_1<TContainer>*>(), { "Unity.Properties.IConstructor<TContainer>.Instantiate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TContainer>(this, ___internal_method);
}
template <typename TContainer> inline ::Unity::Properties::PropertyCollection_1<TContainer> Unity::Properties::PropertyBag_1<TContainer>::GetProperties() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::PropertyBag_1<TContainer>*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<TContainer>>(this, ___internal_method);
}
template <typename TContainer> inline ::Unity::Properties::PropertyCollection_1<TContainer> Unity::Properties::PropertyBag_1<TContainer>::GetProperties(::by_ref<TContainer> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::PropertyBag_1<TContainer>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<TContainer>>(this, ___internal_method, container);
}
template <typename TContainer> inline ::Unity::Properties::InstantiationKind Unity::Properties::PropertyBag_1<TContainer>::get_InstantiationKind() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::PropertyBag_1<TContainer>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::InstantiationKind>(this, ___internal_method);
}
template <typename TContainer> inline TContainer Unity::Properties::PropertyBag_1<TContainer>::Instantiate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::PropertyBag_1<TContainer>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<TContainer>(this, ___internal_method);
}
template <typename TContainer> inline void Unity::Properties::PropertyBag_1<TContainer>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyBag_1<TContainer>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContainer> inline ::Unity::Properties::PropertyBag_1<TContainer>* Unity::Properties::PropertyBag_1<TContainer>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::PropertyBag_1<TContainer>*>());
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBag_1<TContainer>"
template <typename TContainer> constexpr Unity::Properties::PropertyBag_1<TContainer>::operator ::Unity::Properties::IPropertyBag_1<TContainer>*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag_1<TContainer>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag_1<TContainer>"
template <typename TContainer> constexpr ::Unity::Properties::IPropertyBag_1<TContainer>* Unity::Properties::PropertyBag_1<TContainer>::i___Unity__Properties__IPropertyBag_1_TContainer_() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag_1<TContainer>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBag"
template <typename TContainer> constexpr Unity::Properties::PropertyBag_1<TContainer>::operator ::Unity::Properties::IPropertyBag*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag"
template <typename TContainer> constexpr ::Unity::Properties::IPropertyBag* Unity::Properties::PropertyBag_1<TContainer>::i___Unity__Properties__IPropertyBag() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::Internal::IPropertyBagRegister"
template <typename TContainer> constexpr Unity::Properties::PropertyBag_1<TContainer>::operator ::Unity::Properties::Internal::IPropertyBagRegister*() noexcept {
  return static_cast<::Unity::Properties::Internal::IPropertyBagRegister*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::Internal::IPropertyBagRegister"
template <typename TContainer>
constexpr ::Unity::Properties::Internal::IPropertyBagRegister* Unity::Properties::PropertyBag_1<TContainer>::i___Unity__Properties__Internal__IPropertyBagRegister() noexcept {
  return static_cast<::Unity::Properties::Internal::IPropertyBagRegister*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IConstructor_1<TContainer>"
template <typename TContainer> constexpr Unity::Properties::PropertyBag_1<TContainer>::operator ::Unity::Properties::IConstructor_1<TContainer>*() noexcept {
  return static_cast<::Unity::Properties::IConstructor_1<TContainer>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IConstructor_1<TContainer>"
template <typename TContainer> constexpr ::Unity::Properties::IConstructor_1<TContainer>* Unity::Properties::PropertyBag_1<TContainer>::i___Unity__Properties__IConstructor_1_TContainer_() noexcept {
  return static_cast<::Unity::Properties::IConstructor_1<TContainer>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IConstructor"
template <typename TContainer> constexpr Unity::Properties::PropertyBag_1<TContainer>::operator ::Unity::Properties::IConstructor*() noexcept {
  return static_cast<::Unity::Properties::IConstructor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IConstructor"
template <typename TContainer> constexpr ::Unity::Properties::IConstructor* Unity::Properties::PropertyBag_1<TContainer>::i___Unity__Properties__IConstructor() noexcept {
  return static_cast<::Unity::Properties::IConstructor*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TContainer> constexpr ::Unity::Properties::PropertyBag_1<TContainer>::PropertyBag_1() {}
