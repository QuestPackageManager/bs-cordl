#pragma once
// IWYU pragma private; include "BeatSaber\AvatarCore\MultiplayerGameAvatarInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__MultiplayerGameAvatarInstaller_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::*)()>(
    &::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x32701a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::*)()>(&::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3270478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::__cordl_internal_get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::__cordl_internal_get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr void BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::__cordl_internal_set__connectedPlayer(::GlobalNamespace::IBeatSaberConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectedPlayer = value;
}
inline void BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller* BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::MultiplayerGameAvatarInstaller() {}
