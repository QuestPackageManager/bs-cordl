#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyInstaller_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyAvatarPlace_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyAvatarController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyInstaller::*)()>(
    &::GlobalNamespace::MultiplayerLobbyInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2272bf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyInstaller::*)()>(&::GlobalNamespace::MultiplayerLobbyInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2272cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyInstaller*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerLobbyAvatarController*& GlobalNamespace::MultiplayerLobbyInstaller::__get__multiplayerLobbyAvatarControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLobbyAvatarControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyAvatarController*> const&
GlobalNamespace::MultiplayerLobbyInstaller::__get__multiplayerLobbyAvatarControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLobbyAvatarControllerPrefab;
}
constexpr void GlobalNamespace::MultiplayerLobbyInstaller::__set__multiplayerLobbyAvatarControllerPrefab(::GlobalNamespace::MultiplayerLobbyAvatarController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerLobbyAvatarControllerPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerLobbyAvatarPlace*& GlobalNamespace::MultiplayerLobbyInstaller::__get__multiplayerAvatarPlacePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerAvatarPlacePrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyAvatarPlace*> const& GlobalNamespace::MultiplayerLobbyInstaller::__get__multiplayerAvatarPlacePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerAvatarPlacePrefab;
}
constexpr void GlobalNamespace::MultiplayerLobbyInstaller::__set__multiplayerAvatarPlacePrefab(::GlobalNamespace::MultiplayerLobbyAvatarPlace* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerAvatarPlacePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerLobbyInstaller::InstallBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyInstaller*>::get(),
                                                                             "InstallBindings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLobbyInstaller* GlobalNamespace::MultiplayerLobbyInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLobbyInstaller*>());
}
inline void GlobalNamespace::MultiplayerLobbyInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyInstaller*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLobbyInstaller::MultiplayerLobbyInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
