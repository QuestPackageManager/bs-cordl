#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerLobbyConnectionController.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyConnectionController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__CreateServerFormData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IUnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyConnectionController_def.hpp"
#include "GlobalNamespace/zzzz__SelectMultiplayerLobbyDestination_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__UnifiedNetworkPlayerModel_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState::MultiplayerLobbyConnectionController_LobbyConnectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState::MultiplayerLobbyConnectionController_LobbyConnectionState() {}
constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState::Connecting{ static_cast<int32_t>(
    0x1) };
constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState::Connected{ static_cast<int32_t>(
    0x2) };
constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState::ConnectionFailed{
  static_cast<int32_t>(0x3)
};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType::MultiplayerLobbyConnectionController_LobbyConnectionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType::MultiplayerLobbyConnectionController_LobbyConnectionType() {}
constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType::PartyHost{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType::PartyClient{ static_cast<int32_t>(
    0x2) };
constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType::QuickPlay{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.add_connectionSuccessEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::System::Action*)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::add_connectionSuccessEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59dd468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(), { "add_connectionSuccessEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.remove_connectionSuccessEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::System::Action*)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::remove_connectionSuccessEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59dd514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                                                                                           { "remove_connectionSuccessEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.add_connectionFailedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(
    ::System::Action_2<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>*)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::add_connectionFailedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59dd5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                            { "add_connectionFailedEvent",
                              {},
                              { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.remove_connectionFailedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(
    ::System::Action_2<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>*)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::remove_connectionFailedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59dd680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                            { "remove_connectionFailedEvent",
                              {},
                              { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.get_connectionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState (::GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59dd740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(), { "get_connectionState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.set_connectionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59dd748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                                                             { "set_connectionState", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.get_connectionType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType (::GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59dd750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(), { "get_connectionType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.set_connectionType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59dd758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                                                             { "set_connectionType", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.get_connectionFailedReason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ConnectionFailedReason (::GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionFailedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59dd760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(), { "get_connectionFailedReason", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.set_connectionFailedReason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::ConnectionFailedReason)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionFailedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59dd768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                                                                                           { "set_connectionFailedReason", {}, { ::i2c::type_of<::GlobalNamespace::ConnectionFailedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.CreateParty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::CreateServerFormData)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::CreateParty)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x59dd770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                                                                                           { "CreateParty", {}, { ::i2c::type_of<::GlobalNamespace::CreateServerFormData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.ConnectToParty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::StringW)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToParty)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x59ddf7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(), { "ConnectToParty", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.CreateOrConnectToDestinationParty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::SelectMultiplayerLobbyDestination*)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::CreateOrConnectToDestinationParty)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x59de230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                                                             { "CreateOrConnectToDestinationParty", {}, { ::i2c::type_of<::GlobalNamespace::SelectMultiplayerLobbyDestination*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.ConnectToServer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::INetworkPlayer*, ::StringW)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToServer)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x59de5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                                                             { "ConnectToServer", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayer*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.ConnectToMatchmaking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(
    ::GlobalNamespace::BeatmapDifficultyMask, ::GlobalNamespace::SongPackMask, bool)>(&::GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToMatchmaking)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x59de8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                         { "ConnectToMatchmaking", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>(), ::i2c::type_of<::GlobalNamespace::SongPackMask>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.LeaveLobby
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&::GlobalNamespace::MultiplayerLobbyConnectionController::LeaveLobby)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59deb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(), { "LeaveLobby", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.TryCreatePartyConnection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig*)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::TryCreatePartyConnection)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x59ddb78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                                                             { "TryCreatePartyConnection", {}, { ::i2c::type_of<::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.ClearCurrentConnection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::ClearCurrentConnection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59dec38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(), { "ClearCurrentConnection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.HandleMultiplayerSessionManagerConnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnected)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x59dec40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(), { "HandleMultiplayerSessionManagerConnected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.HandleMultiplayerSessionManagerConnectionFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::ConnectionFailedReason)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnectionFailed)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x59ddce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                                                             { "HandleMultiplayerSessionManagerConnectionFailed", {}, { ::i2c::type_of<::GlobalNamespace::ConnectionFailedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.HandleMultiplayerSessionManagerConnectionFailedWithRetry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::ConnectionFailedReason)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnectionFailedWithRetry)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x59deec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                                                             { "HandleMultiplayerSessionManagerConnectionFailedWithRetry", {}, { ::i2c::type_of<::GlobalNamespace::ConnectionFailedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&::GlobalNamespace::MultiplayerLobbyConnectionController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59def44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel*& GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__unifiedNetworkPlayerModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unifiedNetworkPlayerModel;
}
constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel* const& GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__unifiedNetworkPlayerModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unifiedNetworkPlayerModel;
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unifiedNetworkPlayerModel = value;
}
constexpr ::System::Action*& GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get_connectionSuccessEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionSuccessEvent;
}
constexpr ::System::Action* const& GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get_connectionSuccessEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionSuccessEvent;
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_set_connectionSuccessEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___connectionSuccessEvent = value;
}
constexpr ::System::Action_2<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>*&
GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get_connectionFailedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionFailedEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>* const&
GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get_connectionFailedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionFailedEvent;
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_set_connectionFailedEvent(
    ::System::Action_2<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___connectionFailedEvent = value;
}
constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState& GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__connectionState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionState_k__BackingField;
}
constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState const&
GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__connectionState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionState_k__BackingField;
}
constexpr void
GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_set__connectionState_k__BackingField(::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionState_k__BackingField = value;
}
constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType& GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__connectionType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionType_k__BackingField;
}
constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType const&
GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__connectionType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionType_k__BackingField;
}
constexpr void
GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_set__connectionType_k__BackingField(::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionType_k__BackingField = value;
}
constexpr ::GlobalNamespace::ConnectionFailedReason& GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__connectionFailedReason_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionFailedReason_k__BackingField;
}
constexpr ::GlobalNamespace::ConnectionFailedReason const& GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__connectionFailedReason_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionFailedReason_k__BackingField;
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_set__connectionFailedReason_k__BackingField(::GlobalNamespace::ConnectionFailedReason value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionFailedReason_k__BackingField = value;
}
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig*& GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__partyConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyConfig;
}
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig* const& GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__partyConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyConfig;
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_set__partyConfig(::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____partyConfig = value;
}
constexpr int32_t& GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__retryAttemptsLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____retryAttemptsLeft;
}
constexpr int32_t const& GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__retryAttemptsLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____retryAttemptsLeft;
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_set__retryAttemptsLeft(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____retryAttemptsLeft = value;
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::add_connectionSuccessEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(), { "add_connectionSuccessEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::remove_connectionSuccessEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(), { "remove_connectionSuccessEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::add_connectionFailedEvent(
    ::System::Action_2<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                          { "add_connectionFailedEvent",
                            {},
                            { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::remove_connectionFailedEvent(
    ::System::Action_2<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                          { "remove_connectionFailedEvent",
                            {},
                            { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(), { "get_connectionState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionState(::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                                                           { "set_connectionState", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(), { "get_connectionType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionType(::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                                                           { "set_connectionType", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ConnectionFailedReason GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionFailedReason() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(), { "get_connectionFailedReason", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectionFailedReason>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionFailedReason(::GlobalNamespace::ConnectionFailedReason value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                                                                                         { "set_connectionFailedReason", {}, { ::i2c::type_of<::GlobalNamespace::ConnectionFailedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::CreateParty(::GlobalNamespace::CreateServerFormData data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                                                                                         { "CreateParty", {}, { ::i2c::type_of<::GlobalNamespace::CreateServerFormData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToParty(::StringW serverCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(), { "ConnectToParty", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serverCode);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::CreateOrConnectToDestinationParty(::GlobalNamespace::SelectMultiplayerLobbyDestination* lobbyDestination) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                                                           { "CreateOrConnectToDestinationParty", {}, { ::i2c::type_of<::GlobalNamespace::SelectMultiplayerLobbyDestination*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lobbyDestination);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToServer(::GlobalNamespace::INetworkPlayer* server, ::StringW password) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                                                           { "ConnectToServer", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayer*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, server, password);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToMatchmaking(::GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask, ::GlobalNamespace::SongPackMask songPackMask,
                                                                                        bool allowSongSelection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                          { "ConnectToMatchmaking", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>(), ::i2c::type_of<::GlobalNamespace::SongPackMask>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapDifficultyMask, songPackMask, allowSongSelection);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::LeaveLobby() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(), { "LeaveLobby", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerLobbyConnectionController::TryCreatePartyConnection(::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig* config) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                                                           { "TryCreatePartyConnection", {}, { ::i2c::type_of<::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, config);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::ClearCurrentConnection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(), { "ClearCurrentConnection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnected() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(), { "HandleMultiplayerSessionManagerConnected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                                                           { "HandleMultiplayerSessionManagerConnectionFailed", {}, { ::i2c::type_of<::GlobalNamespace::ConnectionFailedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnectionFailedWithRetry(::GlobalNamespace::ConnectionFailedReason reason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(),
                                                           { "HandleMultiplayerSessionManagerConnectionFailedWithRetry", {}, { ::i2c::type_of<::GlobalNamespace::ConnectionFailedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyConnectionController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLobbyConnectionController* GlobalNamespace::MultiplayerLobbyConnectionController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerLobbyConnectionController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController::MultiplayerLobbyConnectionController() {}
