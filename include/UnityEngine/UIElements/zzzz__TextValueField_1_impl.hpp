#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\TextValueField_1.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextInputBaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextValueField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldMouseDragger_def.hpp"
#include "UnityEngine/UIElements/zzzz__DeltaSpeed_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IValueField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextValueField_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
template <typename TValueType> constexpr ::StringW& UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>::__cordl_internal_get__formatString_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formatString_k__BackingField;
}
template <typename TValueType> constexpr ::StringW const& UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>::__cordl_internal_get__formatString_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formatString_k__BackingField;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>::__cordl_internal_set__formatString_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____formatString_k__BackingField = value;
}
template <typename TValueType> inline ::UnityEngine::UIElements::TextValueField_1<TValueType>* UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>::get_textValueFieldParent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>*>(), { "get_textValueFieldParent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextValueField_1<TValueType>*>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline bool UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>::AcceptCharacter(char16_t c) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>*>(), 137 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>::get_allowedCharacters() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>*>(), 138 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>::get_formatString() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>*>(), { "get_formatString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>::set_formatString(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>*>(), { "set_formatString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType>
inline void UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>::ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed,
                                                                                                        TValueType startValue) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>*>(), 139 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delta, speed, startValue);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>::StartDragging() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>*>(), { "StartDragging", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>::StopDragging() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>*>(), { "StopDragging", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>::ValueToString(TValueType value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>*>(), 140 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
template <typename TValueType> inline TValueType UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>::StringToValue(::StringW str) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>*>(), 136 })));
  return ::cordl_internals::RunMethodRethrow<TValueType>(this, ___internal_method, str);
}
template <typename TValueType> inline ::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>* UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>*>());
}
// Ctor Parameters []
template <typename TValueType> constexpr ::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>::TextValueField_1_TextValueInput() {}
template <typename TValueType> constexpr ::UnityEngine::UIElements::BaseFieldMouseDragger*& UnityEngine::UIElements::TextValueField_1<TValueType>::__cordl_internal_get_m_Dragger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dragger;
}
template <typename TValueType> constexpr ::UnityEngine::UIElements::BaseFieldMouseDragger* const& UnityEngine::UIElements::TextValueField_1<TValueType>::__cordl_internal_get_m_Dragger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dragger;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::TextValueField_1<TValueType>::__cordl_internal_set_m_Dragger(::UnityEngine::UIElements::BaseFieldMouseDragger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Dragger = value;
}
template <typename TValueType> constexpr bool& UnityEngine::UIElements::TextValueField_1<TValueType>::__cordl_internal_get_m_UpdateTextFromValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateTextFromValue;
}
template <typename TValueType> constexpr bool const& UnityEngine::UIElements::TextValueField_1<TValueType>::__cordl_internal_get_m_UpdateTextFromValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateTextFromValue;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::TextValueField_1<TValueType>::__cordl_internal_set_m_UpdateTextFromValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateTextFromValue = value;
}
template <typename TValueType> constexpr bool& UnityEngine::UIElements::TextValueField_1<TValueType>::__cordl_internal_get_m_ForceUpdateDisplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForceUpdateDisplay;
}
template <typename TValueType> constexpr bool const& UnityEngine::UIElements::TextValueField_1<TValueType>::__cordl_internal_get_m_ForceUpdateDisplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForceUpdateDisplay;
}
template <typename TValueType> constexpr void UnityEngine::UIElements::TextValueField_1<TValueType>::__cordl_internal_set_m_ForceUpdateDisplay(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ForceUpdateDisplay = value;
}
template <typename TValueType> inline void UnityEngine::UIElements::TextValueField_1<TValueType>::setStaticF_formatStringProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "formatStringProperty", ::UnityEngine::UIElements::TextValueField_1<TValueType>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextValueField_1<TValueType>::getStaticF_formatStringProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "formatStringProperty", ::UnityEngine::UIElements::TextValueField_1<TValueType>*>();
}
template <typename TValueType> inline ::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>* UnityEngine::UIElements::TextValueField_1<TValueType>::get_textValueInput() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextValueField_1<TValueType>*>(), { "get_textValueInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>*>(this, ___internal_method);
}
template <typename TValueType> inline ::StringW UnityEngine::UIElements::TextValueField_1<TValueType>::get_formatString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextValueField_1<TValueType>*>(), { "get_formatString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextValueField_1<TValueType>::set_formatString(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextValueField_1<TValueType>*>(), { "set_formatString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType>
inline void UnityEngine::UIElements::TextValueField_1<TValueType>::_ctor(::StringW label, int32_t maxLength, ::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>* textValueInput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextValueField_1<TValueType>*>(),
                          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label, maxLength, textValueInput);
}
template <typename TValueType>
inline void UnityEngine::UIElements::TextValueField_1<TValueType>::ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, TValueType startValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextValueField_1<TValueType>*>(), 164 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delta, speed, startValue);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextValueField_1<TValueType>::StartDragging() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextValueField_1<TValueType>*>(), { "StartDragging", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextValueField_1<TValueType>::StopDragging() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextValueField_1<TValueType>*>(), { "StopDragging", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextValueField_1<TValueType>::UpdateValueFromText() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextValueField_1<TValueType>*>(), 157 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextValueField_1<TValueType>::UpdateTextFromValue() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextValueField_1<TValueType>*>(), 158 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextValueField_1<TValueType>::OnIsReadOnlyChanged(bool newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextValueField_1<TValueType>*>(), { "OnIsReadOnlyChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
template <typename TValueType> inline bool UnityEngine::UIElements::TextValueField_1<TValueType>::CanTryParse(::StringW textString) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextValueField_1<TValueType>*>(), 165 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, textString);
}
template <typename TValueType> template <typename TDraggerType> inline void UnityEngine::UIElements::TextValueField_1<TValueType>::AddLabelDragger() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextValueField_1<TValueType>*>(), { "AddLabelDragger", { ::i2c::class_of<TDraggerType>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDraggerType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextValueField_1<TValueType>::EnableLabelDragger(bool enable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextValueField_1<TValueType>*>(), { "EnableLabelDragger", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextValueField_1<TValueType>::SetValueWithoutNotify(TValueType newValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextValueField_1<TValueType>*>(), 153 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextValueField_1<TValueType>::HandleEventBubbleUp(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextValueField_1<TValueType>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextValueField_1<TValueType>::OnViewDataReady() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextValueField_1<TValueType>*>(), 132 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextValueField_1<TValueType>::RegisterEditingCallbacks() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextValueField_1<TValueType>*>(), 150 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType> inline void UnityEngine::UIElements::TextValueField_1<TValueType>::UnregisterEditingCallbacks() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextValueField_1<TValueType>*>(), 151 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType>
inline ::UnityEngine::UIElements::TextValueField_1<TValueType>*
UnityEngine::UIElements::TextValueField_1<TValueType>::New_ctor(::StringW label, int32_t maxLength, ::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>* textValueInput) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TextValueField_1<TValueType>*>(label, maxLength, textValueInput));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IValueField_1<TValueType>"
template <typename TValueType> constexpr UnityEngine::UIElements::TextValueField_1<TValueType>::operator ::UnityEngine::UIElements::IValueField_1<TValueType>*() noexcept {
  return static_cast<::UnityEngine::UIElements::IValueField_1<TValueType>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IValueField_1<TValueType>"
template <typename TValueType>
constexpr ::UnityEngine::UIElements::IValueField_1<TValueType>* UnityEngine::UIElements::TextValueField_1<TValueType>::i___UnityEngine__UIElements__IValueField_1_TValueType_() noexcept {
  return static_cast<::UnityEngine::UIElements::IValueField_1<TValueType>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TValueType> constexpr ::UnityEngine::UIElements::TextValueField_1<TValueType>::TextValueField_1() {}
