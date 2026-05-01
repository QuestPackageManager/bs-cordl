#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorStateTransition_1.hpp"
#include "GlobalNamespace/zzzz__BaseStateTransition_1_impl.hpp"
#include "GlobalNamespace/zzzz__ColorStateTransition_1_def.hpp"
#include "GlobalNamespace/zzzz__BaseTransitionSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorTransitionSO_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
template <typename T> constexpr ::UnityW<::GlobalNamespace::ColorTransitionSO>& GlobalNamespace::ColorStateTransition_1<T>::__cordl_internal_get__transition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transition;
}
template <typename T> constexpr ::UnityW<::GlobalNamespace::ColorTransitionSO> const& GlobalNamespace::ColorStateTransition_1<T>::__cordl_internal_get__transition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transition;
}
template <typename T> constexpr void GlobalNamespace::ColorStateTransition_1<T>::__cordl_internal_set__transition(::UnityW<::GlobalNamespace::ColorTransitionSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____transition, value);
}
template <typename T> inline ::UnityW<::GlobalNamespace::BaseTransitionSO> GlobalNamespace::ColorStateTransition_1<T>::get_transition() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorStateTransition_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BaseTransitionSO>, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Color GlobalNamespace::ColorStateTransition_1<T>::get_normalColor() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorStateTransition_1<T>*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Color GlobalNamespace::ColorStateTransition_1<T>::get_highlightedColor() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorStateTransition_1<T>*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Color GlobalNamespace::ColorStateTransition_1<T>::get_pressedColor() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorStateTransition_1<T>*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Color GlobalNamespace::ColorStateTransition_1<T>::get_disabledColor() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorStateTransition_1<T>*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Color GlobalNamespace::ColorStateTransition_1<T>::get_selectedColor() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorStateTransition_1<T>*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Color GlobalNamespace::ColorStateTransition_1<T>::get_selectedAndHighlightedColor() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorStateTransition_1<T>*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::ColorStateTransition_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorStateTransition_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::ColorStateTransition_1<T>* GlobalNamespace::ColorStateTransition_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ColorStateTransition_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::ColorStateTransition_1<T>::ColorStateTransition_1() {}
