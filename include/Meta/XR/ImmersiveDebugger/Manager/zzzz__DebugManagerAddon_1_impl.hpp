#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/DebugManagerAddon_1.hpp"
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
  ::cordl_internals::setInstanceField(this, &this->____instanceCache, value);
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
  ::cordl_internals::setInstanceField(this, &this->____subDebugManagers, value);
}
template <typename Type> inline void Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::setStaticF__instance(Type value) {
  ::cordl_internals::setStaticField<Type, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>::get>(
      std::forward<Type>(value));
}
template <typename Type> inline Type Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::getStaticF__instance() {
  return ::cordl_internals::getStaticField<Type, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>::get>();
}
template <typename Type> inline void Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::setStaticF__uiPanel(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* value) {
  ::cordl_internals::setStaticField<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*, "_uiPanel",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>::get>(
      std::forward<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*>(value));
}
template <typename Type> inline ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::getStaticF__uiPanel() {
  return ::cordl_internals::getStaticField<::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*, "_uiPanel",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>::get>();
}
template <typename Type> inline void Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::Init() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>::get(), "Init",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
template <typename Type> inline Type Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::get_Instance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>::get(), "get_Instance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<Type, false>(nullptr, ___internal_method);
}
template <typename Type> inline void Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::Setup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>::get(), "Setup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename Type> inline void Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::Destroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>::get(), "Destroy",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
template <typename Type> inline void Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::InitSubManagers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>::get(), "InitSubManagers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename Type> inline void Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::OnReady(::Meta::XR::ImmersiveDebugger::Manager::DebugManager* debugManager) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>::get(), "OnReady", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Manager::DebugManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, debugManager);
}
template <typename Type> inline ::Meta::XR::ImmersiveDebugger::Telemetry_Method Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::get_Method() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Telemetry_Method, false>(this, ___internal_method);
}
template <typename Type>
inline ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::get__subManagersToInitialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>::get(),
                                               "get__subManagersToInitialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>*, false>(nullptr, ___internal_method);
}
template <typename Type> inline void Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::OnReadyInternal() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename Type> inline void Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename Type> inline ::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>* Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>*>());
}
// Ctor Parameters []
template <typename Type> constexpr ::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>::DebugManagerAddon_1() {}
