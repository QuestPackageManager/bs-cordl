#pragma once
// IWYU pragma private; include "GlobalNamespace/GameServerLobbyFlowCoordinator.hpp"
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameServerLobbyFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__CannotStartGameReason_def.hpp"
#include "GlobalNamespace/zzzz__CenterStageScreenController_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionErrorDialogViewController_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__FadeInOutController_def.hpp"
#include "GlobalNamespace/zzzz__GameServerLobbyFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__GameplaySetupViewController_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__ILevelGameplaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyGameStateController_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayersDataModel_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyStateDataModel_def.hpp"
#include "GlobalNamespace/zzzz__IUnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__LevelSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__LobbyGameStateModel_def.hpp"
#include "GlobalNamespace/zzzz__LobbyPlayerPermissionsModel_def.hpp"
#include "GlobalNamespace/zzzz__LobbySetupViewController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyState_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsViewController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayersMissingEntitlementsNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__SelectModifiersViewController_def.hpp"
#include "GlobalNamespace/zzzz__ServerPlayerListViewController_def.hpp"
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_def.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayer_def.hpp"
#include "HMUI/zzzz__ScreenModeController_def.hpp"
#include "HMUI/zzzz__ScreenModeSO_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType::__GameServerLobbyFlowCoordinator__LobbyType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType::__GameServerLobbyFlowCoordinator__LobbyType() {}
constexpr ::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType::HostSetup{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType::ClientSetup{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType::QuickPlayLobby{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType::Party{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0::*)()>(
    &::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2752b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0._Finish_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0::*)()>(
    &::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0::_Finish_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2755670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0*>::get(),
                                                 "<Finish>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator>& GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> const& GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem>& GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0::__cordl_internal_get_eventSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventSystem;
}
constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem> const& GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0::__cordl_internal_get_eventSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventSystem;
}
constexpr void GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0::__cordl_internal_set_eventSystem(::UnityW<::UnityEngine::EventSystems::EventSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eventSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0* GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0*>());
}
inline void GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0::_Finish_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0*>::get(),
                                               "<Finish>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0::__GameServerLobbyFlowCoordinator____c__DisplayClass71_0() {}
//  Writing Method size for method: ::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0::*)()>(
    &::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2753c78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0._HandleServerPlayerListViewControllerKickPlayer_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0::*)(int32_t)>(
    &::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0::_HandleServerPlayerListViewControllerKickPlayer_b__0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27556e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0*>::get(),
                                                 "<HandleServerPlayerListViewControllerKickPlayer>b__0", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator>& GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> const& GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0::__cordl_internal_get_userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr ::StringW const& GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0::__cordl_internal_get_userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr void GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0::__cordl_internal_set_userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0* GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0*>());
}
inline void GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0::_HandleServerPlayerListViewControllerKickPlayer_b__0(int32_t btnId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0*>::get(),
                                               "<HandleServerPlayerListViewControllerKickPlayer>b__0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, btnId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0::__GameServerLobbyFlowCoordinator____c__DisplayClass86_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.get_isPartyOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::get_isPartyOwner)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x274e260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                               "get_isPartyOwner", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.get_isPublicGame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::get_isPublicGame)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x274e27c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                               "get_isPublicGame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.get_isManaged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::get_isManaged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x274e33c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                               "get_isManaged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.get_isQuickStartServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::get_isQuickStartServer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x274e3fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                               "get_isQuickStartServer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.get_isQuickPlayServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::get_isQuickPlayServer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x274e4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                               "get_isQuickPlayServer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.add_willFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::add_willFinishEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x274e57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "add_willFinishEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.remove_willFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::remove_willFinishEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x274e61c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "remove_willFinishEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x274e6bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "add_didFinishEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x274e75c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "remove_didFinishEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.add_startGameOrReadyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::add_startGameOrReadyEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x274e7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "add_startGameOrReadyEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.remove_startGameOrReadyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::remove_startGameOrReadyEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x274e89c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "remove_startGameOrReadyEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.add_didSetupEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::add_didSetupEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x274e93c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "add_didSetupEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.remove_didSetupEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::remove_didSetupEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x274e9dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "remove_didSetupEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.add_didOpenInvitePanelEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::add_didOpenInvitePanelEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x274ea7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "add_didOpenInvitePanelEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.remove_didOpenInvitePanelEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::remove_didOpenInvitePanelEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x274eb1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "remove_didOpenInvitePanelEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.get_rejoinQuickPlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::get_rejoinQuickPlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x274ebbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                               "get_rejoinQuickPlay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.set_rejoinQuickPlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(bool)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::set_rejoinQuickPlay)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x274ebc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "set_rejoinQuickPlay",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.GetLobbyType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType (
    ::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::GetLobbyType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x274ebd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                               "GetLobbyType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(bool, bool, bool)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x1170;
  constexpr static std::size_t addrs = 0x274ec20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(bool, bool)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0xe58;
  constexpr static std::size_t addrs = 0x2750590;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.InitialViewControllerWasPresented
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::InitialViewControllerWasPresented)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2751534;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.TransitionDidStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::TransitionDidStart)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2751758;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.TransitionDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::TransitionDidFinish)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x2751930;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.TopViewControllerWillChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(
    ::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::TopViewControllerWillChange)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2752308;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.BackButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::BackButtonWasPressed)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x275254c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.PresentBackButtonConfirmationDialog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::PresentBackButtonConfirmationDialog)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x27526b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                 "PresentBackButtonConfirmationDialog", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.Finish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*, bool)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::Finish)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2752968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "Finish", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.GetInitialGameState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::GetInitialGameState)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2751610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                               "GetInitialGameState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyPlayersDataModelDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::StringW)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyPlayersDataModelDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2752c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "HandleLobbyPlayersDataModelDidChange",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleServerPlayerListViewControllerDidOpenInvitePanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerDidOpenInvitePanel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2752c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                 "HandleServerPlayerListViewControllerDidOpenInvitePanel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbySetupViewControllerSelectBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerSelectBeatmap)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2752c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                 "HandleLobbySetupViewControllerSelectBeatmap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleMultiplayerSettingsPanelControllerPlayerActiveStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(bool)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerSettingsPanelControllerPlayerActiveStateChanged)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2752e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                               "HandleMultiplayerSettingsPanelControllerPlayerActiveStateChanged", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerLobbyDisconnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerLobbyDisconnected)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x27532d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                 "HandleLobbyGameStateControllerLobbyDisconnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(
    ::GlobalNamespace::__LevelSelectionFlowCoordinator__State*)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2753384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                    "HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleMultiplayerLevelSelectionFlowCoordinatorCancelSelectLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerLevelSelectionFlowCoordinatorCancelSelectLevel)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x275346c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                    "HandleMultiplayerLevelSelectionFlowCoordinatorCancelSelectLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbySetupViewControllerSelectModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerSelectModifiers)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x27534a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                 "HandleLobbySetupViewControllerSelectModifiers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbySetupViewControllerClearSelectedBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerClearSelectedBeatmap)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x275369c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                 "HandleLobbySetupViewControllerClearSelectedBeatmap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbySetupViewControllerClearSelectedModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerClearSelectedModifiers)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2753740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                 "HandleLobbySetupViewControllerClearSelectedModifiers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerGameStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::MultiplayerLobbyState)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerGameStateChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27537e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "HandleLobbyGameStateControllerGameStateChanged",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLobbyState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleServerPlayerListViewControllerSelectSuggestedBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::BeatmapKey)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerSelectSuggestedBeatmap)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2753800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "HandleServerPlayerListViewControllerSelectSuggestedBeatmap",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleServerPlayerListViewControllerSelectSuggestedGameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerSelectSuggestedGameplayModifiers)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x27538ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "HandleServerPlayerListViewControllerSelectSuggestedGameplayModifiers",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleServerPlayerListViewControllerKickPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::StringW)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerKickPlayer)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x2753958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "HandleServerPlayerListViewControllerKickPlayer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerCountdownStarted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerCountdownStarted)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2753c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                 "HandleLobbyGameStateControllerCountdownStarted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerCountdownCancelled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerCountdownCancelled)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2753e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                 "HandleLobbyGameStateControllerCountdownCancelled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerGameStarted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::ILevelGameplaySetupData*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerGameStarted)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x2753ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "HandleLobbyGameStateControllerGameStarted",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerStartTimeChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerStartTimeChanged)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x275418c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                 "HandleLobbyGameStateControllerStartTimeChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerSongStillDownloading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerSongStillDownloading)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2754378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                 "HandleLobbyGameStateControllerSongStillDownloading", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbySetupViewControllerStartGameOrReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerStartGameOrReady)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x275437c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                 "HandleLobbySetupViewControllerStartGameOrReady", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbySetupViewControllerCancelGameOrUnready
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerCancelGameOrUnready)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2754694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                 "HandleLobbySetupViewControllerCancelGameOrUnready", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerCancelStartTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerCancelStartTime)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2754808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                 "HandleLobbyGameStateControllerCancelStartTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerGameStartedPresentView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::ILevelGameplaySetupData*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerGameStartedPresentView)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2754840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "HandleLobbyGameStateControllerGameStartedPresentView",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerLevelFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MultiplayerResultsData*)>(
        &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerLevelFinished)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x27548ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "HandleLobbyGameStateControllerLevelFinished",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerResultsData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerLevelDidGetDisconnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerLevelDidGetDisconnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2754d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "HandleLobbyGameStateControllerLevelDidGetDisconnected",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleMultiplayerResultsViewControllerBackToLobbyPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::MultiplayerResultsViewController*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerResultsViewControllerBackToLobbyPressed)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2754d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                    "HandleMultiplayerResultsViewControllerBackToLobbyPressed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerResultsViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleMultiplayerResultsViewControllerBackToMenuPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::MultiplayerResultsViewController*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerResultsViewControllerBackToMenuPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2754e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                    "HandleMultiplayerResultsViewControllerBackToMenuPressed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerResultsViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.SetupLobbyWithPermissions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::SetupLobbyWithPermissions)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x27500e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                               "SetupLobbyWithPermissions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.SetLobbyPlayerDataToViews
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::StringW)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::SetLobbyPlayerDataToViews)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x274fedc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "SetLobbyPlayerDataToViews",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.ShowSideViewControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(bool, ::HMUI::__ViewController__AnimationType)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::ShowSideViewControllers)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x27523b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "ShowSideViewControllers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.ShowBackButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(bool)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::ShowBackButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2752414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "ShowBackButton",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.GetLocalizedTitle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::GetLocalizedTitle)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2755100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                               "GetLocalizedTitle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.SetTitle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(
    ::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::SetTitle)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2752420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "SetTitle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.ShowDisconnectDialogAndFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::ShowDisconnectDialogAndFinish)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x2751eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "ShowDisconnectDialogAndFinish", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.SetPlayersMissingLevelText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::SetPlayersMissingLevelText)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2754e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                               "SetPlayersMissingLevelText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.UpdateLocalPlayerIsActiveState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(bool)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::UpdateLocalPlayerIsActiveState)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x27530b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "UpdateLocalPlayerIsActiveState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameBeforeSceneSwitchCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameBeforeSceneSwitchCallback)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x275518c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                 "HandleLobbyGameBeforeSceneSwitchCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateStartButtonEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::CannotStartGameReason)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateStartButtonEnabled)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2755380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "HandleLobbyGameStateStartButtonEnabled",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CannotStartGameReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(
    ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x27553b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                   "HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyPlayerPermissionsModelPermissionsChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyPlayerPermissionsModelPermissionsChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x275546c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                 "HandleLobbyPlayerPermissionsModelPermissionsChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.DismissViewControllersAndCoordinators
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::DismissViewControllersAndCoordinators)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2752b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                 "DismissViewControllersAndCoordinators", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2755470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator._PresentBackButtonConfirmationDialog_b__70_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(int32_t)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::_PresentBackButtonConfirmationDialog_b__70_0)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x275551c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "<PresentBackButtonConfirmationDialog>b__70_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator._ShowDisconnectDialogAndFinish_b__106_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::_ShowDisconnectDialogAndFinish_b__106_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2755664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                 "<ShowDisconnectDialogAndFinish>b__106_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::ScreenModeSO>& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__screenMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenMode;
}
constexpr ::UnityW<::HMUI::ScreenModeSO> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__screenMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenMode;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__screenMode(::UnityW<::HMUI::ScreenModeSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____screenMode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__ambienceAudioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ambienceAudioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__ambienceAudioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ambienceAudioClip;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__ambienceAudioClip(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ambienceAudioClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ServerPlayerListViewController>& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__serverPlayerListViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverPlayerListViewController;
}
constexpr ::UnityW<::GlobalNamespace::ServerPlayerListViewController> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__serverPlayerListViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverPlayerListViewController;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__serverPlayerListViewController(::UnityW<::GlobalNamespace::ServerPlayerListViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serverPlayerListViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SelectModifiersViewController>& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__selectModifiersViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectModifiersViewController;
}
constexpr ::UnityW<::GlobalNamespace::SelectModifiersViewController> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__selectModifiersViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectModifiersViewController;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__selectModifiersViewController(::UnityW<::GlobalNamespace::SelectModifiersViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectModifiersViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator>& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__multiplayerLevelSelectionFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelSelectionFlowCoordinator;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator> const&
GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__multiplayerLevelSelectionFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelSelectionFlowCoordinator;
}
constexpr void
GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__multiplayerLevelSelectionFlowCoordinator(::UnityW<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerLevelSelectionFlowCoordinator)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerResultsViewController>& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__multiplayerResultsViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerResultsViewController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerResultsViewController> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__multiplayerResultsViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerResultsViewController;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__multiplayerResultsViewController(::UnityW<::GlobalNamespace::MultiplayerResultsViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerResultsViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController>& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__simpleDialogPromptViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleDialogPromptViewController;
}
constexpr ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__simpleDialogPromptViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleDialogPromptViewController;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__simpleDialogPromptViewController(::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____simpleDialogPromptViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ConnectionErrorDialogViewController>& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__connectionErrorDialogViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionErrorDialogViewController;
}
constexpr ::UnityW<::GlobalNamespace::ConnectionErrorDialogViewController> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__connectionErrorDialogViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionErrorDialogViewController;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__connectionErrorDialogViewController(::UnityW<::GlobalNamespace::ConnectionErrorDialogViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectionErrorDialogViewController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerSettingsPanelController>& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__multiplayerSettingsPanelController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSettingsPanelController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerSettingsPanelController> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__multiplayerSettingsPanelController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSettingsPanelController;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__multiplayerSettingsPanelController(::UnityW<::GlobalNamespace::MultiplayerSettingsPanelController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSettingsPanelController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameplaySetupViewController>& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__gameplaySetupViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplaySetupViewController;
}
constexpr ::UnityW<::GlobalNamespace::GameplaySetupViewController> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__gameplaySetupViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplaySetupViewController;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__gameplaySetupViewController(::UnityW<::GlobalNamespace::GameplaySetupViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplaySetupViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyController>& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__multiplayerLobbyController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLobbyController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyController> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__multiplayerLobbyController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLobbyController;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__multiplayerLobbyController(::UnityW<::GlobalNamespace::MultiplayerLobbyController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerLobbyController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::FadeInOutController>& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__fadeInOutController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInOutController;
}
constexpr ::UnityW<::GlobalNamespace::FadeInOutController> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__fadeInOutController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInOutController;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__fadeInOutController(::UnityW<::GlobalNamespace::FadeInOutController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fadeInOutController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::CenterStageScreenController>& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__centerStageScreenController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerStageScreenController;
}
constexpr ::UnityW<::GlobalNamespace::CenterStageScreenController> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__centerStageScreenController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerStageScreenController;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__centerStageScreenController(::UnityW<::GlobalNamespace::CenterStageScreenController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____centerStageScreenController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ILobbyStateDataModel*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lobbyStateDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyStateDataModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyStateDataModel*> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lobbyStateDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyStateDataModel;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lobbyStateDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LobbyGameStateModel*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lobbyGameStateModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyGameStateModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyGameStateModel*> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lobbyGameStateModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyGameStateModel;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__lobbyGameStateModel(::GlobalNamespace::LobbyGameStateModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lobbyGameStateModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ILobbyPlayersDataModel*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lobbyPlayersDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayersDataModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyPlayersDataModel*> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lobbyPlayersDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayersDataModel;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__lobbyPlayersDataModel(::GlobalNamespace::ILobbyPlayersDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lobbyPlayersDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ILobbyGameStateController*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lobbyGameStateController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyGameStateController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyGameStateController*> const&
GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lobbyGameStateController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyGameStateController;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lobbyGameStateController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lobbyPlayerPermissionsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayerPermissionsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyPlayerPermissionsModel*> const&
GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lobbyPlayerPermissionsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayerPermissionsModel;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lobbyPlayerPermissionsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::LobbySetupViewController>& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lobbySetupViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbySetupViewController;
}
constexpr ::UnityW<::GlobalNamespace::LobbySetupViewController> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lobbySetupViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbySetupViewController;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__lobbySetupViewController(::UnityW<::GlobalNamespace::LobbySetupViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lobbySetupViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__unifiedNetworkPlayerModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unifiedNetworkPlayerModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IUnifiedNetworkPlayerModel*> const&
GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__unifiedNetworkPlayerModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unifiedNetworkPlayerModel;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unifiedNetworkPlayerModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ScreenModeController>& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__screenModeController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenModeController;
}
constexpr ::UnityW<::HMUI::ScreenModeController> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__screenModeController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenModeController;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__screenModeController(::UnityW<::HMUI::ScreenModeController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____screenModeController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel>& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__platformLeaderboardsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformLeaderboardsModel;
}
constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__platformLeaderboardsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformLeaderboardsModel;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__platformLeaderboardsModel(::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformLeaderboardsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer>& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__songPreviewPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPreviewPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__songPreviewPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPreviewPlayer;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__songPreviewPlayer(::UnityW<::GlobalNamespace::SongPreviewPlayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPreviewPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAnalyticsModel*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__analyticsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__analyticsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____analyticsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__LevelSelectionFlowCoordinator__State*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lastSimpleLevelSelectionFlowCoordinatorState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSimpleLevelSelectionFlowCoordinatorState;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*> const&
GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lastSimpleLevelSelectionFlowCoordinatorState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSimpleLevelSelectionFlowCoordinatorState;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__lastSimpleLevelSelectionFlowCoordinatorState(::GlobalNamespace::__LevelSelectionFlowCoordinator__State* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastSimpleLevelSelectionFlowCoordinatorState)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__isAlreadyFinishing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isAlreadyFinishing;
}
constexpr bool const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__isAlreadyFinishing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isAlreadyFinishing;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__isAlreadyFinishing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isAlreadyFinishing = value;
}
constexpr ::System::Text::StringBuilder*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__missingEntitlementsStringBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missingEntitlementsStringBuilder;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__missingEntitlementsStringBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missingEntitlementsStringBuilder;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__missingEntitlementsStringBuilder(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missingEntitlementsStringBuilder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__playerIdsWithoutEntitlements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerIdsWithoutEntitlements;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__playerIdsWithoutEntitlements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerIdsWithoutEntitlements;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__playerIdsWithoutEntitlements(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerIdsWithoutEntitlements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__canStartGameCts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canStartGameCts;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__canStartGameCts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canStartGameCts;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__canStartGameCts(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____canStartGameCts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get_willFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___willFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get_willFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___willFinishEvent;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set_willFinishEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___willFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set_didFinishEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get_startGameOrReadyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startGameOrReadyEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get_startGameOrReadyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startGameOrReadyEvent;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set_startGameOrReadyEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___startGameOrReadyEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get_didSetupEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSetupEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get_didSetupEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSetupEvent;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set_didSetupEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didSetupEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get_didOpenInvitePanelEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didOpenInvitePanelEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get_didOpenInvitePanelEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didOpenInvitePanelEvent;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set_didOpenInvitePanelEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didOpenInvitePanelEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__rejoinQuickPlay_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rejoinQuickPlay_k__BackingField;
}
constexpr bool const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__rejoinQuickPlay_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rejoinQuickPlay_k__BackingField;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__rejoinQuickPlay_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rejoinQuickPlay_k__BackingField = value;
}
inline bool GlobalNamespace::GameServerLobbyFlowCoordinator::get_isPartyOwner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                             "get_isPartyOwner", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameServerLobbyFlowCoordinator::get_isPublicGame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                             "get_isPublicGame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameServerLobbyFlowCoordinator::get_isManaged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                             "get_isManaged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameServerLobbyFlowCoordinator::get_isQuickStartServer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                             "get_isQuickStartServer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameServerLobbyFlowCoordinator::get_isQuickPlayServer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                             "get_isQuickPlayServer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::add_willFinishEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "add_willFinishEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::remove_willFinishEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "remove_willFinishEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::add_didFinishEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "add_didFinishEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::remove_didFinishEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "remove_didFinishEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::add_startGameOrReadyEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "add_startGameOrReadyEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::remove_startGameOrReadyEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "remove_startGameOrReadyEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::add_didSetupEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "add_didSetupEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::remove_didSetupEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "remove_didSetupEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::add_didOpenInvitePanelEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "add_didOpenInvitePanelEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::remove_didOpenInvitePanelEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "remove_didOpenInvitePanelEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameServerLobbyFlowCoordinator::get_rejoinQuickPlay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                             "get_rejoinQuickPlay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::set_rejoinQuickPlay(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "set_rejoinQuickPlay",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType GlobalNamespace::GameServerLobbyFlowCoordinator::GetLobbyType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                             "GetLobbyType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__GameServerLobbyFlowCoordinator__LobbyType, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::InitialViewControllerWasPresented() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::TransitionDidStart() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::TransitionDidFinish() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                                                         ::HMUI::__ViewController__AnimationType animationType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::BackButtonWasPressed(::HMUI::ViewController* topViewController) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, topViewController);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::PresentBackButtonConfirmationDialog() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "PresentBackButtonConfirmationDialog",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param finishedCallback: ::System::Action* (default: nullptr)
/// @param withFadeOut: bool (default: true)
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::Finish(::System::Action* finishedCallback, bool withFadeOut) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "Finish", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, finishedCallback, withFadeOut);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::GetInitialGameState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                             "GetInitialGameState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyPlayersDataModelDidChange(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "HandleLobbyPlayersDataModelDidChange",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerDidOpenInvitePanel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                               "HandleServerPlayerListViewControllerDidOpenInvitePanel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerSelectBeatmap() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                               "HandleLobbySetupViewControllerSelectBeatmap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerSettingsPanelControllerPlayerActiveStateChanged(bool isActive) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                             "HandleMultiplayerSettingsPanelControllerPlayerActiveStateChanged", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isActive);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerLobbyDisconnected() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                               "HandleLobbyGameStateControllerLobbyDisconnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel(::GlobalNamespace::__LevelSelectionFlowCoordinator__State* state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                  "HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerLevelSelectionFlowCoordinatorCancelSelectLevel() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                  "HandleMultiplayerLevelSelectionFlowCoordinatorCancelSelectLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerSelectModifiers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                               "HandleLobbySetupViewControllerSelectModifiers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerClearSelectedBeatmap() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                               "HandleLobbySetupViewControllerClearSelectedBeatmap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerClearSelectedModifiers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                               "HandleLobbySetupViewControllerClearSelectedModifiers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerGameStateChanged(::GlobalNamespace::MultiplayerLobbyState state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "HandleLobbyGameStateControllerGameStateChanged",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLobbyState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerSelectSuggestedBeatmap(::GlobalNamespace::BeatmapKey beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "HandleServerPlayerListViewControllerSelectSuggestedBeatmap",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapKey);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerSelectSuggestedGameplayModifiers(::GlobalNamespace::GameplayModifiers* modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "HandleServerPlayerListViewControllerSelectSuggestedGameplayModifiers",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, modifiers);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerKickPlayer(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "HandleServerPlayerListViewControllerKickPlayer",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerCountdownStarted() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                               "HandleLobbyGameStateControllerCountdownStarted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerCountdownCancelled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                               "HandleLobbyGameStateControllerCountdownCancelled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerGameStarted(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "HandleLobbyGameStateControllerGameStarted",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelGameplaySetupData);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerStartTimeChanged() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                               "HandleLobbyGameStateControllerStartTimeChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerSongStillDownloading() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                               "HandleLobbyGameStateControllerSongStillDownloading", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerStartGameOrReady() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                               "HandleLobbySetupViewControllerStartGameOrReady", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerCancelGameOrUnready() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                               "HandleLobbySetupViewControllerCancelGameOrUnready", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerCancelStartTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                               "HandleLobbyGameStateControllerCancelStartTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerGameStartedPresentView(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "HandleLobbyGameStateControllerGameStartedPresentView",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelGameplaySetupData);
}
inline void
GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerLevelFinished(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData,
                                                                                             ::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "HandleLobbyGameStateControllerLevelFinished",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerResultsData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplayerLevelScenesTransitionSetupData, multiplayerResultsData);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerLevelDidGetDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "HandleLobbyGameStateControllerLevelDidGetDisconnected",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerResultsViewControllerBackToLobbyPressed(::GlobalNamespace::MultiplayerResultsViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                  "HandleMultiplayerResultsViewControllerBackToLobbyPressed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerResultsViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerResultsViewControllerBackToMenuPressed(::GlobalNamespace::MultiplayerResultsViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                  "HandleMultiplayerResultsViewControllerBackToMenuPressed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerResultsViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::SetupLobbyWithPermissions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                             "SetupLobbyWithPermissions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::SetLobbyPlayerDataToViews(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "SetLobbyPlayerDataToViews",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::ShowSideViewControllers(bool showSideViewControllers, ::HMUI::__ViewController__AnimationType animationType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "ShowSideViewControllers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, showSideViewControllers, animationType);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::ShowBackButton(bool show) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "ShowBackButton",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, show);
}
inline ::StringW GlobalNamespace::GameServerLobbyFlowCoordinator::GetLocalizedTitle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                             "GetLocalizedTitle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::SetTitle(::HMUI::ViewController* newViewController, ::HMUI::__ViewController__AnimationType animationType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "SetTitle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newViewController, animationType);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::ShowDisconnectDialogAndFinish(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "ShowDisconnectDialogAndFinish", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::SetPlayersMissingLevelText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                                                             "SetPlayersMissingLevelText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::UpdateLocalPlayerIsActiveState(bool isActive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "UpdateLocalPlayerIsActiveState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isActive);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameBeforeSceneSwitchCallback() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                               "HandleLobbyGameBeforeSceneSwitchCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateStartButtonEnabled(::GlobalNamespace::CannotStartGameReason cannotStartGameReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "HandleLobbyGameStateStartButtonEnabled",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CannotStartGameReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cannotStartGameReason);
}
inline void
GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* playersMissingEntitlements) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                  "HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playersMissingEntitlements);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyPlayerPermissionsModelPermissionsChanged() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                               "HandleLobbyPlayerPermissionsModelPermissionsChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::DismissViewControllersAndCoordinators() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                               "DismissViewControllersAndCoordinators", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameServerLobbyFlowCoordinator* GlobalNamespace::GameServerLobbyFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameServerLobbyFlowCoordinator*>());
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::_PresentBackButtonConfirmationDialog_b__70_0(int32_t btnIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(), "<PresentBackButtonConfirmationDialog>b__70_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, btnIndex);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::_ShowDisconnectDialogAndFinish_b__106_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerLobbyFlowCoordinator*>::get(),
                                               "<ShowDisconnectDialogAndFinish>b__106_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameServerLobbyFlowCoordinator::GameServerLobbyFlowCoordinator() {}
