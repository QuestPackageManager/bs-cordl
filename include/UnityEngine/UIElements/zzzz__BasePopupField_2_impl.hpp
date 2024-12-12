#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BasePopupField_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
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
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
template <typename TValueType, typename TValueChoice>
inline ::UnityEngine::Vector2
UnityEngine::UIElements::BasePopupField_2_PopupTextElement<TValueType, TValueChoice>::DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode,
                                                                                                float_t desiredHeight, ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2_PopupTextElement<TValueType, TValueChoice>*>::get(), 98)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, desiredWidth, widthMode, desiredHeight, heightMode);
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2_PopupTextElement<TValueType, TValueChoice>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2_PopupTextElement<TValueType, TValueChoice>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType, typename TValueChoice>
inline ::UnityEngine::UIElements::BasePopupField_2_PopupTextElement<TValueType, TValueChoice>* UnityEngine::UIElements::BasePopupField_2_PopupTextElement<TValueType, TValueChoice>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::BasePopupField_2_PopupTextElement<TValueType, TValueChoice>*>());
}
// Ctor Parameters []
template <typename TValueType, typename TValueChoice> constexpr ::UnityEngine::UIElements::BasePopupField_2_PopupTextElement<TValueType, TValueChoice>::BasePopupField_2_PopupTextElement() {}
template <typename TValueType, typename TValueChoice>
inline void UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>::setStaticF___9(::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>*>::get>(
      std::forward<::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>*>(value));
}
template <typename TValueType, typename TValueChoice>
inline ::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>* UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>*>::get>();
}
template <typename TValueType, typename TValueChoice>
inline void
UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>::setStaticF___9__23_0(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::MouseDownEvent*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::MouseDownEvent*>*, "<>9__23_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>*>::get>(
      std::forward<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::MouseDownEvent*>*>(value));
}
template <typename TValueType, typename TValueChoice>
inline ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::MouseDownEvent*>* UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>::getStaticF___9__23_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::MouseDownEvent*>*, "<>9__23_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>*>::get>();
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType, typename TValueChoice>
inline void UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>::__ctor_b__23_0(::UnityEngine::UIElements::MouseDownEvent* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>*>::get(), "<.ctor>b__23_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MouseDownEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
template <typename TValueType, typename TValueChoice>
inline ::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>* UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>*>());
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
  ::cordl_internals::setInstanceField(this, &this->___m_Choices, value);
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
  ::cordl_internals::setInstanceField(this, &this->___m_TextElement, value);
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
  ::cordl_internals::setInstanceField(this, &this->___m_ArrowElement, value);
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
  ::cordl_internals::setInstanceField(this, &this->___m_FormatSelectedValueCallback, value);
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
  ::cordl_internals::setInstanceField(this, &this->___m_FormatListItemCallback, value);
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
  ::cordl_internals::setInstanceField(this, &this->___createMenuCallback, value);
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType, typename TValueChoice> inline ::StringW UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get>();
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::setStaticF_textUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "textUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType, typename TValueChoice> inline ::StringW UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::getStaticF_textUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "textUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get>();
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::setStaticF_arrowUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "arrowUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType, typename TValueChoice> inline ::StringW UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::getStaticF_arrowUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "arrowUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get>();
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType, typename TValueChoice> inline ::StringW UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get>();
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get>(
      std::forward<::StringW>(value));
}
template <typename TValueType, typename TValueChoice> inline ::StringW UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get>();
}
template <typename TValueType, typename TValueChoice> inline ::UnityEngine::UIElements::TextElement* UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::get_textElement() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get(), "get_textElement",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextElement*, false>(this, ___internal_method);
}
template <typename TValueType, typename TValueChoice> inline ::StringW UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::GetValueToDisplay() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get(), 118)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TValueType, typename TValueChoice> inline ::StringW UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::GetListItemToDisplay(TValueType item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get(), 119)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, item);
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::AddMenuItems(::UnityEngine::UIElements::IGenericMenu* menu) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get(), 120)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, menu);
}
template <typename TValueType, typename TValueChoice>
inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::set_choices(::System::Collections::Generic::List_1<TValueChoice>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get(), 121)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::SetValueWithoutNotify(TValueType newValue) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get(), 117)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::_ctor(::StringW label) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label);
}
template <typename TValueType, typename TValueChoice>
inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::OnPointerDownEvent(::UnityEngine::UIElements::PointerDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get(), "OnPointerDownEvent",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDownEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template <typename TValueType, typename TValueChoice>
inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::OnPointerMoveEvent(::UnityEngine::UIElements::PointerMoveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get(), "OnPointerMoveEvent",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerMoveEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template <typename TValueType, typename TValueChoice> inline bool UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::ContainsPointer(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get(), "ContainsPointer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pointerId);
}
template <typename TValueType, typename TValueChoice>
template <typename T>
inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::ProcessPointerDown(::UnityEngine::UIElements::PointerEventBase_1<T>* evt) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get(),
                                               "ProcessPointerDown", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerEventBase_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template <typename TValueType, typename TValueChoice>
inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get(),
                                               "OnNavigationSubmit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::NavigationSubmitEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::ShowMenu() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get(), "ShowMenu",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType, typename TValueChoice> inline void UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::UpdateMixedValueContent() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>::get(), 116)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValueType, typename TValueChoice>
inline ::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>* UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::New_ctor(::StringW label) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>*>(label));
}
// Ctor Parameters []
template <typename TValueType, typename TValueChoice> constexpr ::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>::BasePopupField_2() {}
