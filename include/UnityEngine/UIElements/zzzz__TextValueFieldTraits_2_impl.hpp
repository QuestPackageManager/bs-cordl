#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\TextValueFieldTraits_2.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextValueFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::__cordl_internal_get_m_PlaceholderText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlaceholderText;
}
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const&
UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::__cordl_internal_get_m_PlaceholderText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlaceholderText;
}
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr void
UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::__cordl_internal_set_m_PlaceholderText(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlaceholderText = value;
}
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*&
UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::__cordl_internal_get_m_HidePlaceholderOnFocus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HidePlaceholderOnFocus;
}
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const&
UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::__cordl_internal_get_m_HidePlaceholderOnFocus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HidePlaceholderOnFocus;
}
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr void
UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::__cordl_internal_set_m_HidePlaceholderOnFocus(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HidePlaceholderOnFocus = value;
}
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::__cordl_internal_get_m_IsReadOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsReadOnly;
}
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const&
UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::__cordl_internal_get_m_IsReadOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsReadOnly;
}
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr void UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::__cordl_internal_set_m_IsReadOnly(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsReadOnly = value;
}
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::__cordl_internal_get_m_IsDelayed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsDelayed;
}
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const&
UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::__cordl_internal_get_m_IsDelayed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsDelayed;
}
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr void UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::__cordl_internal_set_m_IsDelayed(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsDelayed = value;
}
template <typename TValueType, typename TValueUxmlAttributeType>
inline void UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                                                       ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
template <typename TValueType, typename TValueUxmlAttributeType> inline void UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType, typename TValueUxmlAttributeType>
inline ::UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>* UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>*>());
}
// Ctor Parameters []
template <typename TValueType, typename TValueUxmlAttributeType> constexpr ::UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::TextValueFieldTraits_2() {}
