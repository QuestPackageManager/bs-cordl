#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseField_1.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleProperty_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__IEditableElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__INotifyValueChanged_1_impl.hpp"
#include "UnityEngine/zzzz__PropertyName_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__AttachToPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleResolvedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__DetachFromPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
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
  ::cordl_internals::setInstanceField(this, &this->___m_Label, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType>
inline void UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType>::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                              ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
template <typename TValueType> inline ::System::Collections::Generic::List_1<::StringW>* UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType>::ParseChoiceList(::StringW choicesFromBag) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType>*>::get(), "ParseChoiceList",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(nullptr, ___internal_method, choicesFromBag);
}
template <typename TValueType> inline ::UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType>* UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType>*>());
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
template <typename TValueType> constexpr float_t& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_m_LabelExtraContextWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LabelExtraContextWidth;
}
template <typename TValueType> constexpr float_t const& UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_get_m_LabelExtraContextWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LabelExtraContextWidth;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__cordl_internal_set_m_LabelExtraContextWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LabelExtraContextWidth = value;
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
  ::cordl_internals::setInstanceField(this, &this->___m_VisualInput, value);
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
  ::cordl_internals::setInstanceField(this, &this->___m_Value, value);
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
  ::cordl_internals::setInstanceField(this, &this->___onValidateValue, value);
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
  ::cordl_internals::setInstanceField(this, &this->____labelElement_k__BackingField, value);
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
  ::cordl_internals::setInstanceField(this, &this->___m_MixedValueLabel, value);
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
  ::cordl_internals::setInstanceField(this, &this->___m_CachedContextWidthElement, value);
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
  ::cordl_internals::setInstanceField(this, &this->___m_CachedInspectorElement, value);
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
  ::cordl_internals::setInstanceField(this, &this->____UnityEngine_UIElements_IEditableElement_editingStarted_k__BackingField, value);
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
  ::cordl_internals::setInstanceField(this, &this->____UnityEngine_UIElements_IEditableElement_editingEnded_k__BackingField, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_noLabelVariantUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "noLabelVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_noLabelVariantUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "noLabelVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_labelDraggerVariantUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelDraggerVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_labelDraggerVariantUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelDraggerVariantUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_mixedValueLabelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "mixedValueLabelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_mixedValueLabelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "mixedValueLabelUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_alignedFieldUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "alignedFieldUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_alignedFieldUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "alignedFieldUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_inspectorFieldUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inspectorFieldUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_inspectorFieldUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inspectorFieldUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_mixedValueString(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "mixedValueString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_mixedValueString() {
  return ::cordl_internals::getStaticField<::StringW, "mixedValueString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_serializedPropertyCopyName(::UnityEngine::PropertyName value) {
  ::cordl_internals::setStaticField<::UnityEngine::PropertyName, "serializedPropertyCopyName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>(std::forward<::UnityEngine::PropertyName>(value));
}
template <typename TValueType> inline ::UnityEngine::PropertyName UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_serializedPropertyCopyName() {
  return ::cordl_internals::getStaticField<::UnityEngine::PropertyName, "serializedPropertyCopyName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_s_LabelWidthRatioProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>, "s_LabelWidthRatioProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>(
      std::forward<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_s_LabelWidthRatioProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>, "s_LabelWidthRatioProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_s_LabelExtraPaddingProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>, "s_LabelExtraPaddingProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>(
      std::forward<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_s_LabelExtraPaddingProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>, "s_LabelExtraPaddingProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_s_LabelBaseMinWidthProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>, "s_LabelBaseMinWidthProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>(
      std::forward<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_s_LabelBaseMinWidthProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>, "s_LabelBaseMinWidthProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>();
}
template <typename TValueType>
inline void UnityEngine::UIElements::BaseField_1<TValueType>::setStaticF_s_LabelExtraContextWidthProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>, "s_LabelExtraContextWidthProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>(
      std::forward<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> UnityEngine::UIElements::BaseField_1<TValueType>::getStaticF_s_LabelExtraContextWidthProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>, "s_LabelExtraContextWidthProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get>();
}
template <typename TValueType> inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseField_1<TValueType>::get_visualInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(),
                                                                             "get_visualInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::set_visualInput(::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "set_visualInput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline TValueType UnityEngine::UIElements::BaseField_1<TValueType>::get_rawValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(),
                                                                             "get_rawValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TValueType, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::set_rawValue(TValueType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "set_rawValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::add_onValidateValue(::System::Func_2<TValueType, TValueType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "add_onValidateValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TValueType, TValueType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::remove_onValidateValue(::System::Func_2<TValueType, TValueType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "remove_onValidateValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TValueType, TValueType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline TValueType UnityEngine::UIElements::BaseField_1<TValueType>::get_value() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), 107)));
  return ::cordl_internals::RunMethodRethrow<TValueType, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::set_value(TValueType value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), 108)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline ::UnityEngine::UIElements::Label* UnityEngine::UIElements::BaseField_1<TValueType>::get_labelElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(),
                                                                             "get_labelElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Label*, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::set_labelElement(::UnityEngine::UIElements::Label* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "set_labelElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Label*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseField_1<TValueType>::get_label() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(),
                                                                             "get_label", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::set_label(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "set_label",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline bool UnityEngine::UIElements::BaseField_1<TValueType>::get_showMixedValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(),
                                                                             "get_showMixedValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::set_showMixedValue(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "set_showMixedValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline ::UnityEngine::UIElements::Label* UnityEngine::UIElements::BaseField_1<TValueType>::get_mixedValueLabel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(),
                                                                             "get_mixedValueLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Label*, false>(this, ___internal_method);
}
template <typename TValueType> inline ::System::Action* UnityEngine::UIElements::BaseField_1<TValueType>::UnityEngine_UIElements_IEditableElement_get_editingStarted() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(),
                                               "UnityEngine.UIElements.IEditableElement.get_editingStarted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action*, false>(this, ___internal_method);
}
template <typename TValueType> inline ::System::Action* UnityEngine::UIElements::BaseField_1<TValueType>::UnityEngine_UIElements_IEditableElement_get_editingEnded() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(),
                                               "UnityEngine.UIElements.IEditableElement.get_editingEnded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action*, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::_ctor(::StringW label) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::_ctor(::StringW label, ::UnityEngine::UIElements::VisualElement* visualInput) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label, visualInput);
}
template <typename TValueType> inline bool UnityEngine::UIElements::BaseField_1<TValueType>::EqualsCurrentValue(TValueType value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), 113)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "OnAttachToPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "OnDetachFromPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::RegisterEditingCallbacks() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), 114)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::UnregisterEditingCallbacks() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), 115)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::StartEditing(::UnityEngine::UIElements::EventBase* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "StartEditing", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::EndEditing(::UnityEngine::UIElements::EventBase* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "EndEditing", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "OnCustomStyleResolved", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CustomStyleResolvedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::OnInspectorFieldGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "OnInspectorFieldGeometryChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::AlignLabel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(),
                                                                             "AlignLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline TValueType UnityEngine::UIElements::BaseField_1<TValueType>::ValidatedValue(TValueType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "ValidatedValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValueType, false>(this, ___internal_method, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::UpdateMixedValueContent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), 116)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::SetValueWithoutNotify(TValueType newValue) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), 117)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::OnViewDataReady() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), 96)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline ::UnityEngine::Rect UnityEngine::UIElements::BaseField_1<TValueType>::GetTooltipRect() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), 95)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method);
}
template <typename TValueType> inline ::UnityEngine::UIElements::BaseField_1<TValueType>* UnityEngine::UIElements::BaseField_1<TValueType>::New_ctor(::StringW label) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::BaseField_1<TValueType>*>(label));
}
template <typename TValueType>
inline ::UnityEngine::UIElements::BaseField_1<TValueType>* UnityEngine::UIElements::BaseField_1<TValueType>::New_ctor(::StringW label, ::UnityEngine::UIElements::VisualElement* visualInput) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::BaseField_1<TValueType>*>(label, visualInput));
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
