#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/ConnectedPlayerAvatarVisualDataProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__ConnectedPlayerAvatarVisualDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarVisualDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider.get_avatarsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerAvatarsData (::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::*)()>(
    &::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::get_avatarsData)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x34f57c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>(), { "get_avatarsData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider.get_isVisualDataResolved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::*)()>(
    &::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::get_isVisualDataResolved)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34f5894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>(), { "get_isVisualDataResolved", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider.add_visualDataDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::*)(::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>*)>(
    &::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::add_visualDataDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x34f589c;

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
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x34f595c;

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
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x34f5a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::*)()>(
    &::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::Dispose)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x34f5c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider.HandleAvatarDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::*)(::GlobalNamespace::IBeatSaberConnectedPlayer*)>(
    &::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::HandleAvatarDidChange)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x34f5d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>(),
                                                                                           { "HandleAvatarDidChange", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>*& BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::__cordl_internal_get_visualDataDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visualDataDidChangeEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>* const& BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::__cordl_internal_get_visualDataDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visualDataDidChangeEvent;
}
constexpr void BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::__cordl_internal_set_visualDataDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___visualDataDidChangeEvent = value;
}
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
constexpr bool& BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::__cordl_internal_get__isVisualDataResolved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isVisualDataResolved;
}
constexpr bool const& BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::__cordl_internal_get__isVisualDataResolved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isVisualDataResolved;
}
constexpr void BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::__cordl_internal_set__isVisualDataResolved(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isVisualDataResolved = value;
}
inline ::GlobalNamespace::MultiplayerAvatarsData BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::get_avatarsData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>(), { "get_avatarsData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarsData>(this, ___internal_method);
}
inline bool BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::get_isVisualDataResolved() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>(), { "get_isVisualDataResolved", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
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
inline void BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::HandleAvatarDidChange(::GlobalNamespace::IBeatSaberConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>(),
                                                                                         { "HandleAvatarDidChange", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
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
/// @brief Convert operator to "::System::IDisposable"
constexpr BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::ConnectedPlayerAvatarVisualDataProvider() {}
