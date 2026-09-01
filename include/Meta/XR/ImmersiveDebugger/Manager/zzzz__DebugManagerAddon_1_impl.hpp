#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\Manager\DebugManagerAddon_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__DebugManagerAddon_1_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__DebugManager_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__IDebugManager_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IDebugUIPanel_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceCache_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__Telemetry_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template <typename Type> constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*& Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::__cordl_internal_get__instanceCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceCache;
}
template <typename Type>
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* const& Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::__cordl_internal_get__instanceCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceCache;
}
template <typename Type>
constexpr void Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::__cordl_internal_set__instanceCache(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instanceCache = value;
}
template <typename Type>
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>*&
Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::__cordl_internal_get__subDebugManagers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subDebugManagers;
}
template <typename Type>
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* const&
Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::__cordl_internal_get__subDebugManagers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subDebugManagers;
}
template <typename Type>
constexpr void Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::__cordl_internal_set__subDebugManagers(
    ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____subDebugManagers = value;
}
template <typename Type> inline void Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::setStaticF__instance(Type value) {
  ::cordl_internals::setStaticField<Type, "_instance", ::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>(std::forward<Type>(value));
}
template <typename Type> inline Type Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::getStaticF__instance() {
  return ::cordl_internals::getStaticField<Type, "_instance", ::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>();
}
template <typename Type> inline void Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::setStaticF__uiPanel(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* value) {
  ::cordl_internals::setStaticField<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*, "_uiPanel", ::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>(
      std::forward<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>(value));
}
template <typename Type> inline ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::getStaticF__uiPanel() {
  return ::cordl_internals::getStaticField<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*, "_uiPanel", ::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>();
}
template <typename Type> inline void Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename Type> inline Type Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::get_Instance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>(), { "get_Instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<Type>(nullptr, ___internal_method);
}
template <typename Type> inline void Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::Setup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>(), { "Setup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename Type> inline void Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::Destroy() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>(), { "Destroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename Type> inline void Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::InitSubManagers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>(), { "InitSubManagers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename Type> inline void Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::OnReady(::Meta::XR::ImmersiveDebugger::Manager::DebugManager* debugManager) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>(),
                                                                                         { "OnReady", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugManager);
}
template <typename Type> inline ::Meta::XR::ImmersiveDebugger::Telemetry_Method Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::get_Method() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Telemetry_Method>(this, ___internal_method);
}
template <typename Type>
inline ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::get__subManagersToInitialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>(), { "get__subManagersToInitialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>*>(nullptr, ___internal_method);
}
template <typename Type> inline void Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::OnReadyInternal() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename Type> inline void Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename Type> inline ::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>* Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>());
}
// Ctor Parameters []
template <typename Type> constexpr ::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::DebugManagerAddon_1() {}
