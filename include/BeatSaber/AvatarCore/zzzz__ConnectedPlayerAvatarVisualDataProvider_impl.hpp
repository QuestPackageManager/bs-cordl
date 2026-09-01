#pragma once
// IWYU pragma private; include "BeatSaber\AvatarCore\ConnectedPlayerAvatarVisualDataProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__ConnectedPlayerAvatarVisualDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarVisualDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider.get_avatarsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerAvatarsData (::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::*)()>(
    &::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::get_avatarsData)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x326f478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>(), { "get_avatarsData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider.add_visualDataDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::*)(::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>*)>(
    &::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::add_visualDataDidChangeEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x326f544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>(),
                                                             { "add_visualDataDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider.remove_visualDataDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::*)(::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>*)>(
    &::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::remove_visualDataDidChangeEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x326f548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>(),
                                                             { "remove_visualDataDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::*)(::GlobalNamespace::IBeatSaberConnectedPlayer*)>(
    &::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x326f54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::__cordl_internal_get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::__cordl_internal_get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr void BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::__cordl_internal_set__connectedPlayer(::GlobalNamespace::IBeatSaberConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectedPlayer = value;
}
inline ::GlobalNamespace::MultiplayerAvatarsData BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::get_avatarsData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>(), { "get_avatarsData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarsData>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::add_visualDataDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>(),
                                                           { "add_visualDataDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::remove_visualDataDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>(),
                                                           { "remove_visualDataDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::_ctor(::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectedPlayer);
}
inline ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*
BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::New_ctor(::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>(connectedPlayer));
}
/// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarVisualDataProvider"
constexpr BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::operator ::BeatSaber::AvatarCore::IAvatarVisualDataProvider*() noexcept {
  return static_cast<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::AvatarCore::IAvatarVisualDataProvider"
constexpr ::BeatSaber::AvatarCore::IAvatarVisualDataProvider* BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::i___BeatSaber__AvatarCore__IAvatarVisualDataProvider() noexcept {
  return static_cast<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::ConnectedPlayerAvatarVisualDataProvider() {}
