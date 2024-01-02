#pragma once
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__SliderDirection_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseSlider_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextField_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__ClampedDragger_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusOutEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseSlider_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__SliderDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyDownEvent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename TValueType> constexpr ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>::__BaseSlider_1__SliderKey(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
template <typename TValueType> constexpr ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>::__BaseSlider_1__SliderKey() {}
template <typename TValueType>
constexpr ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType> UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>::None{ static_cast<int32_t>(0x0) };
template <typename TValueType>
constexpr ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType> UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>::Lowest{ static_cast<int32_t>(0x1) };
template <typename TValueType>
constexpr ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType> UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>::LowerPage{ static_cast<int32_t>(0x2) };
template <typename TValueType>
constexpr ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType> UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>::Lower{ static_cast<int32_t>(0x3) };
template <typename TValueType>
constexpr ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType> UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>::Higher{ static_cast<int32_t>(0x4) };
template <typename TValueType>
constexpr ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType> UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>::HigherPage{ static_cast<int32_t>(0x5) };
template <typename TValueType>
constexpr ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType> UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>::Highest{ static_cast<int32_t>(0x6) };
template <typename TValueType> constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__dragContainer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragContainer_k__BackingField;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__dragContainer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragContainer_k__BackingField;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set__dragContainer_k__BackingField(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dragContainer_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__dragElement_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragElement_k__BackingField;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__dragElement_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragElement_k__BackingField;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set__dragElement_k__BackingField(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dragElement_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__dragBorderElement_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragBorderElement_k__BackingField;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__dragBorderElement_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragBorderElement_k__BackingField;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set__dragBorderElement_k__BackingField(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dragBorderElement_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::TextField*& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__inputTextField_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputTextField_k__BackingField;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextField*> const& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__inputTextField_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputTextField_k__BackingField;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set__inputTextField_k__BackingField(::UnityEngine::UIElements::TextField* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputTextField_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValueType> constexpr TValueType& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_LowValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LowValue;
}
template <typename TValueType> constexpr TValueType const& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_LowValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LowValue;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set_m_LowValue(TValueType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LowValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValueType> constexpr TValueType& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_HighValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighValue;
}
template <typename TValueType> constexpr TValueType const& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_HighValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighValue;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set_m_HighValue(TValueType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HighValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValueType> constexpr float_t& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_PageSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PageSize;
}
template <typename TValueType> constexpr float_t const& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_PageSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PageSize;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set_m_PageSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PageSize = value;
}
template <typename TValueType> constexpr bool& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_ShowInputField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowInputField;
}
template <typename TValueType> constexpr bool const& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_ShowInputField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShowInputField;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set_m_ShowInputField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShowInputField = value;
}
template <typename TValueType> constexpr bool& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__clamped_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clamped_k__BackingField;
}
template <typename TValueType> constexpr bool const& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__clamped_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clamped_k__BackingField;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set__clamped_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clamped_k__BackingField = value;
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::ClampedDragger_1<TValueType>*& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__clampedDragger_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clampedDragger_k__BackingField;
}
template <typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ClampedDragger_1<TValueType>*> const&
UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__clampedDragger_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clampedDragger_k__BackingField;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set__clampedDragger_k__BackingField(::UnityEngine::UIElements::ClampedDragger_1<TValueType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clampedDragger_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValueType> constexpr ::UnityEngine::Rect& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_DragElementStartPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragElementStartPos;
}
template <typename TValueType> constexpr ::UnityEngine::Rect const& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_DragElementStartPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragElementStartPos;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set_m_DragElementStartPos(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DragElementStartPos = value;
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::SliderDirection& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_Direction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Direction;
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::SliderDirection const& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_Direction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Direction;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set_m_Direction(::UnityEngine::UIElements::SliderDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Direction = value;
}
template <typename TValueType> constexpr bool& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_Inverted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Inverted;
}
template <typename TValueType> constexpr bool const& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_Inverted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Inverted;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set_m_Inverted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Inverted = value;
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseSlider_1<TValueType>::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseSlider_1<TValueType>::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseSlider_1<TValueType>::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::setStaticF_horizontalVariantUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "horizontalVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseSlider_1<TValueType>::getStaticF_horizontalVariantUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "horizontalVariantUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::setStaticF_verticalVariantUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "verticalVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseSlider_1<TValueType>::getStaticF_verticalVariantUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "verticalVariantUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::setStaticF_dragContainerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "dragContainerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseSlider_1<TValueType>::getStaticF_dragContainerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "dragContainerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::setStaticF_trackerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "trackerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseSlider_1<TValueType>::getStaticF_trackerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "trackerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::setStaticF_draggerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "draggerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseSlider_1<TValueType>::getStaticF_draggerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "draggerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::setStaticF_draggerBorderUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "draggerBorderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseSlider_1<TValueType>::getStaticF_draggerBorderUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "draggerBorderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>();
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::setStaticF_textFieldClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "textFieldClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::BaseSlider_1<TValueType>::getStaticF_textFieldClassName() {
  return ::cordl_internals::getStaticField<::StringW, "textFieldClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>();
}
template <typename TValueType> inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseSlider_1<TValueType>::get_dragContainer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                                                                             "get_dragContainer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_dragContainer(::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "set_dragContainer", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseSlider_1<TValueType>::get_dragElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                                                                             "get_dragElement", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_dragElement(::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "set_dragElement", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseSlider_1<TValueType>::get_dragBorderElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                                                                             "get_dragBorderElement", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_dragBorderElement(::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "set_dragBorderElement", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline ::UnityEngine::UIElements::TextField* UnityEngine::UIElements::BaseSlider_1<TValueType>::get_inputTextField() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                                                                             "get_inputTextField", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextField*, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_inputTextField(::UnityEngine::UIElements::TextField* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "set_inputTextField", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextField*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline TValueType UnityEngine::UIElements::BaseSlider_1<TValueType>::get_lowValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                                                                             "get_lowValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TValueType, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_lowValue(TValueType value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "set_lowValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline TValueType UnityEngine::UIElements::BaseSlider_1<TValueType>::get_highValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                                                                             "get_highValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TValueType, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_highValue(TValueType value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "set_highValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::SetHighValueWithoutNotify(TValueType newHighValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "SetHighValueWithoutNotify",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newHighValue);
}
template <typename TValueType> inline float_t UnityEngine::UIElements::BaseSlider_1<TValueType>::get_pageSize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), 106)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_pageSize(float_t value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), 107)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline bool UnityEngine::UIElements::BaseSlider_1<TValueType>::get_showInputField() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), 108)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_showInputField(bool value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), 109)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline bool UnityEngine::UIElements::BaseSlider_1<TValueType>::get_clamped() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                                                                             "get_clamped", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_clamped(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "set_clamped",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline ::UnityEngine::UIElements::ClampedDragger_1<TValueType>* UnityEngine::UIElements::BaseSlider_1<TValueType>::get_clampedDragger() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                                                                             "get_clampedDragger", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ClampedDragger_1<TValueType>*, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_clampedDragger(::UnityEngine::UIElements::ClampedDragger_1<TValueType>* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "set_clampedDragger", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ClampedDragger_1<TValueType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline TValueType UnityEngine::UIElements::BaseSlider_1<TValueType>::Clamp(TValueType value, TValueType lowBound, TValueType highBound) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "Clamp", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValueType, false>(this, ___internal_method, value, lowBound, highBound);
}
template <typename TValueType> inline TValueType UnityEngine::UIElements::BaseSlider_1<TValueType>::GetClampedValue(TValueType newValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "GetClampedValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValueType, false>(this, ___internal_method, newValue);
}
template <typename TValueType> inline TValueType UnityEngine::UIElements::BaseSlider_1<TValueType>::get_value() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), 101)));
  return ::cordl_internals::RunMethodRethrow<TValueType, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_value(TValueType value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), 102)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::SetValueWithoutNotify(TValueType newValue) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), 105)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
template <typename TValueType> inline ::UnityEngine::UIElements::SliderDirection UnityEngine::UIElements::BaseSlider_1<TValueType>::get_direction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                                                                             "get_direction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::SliderDirection, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_direction(::UnityEngine::UIElements::SliderDirection value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "set_direction", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SliderDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType> inline bool UnityEngine::UIElements::BaseSlider_1<TValueType>::get_inverted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                                                                             "get_inverted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_inverted(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "set_inverted",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @param direction: ::UnityEngine::UIElements::SliderDirection (default: static_cast<int32_t>(0x0))
/// @param pageSize: float_t (default: 0.0)
template <typename TValueType>
inline ::UnityEngine::UIElements::BaseSlider_1<TValueType>* UnityEngine::UIElements::BaseSlider_1<TValueType>::New_ctor(::StringW label, TValueType start, TValueType end,
                                                                                                                        ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>(label, start, end, direction, pageSize));
}
/// @param direction: ::UnityEngine::UIElements::SliderDirection (default: static_cast<int32_t>(0x0))
/// @param pageSize: float_t (default: 0.0)
template <typename TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::_ctor(::StringW label, TValueType start, TValueType end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SliderDirection>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label, start, end, direction, pageSize);
}
template <typename TValueType> inline float_t UnityEngine::UIElements::BaseSlider_1<TValueType>::GetClosestPowerOfTen(float_t positiveNumber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "GetClosestPowerOfTen",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, positiveNumber);
}
template <typename TValueType> inline float_t UnityEngine::UIElements::BaseSlider_1<TValueType>::RoundToMultipleOf(float_t value, float_t roundingValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "RoundToMultipleOf", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value, roundingValue);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::ClampValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                                                                             "ClampValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline TValueType UnityEngine::UIElements::BaseSlider_1<TValueType>::SliderLerpUnclamped(TValueType a, TValueType b, float_t interpolant) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), 110)));
  return ::cordl_internals::RunMethodRethrow<TValueType, false>(this, ___internal_method, a, b, interpolant);
}
template <typename TValueType> inline float_t UnityEngine::UIElements::BaseSlider_1<TValueType>::SliderNormalizeValue(TValueType currentValue, TValueType lowerValue, TValueType higherValue) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), 111)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, currentValue, lowerValue, higherValue);
}
template <typename TValueType> inline TValueType UnityEngine::UIElements::BaseSlider_1<TValueType>::ParseStringToValue(::StringW stringValue) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), 112)));
  return ::cordl_internals::RunMethodRethrow<TValueType, false>(this, ___internal_method, stringValue);
}
template <typename TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::ComputeValueFromKey(::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType> sliderKey, bool isShift) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), 113)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderKey, isShift);
}
template <typename TValueType> inline TValueType UnityEngine::UIElements::BaseSlider_1<TValueType>::SliderLerpDirectionalUnclamped(TValueType a, TValueType b, float_t positionInterpolant) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "SliderLerpDirectionalUnclamped", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValueType, false>(this, ___internal_method, a, b, positionInterpolant);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::SetSliderValueFromDrag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                                                                             "SetSliderValueFromDrag", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::ComputeValueAndDirectionFromDrag(float_t sliderLength, float_t dragElementLength, float_t dragElementPos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "ComputeValueAndDirectionFromDrag", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderLength, dragElementLength, dragElementPos);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::SetSliderValueFromClick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                                                                             "SetSliderValueFromClick", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "OnKeyDown", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template <typename TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::ComputeValueAndDirectionFromClick(float_t sliderLength, float_t dragElementLength, float_t dragElementPos, float_t dragElementLastPos) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), 114)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderLength, dragElementLength, dragElementPos, dragElementLastPos);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::AdjustDragElement(float_t factor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "AdjustDragElement",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, factor);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::UpdateDragElementPosition(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "UpdateDragElementPosition", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::OnViewDataReady() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), 92)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline bool UnityEngine::UIElements::BaseSlider_1<TValueType>::SameValues(float_t a, float_t b, float_t epsilon) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "SameValues", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, a, b, epsilon);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::UpdateDragElementPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                                                                             "UpdateDragElementPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::UpdateTextFieldVisibility() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                                                                             "UpdateTextFieldVisibility", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::UpdateTextFieldValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                                                                             "UpdateTextFieldValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::OnTextFieldFocusOut(::UnityEngine::UIElements::FocusOutEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "OnTextFieldFocusOut", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusOutEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::OnTextFieldValueChange(::UnityEngine::UIElements::ChangeEvent_1<::StringW>* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), "OnTextFieldValueChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template <typename TValueType> inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::UpdateMixedValueContent() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(), 104)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TValueType> constexpr ::UnityEngine::UIElements::BaseSlider_1<TValueType>::BaseSlider_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
