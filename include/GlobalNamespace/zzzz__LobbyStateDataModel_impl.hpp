#pragma once
// IWYU pragma private; include "GlobalNamespace\LobbyStateDataModel.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LobbyStateDataModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyStateDataModel_def.hpp"
#include "GlobalNamespace/zzzz__IUnifiedNetworkPlayerModel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.add_playerConnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyStateDataModel::*)(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(
    &::GlobalNamespace::LobbyStateDataModel::add_playerConnectedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x373c5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(),
                                                             { "add_playerConnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.remove_playerConnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyStateDataModel::*)(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(
    &::GlobalNamespace::LobbyStateDataModel::remove_playerConnectedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x373c6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(),
                                                             { "remove_playerConnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.add_playerDisconnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyStateDataModel::*)(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(
    &::GlobalNamespace::LobbyStateDataModel::add_playerDisconnectedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x373c76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(),
                                                             { "add_playerDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.remove_playerDisconnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyStateDataModel::*)(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(
    &::GlobalNamespace::LobbyStateDataModel::remove_playerDisconnectedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x373c82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(),
                                                             { "remove_playerDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.get_isConnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LobbyStateDataModel::*)()>(&::GlobalNamespace::LobbyStateDataModel::get_isConnected)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x373c8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(), { "get_isConnected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.get_localPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IBeatSaberConnectedPlayer* (::GlobalNamespace::LobbyStateDataModel::*)()>(
    &::GlobalNamespace::LobbyStateDataModel::get_localPlayer)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x373c994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(), { "get_localPlayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.get_connectedPlayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* (::GlobalNamespace::LobbyStateDataModel::*)()>(
    &::GlobalNamespace::LobbyStateDataModel::get_connectedPlayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x373ca38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(), { "get_connectedPlayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.get_rawConnectedPlayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* (::GlobalNamespace::LobbyStateDataModel::*)()>(
    &::GlobalNamespace::LobbyStateDataModel::get_rawConnectedPlayers)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x373ca40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(), { "get_rawConnectedPlayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.get_configuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::LobbyStateDataModel::*)()>(
    &::GlobalNamespace::LobbyStateDataModel::get_configuration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x373cae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(), { "get_configuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.Activate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyStateDataModel::*)()>(&::GlobalNamespace::LobbyStateDataModel::Activate)> {
  constexpr static std::size_t size = 0x814;
  constexpr static std::size_t addrs = 0x373cafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(), { "Activate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.Deactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyStateDataModel::*)()>(&::GlobalNamespace::LobbyStateDataModel::Deactivate)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x373d310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(), { "Deactivate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyStateDataModel::*)()>(&::GlobalNamespace::LobbyStateDataModel::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x373d4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.GetPlayerById
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IConnectedPlayer* (::GlobalNamespace::LobbyStateDataModel::*)(::StringW)>(
    &::GlobalNamespace::LobbyStateDataModel::GetPlayerById)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x373d4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(), { "GetPlayerById", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.HandleMultiplayerSessionManagerPlayerConnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyStateDataModel::*)(::GlobalNamespace::IBeatSaberConnectedPlayer*)>(
    &::GlobalNamespace::LobbyStateDataModel::HandleMultiplayerSessionManagerPlayerConnected)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x373d54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(),
                                                             { "HandleMultiplayerSessionManagerPlayerConnected", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.HandleMultiplayerSessionManagerPlayerDisconnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyStateDataModel::*)(::GlobalNamespace::IBeatSaberConnectedPlayer*)>(
    &::GlobalNamespace::LobbyStateDataModel::HandleMultiplayerSessionManagerPlayerDisconnected)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x373d6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(),
                                                             { "HandleMultiplayerSessionManagerPlayerDisconnected", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyStateDataModel::*)()>(&::GlobalNamespace::LobbyStateDataModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x373d814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::LobbyStateDataModel::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::LobbyStateDataModel::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::LobbyStateDataModel::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel*& GlobalNamespace::LobbyStateDataModel::__cordl_internal_get__unifiedNetworkPlayerModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unifiedNetworkPlayerModel;
}
constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel* const& GlobalNamespace::LobbyStateDataModel::__cordl_internal_get__unifiedNetworkPlayerModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unifiedNetworkPlayerModel;
}
constexpr void GlobalNamespace::LobbyStateDataModel::__cordl_internal_set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unifiedNetworkPlayerModel = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*& GlobalNamespace::LobbyStateDataModel::__cordl_internal_get__connectedPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayers;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* const& GlobalNamespace::LobbyStateDataModel::__cordl_internal_get__connectedPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayers;
}
constexpr void GlobalNamespace::LobbyStateDataModel::__cordl_internal_set__connectedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectedPlayers = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IBeatSaberConnectedPlayer*>*& GlobalNamespace::LobbyStateDataModel::__cordl_internal_get__connectedPlayersById() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayersById;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IBeatSaberConnectedPlayer*>* const&
GlobalNamespace::LobbyStateDataModel::__cordl_internal_get__connectedPlayersById() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayersById;
}
constexpr void
GlobalNamespace::LobbyStateDataModel::__cordl_internal_set__connectedPlayersById(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectedPlayersById = value;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::LobbyStateDataModel::__cordl_internal_get__configuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configuration;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::LobbyStateDataModel::__cordl_internal_get__configuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configuration;
}
constexpr void GlobalNamespace::LobbyStateDataModel::__cordl_internal_set__configuration(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____configuration = value;
}
constexpr ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*& GlobalNamespace::LobbyStateDataModel::__cordl_internal_get_playerConnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerConnectedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* const& GlobalNamespace::LobbyStateDataModel::__cordl_internal_get_playerConnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerConnectedEvent;
}
constexpr void GlobalNamespace::LobbyStateDataModel::__cordl_internal_set_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerConnectedEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*& GlobalNamespace::LobbyStateDataModel::__cordl_internal_get_playerDisconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDisconnectedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* const& GlobalNamespace::LobbyStateDataModel::__cordl_internal_get_playerDisconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDisconnectedEvent;
}
constexpr void GlobalNamespace::LobbyStateDataModel::__cordl_internal_set_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerDisconnectedEvent = value;
}
inline void GlobalNamespace::LobbyStateDataModel::add_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(),
                                                           { "add_playerConnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyStateDataModel::remove_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(),
                                                           { "remove_playerConnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyStateDataModel::add_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(),
                                                           { "add_playerDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyStateDataModel::remove_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(),
                                                           { "remove_playerDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LobbyStateDataModel::get_isConnected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(), { "get_isConnected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::IBeatSaberConnectedPlayer* GlobalNamespace::LobbyStateDataModel::get_localPlayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(), { "get_localPlayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatSaberConnectedPlayer*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* GlobalNamespace::LobbyStateDataModel::get_connectedPlayers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(), { "get_connectedPlayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* GlobalNamespace::LobbyStateDataModel::get_rawConnectedPlayers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(), { "get_rawConnectedPlayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::LobbyStateDataModel::get_configuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(), { "get_configuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyStateDataModel::Activate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(), { "Activate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyStateDataModel::Deactivate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(), { "Deactivate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyStateDataModel::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::LobbyStateDataModel::GetPlayerById(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(), { "GetPlayerById", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*>(this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyStateDataModel::HandleMultiplayerSessionManagerPlayerConnected(::GlobalNamespace::IBeatSaberConnectedPlayer* player) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(),
                                                           { "HandleMultiplayerSessionManagerPlayerConnected", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::LobbyStateDataModel::HandleMultiplayerSessionManagerPlayerDisconnected(::GlobalNamespace::IBeatSaberConnectedPlayer* player) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(),
                                                           { "HandleMultiplayerSessionManagerPlayerDisconnected", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::LobbyStateDataModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyStateDataModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LobbyStateDataModel* GlobalNamespace::LobbyStateDataModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LobbyStateDataModel*>());
}
/// @brief Convert operator to "::GlobalNamespace::ILobbyStateDataModel"
constexpr GlobalNamespace::LobbyStateDataModel::operator ::GlobalNamespace::ILobbyStateDataModel*() noexcept {
  return static_cast<::GlobalNamespace::ILobbyStateDataModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILobbyStateDataModel"
constexpr ::GlobalNamespace::ILobbyStateDataModel* GlobalNamespace::LobbyStateDataModel::i___GlobalNamespace__ILobbyStateDataModel() noexcept {
  return static_cast<::GlobalNamespace::ILobbyStateDataModel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::LobbyStateDataModel::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::LobbyStateDataModel::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LobbyStateDataModel::LobbyStateDataModel() {}
