#pragma once
// IWYU pragma private; include "GlobalNamespace\IBeatSaberConnectedPlayer.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerActiveHand_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBeatSaberConnectedPlayer.get_multiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerAvatarsData (::GlobalNamespace::IBeatSaberConnectedPlayer::*)()>(
    &::GlobalNamespace::IBeatSaberConnectedPlayer::get_multiplayerAvatarsData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>(), { ::i2c::class_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBeatSaberConnectedPlayer.get_activeHand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerActiveHand (::GlobalNamespace::IBeatSaberConnectedPlayer::*)()>(
    &::GlobalNamespace::IBeatSaberConnectedPlayer::get_activeHand)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>(), { ::i2c::class_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>(), 1 }));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::MultiplayerAvatarsData GlobalNamespace::IBeatSaberConnectedPlayer::get_multiplayerAvatarsData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarsData>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerActiveHand GlobalNamespace::IBeatSaberConnectedPlayer::get_activeHand() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerActiveHand>(this, ___internal_method);
}
/// @brief Convert operator to "::GlobalNamespace::IConnectedPlayer"
constexpr GlobalNamespace::IBeatSaberConnectedPlayer::operator ::GlobalNamespace::IConnectedPlayer*() noexcept {
  return static_cast<::GlobalNamespace::IConnectedPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnectedPlayer"
constexpr ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::IBeatSaberConnectedPlayer::i___GlobalNamespace__IConnectedPlayer() noexcept {
  return static_cast<::GlobalNamespace::IConnectedPlayer*>(static_cast<void*>(this));
}
