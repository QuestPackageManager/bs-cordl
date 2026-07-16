#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLevelSelectionFlowCoordinator.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_impl.hpp"
#include "GlobalNamespace/zzzz__LevelSelectionFlowCoordinator_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__ILevelGameplaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyGameStateController_def.hpp"
#include "GlobalNamespace/zzzz__LevelSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator.add_didSelectLevelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)(
    ::System::Action_1<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>*)>(&::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::add_didSelectLevelEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5929920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(),
                                                             { "add_didSelectLevelEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator.remove_didSelectLevelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)(
    ::System::Action_1<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>*)>(&::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::remove_didSelectLevelEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x592b2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(),
                                                { "remove_didSelectLevelEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator.add_didFinishedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::add_didFinishedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59299e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), { "add_didFinishedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator.remove_didFinishedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::remove_didFinishedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x592b3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), { "remove_didFinishedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator.get_hidePracticeButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_hidePracticeButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5935360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator.get_hidePacksIfOneOrNone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_hidePacksIfOneOrNone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5935368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator.get_actionButtonText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_actionButtonText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5935370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator.get_showBackButtonForMainViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_showBackButtonForMainViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5935378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator.get_songPackMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SongPackMask (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_songPackMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5935380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator.get_enableCustomLevels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_enableCustomLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5935390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator.get_allowedBeatmapDifficultyMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDifficultyMask (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_allowedBeatmapDifficultyMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5935398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator.get_notAllowedCharacteristics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::BeatmapCharacteristic> (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_notAllowedCharacteristics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59353a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator.get_mainTitle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_mainTitle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59353a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator.ActionButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::ActionButtonWasPressed)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x59353b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator.BackButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::BackButtonWasPressed)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x59354cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator.LevelSelectionFlowCoordinatorTopViewControllerWillChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::ViewController_AnimationType)>(
        &::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorTopViewControllerWillChange)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5935500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator.TransitionDidStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::TransitionDidStart)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x59355f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator.TransitionDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::TransitionDidFinish)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x59357d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)(
    ::GlobalNamespace::LevelSelectionFlowCoordinator_State*, ::GlobalNamespace::SongPackMask, ::GlobalNamespace::BeatmapDifficultyMask, ::StringW, ::StringW)>(
    &::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::Setup)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x592ced0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(),
                                                             { "Setup",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>(), ::i2c::type_of<::GlobalNamespace::SongPackMask>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator.HandleLobbyGameStateControllerGameStarted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)(::GlobalNamespace::ILevelGameplaySetupData*)>(
    &::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::HandleLobbyGameStateControllerGameStarted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5935b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(),
                                                             { "HandleLobbyGameStateControllerGameStarted", {}, { ::i2c::type_of<::GlobalNamespace::ILevelGameplaySetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator.HandleLobbyGameStateControllerLobbyDisconnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::HandleLobbyGameStateControllerLobbyDisconnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5935b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), { "HandleLobbyGameStateControllerLobbyDisconnected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator.DismissViewControllersAndFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::DismissViewControllersAndFinish)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5935aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), { "DismissViewControllersAndFinish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5935b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristic>& GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_get__notAllowedCharacteristics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notAllowedCharacteristics;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristic> const& GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_get__notAllowedCharacteristics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notAllowedCharacteristics;
}
constexpr void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_set__notAllowedCharacteristics(::ArrayW<::GlobalNamespace::BeatmapCharacteristic> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____notAllowedCharacteristics = value;
}
constexpr ::GlobalNamespace::ILobbyGameStateController*& GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_get__lobbyGameStateController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyGameStateController;
}
constexpr ::GlobalNamespace::ILobbyGameStateController* const& GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_get__lobbyGameStateController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyGameStateController;
}
constexpr void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyGameStateController = value;
}
constexpr ::System::Action_1<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>*& GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_get_didSelectLevelEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectLevelEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>* const&
GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_get_didSelectLevelEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectLevelEvent;
}
constexpr void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_set_didSelectLevelEvent(::System::Action_1<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectLevelEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_get_didFinishedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_get_didFinishedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishedEvent;
}
constexpr void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_set_didFinishedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishedEvent = value;
}
constexpr ::StringW& GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_get__actionButtonText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____actionButtonText;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_get__actionButtonText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____actionButtonText;
}
constexpr void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_set__actionButtonText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____actionButtonText = value;
}
constexpr ::StringW& GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_get__titleText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____titleText;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_get__titleText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____titleText;
}
constexpr void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_set__titleText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____titleText = value;
}
constexpr ::GlobalNamespace::SongPackMask& GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_get__songPackMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMask;
}
constexpr ::GlobalNamespace::SongPackMask const& GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_get__songPackMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMask;
}
constexpr void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_set__songPackMask(::GlobalNamespace::SongPackMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songPackMask = value;
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask& GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_get__allowedBeatmapDifficultyMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowedBeatmapDifficultyMask;
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask const& GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_get__allowedBeatmapDifficultyMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowedBeatmapDifficultyMask;
}
constexpr void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_set__allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowedBeatmapDifficultyMask = value;
}
constexpr ::GlobalNamespace::LevelSelectionFlowCoordinator_State*& GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr ::GlobalNamespace::LevelSelectionFlowCoordinator_State* const& GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_set__state(::GlobalNamespace::LevelSelectionFlowCoordinator_State* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
constexpr bool& GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_get__isBeingFinished() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isBeingFinished;
}
constexpr bool const& GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_get__isBeingFinished() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isBeingFinished;
}
constexpr void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::__cordl_internal_set__isBeingFinished(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isBeingFinished = value;
}
inline void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::add_didSelectLevelEvent(::System::Action_1<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(),
                                                           { "add_didSelectLevelEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::remove_didSelectLevelEvent(::System::Action_1<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(),
                                                           { "remove_didSelectLevelEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::add_didFinishedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), { "add_didFinishedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::remove_didFinishedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), { "remove_didFinishedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_hidePracticeButton() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_hidePacksIfOneOrNone() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_actionButtonText() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_showBackButtonForMainViewController() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::SongPackMask GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_songPackMask() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SongPackMask>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_enableCustomLevels() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDifficultyMask GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_allowedBeatmapDifficultyMask() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficultyMask>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::BeatmapCharacteristic> GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_notAllowedCharacteristics() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_mainTitle() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::ActionButtonWasPressed() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::BackButtonWasPressed(::HMUI::ViewController* topViewController) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topViewController);
}
inline void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorTopViewControllerWillChange(::HMUI::ViewController* oldViewController,
                                                                                                                                ::HMUI::ViewController* newViewController,
                                                                                                                                ::HMUI::ViewController_AnimationType animationType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::TransitionDidStart() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::TransitionDidFinish() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::Setup(::GlobalNamespace::LevelSelectionFlowCoordinator_State* state, ::GlobalNamespace::SongPackMask songPackMask,
                                                                             ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, ::StringW actionText, ::StringW titleText) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(),
                                                           { "Setup",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>(), ::i2c::type_of<::GlobalNamespace::SongPackMask>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, songPackMask, allowedBeatmapDifficultyMask, actionText, titleText);
}
inline void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::HandleLobbyGameStateControllerGameStarted(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(),
                                                           { "HandleLobbyGameStateControllerGameStarted", {}, { ::i2c::type_of<::GlobalNamespace::ILevelGameplaySetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelGameplaySetupData);
}
inline void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::HandleLobbyGameStateControllerLobbyDisconnected() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), { "HandleLobbyGameStateControllerLobbyDisconnected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::DismissViewControllersAndFinish() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), { "DismissViewControllersAndFinish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator* GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::MultiplayerLevelSelectionFlowCoordinator() {}
