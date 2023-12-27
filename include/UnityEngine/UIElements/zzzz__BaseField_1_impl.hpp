#pragma once
#include "UnityEngine/UIElements/zzzz__BindableElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleProperty_1_impl.hpp"
#include "UnityEngine/zzzz__PropertyName_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__INotifyValueChanged_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Label_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/UIElements/zzzz__AttachToPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleResolvedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
template <typename TValueType> constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::__BaseField_1__UxmlTraits<TValueType>::__get_m_Label() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Label;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& UnityEngine::UIElements::__BaseField_1__UxmlTraits<TValueType>::__get_m_Label() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Label;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::__BaseField_1__UxmlTraits<TValueType>::__set_m_Label(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Label)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValueType> inline ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<TValueType>* UnityEngine::UIElements::__BaseField_1__UxmlTraits<TValueType>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__BaseField_1__UxmlTraits<TValueType>*>());
}
template <typename TValueType> inline void UnityEngine::UIElements::__BaseField_1__UxmlTraits<TValueType>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BaseField_1__UxmlTraits<TValueType>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType>
inline void UnityEngine::UIElements::__BaseField_1__UxmlTraits<TValueType>::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                                 ::UnityEngine::UIElements::CreationContext cc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BaseField_1__UxmlTraits<TValueType>*>::get(), "Init", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
template <typename TValueType> inline ::System::Collections::Generic::List_1<::StringW>* UnityEngine::UIElements::__BaseField_1__UxmlTraits<TValueType>::ParseChoiceList(::StringW choicesFromBag) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BaseField_1__UxmlTraits<TValueType>*>::get(), "ParseChoiceList",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(nullptr, ___internal_method, choicesFromBag);
}
// Ctor Parameters []
template <typename TValueType> constexpr ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<TValueType>::__BaseField_1__UxmlTraits() {}
/// @brief Convert operator to "::UnityEngine::UIElements::INotifyValueChanged_1<TValueType>"
template <typename TValueType> constexpr UnityEngine::UIElements::BaseField_1<TValueType>::operator ::UnityEngine::UIElements::INotifyValueChanged_1<TValueType>*() noexcept {
  return static_cast<::UnityEngine::UIElements::INotifyValueChanged_1<TValueType>*>(static_cast<void*>(this));
}
template <typename TValueType> constexpr float_t& UnityEngine::UIElements::BaseField_1<TValueType>::__get_m_LabelWidthRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LabelWidthRatio;
}
template <typename TValueType> constexpr float_t const& UnityEngine::UIElements::BaseField_1<TValueType>::__get_m_LabelWidthRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LabelWidthRatio;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__set_m_LabelWidthRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_LabelWidthRatio = value;
}
template <typename TValueType> constexpr float_t& UnityEngine::UIElements::BaseField_1<TValueType>::__get_m_LabelExtraPadding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LabelExtraPadding;
}
template <typename TValueType> constexpr float_t const& UnityEngine::UIElements::BaseField_1<TValueType>::__get_m_LabelExtraPadding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LabelExtraPadding;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__set_m_LabelExtraPadding(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_LabelExtraPadding = value;
}
template <typename TValueType> constexpr float_t& UnityEngine::UIElements::BaseField_1<TValueType>::__get_m_LabelBaseMinWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LabelBaseMinWidth;
}
template <typename TValueType> constexpr float_t const& UnityEngine::UIElements::BaseField_1<TValueType>::__get_m_LabelBaseMinWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LabelBaseMinWidth;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__set_m_LabelBaseMinWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_LabelBaseMinWidth = value;
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::BaseField_1<TValueType>::__get_m_VisualInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_VisualInput;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::BaseField_1<TValueType>::__get_m_VisualInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_VisualInput;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__set_m_VisualInput(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VisualInput)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValueType> constexpr TValueType& UnityEngine::UIElements::BaseField_1<TValueType>::__get_m_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Value;
}
template <typename TValueType> constexpr TValueType const& UnityEngine::UIElements::BaseField_1<TValueType>::__get_m_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Value;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__set_m_Value(TValueType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::Label*& UnityEngine::UIElements::BaseField_1<TValueType>::__get__labelElement_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____labelElement_k__BackingField;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> const& UnityEngine::UIElements::BaseField_1<TValueType>::__get__labelElement_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____labelElement_k__BackingField;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__set__labelElement_k__BackingField(::UnityEngine::UIElements::Label* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____labelElement_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValueType> constexpr bool& UnityEngine::UIElements::BaseField_1<TValueType>::__get_m_ShowMixedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ShowMixedValue;
}
template <typename TValueType> constexpr bool const& UnityEngine::UIElements::BaseField_1<TValueType>::__get_m_ShowMixedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ShowMixedValue;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__set_m_ShowMixedValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_ShowMixedValue = value;
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::Label*& UnityEngine::UIElements::BaseField_1<TValueType>::__get_m_MixedValueLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_MixedValueLabel;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> const& UnityEngine::UIElements::BaseField_1<TValueType>::__get_m_MixedValueLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_MixedValueLabel;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__set_m_MixedValueLabel(::UnityEngine::UIElements::Label* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MixedValueLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::BaseField_1<TValueType>::__get_m_CachedInspectorElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CachedInspectorElement;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::BaseField_1<TValueType>::__get_m_CachedInspectorElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CachedInspectorElement;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__set_m_CachedInspectorElement(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CachedInspectorElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValueType> constexpr int32_t& UnityEngine::UIElements::BaseField_1<TValueType>::__get_m_CachedListAndFoldoutDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CachedListAndFoldoutDepth;
}
template <typename TValueType> constexpr int32_t const& UnityEngine::UIElements::BaseField_1<TValueType>::__get_m_CachedListAndFoldoutDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CachedListAndFoldoutDepth;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseField_1<TValueType>::__set_m_CachedListAndFoldoutDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_CachedListAndFoldoutDepth = value;
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
template <typename TValueType> inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseField_1<TValueType>::get_visualInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(),
                                                                             "get_visualInput", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::set_visualInput(::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "set_visualInput", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline TValueType UnityEngine::UIElements::BaseField_1<TValueType>::get_rawValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(),
                                                                             "get_rawValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TValueType, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::set_rawValue(TValueType value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "set_rawValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline TValueType UnityEngine::UIElements::BaseField_1<TValueType>::get_value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(),
                                                                             "get_value", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TValueType, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::set_value(TValueType value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "set_value",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline ::UnityEngine::UIElements::Label* UnityEngine::UIElements::BaseField_1<TValueType>::get_labelElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(),
                                                                             "get_labelElement", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Label*, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::set_labelElement(::UnityEngine::UIElements::Label* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "set_labelElement", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Label*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseField_1<TValueType>::get_label() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(),
                                                                             "get_label", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::set_label(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "set_label",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline bool UnityEngine::UIElements::BaseField_1<TValueType>::get_showMixedValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(),
                                                                             "get_showMixedValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TValueType> inline ::UnityEngine::UIElements::Label* UnityEngine::UIElements::BaseField_1<TValueType>::get_mixedValueLabel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(),
                                                                             "get_mixedValueLabel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Label*, false>(this, ___internal_method);
}
template <typename TValueType> inline ::UnityEngine::UIElements::BaseField_1<TValueType>* UnityEngine::UIElements::BaseField_1<TValueType>::New_ctor(::StringW label) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::BaseField_1<TValueType>*>(label));
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::_ctor(::StringW label) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label);
}
template <typename TValueType>
inline ::UnityEngine::UIElements::BaseField_1<TValueType>* UnityEngine::UIElements::BaseField_1<TValueType>::New_ctor(::StringW label, ::UnityEngine::UIElements::VisualElement* visualInput) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::BaseField_1<TValueType>*>(label, visualInput));
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::_ctor(::StringW label, ::UnityEngine::UIElements::VisualElement* visualInput) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label, visualInput);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "OnAttachToPanel", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "OnCustomStyleResolved", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CustomStyleResolvedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::OnInspectorFieldGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "OnInspectorFieldGeometryChanged", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::AlignLabel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(),
                                                                             "AlignLabel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::UpdateMixedValueContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(),
                                                                             "UpdateMixedValueContent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::SetValueWithoutNotify(TValueType newValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(), "SetValueWithoutNotify",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseField_1<TValueType>::OnViewDataReady() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(),
                                                                             "OnViewDataReady", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline ::UnityEngine::Rect UnityEngine::UIElements::BaseField_1<TValueType>::GetTooltipRect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseField_1<TValueType>*>::get(),
                                                                             "GetTooltipRect", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TValueType> constexpr ::UnityEngine::UIElements::BaseField_1<TValueType>::BaseField_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
