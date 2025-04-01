#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyStateDataModel.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_impl.hpp"
#include "GlobalNamespace/zzzz__ILobbyStateDataModel_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LobbyStateDataModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IUnifiedNetworkPlayerModel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.add_playerConnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyStateDataModel::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::LobbyStateDataModel::add_playerConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26de3f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), "add_playerConnectedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.remove_playerConnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyStateDataModel::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::LobbyStateDataModel::remove_playerConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26de4a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), "remove_playerConnectedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.add_playerDisconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyStateDataModel::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::LobbyStateDataModel::add_playerDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26de550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), "add_playerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.remove_playerDisconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyStateDataModel::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::LobbyStateDataModel::remove_playerDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26de600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), "remove_playerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.get_isConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LobbyStateDataModel::*)()>(&::GlobalNamespace::LobbyStateDataModel::get_isConnected)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x26de6b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(),
                                                                               "get_isConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.get_localPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnectedPlayer* (::GlobalNamespace::LobbyStateDataModel::*)()>(
    &::GlobalNamespace::LobbyStateDataModel::get_localPlayer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x26de754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(),
                                                                               "get_localPlayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.get_connectedPlayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* (
    ::GlobalNamespace::LobbyStateDataModel::*)()>(&::GlobalNamespace::LobbyStateDataModel::get_connectedPlayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26de7f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(),
                                                                               "get_connectedPlayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.get_rawConnectedPlayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* (
    ::GlobalNamespace::LobbyStateDataModel::*)()>(&::GlobalNamespace::LobbyStateDataModel::get_rawConnectedPlayers)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x26de7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(),
                                                                               "get_rawConnectedPlayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.get_configuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::LobbyStateDataModel::*)()>(
    &::GlobalNamespace::LobbyStateDataModel::get_configuration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26de8a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(),
                                                                               "get_configuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.Activate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyStateDataModel::*)()>(&::GlobalNamespace::LobbyStateDataModel::Activate)> {
  constexpr static std::size_t size = 0x7d8;
  constexpr static std::size_t addrs = 0x26de8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), "Activate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.Deactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyStateDataModel::*)()>(&::GlobalNamespace::LobbyStateDataModel::Deactivate)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x26df08c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), "Deactivate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyStateDataModel::*)()>(&::GlobalNamespace::LobbyStateDataModel::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26df220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.GetPlayerById
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnectedPlayer* (::GlobalNamespace::LobbyStateDataModel::*)(::StringW)>(
    &::GlobalNamespace::LobbyStateDataModel::GetPlayerById)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x26df224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), "GetPlayerById", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.HandleMultiplayerSessionManagerPlayerConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyStateDataModel::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::LobbyStateDataModel::HandleMultiplayerSessionManagerPlayerConnected)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x26df2b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), "HandleMultiplayerSessionManagerPlayerConnected",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel.HandleMultiplayerSessionManagerPlayerDisconnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyStateDataModel::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::LobbyStateDataModel::HandleMultiplayerSessionManagerPlayerDisconnected)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x26df420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), "HandleMultiplayerSessionManagerPlayerDisconnected",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyStateDataModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyStateDataModel::*)()>(&::GlobalNamespace::LobbyStateDataModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26df540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::LobbyStateDataModel::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& GlobalNamespace::LobbyStateDataModel::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::LobbyStateDataModel::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unifiedNetworkPlayerModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::LobbyStateDataModel::__cordl_internal_get__connectedPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayers;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* const& GlobalNamespace::LobbyStateDataModel::__cordl_internal_get__connectedPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayers;
}
constexpr void GlobalNamespace::LobbyStateDataModel::__cordl_internal_set__connectedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::LobbyStateDataModel::__cordl_internal_get__connectedPlayersById() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayersById;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IConnectedPlayer*>* const&
GlobalNamespace::LobbyStateDataModel::__cordl_internal_get__connectedPlayersById() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayersById;
}
constexpr void GlobalNamespace::LobbyStateDataModel::__cordl_internal_set__connectedPlayersById(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayersById)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::LobbyStateDataModel::__cordl_internal_get_playerConnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerConnectedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const& GlobalNamespace::LobbyStateDataModel::__cordl_internal_get_playerConnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerConnectedEvent;
}
constexpr void GlobalNamespace::LobbyStateDataModel::__cordl_internal_set_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerConnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::LobbyStateDataModel::__cordl_internal_get_playerDisconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDisconnectedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const& GlobalNamespace::LobbyStateDataModel::__cordl_internal_get_playerDisconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDisconnectedEvent;
}
constexpr void GlobalNamespace::LobbyStateDataModel::__cordl_internal_set_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerDisconnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LobbyStateDataModel::add_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), "add_playerConnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyStateDataModel::remove_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), "remove_playerConnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyStateDataModel::add_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), "add_playerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyStateDataModel::remove_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), "remove_playerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LobbyStateDataModel::get_isConnected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), "get_isConnected",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::LobbyStateDataModel::get_localPlayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), "get_localPlayer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* GlobalNamespace::LobbyStateDataModel::get_connectedPlayers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(),
                                                                             "get_connectedPlayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* GlobalNamespace::LobbyStateDataModel::get_rawConnectedPlayers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(),
                                                                             "get_rawConnectedPlayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::LobbyStateDataModel::get_configuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(),
                                                                             "get_configuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration, false>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyStateDataModel::Activate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), "Activate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyStateDataModel::Deactivate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), "Deactivate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyStateDataModel::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::LobbyStateDataModel::GetPlayerById(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), "GetPlayerById", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyStateDataModel::HandleMultiplayerSessionManagerPlayerConnected(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), "HandleMultiplayerSessionManagerPlayerConnected",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::LobbyStateDataModel::HandleMultiplayerSessionManagerPlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), "HandleMultiplayerSessionManagerPlayerDisconnected",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::LobbyStateDataModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyStateDataModel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LobbyStateDataModel* GlobalNamespace::LobbyStateDataModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LobbyStateDataModel*>());
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
