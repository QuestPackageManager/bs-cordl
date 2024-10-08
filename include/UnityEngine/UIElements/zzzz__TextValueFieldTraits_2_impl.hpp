#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextValueFieldTraits_2.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextValueFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::__cordl_internal_get_m_IsReadOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsReadOnly;
}
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const&
UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::__cordl_internal_get_m_IsReadOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsReadOnly;
}
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr void UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::__cordl_internal_set_m_IsReadOnly(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IsReadOnly)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::__cordl_internal_get_m_IsDelayed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsDelayed;
}
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const&
UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::__cordl_internal_get_m_IsDelayed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsDelayed;
}
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr void UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::__cordl_internal_set_m_IsDelayed(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IsDelayed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValueType, typename TValueUxmlAttributeType>
inline void UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                                                       ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
template <typename TValueType, typename TValueUxmlAttributeType>
inline ::UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>* UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>*>());
}
template <typename TValueType, typename TValueUxmlAttributeType> inline void UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TValueType, typename TValueUxmlAttributeType> constexpr ::UnityEngine::UIElements::TextValueFieldTraits_2<TValueType, TValueUxmlAttributeType>::TextValueFieldTraits_2() {}
