#pragma once
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusController_def.hpp"
#include "UnityEngine/UIElements/zzzz__Focusable_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_def.hpp"
template <typename T> constexpr ::UnityEngine::UIElements::Focusable*& UnityEngine::UIElements::FocusEventBase_1<T>::__get__relatedTarget_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relatedTarget_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Focusable*> const& UnityEngine::UIElements::FocusEventBase_1<T>::__get__relatedTarget_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relatedTarget_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::FocusEventBase_1<T>::__set__relatedTarget_k__BackingField(::UnityEngine::UIElements::Focusable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____relatedTarget_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::UnityEngine::UIElements::FocusChangeDirection*& UnityEngine::UIElements::FocusEventBase_1<T>::__get__direction_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____direction_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::FocusChangeDirection*> const& UnityEngine::UIElements::FocusEventBase_1<T>::__get__direction_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____direction_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::FocusEventBase_1<T>::__set__direction_k__BackingField(::UnityEngine::UIElements::FocusChangeDirection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____direction_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::UnityEngine::UIElements::FocusController*& UnityEngine::UIElements::FocusEventBase_1<T>::__get__focusController_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____focusController_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::FocusController*> const& UnityEngine::UIElements::FocusEventBase_1<T>::__get__focusController_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____focusController_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::FocusEventBase_1<T>::__set__focusController_k__BackingField(::UnityEngine::UIElements::FocusController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____focusController_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr bool& UnityEngine::UIElements::FocusEventBase_1<T>::__get__IsFocusDelegated_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsFocusDelegated_k__BackingField;
}
template <typename T> constexpr bool const& UnityEngine::UIElements::FocusEventBase_1<T>::__get__IsFocusDelegated_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsFocusDelegated_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::FocusEventBase_1<T>::__set__IsFocusDelegated_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsFocusDelegated_k__BackingField = value;
}
template <typename T> inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::FocusEventBase_1<T>::get_relatedTarget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusEventBase_1<T>*>::get(),
                                                                             "get_relatedTarget", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::FocusEventBase_1<T>::set_relatedTarget(::UnityEngine::UIElements::Focusable* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusEventBase_1<T>*>::get(), "set_relatedTarget", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::UIElements::FocusChangeDirection* UnityEngine::UIElements::FocusEventBase_1<T>::get_direction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusEventBase_1<T>*>::get(),
                                                                             "get_direction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusChangeDirection*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::FocusEventBase_1<T>::set_direction(::UnityEngine::UIElements::FocusChangeDirection* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusEventBase_1<T>*>::get(), "set_direction", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusChangeDirection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::UIElements::FocusController* UnityEngine::UIElements::FocusEventBase_1<T>::get_focusController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusEventBase_1<T>*>::get(),
                                                                             "get_focusController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusController*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::FocusEventBase_1<T>::set_focusController(::UnityEngine::UIElements::FocusController* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusEventBase_1<T>*>::get(), "set_focusController", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline bool UnityEngine::UIElements::FocusEventBase_1<T>::get_IsFocusDelegated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusEventBase_1<T>*>::get(),
                                                                             "get_IsFocusDelegated", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::FocusEventBase_1<T>::set_IsFocusDelegated(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusEventBase_1<T>*>::get(), "set_IsFocusDelegated",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::FocusEventBase_1<T>::Init() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusEventBase_1<T>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::FocusEventBase_1<T>::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusEventBase_1<T>*>::get(),
                                                                             "LocalInit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param bIsFocusDelegated: bool (default: false)
template <typename T>
inline T UnityEngine::UIElements::FocusEventBase_1<T>::GetPooled(::UnityEngine::UIElements::IEventHandler* target, ::UnityEngine::UIElements::Focusable* relatedTarget,
                                                                 ::UnityEngine::UIElements::FocusChangeDirection* direction, ::UnityEngine::UIElements::FocusController* focusController,
                                                                 bool bIsFocusDelegated) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusEventBase_1<T>*>::get(), "GetPooled", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusChangeDirection*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusController*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, target, relatedTarget, direction, focusController, bIsFocusDelegated);
}
template <typename T> inline ::UnityEngine::UIElements::FocusEventBase_1<T>* UnityEngine::UIElements::FocusEventBase_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::FocusEventBase_1<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::FocusEventBase_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusEventBase_1<T>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::FocusEventBase_1<T>::FocusEventBase_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
