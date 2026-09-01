#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerLobbyInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyInstaller_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyAvatarController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyAvatarPlace_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyInstaller::*)()>(&::GlobalNamespace::MultiplayerLobbyInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x59fe694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyInstaller*>(), { ::i2c::class_of<::GlobalNamespace::MultiplayerLobbyInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyInstaller::*)()>(&::GlobalNamespace::MultiplayerLobbyInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59fe7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyInstaller*>(), { ".ctor", {}, {} })));
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
  this->____multiplayerLobbyAvatarControllerPrefab = value;
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
  this->____multiplayerAvatarPlacePrefab = value;
}
inline void GlobalNamespace::MultiplayerLobbyInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerLobbyInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLobbyInstaller* GlobalNamespace::MultiplayerLobbyInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerLobbyInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLobbyInstaller::MultiplayerLobbyInstaller() {}
