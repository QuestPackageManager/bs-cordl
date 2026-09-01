#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\BaseFieldTraits_2.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr TValueUxmlAttributeType& UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>::__cordl_internal_get_m_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr TValueUxmlAttributeType const& UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>::__cordl_internal_get_m_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr void UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>::__cordl_internal_set_m_Value(TValueUxmlAttributeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Value = value;
}
template <typename TValueType, typename TValueUxmlAttributeType>
inline void UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                                                  ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
template <typename TValueType, typename TValueUxmlAttributeType> inline void UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType, typename TValueUxmlAttributeType>
inline ::UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>* UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>*>());
}
// Ctor Parameters []
template <typename TValueType, typename TValueUxmlAttributeType> constexpr ::UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>::BaseFieldTraits_2() {}
