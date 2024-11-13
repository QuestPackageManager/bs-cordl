#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextInputBaseField_1.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleProperty_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollerVisibility_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextInputBaseField_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleResolvedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextEdition_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextSelection_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollView_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextInputBaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlEnumAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlIntAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboardType_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_get_m_MaxLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxLength;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const&
UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_get_m_MaxLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxLength;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_set_m_MaxLength(::UnityEngine::UIElements::UxmlIntAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_MaxLength, value);
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_get_m_Password() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Password;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const&
UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_get_m_Password() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Password;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_set_m_Password(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Password, value);
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_get_m_MaskCharacter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaskCharacter;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const&
UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_get_m_MaskCharacter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaskCharacter;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_set_m_MaskCharacter(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_MaskCharacter, value);
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_get_m_IsReadOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsReadOnly;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const&
UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_get_m_IsReadOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsReadOnly;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_set_m_IsReadOnly(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_IsReadOnly, value);
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_get_m_IsDelayed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsDelayed;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const&
UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_get_m_IsDelayed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsDelayed;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_set_m_IsDelayed(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_IsDelayed, value);
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_get_m_HideMobileInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HideMobileInput;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const&
UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_get_m_HideMobileInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HideMobileInput;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_set_m_HideMobileInput(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_HideMobileInput, value);
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::TouchScreenKeyboardType>*&
UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_get_m_KeyboardType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardType;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::TouchScreenKeyboardType>*> const&
UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_get_m_KeyboardType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardType;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_set_m_KeyboardType(
    ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::TouchScreenKeyboardType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_KeyboardType, value);
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_get_m_AutoCorrection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoCorrection;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const&
UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_get_m_AutoCorrection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoCorrection;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__cordl_internal_set_m_AutoCorrection(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_AutoCorrection, value);
}
template <typename TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                                          ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
template <typename TValueType> inline ::UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>* UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>*>());
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TValueType> constexpr ::UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>::__TextInputBaseField_1__UxmlTraits() {}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::TextElement*& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_get__textElement_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textElement_k__BackingField;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextElement*> const&
UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_get__textElement_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textElement_k__BackingField;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_set__textElement_k__BackingField(::UnityEngine::UIElements::TextElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____textElement_k__BackingField, value);
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::ScrollView*& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_get_scrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scrollView;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ScrollView*> const&
UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_get_scrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scrollView;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_set_scrollView(::UnityEngine::UIElements::ScrollView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___scrollView, value);
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_get_multilineContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multilineContainer;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const&
UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_get_multilineContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multilineContainer;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_set_multilineContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___multilineContainer, value);
}
template <typename TValueType> constexpr bool& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_get__isDragging_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDragging_k__BackingField;
}
template <typename TValueType> constexpr bool const& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_get__isDragging_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDragging_k__BackingField;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_set__isDragging_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDragging_k__BackingField = value;
}
template <typename TValueType> constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_get_scrollOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scrollOffset;
}
template <typename TValueType> constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_get_scrollOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scrollOffset;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_set_scrollOffset(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scrollOffset = value;
}
template <typename TValueType> constexpr bool& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_get_m_ScrollViewWasClamped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollViewWasClamped;
}
template <typename TValueType> constexpr bool const& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_get_m_ScrollViewWasClamped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollViewWasClamped;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_set_m_ScrollViewWasClamped(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScrollViewWasClamped = value;
}
template <typename TValueType> constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_get_lastCursorPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastCursorPos;
}
template <typename TValueType> constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_get_lastCursorPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastCursorPos;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_set_lastCursorPos(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastCursorPos = value;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::ScrollerVisibility& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_get_m_VerticalScrollerVisibility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalScrollerVisibility;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::ScrollerVisibility const& UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_get_m_VerticalScrollerVisibility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalScrollerVisibility;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__cordl_internal_set_m_VerticalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VerticalScrollerVisibility = value;
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::setStaticF_innerComponentsModifierName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "innerComponentsModifierName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::getStaticF_innerComponentsModifierName() {
  return ::cordl_internals::getStaticField<::StringW, "innerComponentsModifierName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::setStaticF_innerTextElementUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "innerTextElementUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::getStaticF_innerTextElementUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "innerTextElementUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::setStaticF_innerTextElementWithScrollViewUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "innerTextElementWithScrollViewUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::getStaticF_innerTextElementWithScrollViewUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "innerTextElementWithScrollViewUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::setStaticF_horizontalVariantInnerTextElementUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "horizontalVariantInnerTextElementUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::getStaticF_horizontalVariantInnerTextElementUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "horizontalVariantInnerTextElementUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::setStaticF_verticalVariantInnerTextElementUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "verticalVariantInnerTextElementUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::getStaticF_verticalVariantInnerTextElementUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "verticalVariantInnerTextElementUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get>();
}
template <typename TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::setStaticF_verticalHorizontalVariantInnerTextElementUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "verticalHorizontalVariantInnerTextElementUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::getStaticF_verticalHorizontalVariantInnerTextElementUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "verticalHorizontalVariantInnerTextElementUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::setStaticF_innerScrollviewUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "innerScrollviewUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::getStaticF_innerScrollviewUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "innerScrollviewUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::setStaticF_innerViewportUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "innerViewportUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::getStaticF_innerViewportUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "innerViewportUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::setStaticF_innerContentContainerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "innerContentContainerUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::getStaticF_innerContentContainerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "innerContentContainerUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get>();
}
template <typename TValueType> inline ::UnityEngine::UIElements::TextElement* UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_textElement() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                                               "get_textElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextElement*, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::set_textElement(::UnityEngine::UIElements::TextElement* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(), "set_textElement",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline ::UnityEngine::UIElements::ITextSelection* UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_textSelection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                                               "get_textSelection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ITextSelection*, false>(this, ___internal_method);
}
template <typename TValueType> inline ::UnityEngine::UIElements::ITextEdition* UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_textEdition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                                               "get_textEdition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ITextEdition*, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::SelectAll() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                                               "SelectAll", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::SelectNone() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                                               "SelectNone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_originalText() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                                               "get_originalText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TValueType> inline TValueType UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::StringToValue(::StringW str) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(), 100)));
  return ::cordl_internals::RunMethodRethrow<TValueType, false>(this, ___internal_method, str);
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::UpdateValueFromText() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                                               "UpdateValueFromText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::UpdateTextFromValue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                                               "UpdateTextFromValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::MoveFocusToCompositeRoot() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                                               "MoveFocusToCompositeRoot", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline bool UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_isReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                                               "get_isReadOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::set_maxLength(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(), "set_maxLength",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::set_maskChar(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(), "set_maskChar",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline bool UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_isPasswordField() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(), 101)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::set_isPasswordField(bool value) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(), 102)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::set_isDragging(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(), "set_isDragging",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::get_text() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(), "get_text",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::set_text(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(), "set_text",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType>
inline ::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>* UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>());
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::MakeSureScrollViewDoesNotLeakEvents(::UnityEngine::UIElements::ChangeEvent_1<float_t>* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                                  "MakeSureScrollViewDoesNotLeakEvents", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::SetSingleLine() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                                               "SetSingleLine", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::SetMultiline() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                                               "SetMultiline", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::ScrollViewOnGeometryChangedEvent(::UnityEngine::UIElements::GeometryChangedEvent* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(), "ScrollViewOnGeometryChangedEvent",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
template <typename TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::TextElementOnGeometryChangedEvent(::UnityEngine::UIElements::GeometryChangedEvent* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(), "TextElementOnGeometryChangedEvent",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
template <typename TValueType>
inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::OnInputCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                                  "OnInputCustomStyleResolved", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CustomStyleResolvedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
template <typename TValueType> inline bool UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::AcceptCharacter(char16_t c) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(), 103)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
/// @param isBackspace: bool (default: false)
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::UpdateScrollOffset(bool isBackspace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(), "UpdateScrollOffset",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isBackspace);
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::UpdateScrollOffset(bool isBackspace, bool widthChanged) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(), "UpdateScrollOffset",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isBackspace, widthChanged);
}
template <typename TValueType>
inline ::UnityEngine::Vector2 UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::GetScrollOffset(float_t xOffset, float_t yOffset, float_t contentViewportWidth,
                                                                                                                          bool isBackspace, bool widthChanged) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(), "GetScrollOffset",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, xOffset, yOffset, contentViewportWidth, isBackspace, widthChanged);
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::SetScrollViewMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                                               "SetScrollViewMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::SetMultilineContainerStyle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                                               "SetMultilineContainerStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::RemoveSingleLineComponents() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                                               "RemoveSingleLineComponents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::RemoveMultilineComponents() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get(),
                                               "RemoveMultilineComponents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TValueType> constexpr ::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>::__TextInputBaseField_1__TextInputBase() {}
template <typename TValueType> constexpr int32_t& UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__cordl_internal_get_m_VisualInputTabIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualInputTabIndex;
}
template <typename TValueType> constexpr int32_t const& UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__cordl_internal_get_m_VisualInputTabIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualInputTabIndex;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__cordl_internal_set_m_VisualInputTabIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VisualInputTabIndex = value;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*& UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__cordl_internal_get_m_TextInputBase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextInputBase;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*> const&
UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__cordl_internal_get_m_TextInputBase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextInputBase;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__cordl_internal_set_m_TextInputBase(::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_TextInputBase, value);
}
template <typename TValueType> constexpr ::System::Action_1<bool>*& UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__cordl_internal_get_onIsReadOnlyChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onIsReadOnlyChanged;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> const& UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__cordl_internal_get_onIsReadOnlyChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onIsReadOnlyChanged;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__cordl_internal_set_onIsReadOnlyChanged(::System::Action_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___onIsReadOnlyChanged, value);
}
template <typename TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_s_SelectionColorProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>, "s_SelectionColorProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>(
      std::forward<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>>(value));
}
template <typename TValueType>
inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_s_SelectionColorProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>, "s_SelectionColorProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>();
}
template <typename TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_s_CursorColorProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>, "s_CursorColorProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>(
      std::forward<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>>(value));
}
template <typename TValueType>
inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_s_CursorColorProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>, "s_CursorColorProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_multilineContainerClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "multilineContainerClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_multilineContainerClassName() {
  return ::cordl_internals::getStaticField<::StringW, "multilineContainerClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_singleLineInputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "singleLineInputUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_singleLineInputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "singleLineInputUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_multilineInputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "multilineInputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_multilineInputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "multilineInputUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_multilineInputWithScrollViewUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "multilineInputWithScrollViewUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_multilineInputWithScrollViewUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "multilineInputWithScrollViewUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_textInputUssName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "textInputUssName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_textInputUssName() {
  return ::cordl_internals::getStaticField<::StringW, "textInputUssName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get>();
}
template <typename TValueType> inline ::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>* UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_textInputBase() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), "get_textInputBase",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*, false>(this, ___internal_method);
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_text() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), "get_text",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_text(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), "set_text",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::add_onIsReadOnlyChanged(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), "add_onIsReadOnlyChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::remove_onIsReadOnlyChanged(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), "remove_onIsReadOnlyChanged",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline bool UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_isReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), "get_isReadOnly",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_isReadOnly(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), "set_isReadOnly",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_isPasswordField(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), "set_isPasswordField",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_autoCorrection(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), "set_autoCorrection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_hideMobileInput(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), "set_hideMobileInput",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_keyboardType(::UnityEngine::TouchScreenKeyboardType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), "set_keyboardType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TouchScreenKeyboardType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline ::UnityEngine::UIElements::ITextEdition* UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_textEdition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), "get_textEdition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ITextEdition*, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_maxLength(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), "set_maxLength",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline bool UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_isDelayed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), "get_isDelayed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_isDelayed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), "set_isDelayed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_maskChar(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), "set_maskChar",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::ValueToString(TValueType value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), 118)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
template <typename TValueType> inline TValueType UnityEngine::UIElements::TextInputBaseField_1<TValueType>::StringToValue(::StringW str) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), 119)));
  return ::cordl_internals::RunMethodRethrow<TValueType, false>(this, ___internal_method, str);
}
template <typename TValueType>
inline ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*
UnityEngine::UIElements::TextInputBaseField_1<TValueType>::New_ctor(::StringW label, int32_t maxLength, char16_t maskChar,
                                                                    ::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>* textInputBase) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(label, maxLength, maskChar, textInputBase));
}
template <typename TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::_ctor(::StringW label, int32_t maxLength, char16_t maskChar,
                                                                             ::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>* textInputBase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label, maxLength, maskChar, textInputBase);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::OnFieldCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), "OnFieldCustomStyleResolved",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CustomStyleResolvedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::UpdateMixedValueContent() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), 116)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::UpdateValueFromText() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), 120)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::UpdateTextFromValue() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>::get(), 121)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TValueType> constexpr ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>::TextInputBaseField_1() {}
