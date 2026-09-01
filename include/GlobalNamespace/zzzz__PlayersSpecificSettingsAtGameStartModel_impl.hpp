#pragma once
// IWYU pragma private; include "GlobalNamespace\PlayersSpecificSettingsAtGameStartModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayersSpecificSettingsAtGameStartModel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsAtStartNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayersSpecificSettingsAtGameStartModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0::*)()>(
    &::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b9ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0._SaveFromNetSerializable_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0::*)(::GlobalNamespace::IBeatSaberConnectedPlayer*)>(
    &::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0::_SaveFromNetSerializable_b__0)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x32b9ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0*>(),
                                                             { "<SaveFromNetSerializable>b__0", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0::__cordl_internal_get_player() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___player;
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0::__cordl_internal_get_player() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___player;
}
constexpr void GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0::__cordl_internal_set_player(::GlobalNamespace::IBeatSaberConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___player = value;
}
inline void GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0::_SaveFromNetSerializable_b__0(::GlobalNamespace::IBeatSaberConnectedPlayer* p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0*>(),
                                                           { "<SaveFromNetSerializable>b__0", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0* GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0::PlayersSpecificSettingsAtGameStartModel___c__DisplayClass13_0() {}
//  Writing Method size for method: ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel.get_playersAtGameStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* (
    ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)()>(&::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_playersAtGameStart)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32b96c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>(), { "get_playersAtGameStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel.get_localPlayerSpecificSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerSpecificSettingsNetSerializable* (::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)()>(
    &::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_localPlayerSpecificSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b96dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>(), { "get_localPlayerSpecificSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel.set_localPlayerSpecificSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)(::GlobalNamespace::PlayerSpecificSettingsNetSerializable*)>(
    &::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::set_localPlayerSpecificSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b96e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>(),
                                                             { "set_localPlayerSpecificSettings", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel.get_playersAtGameStartNetSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* (::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)()>(
    &::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_playersAtGameStartNetSerializable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b96ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>(), { "get_playersAtGameStartNetSerializable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel.set_playersAtGameStartNetSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*)>(
    &::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::set_playersAtGameStartNetSerializable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b96f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>(),
                                                             { "set_playersAtGameStartNetSerializable", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)(
    ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*)>(&::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32b96fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>(),
                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel.GetPlayerSpecificSettingsForUserId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerSpecificSettingsNetSerializable* (::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)(::StringW)>(
    &::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::GetPlayerSpecificSettingsForUserId)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x32b9764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>(),
                                                                                           { "GetPlayerSpecificSettingsForUserId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel.SaveFromNetSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*)>(
    &::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::SaveFromNetSerializable)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x32b9ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>(),
                                                             { "SaveFromNetSerializable", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*& GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__cordl_internal_get__localPlayerSpecificSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerSpecificSettings_k__BackingField;
}
constexpr ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* const&
GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__cordl_internal_get__localPlayerSpecificSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerSpecificSettings_k__BackingField;
}
constexpr void
GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__cordl_internal_set__localPlayerSpecificSettings_k__BackingField(::GlobalNamespace::PlayerSpecificSettingsNetSerializable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localPlayerSpecificSettings_k__BackingField = value;
}
constexpr ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*&
GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__cordl_internal_get__playersAtGameStartNetSerializable_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersAtGameStartNetSerializable_k__BackingField;
}
constexpr ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* const&
GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__cordl_internal_get__playersAtGameStartNetSerializable_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersAtGameStartNetSerializable_k__BackingField;
}
constexpr void GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__cordl_internal_set__playersAtGameStartNetSerializable_k__BackingField(
    ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playersAtGameStartNetSerializable_k__BackingField = value;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_playersAtGameStart() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>(), { "get_playersAtGameStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_localPlayerSpecificSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>(), { "get_localPlayerSpecificSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::set_localPlayerSpecificSettings(::GlobalNamespace::PlayerSpecificSettingsNetSerializable* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>(),
                                                           { "set_localPlayerSpecificSettings", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_playersAtGameStartNetSerializable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>(), { "get_playersAtGameStartNetSerializable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::set_playersAtGameStartNetSerializable(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>(),
                                                           { "set_playersAtGameStartNetSerializable", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager,
                                                                            ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* localPlayerSpecificSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>(),
                       { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerSessionManager, localPlayerSpecificSettings);
}
inline ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::GetPlayerSpecificSettingsForUserId(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>(), { "GetPlayerSpecificSettingsForUserId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>(this, ___internal_method, userId);
}
inline void GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::SaveFromNetSerializable(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>(),
                                                           { "SaveFromNetSerializable", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playersAtGameStartNetSerializable);
}
inline ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*
GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::New_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager,
                                                                   ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* localPlayerSpecificSettings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>(multiplayerSessionManager, localPlayerSpecificSettings));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::PlayersSpecificSettingsAtGameStartModel() {}
