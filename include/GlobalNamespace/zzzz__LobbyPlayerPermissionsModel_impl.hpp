#pragma once
// IWYU pragma private; include "GlobalNamespace\LobbyPlayerPermissionsModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LobbyPlayerPermissionsModel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IMenuRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayersLobbyPermissionConfigurationNetSerializable_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayerPermissionsModel.get_isPartyOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LobbyPlayerPermissionsModel::*)()>(&::GlobalNamespace::LobbyPlayerPermissionsModel::get_isPartyOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x373784c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "get_isPartyOwner", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayerPermissionsModel.set_isPartyOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayerPermissionsModel::*)(bool)>(&::GlobalNamespace::LobbyPlayerPermissionsModel::set_isPartyOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3737854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "set_isPartyOwner", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayerPermissionsModel.get_hasRecommendBeatmapPermission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LobbyPlayerPermissionsModel::*)()>(
    &::GlobalNamespace::LobbyPlayerPermissionsModel::get_hasRecommendBeatmapPermission)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x373785c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "get_hasRecommendBeatmapPermission", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayerPermissionsModel.set_hasRecommendBeatmapPermission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayerPermissionsModel::*)(bool)>(
    &::GlobalNamespace::LobbyPlayerPermissionsModel::set_hasRecommendBeatmapPermission)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3737864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "set_hasRecommendBeatmapPermission", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayerPermissionsModel.get_hasRecommendModifiersPermission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LobbyPlayerPermissionsModel::*)()>(
    &::GlobalNamespace::LobbyPlayerPermissionsModel::get_hasRecommendModifiersPermission)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x373786c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "get_hasRecommendModifiersPermission", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayerPermissionsModel.set_hasRecommendModifiersPermission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayerPermissionsModel::*)(bool)>(
    &::GlobalNamespace::LobbyPlayerPermissionsModel::set_hasRecommendModifiersPermission)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3737874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "set_hasRecommendModifiersPermission", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayerPermissionsModel.get_hasKickVotePermission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LobbyPlayerPermissionsModel::*)()>(&::GlobalNamespace::LobbyPlayerPermissionsModel::get_hasKickVotePermission)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x373787c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "get_hasKickVotePermission", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayerPermissionsModel.set_hasKickVotePermission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayerPermissionsModel::*)(bool)>(&::GlobalNamespace::LobbyPlayerPermissionsModel::set_hasKickVotePermission)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3737884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "set_hasKickVotePermission", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayerPermissionsModel.get_hasInvitePermission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LobbyPlayerPermissionsModel::*)()>(&::GlobalNamespace::LobbyPlayerPermissionsModel::get_hasInvitePermission)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x373788c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "get_hasInvitePermission", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayerPermissionsModel.set_hasInvitePermission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayerPermissionsModel::*)(bool)>(&::GlobalNamespace::LobbyPlayerPermissionsModel::set_hasInvitePermission)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3737894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "set_hasInvitePermission", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayerPermissionsModel.add_permissionsChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayerPermissionsModel::*)(::System::Action*)>(
    &::GlobalNamespace::LobbyPlayerPermissionsModel::add_permissionsChangedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x373789c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "add_permissionsChangedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayerPermissionsModel.remove_permissionsChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayerPermissionsModel::*)(::System::Action*)>(
    &::GlobalNamespace::LobbyPlayerPermissionsModel::remove_permissionsChangedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3737948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "remove_permissionsChangedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayerPermissionsModel.Activate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayerPermissionsModel::*)()>(&::GlobalNamespace::LobbyPlayerPermissionsModel::Activate)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x37370b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "Activate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayerPermissionsModel.Deactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayerPermissionsModel::*)()>(&::GlobalNamespace::LobbyPlayerPermissionsModel::Deactivate)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x373735c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "Deactivate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayerPermissionsModel.SetPlayerPermissions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayerPermissionsModel::*)(bool, bool, bool, bool, bool)>(
    &::GlobalNamespace::LobbyPlayerPermissionsModel::SetPlayerPermissions)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x37379f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(),
                                         { "SetPlayerPermissions", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayerPermissionsModel.HandleMenuRpcManagerSetPlayersPermissionConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayerPermissionsModel::*)(::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*)>(
    &::GlobalNamespace::LobbyPlayerPermissionsModel::HandleMenuRpcManagerSetPlayersPermissionConfiguration)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x3737a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(),
                                                             { "HandleMenuRpcManagerSetPlayersPermissionConfiguration",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayerPermissionsModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayerPermissionsModel::*)()>(&::GlobalNamespace::LobbyPlayerPermissionsModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3737c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IMenuRpcManager*& GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_get__menuRpcManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuRpcManager;
}
constexpr ::GlobalNamespace::IMenuRpcManager* const& GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_get__menuRpcManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuRpcManager;
}
constexpr void GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_set__menuRpcManager(::GlobalNamespace::IMenuRpcManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuRpcManager = value;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
constexpr bool& GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_get__isPartyOwner_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPartyOwner_k__BackingField;
}
constexpr bool const& GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_get__isPartyOwner_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPartyOwner_k__BackingField;
}
constexpr void GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_set__isPartyOwner_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isPartyOwner_k__BackingField = value;
}
constexpr bool& GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_get__hasRecommendBeatmapPermission_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasRecommendBeatmapPermission_k__BackingField;
}
constexpr bool const& GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_get__hasRecommendBeatmapPermission_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasRecommendBeatmapPermission_k__BackingField;
}
constexpr void GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_set__hasRecommendBeatmapPermission_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasRecommendBeatmapPermission_k__BackingField = value;
}
constexpr bool& GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_get__hasRecommendModifiersPermission_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasRecommendModifiersPermission_k__BackingField;
}
constexpr bool const& GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_get__hasRecommendModifiersPermission_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasRecommendModifiersPermission_k__BackingField;
}
constexpr void GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_set__hasRecommendModifiersPermission_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasRecommendModifiersPermission_k__BackingField = value;
}
constexpr bool& GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_get__hasKickVotePermission_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasKickVotePermission_k__BackingField;
}
constexpr bool const& GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_get__hasKickVotePermission_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasKickVotePermission_k__BackingField;
}
constexpr void GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_set__hasKickVotePermission_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasKickVotePermission_k__BackingField = value;
}
constexpr bool& GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_get__hasInvitePermission_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasInvitePermission_k__BackingField;
}
constexpr bool const& GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_get__hasInvitePermission_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasInvitePermission_k__BackingField;
}
constexpr void GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_set__hasInvitePermission_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasInvitePermission_k__BackingField = value;
}
constexpr ::System::Action*& GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_get_permissionsChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permissionsChangedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_get_permissionsChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permissionsChangedEvent;
}
constexpr void GlobalNamespace::LobbyPlayerPermissionsModel::__cordl_internal_set_permissionsChangedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___permissionsChangedEvent = value;
}
inline bool GlobalNamespace::LobbyPlayerPermissionsModel::get_isPartyOwner() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "get_isPartyOwner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyPlayerPermissionsModel::set_isPartyOwner(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "set_isPartyOwner", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LobbyPlayerPermissionsModel::get_hasRecommendBeatmapPermission() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "get_hasRecommendBeatmapPermission", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyPlayerPermissionsModel::set_hasRecommendBeatmapPermission(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "set_hasRecommendBeatmapPermission", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LobbyPlayerPermissionsModel::get_hasRecommendModifiersPermission() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "get_hasRecommendModifiersPermission", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyPlayerPermissionsModel::set_hasRecommendModifiersPermission(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "set_hasRecommendModifiersPermission", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LobbyPlayerPermissionsModel::get_hasKickVotePermission() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "get_hasKickVotePermission", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyPlayerPermissionsModel::set_hasKickVotePermission(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "set_hasKickVotePermission", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LobbyPlayerPermissionsModel::get_hasInvitePermission() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "get_hasInvitePermission", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyPlayerPermissionsModel::set_hasInvitePermission(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "set_hasInvitePermission", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyPlayerPermissionsModel::add_permissionsChangedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "add_permissionsChangedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyPlayerPermissionsModel::remove_permissionsChangedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "remove_permissionsChangedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyPlayerPermissionsModel::Activate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "Activate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyPlayerPermissionsModel::Deactivate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { "Deactivate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyPlayerPermissionsModel::SetPlayerPermissions(bool isPartyOwner, bool hasRecommendBeatmapPermission, bool hasRecommendModifiersPermission, bool hasKickVotePermission,
                                                                               bool hasInvitePermission) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(),
                                       { "SetPlayerPermissions", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isPartyOwner, hasRecommendBeatmapPermission, hasRecommendModifiersPermission, hasKickVotePermission, hasInvitePermission);
}
inline void GlobalNamespace::LobbyPlayerPermissionsModel::HandleMenuRpcManagerSetPlayersPermissionConfiguration(
    ::StringW userId, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* playersLobbyPermissionConfiguration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(),
          { "HandleMenuRpcManagerSetPlayersPermissionConfiguration", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, playersLobbyPermissionConfiguration);
}
inline void GlobalNamespace::LobbyPlayerPermissionsModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayerPermissionsModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LobbyPlayerPermissionsModel* GlobalNamespace::LobbyPlayerPermissionsModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LobbyPlayerPermissionsModel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel::LobbyPlayerPermissionsModel() {}
