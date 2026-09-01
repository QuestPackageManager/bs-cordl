#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\BaseField_1.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleProperty_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DispatchMode_impl.hpp"
#include "UnityEngine/zzzz__PropertyName_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__AttachToPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleResolvedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__DetachFromPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__DispatchMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEditableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__INotifyValueChanged_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__Label_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
template <typename TValueType> constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_Label() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Label;
}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType>::__cordl_internal_get_m_Label() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Label;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType>::__cordl_internal_set_m_Label(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Label = value;
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType>
inline void UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType>::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                              ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
template <typename TValueType> inline ::UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType>* UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType>*>());
}
// Ctor Parameters []
template <typename TValueType> constexpr ::UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType>::BaseField_1_UxmlTraits() {}
template <typename TValueType> constexpr float_t& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_m_LabelWidthRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LabelWidthRatio;
}
template <typename TValueType> constexpr float_t const& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_m_LabelWidthRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LabelWidthRatio;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_set_m_LabelWidthRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LabelWidthRatio = value;
}
template <typename TValueType> constexpr float_t& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_m_LabelExtraPadding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LabelExtraPadding;
}
template <typename TValueType> constexpr float_t const& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_m_LabelExtraPadding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LabelExtraPadding;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_set_m_LabelExtraPadding(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LabelExtraPadding = value;
}
template <typename TValueType> constexpr float_t& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_m_LabelBaseMinWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LabelBaseMinWidth;
}
template <typename TValueType> constexpr float_t const& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_m_LabelBaseMinWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LabelBaseMinWidth;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_set_m_LabelBaseMinWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LabelBaseMinWidth = value;
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_m_VisualInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualInput;
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_m_VisualInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualInput;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_set_m_VisualInput(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VisualInput = value;
}
template <typename TValueType> constexpr TValueType& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_m_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
template <typename TValueType> constexpr TValueType const& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_m_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_set_m_Value(TValueType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Value = value;
}
template <typename TValueType> constexpr ::System::Func_2<TValueType, TValueType>*& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_onValidateValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onValidateValue;
}
template <typename TValueType> constexpr ::System::Func_2<TValueType, TValueType>* const& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_onValidateValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onValidateValue;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_set_onValidateValue(::System::Func_2<TValueType, TValueType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onValidateValue = value;
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::DispatchMode& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get__dispatchMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dispatchMode_k__BackingField;
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::DispatchMode const& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get__dispatchMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dispatchMode_k__BackingField;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_set__dispatchMode_k__BackingField(::UnityEngine::UIElements::DispatchMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dispatchMode_k__BackingField = value;
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::Label*& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get__labelElement_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labelElement_k__BackingField;
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::Label* const& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get__labelElement_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labelElement_k__BackingField;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_set__labelElement_k__BackingField(::UnityEngine::UIElements::Label* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____labelElement_k__BackingField = value;
}
template <typename TValueType> constexpr bool& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_m_ShowMixedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowMixedValue;
}
template <typename TValueType> constexpr bool const& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_m_ShowMixedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowMixedValue;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_set_m_ShowMixedValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShowMixedValue = value;
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::Label*& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_m_MixedValueLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MixedValueLabel;
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::Label* const& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_m_MixedValueLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MixedValueLabel;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_set_m_MixedValueLabel(::UnityEngine::UIElements::Label* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MixedValueLabel = value;
}
template <typename TValueType> constexpr bool& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_m_SkipValidation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SkipValidation;
}
template <typename TValueType> constexpr bool const& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_m_SkipValidation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SkipValidation;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_set_m_SkipValidation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SkipValidation = value;
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_m_CachedContextWidthElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedContextWidthElement;
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_m_CachedContextWidthElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedContextWidthElement;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_set_m_CachedContextWidthElement(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedContextWidthElement = value;
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_m_CachedInspectorElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedInspectorElement;
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_m_CachedInspectorElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedInspectorElement;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_set_m_CachedInspectorElement(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedInspectorElement = value;
}
template <typename TValueType>
constexpr ::System::Action*& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get__UnityEngine_UIElements_IEditableElement_editingStarted_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityEngine_UIElements_IEditableElement_editingStarted_k__BackingField;
}
template <typename TValueType>
constexpr ::System::Action* const& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get__UnityEngine_UIElements_IEditableElement_editingStarted_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityEngine_UIElements_IEditableElement_editingStarted_k__BackingField;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_set__UnityEngine_UIElements_IEditableElement_editingStarted_k__BackingField(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UnityEngine_UIElements_IEditableElement_editingStarted_k__BackingField = value;
}
template <typename TValueType>
constexpr ::System::Action*& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get__UnityEngine_UIElements_IEditableElement_editingEnded_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityEngine_UIElements_IEditableElement_editingEnded_k__BackingField;
}
template <typename TValueType>
constexpr ::System::Action* const& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get__UnityEngine_UIElements_IEditableElement_editingEnded_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityEngine_UIElements_IEditableElement_editingEnded_k__BackingField;
}
template <typename TValueType>
constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_set__UnityEngine_UIElements_IEditableElement_editingEnded_k__BackingField(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UnityEngine_UIElements_IEditableElement_editingEnded_k__BackingField = value;
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_valueProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "valueProperty", ::UnityEngine::UIElements::BaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_valueProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "valueProperty", ::UnityEngine::UIElements::BaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_labelProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "labelProperty", ::UnityEngine::UIElements::BaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_labelProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "labelProperty", ::UnityEngine::UIElements::BaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_showMixedValueProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "showMixedValueProperty", ::UnityEngine::UIElements::BaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_showMixedValueProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "showMixedValueProperty", ::UnityEngine::UIElements::BaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::BaseField_1<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::BaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::BaseField_1<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::BaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::BaseField_1<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::BaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_noLabelVariantUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "noLabelVariantUssClassName", ::UnityEngine::UIElements::BaseField_1<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_noLabelVariantUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "noLabelVariantUssClassName", ::UnityEngine::UIElements::BaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_labelDraggerVariantUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelDraggerVariantUssClassName", ::UnityEngine::UIElements::BaseField_1<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_labelDraggerVariantUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelDraggerVariantUssClassName", ::UnityEngine::UIElements::BaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_mixedValueLabelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "mixedValueLabelUssClassName", ::UnityEngine::UIElements::BaseField_1<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_mixedValueLabelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "mixedValueLabelUssClassName", ::UnityEngine::UIElements::BaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_alignedFieldUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "alignedFieldUssClassName", ::UnityEngine::UIElements::BaseField_1<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_alignedFieldUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "alignedFieldUssClassName", ::UnityEngine::UIElements::BaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_inspectorFieldUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inspectorFieldUssClassName", ::UnityEngine::UIElements::BaseField_1<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_inspectorFieldUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inspectorFieldUssClassName", ::UnityEngine::UIElements::BaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_mixedValueString(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "mixedValueString", ::UnityEngine::UIElements::BaseField_1<TValueType>*>(std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_mixedValueString() {
  return ::cordl_internals::getStaticField<::StringW, "mixedValueString", ::UnityEngine::UIElements::BaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_serializedPropertyCopyName(::UnityEngine::PropertyName value) {
  ::cordl_internals::setStaticField<::UnityEngine::PropertyName, "serializedPropertyCopyName", ::UnityEngine::UIElements::BaseField_1<TValueType>*>(std::forward<::UnityEngine::PropertyName>(value));
}
template <typename TValueType> inline ::UnityEngine::PropertyName UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_serializedPropertyCopyName() {
  return ::cordl_internals::getStaticField<::UnityEngine::PropertyName, "serializedPropertyCopyName", ::UnityEngine::UIElements::BaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_s_LabelWidthRatioProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>, "s_LabelWidthRatioProperty", ::UnityEngine::UIElements::BaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_s_LabelWidthRatioProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>, "s_LabelWidthRatioProperty", ::UnityEngine::UIElements::BaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_s_LabelExtraPaddingProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>, "s_LabelExtraPaddingProperty", ::UnityEngine::UIElements::BaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_s_LabelExtraPaddingProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>, "s_LabelExtraPaddingProperty", ::UnityEngine::UIElements::BaseField_1<TValueType>*>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_s_LabelBaseMinWidthProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>, "s_LabelBaseMinWidthProperty", ::UnityEngine::UIElements::BaseField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_s_LabelBaseMinWidthProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>, "s_LabelBaseMinWidthProperty", ::UnityEngine::UIElements::BaseField_1<TValueType>*>();
}
template <typename TValueType> inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseField_1<TValueType>::get_visualInput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), { "get_visualInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::set_visualInput(::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(),
                                                                                         { "set_visualInput", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline TValueType UnityEngine::UIElements::BaseField_1<TValueType>::get_rawValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), { "get_rawValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TValueType>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::set_rawValue(TValueType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), { "set_rawValue", {}, { ::i2c::type_of<TValueType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::add_onValidateValue(::System::Func_2<TValueType, TValueType>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(),
                                                                                         { "add_onValidateValue", {}, { ::i2c::type_of<::System::Func_2<TValueType, TValueType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::remove_onValidateValue(::System::Func_2<TValueType, TValueType>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(),
                                                                                         { "remove_onValidateValue", {}, { ::i2c::type_of<::System::Func_2<TValueType, TValueType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline ::UnityEngine::UIElements::DispatchMode UnityEngine::UIElements::BaseField_1<TValueType>::get_dispatchMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), { "get_dispatchMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DispatchMode>(this, ___internal_method);
}
template <typename TValueType> inline TValueType UnityEngine::UIElements::BaseField_1<TValueType>::get_value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), 143 })));
  return ::cordl_internals::RunMethodRethrow<TValueType>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::set_value(TValueType value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), 144 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline ::UnityEngine::UIElements::Label* UnityEngine::UIElements::BaseField_1<TValueType>::get_labelElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), { "get_labelElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Label*>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::set_labelElement(::UnityEngine::UIElements::Label* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), { "set_labelElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::Label*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseField_1<TValueType>::get_label() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), { "get_label", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::set_label(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), { "set_label", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline bool UnityEngine::UIElements::BaseField_1<TValueType>::get_showMixedValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), { "get_showMixedValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::set_showMixedValue(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), { "set_showMixedValue", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType> inline ::UnityEngine::UIElements::Label* UnityEngine::UIElements::BaseField_1<TValueType>::get_mixedValueLabel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), { "get_mixedValueLabel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Label*>(this, ___internal_method);
}
template <typename TValueType> inline ::System::Action* UnityEngine::UIElements::BaseField_1<TValueType>::UnityEngine_UIElements_IEditableElement_get_editingStarted() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), { "UnityEngine.UIElements.IEditableElement.get_editingStarted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
template <typename TValueType> inline ::System::Action* UnityEngine::UIElements::BaseField_1<TValueType>::UnityEngine_UIElements_IEditableElement_get_editingEnded() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), { "UnityEngine.UIElements.IEditableElement.get_editingEnded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::_ctor(::StringW label) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::_ctor(::StringW label, ::UnityEngine::UIElements::VisualElement* visualInput) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label, visualInput);
}
template <typename TValueType> inline bool UnityEngine::UIElements::BaseField_1<TValueType>::EqualsCurrentValue(TValueType value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), 149 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(),
                                                                                         { "OnAttachToPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::AttachToPanelEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(),
                                                                                         { "OnDetachFromPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::DetachFromPanelEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::RegisterEditingCallbacks() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), 150 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::UnregisterEditingCallbacks() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), 151 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::StartEditing(::UnityEngine::UIElements::EventBase* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), { "StartEditing", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::EndEditing(::UnityEngine::UIElements::EventBase* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), { "EndEditing", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(),
                                                                                         { "OnCustomStyleResolved", {}, { ::i2c::type_of<::UnityEngine::UIElements::CustomStyleResolvedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::OnInspectorFieldGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(),
                                                           { "OnInspectorFieldGeometryChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::AlignLabel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), { "AlignLabel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline ::UnityEngine::Rect UnityEngine::UIElements::BaseField_1<TValueType>::ComputeTooltipRect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), { "ComputeTooltipRect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
template <typename TValueType> inline TValueType UnityEngine::UIElements::BaseField_1<TValueType>::ValidatedValue(TValueType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), { "ValidatedValue", {}, { ::i2c::type_of<TValueType>() } })));
  return ::cordl_internals::RunMethodRethrow<TValueType>(this, ___internal_method, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::HandleEventBubbleUp(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::UpdateMixedValueContent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), 152 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::SetValueWithoutNotify(TValueType newValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), 153 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::OnViewDataReady() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseField_1<TValueType>*>(), 132 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline ::UnityEngine::UIElements::BaseField_1<TValueType>* UnityEngine::UIElements::BaseField_1<TValueType>::New_ctor(::StringW label) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BaseField_1<TValueType>*>(label));
}
template <typename TValueType>
inline ::UnityEngine::UIElements::BaseField_1<TValueType>* UnityEngine::UIElements::BaseField_1<TValueType>::New_ctor(::StringW label, ::UnityEngine::UIElements::VisualElement* visualInput) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BaseField_1<TValueType>*>(label, visualInput));
}
/// @brief Convert operator to "::UnityEngine::UIElements::INotifyValueChanged_1<TValueType>"
template <typename TValueType> constexpr UnityEngine::UIElements::BaseField_1<TValueType>::operator ::UnityEngine::UIElements::INotifyValueChanged_1<TValueType>*() noexcept {
  return static_cast<::UnityEngine::UIElements::INotifyValueChanged_1<TValueType>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::INotifyValueChanged_1<TValueType>"
template <typename TValueType>
constexpr ::UnityEngine::UIElements::INotifyValueChanged_1<TValueType>* UnityEngine::UIElements::BaseField_1<TValueType>::i___UnityEngine__UIElements__INotifyValueChanged_1_TValueType_() noexcept {
  return static_cast<::UnityEngine::UIElements::INotifyValueChanged_1<TValueType>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IEditableElement"
template <typename TValueType> constexpr UnityEngine::UIElements::BaseField_1<TValueType>::operator ::UnityEngine::UIElements::IEditableElement*() noexcept {
  return static_cast<::UnityEngine::UIElements::IEditableElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IEditableElement"
template <typename TValueType> constexpr ::UnityEngine::UIElements::IEditableElement* UnityEngine::UIElements::BaseField_1<TValueType>::i___UnityEngine__UIElements__IEditableElement() noexcept {
  return static_cast<::UnityEngine::UIElements::IEditableElement*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TValueType> constexpr ::UnityEngine::UIElements::BaseField_1<TValueType>::BaseField_1() {}
