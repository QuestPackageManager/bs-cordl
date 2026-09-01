#pragma once
// IWYU pragma private; include "BeatSaber\AvatarCore\LobbyAvatarInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__LobbyAvatarInstaller_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::LobbyAvatarInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::LobbyAvatarInstaller::*)()>(&::BeatSaber::AvatarCore::LobbyAvatarInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x326f8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::LobbyAvatarInstaller*>(), { ::i2c::class_of<::BeatSaber::AvatarCore::LobbyAvatarInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::LobbyAvatarInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::LobbyAvatarInstaller::*)()>(&::BeatSaber::AvatarCore::LobbyAvatarInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x326fbfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::LobbyAvatarInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& BeatSaber::AvatarCore::LobbyAvatarInstaller::__cordl_internal_get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& BeatSaber::AvatarCore::LobbyAvatarInstaller::__cordl_internal_get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr void BeatSaber::AvatarCore::LobbyAvatarInstaller::__cordl_internal_set__connectedPlayer(::GlobalNamespace::IBeatSaberConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectedPlayer = value;
}
inline void BeatSaber::AvatarCore::LobbyAvatarInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::LobbyAvatarInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::LobbyAvatarInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::LobbyAvatarInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::LobbyAvatarInstaller* BeatSaber::AvatarCore::LobbyAvatarInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::AvatarCore::LobbyAvatarInstaller*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::LobbyAvatarInstaller::LobbyAvatarInstaller() {}
