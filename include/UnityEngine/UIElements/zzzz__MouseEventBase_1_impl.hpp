#pragma once
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/zzzz__EventModifiers_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IMouseEvent_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IMouseEventInternal_def.hpp"
/// @brief Convert operator to "::UnityEngine::UIElements::IMouseEvent"
template <typename T> constexpr UnityEngine::UIElements::MouseEventBase_1<T>::operator ::UnityEngine::UIElements::IMouseEvent*() noexcept {
  return static_cast<::UnityEngine::UIElements::IMouseEvent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IMouseEventInternal"
template <typename T> constexpr UnityEngine::UIElements::MouseEventBase_1<T>::operator ::UnityEngine::UIElements::IMouseEventInternal*() noexcept {
  return static_cast<::UnityEngine::UIElements::IMouseEventInternal*>(static_cast<void*>(this));
}
template <typename T> constexpr ::UnityEngine::EventModifiers& UnityEngine::UIElements::MouseEventBase_1<T>::__get__modifiers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiers_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::EventModifiers const& UnityEngine::UIElements::MouseEventBase_1<T>::__get__modifiers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiers_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::MouseEventBase_1<T>::__set__modifiers_k__BackingField(::UnityEngine::EventModifiers value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modifiers_k__BackingField = value;
}
template <typename T> constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::MouseEventBase_1<T>::__get__mousePosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mousePosition_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::MouseEventBase_1<T>::__get__mousePosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mousePosition_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::MouseEventBase_1<T>::__set__mousePosition_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mousePosition_k__BackingField = value;
}
template <typename T> constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::MouseEventBase_1<T>::__get__localMousePosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localMousePosition_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::MouseEventBase_1<T>::__get__localMousePosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localMousePosition_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::MouseEventBase_1<T>::__set__localMousePosition_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localMousePosition_k__BackingField = value;
}
template <typename T> constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::MouseEventBase_1<T>::__get__mouseDelta_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mouseDelta_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::MouseEventBase_1<T>::__get__mouseDelta_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mouseDelta_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::MouseEventBase_1<T>::__set__mouseDelta_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mouseDelta_k__BackingField = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::MouseEventBase_1<T>::__get__clickCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clickCount_k__BackingField;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::MouseEventBase_1<T>::__get__clickCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clickCount_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::MouseEventBase_1<T>::__set__clickCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clickCount_k__BackingField = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::MouseEventBase_1<T>::__get__button_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button_k__BackingField;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::MouseEventBase_1<T>::__get__button_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::MouseEventBase_1<T>::__set__button_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____button_k__BackingField = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::MouseEventBase_1<T>::__get__pressedButtons_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedButtons_k__BackingField;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::MouseEventBase_1<T>::__get__pressedButtons_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedButtons_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::MouseEventBase_1<T>::__set__pressedButtons_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pressedButtons_k__BackingField = value;
}
template <typename T> constexpr bool& UnityEngine::UIElements::MouseEventBase_1<T>::__get__UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField;
}
template <typename T> constexpr bool const& UnityEngine::UIElements::MouseEventBase_1<T>::__get__UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::MouseEventBase_1<T>::__set__UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField = value;
}
template <typename T> constexpr bool& UnityEngine::UIElements::MouseEventBase_1<T>::__get__UnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouse_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouse_k__BackingField;
}
template <typename T> constexpr bool const& UnityEngine::UIElements::MouseEventBase_1<T>::__get__UnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouse_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouse_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::MouseEventBase_1<T>::__set__UnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouse_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouse_k__BackingField = value;
}
template <typename T>
constexpr ::UnityEngine::UIElements::IPointerEvent*& UnityEngine::UIElements::MouseEventBase_1<T>::__get__UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPointerEvent*> const&
UnityEngine::UIElements::MouseEventBase_1<T>::__get__UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField;
}
template <typename T>
constexpr void UnityEngine::UIElements::MouseEventBase_1<T>::__set__UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField(::UnityEngine::UIElements::IPointerEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::UnityEngine::EventModifiers UnityEngine::UIElements::MouseEventBase_1<T>::get_modifiers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(),
                                                                             "get_modifiers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventModifiers, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::set_modifiers(::UnityEngine::EventModifiers value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(), "set_modifiers", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::Vector2 UnityEngine::UIElements::MouseEventBase_1<T>::get_mousePosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(),
                                                                             "get_mousePosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::set_mousePosition(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(), "set_mousePosition",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::Vector2 UnityEngine::UIElements::MouseEventBase_1<T>::get_localMousePosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(),
                                                                             "get_localMousePosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::set_localMousePosition(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(), "set_localMousePosition",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::Vector2 UnityEngine::UIElements::MouseEventBase_1<T>::get_mouseDelta() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(),
                                                                             "get_mouseDelta", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::set_mouseDelta(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(), "set_mouseDelta",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline int32_t UnityEngine::UIElements::MouseEventBase_1<T>::get_clickCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(),
                                                                             "get_clickCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::set_clickCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(), "set_clickCount",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline int32_t UnityEngine::UIElements::MouseEventBase_1<T>::get_button() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(),
                                                                             "get_button", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::set_button(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(), "set_button",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline int32_t UnityEngine::UIElements::MouseEventBase_1<T>::get_pressedButtons() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(),
                                                                             "get_pressedButtons", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::set_pressedButtons(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(), "set_pressedButtons",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline bool UnityEngine::UIElements::MouseEventBase_1<T>::get_shiftKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(),
                                                                             "get_shiftKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::MouseEventBase_1<T>::get_ctrlKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(),
                                                                             "get_ctrlKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::MouseEventBase_1<T>::get_commandKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(),
                                                                             "get_commandKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::MouseEventBase_1<T>::get_altKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(),
                                                                             "get_altKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::MouseEventBase_1<T>::UnityEngine_UIElements_IMouseEventInternal_get_triggeredByOS() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(),
                                               "UnityEngine.UIElements.IMouseEventInternal.get_triggeredByOS", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::UnityEngine_UIElements_IMouseEventInternal_set_triggeredByOS(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(),
                                                                             "UnityEngine.UIElements.IMouseEventInternal.set_triggeredByOS", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline bool UnityEngine::UIElements::MouseEventBase_1<T>::UnityEngine_UIElements_IMouseEventInternal_get_recomputeTopElementUnderMouse() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(),
                                               "UnityEngine.UIElements.IMouseEventInternal.get_recomputeTopElementUnderMouse", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::UnityEngine_UIElements_IMouseEventInternal_set_recomputeTopElementUnderMouse(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(),
                                                                             "UnityEngine.UIElements.IMouseEventInternal.set_recomputeTopElementUnderMouse", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::UIElements::IPointerEvent* UnityEngine::UIElements::MouseEventBase_1<T>::UnityEngine_UIElements_IMouseEventInternal_get_sourcePointerEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(),
                                               "UnityEngine.UIElements.IMouseEventInternal.get_sourcePointerEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IPointerEvent*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::UnityEngine_UIElements_IMouseEventInternal_set_sourcePointerEvent(::UnityEngine::UIElements::IPointerEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(), "UnityEngine.UIElements.IMouseEventInternal.set_sourcePointerEvent",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPointerEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::Init() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(),
                                                                             "LocalInit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::IEventHandler* UnityEngine::UIElements::MouseEventBase_1<T>::get_currentTarget() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IEventHandler*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::set_currentTarget(::UnityEngine::UIElements::IEventHandler* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::PreDispatch(::UnityEngine::UIElements::IPanel* panel) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, panel);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::PostDispatch(::UnityEngine::UIElements::IPanel* panel) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, panel);
}
template <typename T> inline T UnityEngine::UIElements::MouseEventBase_1<T>::GetPooled(::UnityEngine::Event* systemEvent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(), "GetPooled", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, systemEvent);
}
template <typename T>
inline T UnityEngine::UIElements::MouseEventBase_1<T>::GetPooled(::UnityEngine::UIElements::IMouseEvent* triggerEvent, ::UnityEngine::Vector2 mousePosition, bool recomputeTopElementUnderMouse) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(), "GetPooled", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IMouseEvent*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, triggerEvent, mousePosition, recomputeTopElementUnderMouse);
}
template <typename T> inline T UnityEngine::UIElements::MouseEventBase_1<T>::GetPooled(::UnityEngine::UIElements::IMouseEvent* triggerEvent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(), "GetPooled", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IMouseEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, triggerEvent);
}
template <typename T> inline T UnityEngine::UIElements::MouseEventBase_1<T>::GetPooled(::UnityEngine::UIElements::IPointerEvent* pointerEvent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(), "GetPooled", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPointerEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, pointerEvent);
}
template <typename T> inline ::UnityEngine::UIElements::MouseEventBase_1<T>* UnityEngine::UIElements::MouseEventBase_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::MouseEventBase_1<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseEventBase_1<T>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::MouseEventBase_1<T>::MouseEventBase_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
