#pragma once
// IWYU pragma private; include "GlobalNamespace\PerformanceToolLauncher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PerformanceToolLauncher_def.hpp"
#include "BeatSaber/Automation/zzzz__PerformanceToolLauncherOverrideConfig_def.hpp"
#include "BeatSaber/Automation/zzzz__RecPlayBehaviourState_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformationSetupData_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__IGamePause_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceRecorder_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceToolLauncher_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceVisualizer_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "GlobalNamespace/zzzz__SongController_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
// Ctor Parameters [CppParam { name: "visualizer", ty: "::UnityW<::GlobalNamespace::PerformanceVisualizer>", modifiers: "", def_value: Some("{}") }, CppParam { name: "recorder", ty:
// "::UnityW<::GlobalNamespace::PerformanceRecorder>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PerformanceToolLauncher_Assets::PerformanceToolLauncher_Assets(::UnityW<::GlobalNamespace::PerformanceVisualizer> visualizer,
                                                                                            ::UnityW<::GlobalNamespace::PerformanceRecorder> recorder) noexcept {
  this->visualizer = visualizer;
  this->recorder = recorder;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceToolLauncher_Assets::PerformanceToolLauncher_Assets() {}
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0::*)()>(
    &::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f8ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0._Run_g__HandleSongControllerSongDidStart_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0::*)()>(
    &::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0::_Run_g__HandleSongControllerSongDidStart_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58f8ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0*>(), { "<Run>g__HandleSongControllerSongDidStart|0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0._Run_g__HandleSongControllerSongDidFinish_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0::*)()>(
    &::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0::_Run_g__HandleSongControllerSongDidFinish_1)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x58f8d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0*>(), { "<Run>g__HandleSongControllerSongDidFinish|1", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SongController>& GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0::__cordl_internal_get_songController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songController;
}
constexpr ::UnityW<::GlobalNamespace::SongController> const& GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0::__cordl_internal_get_songController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songController;
}
constexpr void GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0::__cordl_internal_set_songController(::UnityW<::GlobalNamespace::SongController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songController = value;
}
constexpr ::UnityW<::GlobalNamespace::PerformanceRecorder>& GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0::__cordl_internal_get_recorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recorder;
}
constexpr ::UnityW<::GlobalNamespace::PerformanceRecorder> const& GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0::__cordl_internal_get_recorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recorder;
}
constexpr void GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0::__cordl_internal_set_recorder(::UnityW<::GlobalNamespace::PerformanceRecorder> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recorder = value;
}
inline void GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0::_Run_g__HandleSongControllerSongDidStart_0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0*>(), { "<Run>g__HandleSongControllerSongDidStart|0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0::_Run_g__HandleSongControllerSongDidFinish_1() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0*>(), { "<Run>g__HandleSongControllerSongDidFinish|1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0* GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass3_0::PerformanceToolLauncher___c__DisplayClass3_0() {}
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceToolLauncher::*)(
    ::GlobalNamespace::SettingsManager*, ::GlobalNamespace::PlayerDataModel*, ::UnityEngine::Camera*, ::BeatSaber::Automation::RecPlayBehaviourState*, ::GlobalNamespace::SongController*,
    ::GlobalNamespace::AudioTimeSyncController*, ::GlobalNamespace::IGamePause*, ::GlobalNamespace::GameplayCoreSceneSetupData*, ::GlobalNamespace::GameplayAdditionalInformationSetupData*,
    ::GlobalNamespace::BeatmapObjectManager*, ::GlobalNamespace::BeatmapCallbacksController*, ::System::Nullable_1<::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig>)>(
    &::GlobalNamespace::PerformanceToolLauncher::Initialize)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x58f888c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher*>(),
                                         { "Initialize",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::SettingsManager*>(), ::i2c::type_of<::GlobalNamespace::PlayerDataModel*>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                             ::i2c::type_of<::BeatSaber::Automation::RecPlayBehaviourState*>(), ::i2c::type_of<::GlobalNamespace::SongController*>(),
                                             ::i2c::type_of<::GlobalNamespace::AudioTimeSyncController*>(), ::i2c::type_of<::GlobalNamespace::IGamePause*>(),
                                             ::i2c::type_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(), ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformationSetupData*>(),
                                             ::i2c::type_of<::GlobalNamespace::BeatmapObjectManager*>(), ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                             ::i2c::type_of<::System::Nullable_1<::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PerformanceRecorder*, ::GlobalNamespace::SongController*)>(&::GlobalNamespace::PerformanceToolLauncher::Run)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x58f8b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher*>(),
                                                             { "Run", {}, { ::i2c::type_of<::GlobalNamespace::PerformanceRecorder*>(), ::i2c::type_of<::GlobalNamespace::SongController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceToolLauncher::*)()>(&::GlobalNamespace::PerformanceToolLauncher::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f8ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PerformanceToolLauncher_Assets& GlobalNamespace::PerformanceToolLauncher::__cordl_internal_get__assets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assets;
}
constexpr ::GlobalNamespace::PerformanceToolLauncher_Assets const& GlobalNamespace::PerformanceToolLauncher::__cordl_internal_get__assets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assets;
}
constexpr void GlobalNamespace::PerformanceToolLauncher::__cordl_internal_set__assets(::GlobalNamespace::PerformanceToolLauncher_Assets value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____assets = value;
}
inline void GlobalNamespace::PerformanceToolLauncher::Initialize(::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::PlayerDataModel* playerDataModel,
                                                                 ::UnityEngine::Camera* mainCamera, ::BeatSaber::Automation::RecPlayBehaviourState* recPlayState,
                                                                 ::GlobalNamespace::SongController* songController, ::GlobalNamespace::AudioTimeSyncController* timeSync,
                                                                 ::GlobalNamespace::IGamePause* gamePause, ::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData,
                                                                 ::GlobalNamespace::GameplayAdditionalInformationSetupData* additionalInformationSetupData,
                                                                 ::GlobalNamespace::BeatmapObjectManager* objectManager, ::GlobalNamespace::BeatmapCallbacksController* callbackController,
                                                                 ::System::Nullable_1<::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig> overrideConfig) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher*>(),
                                       { "Initialize",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::SettingsManager*>(), ::i2c::type_of<::GlobalNamespace::PlayerDataModel*>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                           ::i2c::type_of<::BeatSaber::Automation::RecPlayBehaviourState*>(), ::i2c::type_of<::GlobalNamespace::SongController*>(),
                                           ::i2c::type_of<::GlobalNamespace::AudioTimeSyncController*>(), ::i2c::type_of<::GlobalNamespace::IGamePause*>(),
                                           ::i2c::type_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(), ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformationSetupData*>(),
                                           ::i2c::type_of<::GlobalNamespace::BeatmapObjectManager*>(), ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                           ::i2c::type_of<::System::Nullable_1<::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settingsManager, playerDataModel, mainCamera, recPlayState, songController, timeSync, gamePause, sceneSetupData,
                                                   additionalInformationSetupData, objectManager, callbackController, overrideConfig);
}
inline void GlobalNamespace::PerformanceToolLauncher::Run(::GlobalNamespace::PerformanceRecorder* recorder, ::GlobalNamespace::SongController* songController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher*>(),
                                                           { "Run", {}, { ::i2c::type_of<::GlobalNamespace::PerformanceRecorder*>(), ::i2c::type_of<::GlobalNamespace::SongController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, recorder, songController);
}
inline void GlobalNamespace::PerformanceToolLauncher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceToolLauncher*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PerformanceToolLauncher* GlobalNamespace::PerformanceToolLauncher::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerformanceToolLauncher*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceToolLauncher::PerformanceToolLauncher() {}
