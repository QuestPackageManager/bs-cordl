#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLobbyInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyInstaller_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyAvatarController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyAvatarPlace_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyInstaller::*)()>(
    &::GlobalNamespace::MultiplayerLobbyInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5850c7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyInstaller::*)()>(&::GlobalNamespace::MultiplayerLobbyInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5850d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyInstaller*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>& GlobalNamespace::MultiplayerLobbyInstaller::__cordl_internal_get__multiplayerLobbyAvatarControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLobbyAvatarControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController> const& GlobalNamespace::MultiplayerLobbyInstaller::__cordl_internal_get__multiplayerLobbyAvatarControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLobbyAvatarControllerPrefab;
}
constexpr void GlobalNamespace::MultiplayerLobbyInstaller::__cordl_internal_set__multiplayerLobbyAvatarControllerPrefab(::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerLobbyAvatarControllerPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlace>& GlobalNamespace::MultiplayerLobbyInstaller::__cordl_internal_get__multiplayerAvatarPlacePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerAvatarPlacePrefab;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlace> const& GlobalNamespace::MultiplayerLobbyInstaller::__cordl_internal_get__multiplayerAvatarPlacePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerAvatarPlacePrefab;
}
constexpr void GlobalNamespace::MultiplayerLobbyInstaller::__cordl_internal_set__multiplayerAvatarPlacePrefab(::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlace> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerAvatarPlacePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerLobbyInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyInstaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyInstaller*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLobbyInstaller* GlobalNamespace::MultiplayerLobbyInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerLobbyInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLobbyInstaller::MultiplayerLobbyInstaller() {}
