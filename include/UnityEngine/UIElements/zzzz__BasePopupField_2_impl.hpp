#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\BasePopupField_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BasePopupField_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BasePopupField_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGenericMenu_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationSubmitEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
template <typename TValueType, typename TValueChoice>
inline ::UnityEngine::Vector2
UnityEngine::UIElements::BasePopupField_2_PopupTextElement<TValueType, TValueChoice>::DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode,
                                                                                                float_t desiredHeight, ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BasePopupField_2_PopupTextElement<TValueType, TValueChoice>*>(), 134 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, desiredWidth, widthMode, desiredHeight, heightMode);
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2_PopupTextElement<TValueType, TValueChoice>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BasePopupField_2_PopupTextElement<TValueType, TValueChoice>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType, typename TValueChoice>
inline ::UnityEngine::UIElements::BasePopupField_2_PopupTextElement<TValueType, TValueChoice>* UnityEngine::UIElements::BasePopupField_2_PopupTextElement<TValueType, TValueChoice>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BasePopupField_2_PopupTextElement<TValueType, TValueChoice>*>());
}
// Ctor Parameters []
template <typename TValueType, typename TValueChoice> constexpr ::UnityEngine::UIElements::BasePopupField_2_PopupTextElement<TValueType, TValueChoice>::BasePopupField_2_PopupTextElement() {}
template <typename TValueType, typename TValueChoice>
inline void UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>::setStaticF___9(::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>*, "<>9", ::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>*>(
      std::forward<::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>*>(value));
}
template <typename TValueType, typename TValueChoice>
inline ::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>* UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>*, "<>9",
                                           ::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>*>();
}
template <typename TValueType, typename TValueChoice>
inline void
UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>::setStaticF___9__27_0(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::MouseDownEvent*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::MouseDownEvent*>*, "<>9__27_0",
                                    ::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>*>(
      std::forward<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::MouseDownEvent*>*>(value));
}
template <typename TValueType, typename TValueChoice>
inline ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::MouseDownEvent*>* UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>::getStaticF___9__27_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::MouseDownEvent*>*, "<>9__27_0",
                                           ::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>*>();
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType, typename TValueChoice>
inline void UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>::__ctor_b__27_0(::UnityEngine::UIElements::MouseDownEvent* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>*>(),
                                                                                         { "<.ctor>b__27_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::MouseDownEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
template <typename TValueType, typename TValueChoice>
inline ::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>* UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>*>());
}
// Ctor Parameters []
template <typename TValueType, typename TValueChoice> constexpr ::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>::BasePopupField_2___c() {}
template <typename TValueType, typename TValueChoice>
constexpr ::System::Collections::Generic::List_1<TValueChoice>*& UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::__cordl_internal_get_m_Choices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Choices;
}
template <typename TValueType, typename TValueChoice>
constexpr ::System::Collections::Generic::List_1<TValueChoice>* const& UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::__cordl_internal_get_m_Choices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Choices;
}
template <typename TValueType, typename TValueChoice>
constexpr void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::__cordl_internal_set_m_Choices(::System::Collections::Generic::List_1<TValueChoice>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Choices = value;
}
template <typename TValueType, typename TValueChoice>
constexpr ::UnityEngine::UIElements::TextElement*& UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::__cordl_internal_get_m_TextElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextElement;
}
template <typename TValueType, typename TValueChoice>
constexpr ::UnityEngine::UIElements::TextElement* const& UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::__cordl_internal_get_m_TextElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextElement;
}
template <typename TValueType, typename TValueChoice>
constexpr void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::__cordl_internal_set_m_TextElement(::UnityEngine::UIElements::TextElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextElement = value;
}
template <typename TValueType, typename TValueChoice>
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::__cordl_internal_get_m_ArrowElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ArrowElement;
}
template <typename TValueType, typename TValueChoice>
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::__cordl_internal_get_m_ArrowElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ArrowElement;
}
template <typename TValueType, typename TValueChoice>
constexpr void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::__cordl_internal_set_m_ArrowElement(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ArrowElement = value;
}
template <typename TValueType, typename TValueChoice>
constexpr ::System::Func_2<TValueChoice, ::StringW>*& UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::__cordl_internal_get_m_FormatSelectedValueCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FormatSelectedValueCallback;
}
template <typename TValueType, typename TValueChoice>
constexpr ::System::Func_2<TValueChoice, ::StringW>* const& UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::__cordl_internal_get_m_FormatSelectedValueCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FormatSelectedValueCallback;
}
template <typename TValueType, typename TValueChoice>
constexpr void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::__cordl_internal_set_m_FormatSelectedValueCallback(::System::Func_2<TValueChoice, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FormatSelectedValueCallback = value;
}
template <typename TValueType, typename TValueChoice>
constexpr ::System::Func_2<TValueChoice, ::StringW>*& UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::__cordl_internal_get_m_FormatListItemCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FormatListItemCallback;
}
template <typename TValueType, typename TValueChoice>
constexpr ::System::Func_2<TValueChoice, ::StringW>* const& UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::__cordl_internal_get_m_FormatListItemCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FormatListItemCallback;
}
template <typename TValueType, typename TValueChoice>
constexpr void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::__cordl_internal_set_m_FormatListItemCallback(::System::Func_2<TValueChoice, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FormatListItemCallback = value;
}
template <typename TValueType, typename TValueChoice>
constexpr ::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>*& UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::__cordl_internal_get_createMenuCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createMenuCallback;
}
template <typename TValueType, typename TValueChoice>
constexpr ::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* const& UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::__cordl_internal_get_createMenuCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createMenuCallback;
}
template <typename TValueType, typename TValueChoice>
constexpr void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::__cordl_internal_set_createMenuCallback(::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___createMenuCallback = value;
}
template <typename TValueType, typename TValueChoice> constexpr bool& UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::__cordl_internal_get_m_AutoCloseMenu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoCloseMenu;
}
template <typename TValueType, typename TValueChoice> constexpr bool const& UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::__cordl_internal_get_m_AutoCloseMenu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoCloseMenu;
}
template <typename TValueType, typename TValueChoice> constexpr void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::__cordl_internal_set_m_AutoCloseMenu(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AutoCloseMenu = value;
}
template <typename TValueType, typename TValueChoice>
inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::setStaticF_choicesProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "choicesProperty", ::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType, typename TValueChoice> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::getStaticF_choicesProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "choicesProperty", ::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>();
}
template <typename TValueType, typename TValueChoice>
inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::setStaticF_textProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "textProperty", ::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
template <typename TValueType, typename TValueChoice> inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::getStaticF_textProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "textProperty", ::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>();
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(std::forward<::StringW>(value));
}
template <typename TValueType, typename TValueChoice> inline ::StringW UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>();
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::setStaticF_textUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "textUssClassName", ::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(std::forward<::StringW>(value));
}
template <typename TValueType, typename TValueChoice> inline ::StringW UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::getStaticF_textUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "textUssClassName", ::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>();
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::setStaticF_arrowUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "arrowUssClassName", ::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(std::forward<::StringW>(value));
}
template <typename TValueType, typename TValueChoice> inline ::StringW UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::getStaticF_arrowUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "arrowUssClassName", ::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>();
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(std::forward<::StringW>(value));
}
template <typename TValueType, typename TValueChoice> inline ::StringW UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>();
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(std::forward<::StringW>(value));
}
template <typename TValueType, typename TValueChoice> inline ::StringW UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>();
}
template <typename TValueType, typename TValueChoice> inline ::UnityEngine::UIElements::TextElement* UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::get_textElement() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(), { "get_textElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextElement*>(this, ___internal_method);
}
template <typename TValueType, typename TValueChoice> inline ::StringW UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::GetValueToDisplay() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(), 154 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TValueType, typename TValueChoice> inline ::StringW UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::GetListItemToDisplay(TValueType item) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(), 155 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, item);
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::AddMenuItems(::UnityEngine::UIElements::IGenericMenu* menu) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(), 156 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, menu);
}
template <typename TValueType, typename TValueChoice> inline ::System::Collections::Generic::List_1<TValueChoice>* UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::get_choices() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(), 157 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TValueChoice>*>(this, ___internal_method);
}
template <typename TValueType, typename TValueChoice>
inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::set_choices(::System::Collections::Generic::List_1<TValueChoice>* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(), 158 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::SetValueWithoutNotify(TValueType newValue) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(), 153 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
template <typename TValueType, typename TValueChoice> inline ::StringW UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::get_text() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(), { "get_text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::_ctor(::StringW label) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label);
}
template <typename TValueType, typename TValueChoice>
inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::OnPointerDownEvent(::UnityEngine::UIElements::PointerDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(),
                                                                                         { "OnPointerDownEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDownEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename TValueType, typename TValueChoice>
inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::OnPointerUpEvent(::UnityEngine::UIElements::PointerUpEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(),
                                                                                         { "OnPointerUpEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename TValueType, typename TValueChoice>
inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::OnPointerMoveEvent(::UnityEngine::UIElements::PointerMoveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(),
                                                                                         { "OnPointerMoveEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerMoveEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename TValueType, typename TValueChoice> inline bool UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::ContainsPointer(int32_t pointerId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(), { "ContainsPointer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pointerId);
}
template <typename TValueType, typename TValueChoice>
template <typename T>
inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::ProcessPointerDown(::UnityEngine::UIElements::PointerEventBase_1<T>* evt) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(),
                                                           { "ProcessPointerDown", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::UIElements::PointerEventBase_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename TValueType, typename TValueChoice>
inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(),
                                                                                         { "OnNavigationSubmit", {}, { ::i2c::type_of<::UnityEngine::UIElements::NavigationSubmitEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::ShowMenu() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(), { "ShowMenu", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::UpdateMixedValueContent() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(), 152 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValueType, typename TValueChoice>
inline ::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>* UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::New_ctor(::StringW label) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(label));
}
// Ctor Parameters []
template <typename TValueType, typename TValueChoice> constexpr ::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::BasePopupField_2() {}
