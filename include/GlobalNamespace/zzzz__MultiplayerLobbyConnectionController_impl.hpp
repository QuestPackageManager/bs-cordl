#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLobbyConnectionController.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyConnectionController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyConnectionController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__CreateServerFormData_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IUnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyConnectionController_def.hpp"
#include "GlobalNamespace/zzzz__SelectMultiplayerLobbyDestination_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__UnifiedNetworkPlayerModel_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState::__MultiplayerLobbyConnectionController__LobbyConnectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState::__MultiplayerLobbyConnectionController__LobbyConnectionState() {}
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState::None{ static_cast<int32_t>(
    0x0) };
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState::Connecting{
  static_cast<int32_t>(0x1)
};
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState::Connected{
  static_cast<int32_t>(0x2)
};
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState::ConnectionFailed{
  static_cast<int32_t>(0x3)
};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType::__MultiplayerLobbyConnectionController__LobbyConnectionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType::__MultiplayerLobbyConnectionController__LobbyConnectionType() {}
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType::None{ static_cast<int32_t>(
    0x0) };
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType::PartyHost{ static_cast<int32_t>(
    0x1) };
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType::PartyClient{
  static_cast<int32_t>(0x2)
};
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType::QuickPlay{ static_cast<int32_t>(
    0x3) };
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.add_connectionSuccessEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::System::Action*)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::add_connectionSuccessEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b73f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "add_connectionSuccessEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.remove_connectionSuccessEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::System::Action*)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::remove_connectionSuccessEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b74004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "remove_connectionSuccessEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.add_connectionFailedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(
    ::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>*)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::add_connectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b740a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "add_connectionFailedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.remove_connectionFailedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(
    ::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>*)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::remove_connectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b74150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "remove_connectionFailedEvent",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.get_connectionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState (
    ::GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&::GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b74200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                                                                               "get_connectionState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.set_connectionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(
    ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState)>(&::GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b74208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "set_connectionState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.get_connectionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType (
    ::GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(&::GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b74210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                                                                               "get_connectionType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.set_connectionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(
    ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType)>(&::GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b74218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "set_connectionType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.get_connectionFailedReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectionFailedReason (::GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionFailedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b74220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                                                                               "get_connectionFailedReason", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.set_connectionFailedReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::ConnectionFailedReason)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionFailedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b74228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "set_connectionFailedReason", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.CreateParty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::CreateServerFormData)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::CreateParty)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x3b74230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "CreateParty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CreateServerFormData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.ConnectToParty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::StringW)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToParty)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x3b748fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "ConnectToParty",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.CreateOrConnectToDestinationParty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(
    ::GlobalNamespace::SelectMultiplayerLobbyDestination*)>(&::GlobalNamespace::MultiplayerLobbyConnectionController::CreateOrConnectToDestinationParty)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x3b74c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "CreateOrConnectToDestinationParty",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SelectMultiplayerLobbyDestination*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.ConnectToServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::INetworkPlayer*, ::StringW)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToServer)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x3b7502c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "ConnectToServer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.ConnectToMatchmaking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(
    ::GlobalNamespace::BeatmapDifficultyMask, ::GlobalNamespace::SongPackMask, bool)>(&::GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToMatchmaking)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x3b75268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "ConnectToMatchmaking", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.LeaveLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::LeaveLobby)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3b75594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                                                                               "LeaveLobby", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.ClearCurrentConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::ClearCurrentConnection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b7563c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                                                                               "ClearCurrentConnection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.HandleMultiplayerSessionManagerConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnected)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x3b75644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                                                 "HandleMultiplayerSessionManagerConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.HandleMultiplayerSessionManagerConnectionFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::ConnectionFailedReason)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnectionFailed)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x3b74678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "HandleMultiplayerSessionManagerConnectionFailed",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController.HandleMultiplayerSessionManagerConnectionFailedWithRetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)(::GlobalNamespace::ConnectionFailedReason)>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnectionFailedWithRetry)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3b758b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "HandleMultiplayerSessionManagerConnectionFailedWithRetry",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyConnectionController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyConnectionController::*)()>(
    &::GlobalNamespace::MultiplayerLobbyConnectionController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b759e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const&
GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel*& GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__unifiedNetworkPlayerModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unifiedNetworkPlayerModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IUnifiedNetworkPlayerModel*> const&
GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__unifiedNetworkPlayerModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unifiedNetworkPlayerModel;
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unifiedNetworkPlayerModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get_connectionSuccessEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionSuccessEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get_connectionSuccessEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionSuccessEvent;
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_set_connectionSuccessEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectionSuccessEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>*&
GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get_connectionFailedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionFailedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>*> const&
GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get_connectionFailedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionFailedEvent;
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_set_connectionFailedEvent(
    ::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectionFailedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState&
GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__connectionState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionState_k__BackingField;
}
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState const&
GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__connectionState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionState_k__BackingField;
}
constexpr void
GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_set__connectionState_k__BackingField(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionState_k__BackingField = value;
}
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType&
GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__connectionType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionType_k__BackingField;
}
constexpr ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType const&
GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__connectionType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionType_k__BackingField;
}
constexpr void
GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_set__connectionType_k__BackingField(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType value) {
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
constexpr ::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig*& GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__partyConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyConfig;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig*> const&
GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_get__partyConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyConfig;
}
constexpr void GlobalNamespace::MultiplayerLobbyConnectionController::__cordl_internal_set__partyConfig(::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____partyConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "add_connectionSuccessEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::remove_connectionSuccessEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "remove_connectionSuccessEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::add_connectionFailedEvent(
    ::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "add_connectionFailedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::remove_connectionFailedEvent(
    ::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "remove_connectionFailedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                                                                             "get_connectionState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionState(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "set_connectionState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                                                                             "get_connectionType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionType(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "set_connectionType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ConnectionFailedReason GlobalNamespace::MultiplayerLobbyConnectionController::get_connectionFailedReason() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                                                                             "get_connectionFailedReason", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectionFailedReason, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::set_connectionFailedReason(::GlobalNamespace::ConnectionFailedReason value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "set_connectionFailedReason", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::CreateParty(::GlobalNamespace::CreateServerFormData data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "CreateParty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CreateServerFormData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToParty(::StringW serverCode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "ConnectToParty",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serverCode);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::CreateOrConnectToDestinationParty(::GlobalNamespace::SelectMultiplayerLobbyDestination* lobbyDestination) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "CreateOrConnectToDestinationParty",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SelectMultiplayerLobbyDestination*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lobbyDestination);
}
/// @param password: ::StringW (default: nullptr)
inline void GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToServer(::GlobalNamespace::INetworkPlayer* server, ::StringW password) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "ConnectToServer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, server, password);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::ConnectToMatchmaking(::GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask, ::GlobalNamespace::SongPackMask songPackMask,
                                                                                        bool allowSongSelection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "ConnectToMatchmaking", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapDifficultyMask, songPackMask, allowSongSelection);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::LeaveLobby() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                                                                             "LeaveLobby", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::ClearCurrentConnection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                                                                             "ClearCurrentConnection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnected() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                                               "HandleMultiplayerSessionManagerConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "HandleMultiplayerSessionManagerConnectionFailed",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason);
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::HandleMultiplayerSessionManagerConnectionFailedWithRetry(::GlobalNamespace::ConnectionFailedReason reason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(), "HandleMultiplayerSessionManagerConnectionFailedWithRetry",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason);
}
inline ::GlobalNamespace::MultiplayerLobbyConnectionController* GlobalNamespace::MultiplayerLobbyConnectionController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerLobbyConnectionController*>());
}
inline void GlobalNamespace::MultiplayerLobbyConnectionController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyConnectionController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController::MultiplayerLobbyConnectionController() {}
