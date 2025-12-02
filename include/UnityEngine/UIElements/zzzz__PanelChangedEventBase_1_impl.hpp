#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelChangedEventBase_1.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PanelChangedEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
template <typename T> constexpr ::UnityEngine::UIElements::IPanel*& UnityEngine::UIElements::PanelChangedEventBase_1<T>::__cordl_internal_get__originPanel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originPanel_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::UIElements::IPanel* const& UnityEngine::UIElements::PanelChangedEventBase_1<T>::__cordl_internal_get__originPanel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originPanel_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::PanelChangedEventBase_1<T>::__cordl_internal_set__originPanel_k__BackingField(::UnityEngine::UIElements::IPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____originPanel_k__BackingField, value);
}
template <typename T> constexpr ::UnityEngine::UIElements::IPanel*& UnityEngine::UIElements::PanelChangedEventBase_1<T>::__cordl_internal_get__destinationPanel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destinationPanel_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::UIElements::IPanel* const& UnityEngine::UIElements::PanelChangedEventBase_1<T>::__cordl_internal_get__destinationPanel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destinationPanel_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::PanelChangedEventBase_1<T>::__cordl_internal_set__destinationPanel_k__BackingField(::UnityEngine::UIElements::IPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____destinationPanel_k__BackingField, value);
}
template <typename T> inline ::UnityEngine::UIElements::IPanel* UnityEngine::UIElements::PanelChangedEventBase_1<T>::get_originPanel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>::get(),
                                                                             "get_originPanel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IPanel*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::PanelChangedEventBase_1<T>::set_originPanel(::UnityEngine::UIElements::IPanel* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>::get(), "set_originPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::UIElements::IPanel* UnityEngine::UIElements::PanelChangedEventBase_1<T>::get_destinationPanel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>::get(),
                                                                             "get_destinationPanel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IPanel*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::PanelChangedEventBase_1<T>::set_destinationPanel(::UnityEngine::UIElements::IPanel* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>::get(), "set_destinationPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::PanelChangedEventBase_1<T>::Init() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::PanelChangedEventBase_1<T>::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>::get(),
                                                                             "LocalInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::PanelChangedEventBase_1<T>::GetPooled(::UnityEngine::UIElements::IPanel* originPanel, ::UnityEngine::UIElements::IPanel* destinationPanel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>::get(), "GetPooled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, originPanel, destinationPanel);
}
template <typename T> inline void UnityEngine::UIElements::PanelChangedEventBase_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::PanelChangedEventBase_1<T>* UnityEngine::UIElements::PanelChangedEventBase_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::PanelChangedEventBase_1<T>::PanelChangedEventBase_1() {}
