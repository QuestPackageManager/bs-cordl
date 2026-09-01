#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\PanelChangedEventBase_1.hpp"
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
  this->____originPanel_k__BackingField = value;
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
  this->____destinationPanel_k__BackingField = value;
}
template <typename T> inline ::UnityEngine::UIElements::IPanel* UnityEngine::UIElements::PanelChangedEventBase_1<T>::get_originPanel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>(), { "get_originPanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IPanel*>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::PanelChangedEventBase_1<T>::set_originPanel(::UnityEngine::UIElements::IPanel* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>(),
                                                                                         { "set_originPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::UIElements::IPanel* UnityEngine::UIElements::PanelChangedEventBase_1<T>::get_destinationPanel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>(), { "get_destinationPanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IPanel*>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::PanelChangedEventBase_1<T>::set_destinationPanel(::UnityEngine::UIElements::IPanel* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>(),
                                                                                         { "set_destinationPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::PanelChangedEventBase_1<T>::Init() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::PanelChangedEventBase_1<T>::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>(), { "LocalInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::PanelChangedEventBase_1<T>::GetPooled(::UnityEngine::UIElements::IPanel* originPanel, ::UnityEngine::UIElements::IPanel* destinationPanel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>(),
                                                           { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>(), ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, originPanel, destinationPanel);
}
template <typename T> inline void UnityEngine::UIElements::PanelChangedEventBase_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::PanelChangedEventBase_1<T>* UnityEngine::UIElements::PanelChangedEventBase_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PanelChangedEventBase_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::PanelChangedEventBase_1<T>::PanelChangedEventBase_1() {}
