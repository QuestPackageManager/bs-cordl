#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectedPlayerExtension.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerExtension_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberPlayerIdentityPacketData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerActiveHand_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerExtension.BuildIdentityData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatSaberPlayerIdentityPacketData (::GlobalNamespace::ConnectedPlayerExtension::*)(
    ::GlobalNamespace::MultiplayerAvatarsData, ::GlobalNamespace::MultiplayerActiveHand)>(&::GlobalNamespace::ConnectedPlayerExtension::BuildIdentityData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x352db54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayerExtension*>(),
                                         { "BuildIdentityData", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerAvatarsData>(), ::i2c::type_of<::GlobalNamespace::MultiplayerActiveHand>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerExtension.ApplyIdentityData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConnectedPlayerExtension::*)(
    ::GlobalNamespace::BeatSaberPlayerIdentityPacketData, ::GlobalNamespace::IBeatSaberConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerExtension::ApplyIdentityData)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x352dc58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayerExtension*>(),
                            { "ApplyIdentityData", {}, { ::i2c::type_of<::GlobalNamespace::BeatSaberPlayerIdentityPacketData>(), ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerExtension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConnectedPlayerExtension::*)()>(&::GlobalNamespace::ConnectedPlayerExtension::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x352db28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayerExtension*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::BeatSaberPlayerIdentityPacketData GlobalNamespace::ConnectedPlayerExtension::BuildIdentityData(::GlobalNamespace::MultiplayerAvatarsData avatars,
                                                                                                                         ::GlobalNamespace::MultiplayerActiveHand activeHand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayerExtension*>(),
                                       { "BuildIdentityData", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerAvatarsData>(), ::i2c::type_of<::GlobalNamespace::MultiplayerActiveHand>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatSaberPlayerIdentityPacketData>(this, ___internal_method, avatars, activeHand);
}
inline void GlobalNamespace::ConnectedPlayerExtension::ApplyIdentityData(::GlobalNamespace::BeatSaberPlayerIdentityPacketData identityData, ::GlobalNamespace::IBeatSaberConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayerExtension*>(),
                          { "ApplyIdentityData", {}, { ::i2c::type_of<::GlobalNamespace::BeatSaberPlayerIdentityPacketData>(), ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identityData, player);
}
inline void GlobalNamespace::ConnectedPlayerExtension::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectedPlayerExtension*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerExtension* GlobalNamespace::ConnectedPlayerExtension::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ConnectedPlayerExtension*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedPlayerExtension::ConnectedPlayerExtension() {}
