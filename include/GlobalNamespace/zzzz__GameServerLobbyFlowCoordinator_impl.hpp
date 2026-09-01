#pragma once
// IWYU pragma private; include "GlobalNamespace\GameServerLobbyFlowCoordinator.hpp"
#include "GlobalNamespace/zzzz__GameServerLobbyFlowCoordinatorBase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameServerLobbyFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__CannotStartGameReason_def.hpp"
#include "GlobalNamespace/zzzz__CenterStageScreenController_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionErrorDialogViewController_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__FadeInOutController_def.hpp"
#include "GlobalNamespace/zzzz__GameServerLobbyFlowCoordinatorBase_def.hpp"
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
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupData_def.hpp"
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
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass103_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass103_0::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass103_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x592f884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass103_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass103_0._HandleServerPlayerListViewControllerKickPlayer_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass103_0::*)(int32_t)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass103_0::_HandleServerPlayerListViewControllerKickPlayer_b__0)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5931444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass103_0*>(),
                                                                                           { "<HandleServerPlayerListViewControllerKickPlayer>b__0", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator>& GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass103_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> const& GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass103_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass103_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::StringW& GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass103_0::__cordl_internal_get_userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr ::StringW const& GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass103_0::__cordl_internal_get_userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass103_0::__cordl_internal_set_userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___userId = value;
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass103_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass103_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass103_0::_HandleServerPlayerListViewControllerKickPlayer_b__0(int32_t btnId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass103_0*>(),
                                                                                         { "<HandleServerPlayerListViewControllerKickPlayer>b__0", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, btnId);
}
inline ::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass103_0* GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass103_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass103_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass103_0::GameServerLobbyFlowCoordinator___c__DisplayClass103_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x592e524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0._Finish_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0::_Finish_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5931528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0*>(), { "<Finish>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator>& GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> const& GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Action*& GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::System::Action* const& GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishedCallback = value;
}
constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem>& GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0::__cordl_internal_get_eventSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventSystem;
}
constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem> const& GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0::__cordl_internal_get_eventSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventSystem;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0::__cordl_internal_set_eventSystem(::UnityW<::UnityEngine::EventSystems::EventSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventSystem = value;
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0::_Finish_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0*>(), { "<Finish>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0* GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameServerLobbyFlowCoordinator___c__DisplayClass87_0::GameServerLobbyFlowCoordinator___c__DisplayClass87_0() {}
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.get_isPartyOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::get_isPartyOwner)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5929670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "get_isPartyOwner", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.get_isPublicGame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::get_isPublicGame)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5929688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "get_isPublicGame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.get_isManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::get_isManaged)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x592974c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "get_isManaged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.get_isQuickStartServer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::get_isQuickStartServer)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5929810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "get_isQuickStartServer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.get_isQuickPlayServer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::get_isQuickPlayServer)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x59298d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "get_isQuickPlayServer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.add_willFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::add_willFinishEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5929998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.remove_willFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::remove_willFinishEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5929a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5929af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5929b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.add_startGameOrReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::add_startGameOrReadyEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5929c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.remove_startGameOrReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::remove_startGameOrReadyEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5929cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.add_didSetupEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::add_didSetupEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5929da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.remove_didSetupEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::remove_didSetupEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5929e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.add_didOpenInvitePanelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::add_didOpenInvitePanelEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5929ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.remove_didOpenInvitePanelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::remove_didOpenInvitePanelEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5929fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.get_rejoinQuickPlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::get_rejoinQuickPlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592a050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "get_rejoinQuickPlay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.set_rejoinQuickPlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(bool)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::set_rejoinQuickPlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592a058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "set_rejoinQuickPlay", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.GetLobbyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::GetLobbyType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x592a060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(bool, bool, bool)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x1484;
  constexpr static std::size_t addrs = 0x592a0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(bool, bool)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x1090;
  constexpr static std::size_t addrs = 0x592bd04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.InitialViewControllerWasPresented
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::InitialViewControllerWasPresented)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x592cd94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.TransitionDidStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::TransitionDidStart)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x592cfc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.TransitionDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::TransitionDidFinish)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x592d1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.TopViewControllerWillChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(
    ::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::ViewController_AnimationType)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::TopViewControllerWillChange)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x592dc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.BackButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::BackButtonWasPressed)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x592de7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.PresentBackButtonConfirmationDialog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::PresentBackButtonConfirmationDialog)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x592dfec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "PresentBackButtonConfirmationDialog", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::System::Action*, bool)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::Finish)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x592e2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "Finish", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.GetInitialGameState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::GetInitialGameState)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x592ce74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "GetInitialGameState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyPlayersDataModelDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::StringW)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyPlayersDataModelDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x592e624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbyPlayersDataModelDidChange", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleServerPlayerListViewControllerDidOpenInvitePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerDidOpenInvitePanel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x592e628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleServerPlayerListViewControllerDidOpenInvitePanel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbySetupViewControllerSelectBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerSelectBeatmap)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x592e644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbySetupViewControllerSelectBeatmap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleMultiplayerSettingsPanelControllerPlayerActiveStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(bool)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerSettingsPanelControllerPlayerActiveStateChanged)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x592e814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                                                           { "HandleMultiplayerSettingsPanelControllerPlayerActiveStateChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerLobbyDisconnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerLobbyDisconnected)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x592ec84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbyGameStateControllerLobbyDisconnected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::LevelSelectionFlowCoordinator_State*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x592ed38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                         { "HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel", {}, { ::i2c::type_of<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.SetLocalPlayerSelectedLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::LevelSelectionFlowCoordinator_State*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::SetLocalPlayerSelectedLevel)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x592ed78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                             { "SetLocalPlayerSelectedLevel", {}, { ::i2c::type_of<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleMultiplayerLevelSelectionFlowCoordinatorCancelSelectLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerLevelSelectionFlowCoordinatorCancelSelectLevel)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x592ee38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleMultiplayerLevelSelectionFlowCoordinatorCancelSelectLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbySetupViewControllerSelectModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerSelectModifiers)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x592ee70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbySetupViewControllerSelectModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbySetupViewControllerClearSelectedBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerClearSelectedBeatmap)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x592f078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbySetupViewControllerClearSelectedBeatmap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbySetupViewControllerClearSelectedModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerClearSelectedModifiers)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x592f120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbySetupViewControllerClearSelectedModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerGameStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::MultiplayerLobbyState)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerGameStateChanged)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x592f1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                             { "HandleLobbyGameStateControllerGameStateChanged", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerLobbyState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleServerPlayerListViewControllerSelectSuggestedBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::BeatmapKey)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerSelectSuggestedBeatmap)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x592f328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                             { "HandleServerPlayerListViewControllerSelectSuggestedBeatmap", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleServerPlayerListViewControllerSelectSuggestedGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerSelectSuggestedGameplayModifiers)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x592f464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                { "HandleServerPlayerListViewControllerSelectSuggestedGameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleServerPlayerListViewControllerKickPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::StringW)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerKickPlayer)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x592f51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                                                           { "HandleServerPlayerListViewControllerKickPlayer", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerCountdownStarted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerCountdownStarted)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x592f888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbyGameStateControllerCountdownStarted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerCountdownCancelled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerCountdownCancelled)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x592fb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbyGameStateControllerCountdownCancelled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerGameStarted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::ILevelGameplaySetupData*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerGameStarted)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x592fb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                             { "HandleLobbyGameStateControllerGameStarted", {}, { ::i2c::type_of<::GlobalNamespace::ILevelGameplaySetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerStartTimeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerStartTimeChanged)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x592fe28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbyGameStateControllerStartTimeChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerSongStillDownloading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerSongStillDownloading)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x593001c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbyGameStateControllerSongStillDownloading", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbySetupViewControllerStartGameOrReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerStartGameOrReady)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x5930020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbySetupViewControllerStartGameOrReady", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbySetupViewControllerCancelGameOrUnready
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerCancelGameOrUnready)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5930350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbySetupViewControllerCancelGameOrUnready", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerCancelStartTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerCancelStartTime)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59304cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbyGameStateControllerCancelStartTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerGameStartedPresentView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::ILevelGameplaySetupData*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerGameStartedPresentView)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5930504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                             { "HandleLobbyGameStateControllerGameStartedPresentView", {}, { ::i2c::type_of<::GlobalNamespace::ILevelGameplaySetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerLevelFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*)>(
        &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerLevelFinished)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x59305b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                         { "HandleLobbyGameStateControllerLevelFinished",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::MultiplayerResultsData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerLevelDidGetDisconnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerLevelDidGetDisconnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59309f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                             { "HandleLobbyGameStateControllerLevelDidGetDisconnected", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleMultiplayerResultsViewControllerBackToLobbyPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::MultiplayerResultsViewController*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerResultsViewControllerBackToLobbyPressed)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x59309f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                { "HandleMultiplayerResultsViewControllerBackToLobbyPressed", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerResultsViewController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleMultiplayerResultsViewControllerBackToMenuPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::MultiplayerResultsViewController*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerResultsViewControllerBackToMenuPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5930b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                { "HandleMultiplayerResultsViewControllerBackToMenuPressed", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerResultsViewController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.SetupLobbyWithPermissions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::SetupLobbyWithPermissions)> {
  constexpr static std::size_t size = 0x5b8;
  constexpr static std::size_t addrs = 0x592b74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "SetupLobbyWithPermissions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.SetLobbyPlayerDataToViews
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::StringW)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::SetLobbyPlayerDataToViews)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x592b534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "SetLobbyPlayerDataToViews", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.ShowSideViewControllers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(bool, ::HMUI::ViewController_AnimationType)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::ShowSideViewControllers)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x592dcd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                             { "ShowSideViewControllers", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::HMUI::ViewController_AnimationType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.ShowBackButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(bool)>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::ShowBackButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592dd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "ShowBackButton", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.GetLocalizedTitle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::GetLocalizedTitle)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5930e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "GetLocalizedTitle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.SetTitle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::ViewController_AnimationType)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::SetTitle)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x592dd38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                             { "SetTitle", {}, { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::ViewController_AnimationType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.ShowDisconnectDialogAndFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::ShowDisconnectDialogAndFinish)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x592d718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                                                           { "ShowDisconnectDialogAndFinish", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.SetPlayersMissingLevelText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::SetPlayersMissingLevelText)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5930b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "SetPlayersMissingLevelText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.UpdateLocalPlayerIsActiveState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(bool)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::UpdateLocalPlayerIsActiveState)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x592ea50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "UpdateLocalPlayerIsActiveState", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameBeforeSceneSwitchCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameBeforeSceneSwitchCallback)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5930ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbyGameBeforeSceneSwitchCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyGameStateStartButtonEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::CannotStartGameReason)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateStartButtonEnabled)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5931114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                             { "HandleLobbyGameStateStartButtonEnabled", {}, { ::i2c::type_of<::GlobalNamespace::CannotStartGameReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5931148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                         { "HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel", {}, { ::i2c::type_of<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.HandleLobbyPlayerPermissionsModelPermissionsChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyPlayerPermissionsModelPermissionsChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5931228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbyPlayerPermissionsModelPermissionsChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator.DismissViewControllersAndCoordinators
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::DismissViewControllersAndCoordinators)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x592e528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "DismissViewControllersAndCoordinators", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(&::GlobalNamespace::GameServerLobbyFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x593122c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator._PresentBackButtonConfirmationDialog_b__86_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)(int32_t)>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::_PresentBackButtonConfirmationDialog_b__86_0)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x59312d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                                                           { "<PresentBackButtonConfirmationDialog>b__86_0", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerLobbyFlowCoordinator._ShowDisconnectDialogAndFinish_b__123_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerLobbyFlowCoordinator::*)()>(
    &::GlobalNamespace::GameServerLobbyFlowCoordinator::_ShowDisconnectDialogAndFinish_b__123_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5931438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "<ShowDisconnectDialogAndFinish>b__123_0", {}, {} })));
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
  this->____screenMode = value;
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
  this->____ambienceAudioClip = value;
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
  this->____serverPlayerListViewController = value;
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
  this->____selectModifiersViewController = value;
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
  this->____multiplayerLevelSelectionFlowCoordinator = value;
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
  this->____multiplayerResultsViewController = value;
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
  this->____simpleDialogPromptViewController = value;
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
  this->____connectionErrorDialogViewController = value;
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
  this->____multiplayerSettingsPanelController = value;
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
  this->____gameplaySetupViewController = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
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
  this->____multiplayerLobbyController = value;
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
  this->____fadeInOutController = value;
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
  this->____centerStageScreenController = value;
}
constexpr ::GlobalNamespace::ILobbyStateDataModel*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lobbyStateDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyStateDataModel;
}
constexpr ::GlobalNamespace::ILobbyStateDataModel* const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lobbyStateDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyStateDataModel;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyStateDataModel = value;
}
constexpr ::GlobalNamespace::LobbyGameStateModel*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lobbyGameStateModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyGameStateModel;
}
constexpr ::GlobalNamespace::LobbyGameStateModel* const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lobbyGameStateModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyGameStateModel;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__lobbyGameStateModel(::GlobalNamespace::LobbyGameStateModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyGameStateModel = value;
}
constexpr ::GlobalNamespace::ILobbyPlayersDataModel*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lobbyPlayersDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayersDataModel;
}
constexpr ::GlobalNamespace::ILobbyPlayersDataModel* const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lobbyPlayersDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayersDataModel;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__lobbyPlayersDataModel(::GlobalNamespace::ILobbyPlayersDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyPlayersDataModel = value;
}
constexpr ::GlobalNamespace::ILobbyGameStateController*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lobbyGameStateController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyGameStateController;
}
constexpr ::GlobalNamespace::ILobbyGameStateController* const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lobbyGameStateController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyGameStateController;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyGameStateController = value;
}
constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lobbyPlayerPermissionsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayerPermissionsModel;
}
constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel* const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lobbyPlayerPermissionsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayerPermissionsModel;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyPlayerPermissionsModel = value;
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
  this->____lobbySetupViewController = value;
}
constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__unifiedNetworkPlayerModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unifiedNetworkPlayerModel;
}
constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel* const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__unifiedNetworkPlayerModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unifiedNetworkPlayerModel;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unifiedNetworkPlayerModel = value;
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
  this->____screenModeController = value;
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
  this->____playerDataModel = value;
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
  this->____platformLeaderboardsModel = value;
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
  this->____songPreviewPlayer = value;
}
constexpr ::GlobalNamespace::IAnalyticsModel*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__analyticsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr ::GlobalNamespace::IAnalyticsModel* const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__analyticsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____analyticsModel = value;
}
constexpr ::GlobalNamespace::LevelSelectionFlowCoordinator_State*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lastSimpleLevelSelectionFlowCoordinatorState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSimpleLevelSelectionFlowCoordinatorState;
}
constexpr ::GlobalNamespace::LevelSelectionFlowCoordinator_State* const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__lastSimpleLevelSelectionFlowCoordinatorState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSimpleLevelSelectionFlowCoordinatorState;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__lastSimpleLevelSelectionFlowCoordinatorState(::GlobalNamespace::LevelSelectionFlowCoordinator_State* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastSimpleLevelSelectionFlowCoordinatorState = value;
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
constexpr ::System::Text::StringBuilder* const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__missingEntitlementsStringBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missingEntitlementsStringBuilder;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__missingEntitlementsStringBuilder(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missingEntitlementsStringBuilder = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__playerIdsWithoutEntitlements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerIdsWithoutEntitlements;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__playerIdsWithoutEntitlements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerIdsWithoutEntitlements;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__playerIdsWithoutEntitlements(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerIdsWithoutEntitlements = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__canStartGameCts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canStartGameCts;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get__canStartGameCts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canStartGameCts;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set__canStartGameCts(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canStartGameCts = value;
}
constexpr ::System::Action*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get_willFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___willFinishEvent;
}
constexpr ::System::Action* const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get_willFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___willFinishEvent;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set_willFinishEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___willFinishEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action* const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set_didFinishEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get_startGameOrReadyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startGameOrReadyEvent;
}
constexpr ::System::Action* const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get_startGameOrReadyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startGameOrReadyEvent;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set_startGameOrReadyEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startGameOrReadyEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get_didSetupEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSetupEvent;
}
constexpr ::System::Action* const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get_didSetupEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSetupEvent;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set_didSetupEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSetupEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get_didOpenInvitePanelEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didOpenInvitePanelEvent;
}
constexpr ::System::Action* const& GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_get_didOpenInvitePanelEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didOpenInvitePanelEvent;
}
constexpr void GlobalNamespace::GameServerLobbyFlowCoordinator::__cordl_internal_set_didOpenInvitePanelEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didOpenInvitePanelEvent = value;
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "get_isPartyOwner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GameServerLobbyFlowCoordinator::get_isPublicGame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "get_isPublicGame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GameServerLobbyFlowCoordinator::get_isManaged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "get_isManaged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GameServerLobbyFlowCoordinator::get_isQuickStartServer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "get_isQuickStartServer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GameServerLobbyFlowCoordinator::get_isQuickPlayServer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "get_isQuickPlayServer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::add_willFinishEvent(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::remove_willFinishEvent(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::add_didFinishEvent(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::remove_didFinishEvent(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::add_startGameOrReadyEvent(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::remove_startGameOrReadyEvent(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::add_didSetupEvent(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::remove_didSetupEvent(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::add_didOpenInvitePanelEvent(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::remove_didOpenInvitePanelEvent(::System::Action* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameServerLobbyFlowCoordinator::get_rejoinQuickPlay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "get_rejoinQuickPlay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::set_rejoinQuickPlay(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "set_rejoinQuickPlay", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType GlobalNamespace::GameServerLobbyFlowCoordinator::GetLobbyType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameServerLobbyFlowCoordinatorBase_LobbyType>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::InitialViewControllerWasPresented() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::TransitionDidStart() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::TransitionDidFinish() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                                                         ::HMUI::ViewController_AnimationType animationType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::BackButtonWasPressed(::HMUI::ViewController* topViewController) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topViewController);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::PresentBackButtonConfirmationDialog() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "PresentBackButtonConfirmationDialog", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::Finish(::System::Action* finishedCallback, bool withFadeOut) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "Finish", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finishedCallback, withFadeOut);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::GetInitialGameState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "GetInitialGameState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyPlayersDataModelDidChange(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbyPlayersDataModelDidChange", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerDidOpenInvitePanel() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleServerPlayerListViewControllerDidOpenInvitePanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerSelectBeatmap() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbySetupViewControllerSelectBeatmap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerSettingsPanelControllerPlayerActiveStateChanged(bool isActive) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                                                         { "HandleMultiplayerSettingsPanelControllerPlayerActiveStateChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isActive);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerLobbyDisconnected() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbyGameStateControllerLobbyDisconnected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel(::GlobalNamespace::LevelSelectionFlowCoordinator_State* state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                              { "HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel", {}, { ::i2c::type_of<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::SetLocalPlayerSelectedLevel(::GlobalNamespace::LevelSelectionFlowCoordinator_State* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                           { "SetLocalPlayerSelectedLevel", {}, { ::i2c::type_of<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerLevelSelectionFlowCoordinatorCancelSelectLevel() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleMultiplayerLevelSelectionFlowCoordinatorCancelSelectLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerSelectModifiers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbySetupViewControllerSelectModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerClearSelectedBeatmap() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbySetupViewControllerClearSelectedBeatmap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerClearSelectedModifiers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbySetupViewControllerClearSelectedModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerGameStateChanged(::GlobalNamespace::MultiplayerLobbyState state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                           { "HandleLobbyGameStateControllerGameStateChanged", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerLobbyState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerSelectSuggestedBeatmap(::GlobalNamespace::BeatmapKey beatmapKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                           { "HandleServerPlayerListViewControllerSelectSuggestedBeatmap", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapKey);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerSelectSuggestedGameplayModifiers(::GlobalNamespace::GameplayModifiers* modifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                              { "HandleServerPlayerListViewControllerSelectSuggestedGameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modifiers);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleServerPlayerListViewControllerKickPlayer(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                                                         { "HandleServerPlayerListViewControllerKickPlayer", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerCountdownStarted() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbyGameStateControllerCountdownStarted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerCountdownCancelled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbyGameStateControllerCountdownCancelled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerGameStarted(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                           { "HandleLobbyGameStateControllerGameStarted", {}, { ::i2c::type_of<::GlobalNamespace::ILevelGameplaySetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelGameplaySetupData);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerStartTimeChanged() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbyGameStateControllerStartTimeChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerSongStillDownloading() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbyGameStateControllerSongStillDownloading", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerStartGameOrReady() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbySetupViewControllerStartGameOrReady", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerCancelGameOrUnready() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbySetupViewControllerCancelGameOrUnready", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerCancelStartTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbyGameStateControllerCancelStartTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerGameStartedPresentView(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                           { "HandleLobbyGameStateControllerGameStartedPresentView", {}, { ::i2c::type_of<::GlobalNamespace::ILevelGameplaySetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelGameplaySetupData);
}
inline void
GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerLevelFinished(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* multiplayerLevelScenesTransitionSetupData,
                                                                                             ::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                              { "HandleLobbyGameStateControllerLevelFinished",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::MultiplayerResultsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerLevelScenesTransitionSetupData, multiplayerResultsData);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerLevelDidGetDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                           { "HandleLobbyGameStateControllerLevelDidGetDisconnected", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerResultsViewControllerBackToLobbyPressed(::GlobalNamespace::MultiplayerResultsViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                              { "HandleMultiplayerResultsViewControllerBackToLobbyPressed", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerResultsViewController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMultiplayerResultsViewControllerBackToMenuPressed(::GlobalNamespace::MultiplayerResultsViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                              { "HandleMultiplayerResultsViewControllerBackToMenuPressed", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerResultsViewController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::SetupLobbyWithPermissions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "SetupLobbyWithPermissions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::SetLobbyPlayerDataToViews(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "SetLobbyPlayerDataToViews", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::ShowSideViewControllers(bool showSideViewControllers, ::HMUI::ViewController_AnimationType animationType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                           { "ShowSideViewControllers", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::HMUI::ViewController_AnimationType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, showSideViewControllers, animationType);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::ShowBackButton(bool show) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "ShowBackButton", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, show);
}
inline ::StringW GlobalNamespace::GameServerLobbyFlowCoordinator::GetLocalizedTitle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "GetLocalizedTitle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::SetTitle(::HMUI::ViewController* newViewController, ::HMUI::ViewController_AnimationType animationType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                           { "SetTitle", {}, { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::ViewController_AnimationType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newViewController, animationType);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::ShowDisconnectDialogAndFinish(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                                                         { "ShowDisconnectDialogAndFinish", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::SetPlayersMissingLevelText() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "SetPlayersMissingLevelText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::UpdateLocalPlayerIsActiveState(bool isActive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "UpdateLocalPlayerIsActiveState", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isActive);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameBeforeSceneSwitchCallback() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbyGameBeforeSceneSwitchCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyGameStateStartButtonEnabled(::GlobalNamespace::CannotStartGameReason cannotStartGameReason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                                           { "HandleLobbyGameStateStartButtonEnabled", {}, { ::i2c::type_of<::GlobalNamespace::CannotStartGameReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cannotStartGameReason);
}
inline void
GlobalNamespace::GameServerLobbyFlowCoordinator::HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* playersMissingEntitlements) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(),
                                       { "HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel", {}, { ::i2c::type_of<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playersMissingEntitlements);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::HandleLobbyPlayerPermissionsModelPermissionsChanged() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "HandleLobbyPlayerPermissionsModelPermissionsChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::DismissViewControllersAndCoordinators() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "DismissViewControllersAndCoordinators", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::_PresentBackButtonConfirmationDialog_b__86_0(int32_t btnIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "<PresentBackButtonConfirmationDialog>b__86_0", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, btnIndex);
}
inline void GlobalNamespace::GameServerLobbyFlowCoordinator::_ShowDisconnectDialogAndFinish_b__123_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerLobbyFlowCoordinator*>(), { "<ShowDisconnectDialogAndFinish>b__123_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameServerLobbyFlowCoordinator* GlobalNamespace::GameServerLobbyFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameServerLobbyFlowCoordinator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameServerLobbyFlowCoordinator::GameServerLobbyFlowCoordinator() {}
