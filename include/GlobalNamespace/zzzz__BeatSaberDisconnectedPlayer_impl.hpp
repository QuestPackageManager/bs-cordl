#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberDisconnectedPlayer.hpp"
#include "GlobalNamespace/zzzz__DisconnectedPlayer_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerActiveHand_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_impl.hpp"
#include "GlobalNamespace/zzzz__BeatSaberDisconnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerExtension_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerActiveHand_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatSaberDisconnectedPlayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberDisconnectedPlayer::*)(::StringW, ::StringW, int32_t)>(
    &::GlobalNamespace::BeatSaberDisconnectedPlayer::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x352f05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberDisconnectedPlayer*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberDisconnectedPlayer.get_multiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerAvatarsData (::GlobalNamespace::BeatSaberDisconnectedPlayer::*)()>(
    &::GlobalNamespace::BeatSaberDisconnectedPlayer::get_multiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x352f0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberDisconnectedPlayer*>(), { "get_multiplayerAvatarsData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberDisconnectedPlayer.get_isAvatarResolved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatSaberDisconnectedPlayer::*)()>(&::GlobalNamespace::BeatSaberDisconnectedPlayer::get_isAvatarResolved)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x352f108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberDisconnectedPlayer*>(), { "get_isAvatarResolved", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberDisconnectedPlayer.get_activeHand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerActiveHand (::GlobalNamespace::BeatSaberDisconnectedPlayer::*)()>(
    &::GlobalNamespace::BeatSaberDisconnectedPlayer::get_activeHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x352f110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberDisconnectedPlayer*>(), { "get_activeHand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberDisconnectedPlayer.get_extension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ConnectedPlayerExtension* (::GlobalNamespace::BeatSaberDisconnectedPlayer::*)()>(
    &::GlobalNamespace::BeatSaberDisconnectedPlayer::get_extension)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x352f118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberDisconnectedPlayer*>(), { "get_extension", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberDisconnectedPlayer.add_avatarDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberDisconnectedPlayer::*)(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(
    &::GlobalNamespace::BeatSaberDisconnectedPlayer::add_avatarDidChangeEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x352f120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberDisconnectedPlayer*>(),
                                                             { "add_avatarDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberDisconnectedPlayer.remove_avatarDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberDisconnectedPlayer::*)(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(
    &::GlobalNamespace::BeatSaberDisconnectedPlayer::remove_avatarDidChangeEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x352f124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberDisconnectedPlayer*>(),
                                                             { "remove_avatarDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberDisconnectedPlayer.SetMultiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberDisconnectedPlayer::*)(::GlobalNamespace::MultiplayerAvatarsData)>(
    &::GlobalNamespace::BeatSaberDisconnectedPlayer::SetMultiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x352f128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberDisconnectedPlayer*>(),
                                                                                           { "SetMultiplayerAvatarsData", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerAvatarsData>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerAvatarsData& GlobalNamespace::BeatSaberDisconnectedPlayer::__cordl_internal_get__multiplayerAvatarsData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerAvatarsData_k__BackingField;
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData const& GlobalNamespace::BeatSaberDisconnectedPlayer::__cordl_internal_get__multiplayerAvatarsData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerAvatarsData_k__BackingField;
}
constexpr void GlobalNamespace::BeatSaberDisconnectedPlayer::__cordl_internal_set__multiplayerAvatarsData_k__BackingField(::GlobalNamespace::MultiplayerAvatarsData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerAvatarsData_k__BackingField = value;
}
constexpr ::GlobalNamespace::MultiplayerActiveHand& GlobalNamespace::BeatSaberDisconnectedPlayer::__cordl_internal_get__activeHand_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeHand_k__BackingField;
}
constexpr ::GlobalNamespace::MultiplayerActiveHand const& GlobalNamespace::BeatSaberDisconnectedPlayer::__cordl_internal_get__activeHand_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeHand_k__BackingField;
}
constexpr void GlobalNamespace::BeatSaberDisconnectedPlayer::__cordl_internal_set__activeHand_k__BackingField(::GlobalNamespace::MultiplayerActiveHand value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeHand_k__BackingField = value;
}
constexpr ::GlobalNamespace::ConnectedPlayerExtension*& GlobalNamespace::BeatSaberDisconnectedPlayer::__cordl_internal_get__extension_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extension_k__BackingField;
}
constexpr ::GlobalNamespace::ConnectedPlayerExtension* const& GlobalNamespace::BeatSaberDisconnectedPlayer::__cordl_internal_get__extension_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extension_k__BackingField;
}
constexpr void GlobalNamespace::BeatSaberDisconnectedPlayer::__cordl_internal_set__extension_k__BackingField(::GlobalNamespace::ConnectedPlayerExtension* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____extension_k__BackingField = value;
}
inline void GlobalNamespace::BeatSaberDisconnectedPlayer::_ctor(::StringW userId, ::StringW userName, int32_t sortIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberDisconnectedPlayer*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, userName, sortIndex);
}
inline ::GlobalNamespace::MultiplayerAvatarsData GlobalNamespace::BeatSaberDisconnectedPlayer::get_multiplayerAvatarsData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberDisconnectedPlayer*>(), { "get_multiplayerAvatarsData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarsData>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatSaberDisconnectedPlayer::get_isAvatarResolved() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberDisconnectedPlayer*>(), { "get_isAvatarResolved", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerActiveHand GlobalNamespace::BeatSaberDisconnectedPlayer::get_activeHand() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberDisconnectedPlayer*>(), { "get_activeHand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerActiveHand>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerExtension* GlobalNamespace::BeatSaberDisconnectedPlayer::get_extension() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberDisconnectedPlayer*>(), { "get_extension", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerExtension*>(this, ___internal_method);
}
inline void GlobalNamespace::BeatSaberDisconnectedPlayer::add_avatarDidChangeEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberDisconnectedPlayer*>(),
                                                           { "add_avatarDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatSaberDisconnectedPlayer::remove_avatarDidChangeEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberDisconnectedPlayer*>(),
                                                           { "remove_avatarDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatSaberDisconnectedPlayer::SetMultiplayerAvatarsData(::GlobalNamespace::MultiplayerAvatarsData avatarsData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberDisconnectedPlayer*>(),
                                                                                         { "SetMultiplayerAvatarsData", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerAvatarsData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, avatarsData);
}
inline ::GlobalNamespace::BeatSaberDisconnectedPlayer* GlobalNamespace::BeatSaberDisconnectedPlayer::New_ctor(::StringW userId, ::StringW userName, int32_t sortIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatSaberDisconnectedPlayer*>(userId, userName, sortIndex));
}
/// @brief Convert operator to "::GlobalNamespace::IBeatSaberConnectedPlayer"
constexpr GlobalNamespace::BeatSaberDisconnectedPlayer::operator ::GlobalNamespace::IBeatSaberConnectedPlayer*() noexcept {
  return static_cast<::GlobalNamespace::IBeatSaberConnectedPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatSaberConnectedPlayer"
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* GlobalNamespace::BeatSaberDisconnectedPlayer::i___GlobalNamespace__IBeatSaberConnectedPlayer() noexcept {
  return static_cast<::GlobalNamespace::IBeatSaberConnectedPlayer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IConnectedPlayer"
constexpr GlobalNamespace::BeatSaberDisconnectedPlayer::operator ::GlobalNamespace::IConnectedPlayer*() noexcept {
  return static_cast<::GlobalNamespace::IConnectedPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnectedPlayer"
constexpr ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::BeatSaberDisconnectedPlayer::i___GlobalNamespace__IConnectedPlayer() noexcept {
  return static_cast<::GlobalNamespace::IConnectedPlayer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberDisconnectedPlayer::BeatSaberDisconnectedPlayer() {}
