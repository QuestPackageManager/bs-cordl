#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\TextInputBaseField_1.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
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
#include "UnityEngine/UIElements/zzzz__IDelayedField_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextEdition_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextSelection_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollView_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollerVisibility_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextInputBaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlEnumAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlIntAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboardType_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_MaxLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxLength;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_MaxLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxLength;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_set_m_MaxLength(::UnityEngine::UIElements::UxmlIntAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxLength = value;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_Password() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Password;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_Password() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Password;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_set_m_Password(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Password = value;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_MaskCharacter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaskCharacter;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_MaskCharacter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaskCharacter;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_set_m_MaskCharacter(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaskCharacter = value;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_PlaceholderText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlaceholderText;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_PlaceholderText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlaceholderText;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_set_m_PlaceholderText(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlaceholderText = value;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_HidePlaceholderOnFocus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HidePlaceholderOnFocus;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_HidePlaceholderOnFocus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HidePlaceholderOnFocus;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_set_m_HidePlaceholderOnFocus(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HidePlaceholderOnFocus = value;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_IsReadOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsReadOnly;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_IsReadOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsReadOnly;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_set_m_IsReadOnly(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsReadOnly = value;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_IsDelayed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsDelayed;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_IsDelayed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsDelayed;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_set_m_IsDelayed(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsDelayed = value;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>*&
UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_VerticalScrollerVisibility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalScrollerVisibility;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* const&
UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_VerticalScrollerVisibility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalScrollerVisibility;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_set_m_VerticalScrollerVisibility(
    ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VerticalScrollerVisibility = value;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_SelectAllOnMouseUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectAllOnMouseUp;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_SelectAllOnMouseUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectAllOnMouseUp;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_set_m_SelectAllOnMouseUp(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectAllOnMouseUp = value;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_SelectAllOnFocus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectAllOnFocus;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_SelectAllOnFocus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectAllOnFocus;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_set_m_SelectAllOnFocus(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectAllOnFocus = value;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_SelectWordByDoubleClick() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectWordByDoubleClick;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_SelectWordByDoubleClick() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectWordByDoubleClick;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_set_m_SelectWordByDoubleClick(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectWordByDoubleClick = value;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_SelectLineByTripleClick() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectLineByTripleClick;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_SelectLineByTripleClick() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectLineByTripleClick;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_set_m_SelectLineByTripleClick(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectLineByTripleClick = value;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_EmojiFallbackSupport() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmojiFallbackSupport;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_EmojiFallbackSupport() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmojiFallbackSupport;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_set_m_EmojiFallbackSupport(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EmojiFallbackSupport = value;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_HideMobileInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HideMobileInput;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_HideMobileInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HideMobileInput;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_set_m_HideMobileInput(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HideMobileInput = value;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::TouchScreenKeyboardType>*&
UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_KeyboardType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardType;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::TouchScreenKeyboardType>* const&
UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_KeyboardType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardType;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_set_m_KeyboardType(
    ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::TouchScreenKeyboardType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_KeyboardType = value;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_AutoCorrection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoCorrection;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_AutoCorrection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoCorrection;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::__cordl_internal_set_m_AutoCorrection(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AutoCorrection = value;
}
template <typename TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                                       ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline ::UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>* UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>*>());
}
// Ctor Parameters []
template <typename TValueType> constexpr ::UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>::TextInputBaseField_1_UxmlTraits() {}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::TextElement*& UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_get__textElement_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textElement_k__BackingField;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::TextElement* const& UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_get__textElement_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textElement_k__BackingField;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_set__textElement_k__BackingField(::UnityEngine::UIElements::TextElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textElement_k__BackingField = value;
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::ScrollView*& UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_get_scrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scrollView;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::ScrollView* const& UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_get_scrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scrollView;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_set_scrollView(::UnityEngine::UIElements::ScrollView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scrollView = value;
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_get_multilineContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multilineContainer;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_get_multilineContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multilineContainer;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_set_multilineContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___multilineContainer = value;
}
template <typename TValueType> constexpr bool& UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_get__isDragging_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDragging_k__BackingField;
}
template <typename TValueType> constexpr bool const& UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_get__isDragging_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDragging_k__BackingField;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_set__isDragging_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDragging_k__BackingField = value;
}
template <typename TValueType> constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_get_scrollOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scrollOffset;
}
template <typename TValueType> constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_get_scrollOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scrollOffset;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_set_scrollOffset(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scrollOffset = value;
}
template <typename TValueType> constexpr bool& UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_get_m_ScrollViewWasClamped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollViewWasClamped;
}
template <typename TValueType> constexpr bool const& UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_get_m_ScrollViewWasClamped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollViewWasClamped;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_set_m_ScrollViewWasClamped(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScrollViewWasClamped = value;
}
template <typename TValueType> constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_get_lastCursorPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastCursorPos;
}
template <typename TValueType> constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_get_lastCursorPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastCursorPos;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_set_lastCursorPos(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastCursorPos = value;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::ScrollerVisibility& UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_get_verticalScrollerVisibility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verticalScrollerVisibility;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::ScrollerVisibility const& UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_get_verticalScrollerVisibility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verticalScrollerVisibility;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::__cordl_internal_set_verticalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___verticalScrollerVisibility = value;
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::setStaticF_innerComponentsModifierName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "innerComponentsModifierName", ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::getStaticF_innerComponentsModifierName() {
  return ::cordl_internals::getStaticField<::StringW, "innerComponentsModifierName", ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::setStaticF_innerTextElementUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "innerTextElementUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::getStaticF_innerTextElementUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "innerTextElementUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::setStaticF_innerTextElementWithScrollViewUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "innerTextElementWithScrollViewUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::getStaticF_innerTextElementWithScrollViewUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "innerTextElementWithScrollViewUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::setStaticF_horizontalVariantInnerTextElementUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "horizontalVariantInnerTextElementUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::getStaticF_horizontalVariantInnerTextElementUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "horizontalVariantInnerTextElementUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::setStaticF_verticalVariantInnerTextElementUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "verticalVariantInnerTextElementUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::getStaticF_verticalVariantInnerTextElementUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "verticalVariantInnerTextElementUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::setStaticF_verticalHorizontalVariantInnerTextElementUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "verticalHorizontalVariantInnerTextElementUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::getStaticF_verticalHorizontalVariantInnerTextElementUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "verticalHorizontalVariantInnerTextElementUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::setStaticF_innerScrollviewUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "innerScrollviewUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::getStaticF_innerScrollviewUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "innerScrollviewUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::setStaticF_innerViewportUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "innerViewportUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::getStaticF_innerViewportUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "innerViewportUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::setStaticF_innerContentContainerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "innerContentContainerUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::getStaticF_innerContentContainerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "innerContentContainerUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>();
}
template <typename TValueType> inline ::UnityEngine::UIElements::TextElement* UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::get_textElement() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(), { "get_textElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextElement*>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::set_textElement(::UnityEngine::UIElements::TextElement* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(),
                                                                                         { "set_textElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline ::UnityEngine::UIElements::ITextSelection* UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::get_textSelection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(), { "get_textSelection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ITextSelection*>(this, ___internal_method);
}
template <typename TValueType> inline ::UnityEngine::UIElements::ITextEdition* UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::get_textEdition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(), { "get_textEdition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ITextEdition*>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::set_isDragging(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(), { "set_isDragging", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::get_text() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(), { "get_text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::set_text(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::get_originalText() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(), { "get_originalText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TValueType> inline TValueType UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::StringToValue(::StringW str) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(), 136 })));
  return ::cordl_internals::RunMethodRethrow<TValueType>(this, ___internal_method, str);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::UpdateValueFromText() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(), { "UpdateValueFromText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::UpdateTextFromValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(), { "UpdateTextFromValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::MoveFocusToCompositeRoot() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(), { "MoveFocusToCompositeRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::MakeSureScrollViewDoesNotLeakEvents(::UnityEngine::UIElements::ChangeEvent_1<float_t>* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(),
                                                           { "MakeSureScrollViewDoesNotLeakEvents", {}, { ::i2c::type_of<::UnityEngine::UIElements::ChangeEvent_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::SetSingleLine() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(), { "SetSingleLine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::SetMultiline() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(), { "SetMultiline", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::ScrollViewOnGeometryChangedEvent(::UnityEngine::UIElements::GeometryChangedEvent* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(),
                                                           { "ScrollViewOnGeometryChangedEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
template <typename TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::TextElementOnGeometryChangedEvent(::UnityEngine::UIElements::GeometryChangedEvent* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(),
                                                           { "TextElementOnGeometryChangedEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::OnInputCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(),
                                                           { "OnInputCustomStyleResolved", {}, { ::i2c::type_of<::UnityEngine::UIElements::CustomStyleResolvedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::GetDefaultValueType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(), { "GetDefaultValueType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TValueType> inline bool UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::AcceptCharacter(char16_t c) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(), 137 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::UpdateScrollOffset(bool isBackspace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(), { "UpdateScrollOffset", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isBackspace);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::UpdateScrollOffset(bool isBackspace, bool widthChanged) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(),
                                                                                         { "UpdateScrollOffset", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isBackspace, widthChanged);
}
template <typename TValueType>
inline ::UnityEngine::Vector2 UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::GetScrollOffset(float_t xOffset, float_t yOffset, float_t contentViewportWidth, bool isBackspace,
                                                                                                                       bool widthChanged) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(),
                          { "GetScrollOffset", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, xOffset, yOffset, contentViewportWidth, isBackspace, widthChanged);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::SetScrollViewMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(), { "SetScrollViewMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::SetMultilineContainerStyle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(), { "SetMultilineContainerStyle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::RemoveSingleLineComponents() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(), { "RemoveSingleLineComponents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::RemoveMultilineComponents() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(), { "RemoveMultilineComponents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline bool UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::SetVerticalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility sv) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(),
                                                           { "SetVerticalScrollerVisibility", {}, { ::i2c::type_of<::UnityEngine::UIElements::ScrollerVisibility>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sv);
}
template <typename TValueType> inline ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>());
}
// Ctor Parameters []
template <typename TValueType> constexpr ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>::TextInputBaseField_1_TextInputBase() {}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*& UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__cordl_internal_get_m_TextInputBase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextInputBase;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* const& UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__cordl_internal_get_m_TextInputBase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextInputBase;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::__cordl_internal_set_m_TextInputBase(::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextInputBase = value;
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_autoCorrectionProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "autoCorrectionProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_autoCorrectionProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "autoCorrectionProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_hideMobileInputProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "hideMobileInputProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_hideMobileInputProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "hideMobileInputProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_hidePlaceholderOnFocusProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "hidePlaceholderOnFocusProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_hidePlaceholderOnFocusProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "hidePlaceholderOnFocusProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_keyboardTypeProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "keyboardTypeProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_keyboardTypeProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "keyboardTypeProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_isReadOnlyProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "isReadOnlyProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_isReadOnlyProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "isReadOnlyProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_isPasswordFieldProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "isPasswordFieldProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_isPasswordFieldProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "isPasswordFieldProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_textSelectionProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "textSelectionProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_textSelectionProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "textSelectionProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_textEditionProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "textEditionProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_textEditionProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "textEditionProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_placeholderTextProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "placeholderTextProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_placeholderTextProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "placeholderTextProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_selectionColorProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "selectionColorProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_selectionColorProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "selectionColorProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_cursorColorProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "cursorColorProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_cursorColorProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "cursorColorProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_cursorIndexProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "cursorIndexProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_cursorIndexProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "cursorIndexProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_cursorPositionProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "cursorPositionProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_cursorPositionProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "cursorPositionProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_selectIndexProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "selectIndexProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_selectIndexProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "selectIndexProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_selectAllOnFocusProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "selectAllOnFocusProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_selectAllOnFocusProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "selectAllOnFocusProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_selectAllOnMouseUpProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "selectAllOnMouseUpProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_selectAllOnMouseUpProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "selectAllOnMouseUpProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_maxLengthProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "maxLengthProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_maxLengthProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "maxLengthProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_doubleClickSelectsWordProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "doubleClickSelectsWordProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_doubleClickSelectsWordProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "doubleClickSelectsWordProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_tripleClickSelectsLineProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "tripleClickSelectsLineProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_tripleClickSelectsLineProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "tripleClickSelectsLineProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_emojiFallbackSupportProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "emojiFallbackSupportProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_emojiFallbackSupportProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "emojiFallbackSupportProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_isDelayedProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "isDelayedProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_isDelayedProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "isDelayedProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_maskCharProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "maskCharProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_maskCharProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "maskCharProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_verticalScrollerVisibilityProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "verticalScrollerVisibilityProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_verticalScrollerVisibilityProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "verticalScrollerVisibilityProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_s_SelectionColorProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>, "s_SelectionColorProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>>(value));
}
template <typename TValueType>
inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_s_SelectionColorProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>, "s_SelectionColorProperty",
                                           ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_s_CursorColorProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>, "s_CursorColorProperty", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>>(value));
}
template <typename TValueType>
inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_s_CursorColorProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>, "s_CursorColorProperty",
                                           ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_multilineContainerClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "multilineContainerClassName", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_multilineContainerClassName() {
  return ::cordl_internals::getStaticField<::StringW, "multilineContainerClassName", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_singleLineInputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "singleLineInputUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_singleLineInputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "singleLineInputUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_multilineInputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "multilineInputUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_multilineInputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "multilineInputUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_placeholderUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "placeholderUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_placeholderUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "placeholderUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_multilineInputWithScrollViewUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "multilineInputWithScrollViewUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_multilineInputWithScrollViewUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "multilineInputWithScrollViewUssClassName", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::setStaticF_textInputUssName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "textInputUssName", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::getStaticF_textInputUssName() {
  return ::cordl_internals::getStaticField<::StringW, "textInputUssName", ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_password(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "set_password", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_readOnly(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "set_readOnly", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_placeholderText() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_placeholderText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_placeholderText(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "set_placeholderText", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline bool UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_hidePlaceholderOnFocus() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_hidePlaceholderOnFocus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_hidePlaceholderOnFocus(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "set_hidePlaceholderOnFocus", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType>
inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::_ctor(::StringW label, int32_t maxLength, char16_t maskChar,
                                                                             ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* textInputBase) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(),
                                                                                             ::i2c::type_of<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label, maxLength, maskChar, textInputBase);
}
template <typename TValueType> inline ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_textInputBase() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_textInputBase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*>(this, ___internal_method);
}
template <typename TValueType> inline ::UnityEngine::UIElements::ITextSelection* UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_textSelection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_textSelection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ITextSelection*>(this, ___internal_method);
}
template <typename TValueType> inline ::UnityEngine::UIElements::ITextEdition* UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_textEdition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_textEdition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ITextEdition*>(this, ___internal_method);
}
template <typename TValueType> inline ::System::Action_1<bool>* UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_onIsReadOnlyChanged() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_onIsReadOnlyChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<bool>*>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_onIsReadOnlyChanged(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(),
                                                                                         { "set_onIsReadOnlyChanged", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline bool UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_isReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_isReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_isReadOnly(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "set_isReadOnly", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline bool UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_isPasswordField() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_isPasswordField", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_isPasswordField(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "set_isPasswordField", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline bool UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_autoCorrection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_autoCorrection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_autoCorrection(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "set_autoCorrection", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline bool UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_hideMobileInput() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_hideMobileInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_hideMobileInput(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "set_hideMobileInput", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline ::UnityEngine::TouchScreenKeyboardType UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_keyboardType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_keyboardType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TouchScreenKeyboardType>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_keyboardType(::UnityEngine::TouchScreenKeyboardType value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(),
                                                                                         { "set_keyboardType", {}, { ::i2c::type_of<::UnityEngine::TouchScreenKeyboardType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline int32_t UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_maxLength() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_maxLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_maxLength(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "set_maxLength", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline bool UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_isDelayed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_isDelayed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_isDelayed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "set_isDelayed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline char16_t UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_maskChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_maskChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_maskChar(char16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "set_maskChar", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline ::UnityEngine::Color UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_selectionColor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_selectionColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
template <typename TValueType> inline ::UnityEngine::Color UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_cursorColor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_cursorColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
template <typename TValueType> inline int32_t UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_cursorIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_cursorIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_cursorIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "set_cursorIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline ::UnityEngine::Vector2 UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_cursorPosition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_cursorPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
template <typename TValueType> inline int32_t UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_selectIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_selectIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_selectIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "set_selectIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline bool UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_selectAllOnFocus() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_selectAllOnFocus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_selectAllOnFocus(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "set_selectAllOnFocus", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline bool UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_selectAllOnMouseUp() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_selectAllOnMouseUp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_selectAllOnMouseUp(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "set_selectAllOnMouseUp", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline bool UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_doubleClickSelectsWord() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_doubleClickSelectsWord", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_doubleClickSelectsWord(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "set_doubleClickSelectsWord", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline bool UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_tripleClickSelectsLine() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_tripleClickSelectsLine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_tripleClickSelectsLine(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "set_tripleClickSelectsLine", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_text() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_text(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline bool UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_emojiFallbackSupport() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_emojiFallbackSupport", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_emojiFallbackSupport(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "set_emojiFallbackSupport", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline ::UnityEngine::UIElements::ScrollerVisibility UnityEngine::UIElements::TextInputBaseField_1<TValueType>::get_verticalScrollerVisibility() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "get_verticalScrollerVisibility", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ScrollerVisibility>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::set_verticalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(),
                                                           { "set_verticalScrollerVisibility", {}, { ::i2c::type_of<::UnityEngine::UIElements::ScrollerVisibility>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::HandleEventBubbleUp(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextInputBaseField_1<TValueType>::ValueToString(TValueType value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), 155 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
template <typename TValueType> inline TValueType UnityEngine::UIElements::TextInputBaseField_1<TValueType>::StringToValue(::StringW str) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), 156 })));
  return ::cordl_internals::RunMethodRethrow<TValueType>(this, ___internal_method, str);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::UpdateMixedValueContent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), 152 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::OnPlaceholderChanged() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), { "OnPlaceholderChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::UpdatePlaceholderClassList(::UnityEngine::UIElements::ChangeEvent_1<TValueType>* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(),
                                                           { "UpdatePlaceholderClassList", {}, { ::i2c::type_of<::UnityEngine::UIElements::ChangeEvent_1<TValueType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::UpdateValueFromText() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), 157 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::UpdateTextFromValue() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(), 158 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextInputBaseField_1<TValueType>::OnFieldCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(),
                                                           { "OnFieldCustomStyleResolved", {}, { ::i2c::type_of<::UnityEngine::UIElements::CustomStyleResolvedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
template <typename TValueType>
inline ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*
UnityEngine::UIElements::TextInputBaseField_1<TValueType>::New_ctor(::StringW label, int32_t maxLength, char16_t maskChar,
                                                                    ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* textInputBase) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TextInputBaseField_1<TValueType>*>(label, maxLength, maskChar, textInputBase));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IDelayedField"
template <typename TValueType> constexpr UnityEngine::UIElements::TextInputBaseField_1<TValueType>::operator ::UnityEngine::UIElements::IDelayedField*() noexcept {
  return static_cast<::UnityEngine::UIElements::IDelayedField*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IDelayedField"
template <typename TValueType> constexpr ::UnityEngine::UIElements::IDelayedField* UnityEngine::UIElements::TextInputBaseField_1<TValueType>::i___UnityEngine__UIElements__IDelayedField() noexcept {
  return static_cast<::UnityEngine::UIElements::IDelayedField*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TValueType> constexpr ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>::TextInputBaseField_1() {}
