#pragma once
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PanelChangedEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
template <typename T> constexpr ::UnityEngine::UIElements::IPanel*& UnityEngine::UIElements::PanelChangedEventBase_1<T>::__get__originPanel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originPanel_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> const& UnityEngine::UIElements::PanelChangedEventBase_1<T>::__get__originPanel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originPanel_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::PanelChangedEventBase_1<T>::__set__originPanel_k__BackingField(::UnityEngine::UIElements::IPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____originPanel_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::UnityEngine::UIElements::IPanel*& UnityEngine::UIElements::PanelChangedEventBase_1<T>::__get__destinationPanel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destinationPanel_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> const& UnityEngine::UIElements::PanelChangedEventBase_1<T>::__get__destinationPanel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destinationPanel_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::PanelChangedEventBase_1<T>::__set__destinationPanel_k__BackingField(::UnityEngine::UIElements::IPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____destinationPanel_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::UnityEngine::UIElements::IPanel* UnityEngine::UIElements::PanelChangedEventBase_1<T>::get_originPanel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>::get(),
                                                                             "get_originPanel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IPanel*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::PanelChangedEventBase_1<T>::set_originPanel(::UnityEngine::UIElements::IPanel* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>::get(), "set_originPanel", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::UIElements::IPanel* UnityEngine::UIElements::PanelChangedEventBase_1<T>::get_destinationPanel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>::get(),
                                                                             "get_destinationPanel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IPanel*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::PanelChangedEventBase_1<T>::set_destinationPanel(::UnityEngine::UIElements::IPanel* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>::get(), "set_destinationPanel",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::PanelChangedEventBase_1<T>::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>::get(),
                                                                             "Init", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::PanelChangedEventBase_1<T>::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>::get(),
                                                                             "LocalInit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::PanelChangedEventBase_1<T>::GetPooled(::UnityEngine::UIElements::IPanel* originPanel, ::UnityEngine::UIElements::IPanel* destinationPanel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>::get(), "GetPooled", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, originPanel, destinationPanel);
}
template <typename T> inline ::UnityEngine::UIElements::PanelChangedEventBase_1<T>* UnityEngine::UIElements::PanelChangedEventBase_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::PanelChangedEventBase_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::PanelChangedEventBase_1<T>::PanelChangedEventBase_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
