#pragma once
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_impl.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalPlayerInstaller_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelSceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalPlayerInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalPlayerInstaller::*)()>(
    &::GlobalNamespace::MultiplayerLocalPlayerInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x249d304;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalPlayerInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalPlayerInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalPlayerInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalPlayerInstaller::*)()>(
    &::GlobalNamespace::MultiplayerLocalPlayerInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x249d53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalPlayerInstaller*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerLevelSceneSetupData*& GlobalNamespace::MultiplayerLocalPlayerInstaller::__cordl_internal_get__levelSceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelSceneSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelSceneSetupData*> const&
GlobalNamespace::MultiplayerLocalPlayerInstaller::__cordl_internal_get__levelSceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelSceneSetupData;
}
constexpr void GlobalNamespace::MultiplayerLocalPlayerInstaller::__cordl_internal_set__levelSceneSetupData(::GlobalNamespace::MultiplayerLevelSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelSceneSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::MultiplayerLocalPlayerInstaller::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const&
GlobalNamespace::MultiplayerLocalPlayerInstaller::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MultiplayerLocalPlayerInstaller::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerPlayerStartState& GlobalNamespace::MultiplayerLocalPlayerInstaller::__cordl_internal_get__startState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startState;
}
constexpr ::GlobalNamespace::MultiplayerPlayerStartState const& GlobalNamespace::MultiplayerLocalPlayerInstaller::__cordl_internal_get__startState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startState;
}
constexpr void GlobalNamespace::MultiplayerLocalPlayerInstaller::__cordl_internal_set__startState(::GlobalNamespace::MultiplayerPlayerStartState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startState = value;
}
inline void GlobalNamespace::MultiplayerLocalPlayerInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalPlayerInstaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLocalPlayerInstaller* GlobalNamespace::MultiplayerLocalPlayerInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerLocalPlayerInstaller*>());
}
inline void GlobalNamespace::MultiplayerLocalPlayerInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalPlayerInstaller*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLocalPlayerInstaller::MultiplayerLocalPlayerInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
