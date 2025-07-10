#pragma once
// IWYU pragma private; include "GlobalNamespace/PerformanceToolLauncher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PerformanceToolLauncher_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__IGamePause_def.hpp"
#include "GlobalNamespace/zzzz__MainCamera_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceRecorder_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceToolLauncher_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceVisualizer_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__RecPlayBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "GlobalNamespace/zzzz__SongController_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
// Ctor Parameters [CppParam { name: "visualizer", ty: "::UnityW<::GlobalNamespace::PerformanceVisualizer>", modifiers: "", def_value: Some("{}") }, CppParam { name: "recorder", ty:
// "::UnityW<::GlobalNamespace::PerformanceRecorder>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PerformanceToolLauncher_Assets::PerformanceToolLauncher_Assets(::UnityW<::GlobalNamespace::PerformanceVisualizer> visualizer,
                                                                                            ::UnityW<::GlobalNamespace::PerformanceRecorder> recorder) noexcept {
  this->visualizer = visualizer;
  this->recorder = recorder;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceToolLauncher_Assets::PerformanceToolLauncher_Assets() {}
inline void GlobalNamespace::PerformanceToolLauncher_OverrideConfig::setStaticF_kDefault(::GlobalNamespace::PerformanceToolLauncher_OverrideConfig value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::PerformanceToolLauncher_OverrideConfig, "kDefault",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher_OverrideConfig>::get>(
      std::forward<::GlobalNamespace::PerformanceToolLauncher_OverrideConfig>(value));
}
inline ::GlobalNamespace::PerformanceToolLauncher_OverrideConfig GlobalNamespace::PerformanceToolLauncher_OverrideConfig::getStaticF_kDefault() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::PerformanceToolLauncher_OverrideConfig, "kDefault",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher_OverrideConfig>::get>();
}
// Ctor Parameters [CppParam { name: "enableAutoplay", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableRecording", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PerformanceToolLauncher_OverrideConfig::PerformanceToolLauncher_OverrideConfig(bool enableAutoplay, bool enableRecording) noexcept {
  this->enableAutoplay = enableAutoplay;
  this->enableRecording = enableRecording;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceToolLauncher_OverrideConfig::PerformanceToolLauncher_OverrideConfig() {}
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::*)()>(
    &::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b26658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0._Run_g__HandleSongControllerSongDidStart_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::*)()>(
    &::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::_Run_g__HandleSongControllerSongDidStart_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3b266b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0*>::get(),
                                                 "<Run>g__HandleSongControllerSongDidStart|0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0._Run_g__HandleSongControllerSongDidFinish_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::*)()>(
    &::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::_Run_g__HandleSongControllerSongDidFinish_1)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3b26758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0*>::get(),
                                                 "<Run>g__HandleSongControllerSongDidFinish|1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SongController>& GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::__cordl_internal_get_songController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songController;
}
constexpr ::UnityW<::GlobalNamespace::SongController> const& GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::__cordl_internal_get_songController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songController;
}
constexpr void GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::__cordl_internal_set_songController(::UnityW<::GlobalNamespace::SongController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___songController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PerformanceRecorder>& GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::__cordl_internal_get_recorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recorder;
}
constexpr ::UnityW<::GlobalNamespace::PerformanceRecorder> const& GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::__cordl_internal_get_recorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recorder;
}
constexpr void GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::__cordl_internal_set_recorder(::UnityW<::GlobalNamespace::PerformanceRecorder> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___recorder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::_Run_g__HandleSongControllerSongDidStart_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0*>::get(),
                                               "<Run>g__HandleSongControllerSongDidStart|0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::_Run_g__HandleSongControllerSongDidFinish_1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0*>::get(),
                                               "<Run>g__HandleSongControllerSongDidFinish|1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0* GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceToolLauncher___c__DisplayClass4_0::PerformanceToolLauncher___c__DisplayClass4_0() {}
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PerformanceToolLauncher::*)(
    ::GlobalNamespace::SettingsManager*, ::GlobalNamespace::PlayerDataModel*, ::GlobalNamespace::MainCamera*, ::GlobalNamespace::RecPlayBehaviour_State*, ::GlobalNamespace::SongController*,
    ::GlobalNamespace::IGamePause*, ::GlobalNamespace::GameplayCoreSceneSetupData*, ::System::Nullable_1<::GlobalNamespace::PerformanceToolLauncher_OverrideConfig>)>(
    &::GlobalNamespace::PerformanceToolLauncher::Initialize)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x3b262dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SettingsManager*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainCamera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RecPlayBehaviour_State*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IGamePause*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayCoreSceneSetupData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::PerformanceToolLauncher_OverrideConfig>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::PerformanceRecorder*, ::GlobalNamespace::SongController*)>(
    &::GlobalNamespace::PerformanceToolLauncher::Run)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3b26550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher*>::get(), "Run", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PerformanceRecorder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PerformanceToolLauncher::*)()>(&::GlobalNamespace::PerformanceToolLauncher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b26660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
                                                                 ::GlobalNamespace::MainCamera* mainCamera, ::GlobalNamespace::RecPlayBehaviour_State* recPlayState,
                                                                 ::GlobalNamespace::SongController* songController, ::GlobalNamespace::IGamePause* gamePause,
                                                                 ::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData,
                                                                 ::System::Nullable_1<::GlobalNamespace::PerformanceToolLauncher_OverrideConfig> overrideConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SettingsManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainCamera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RecPlayBehaviour_State*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IGamePause*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayCoreSceneSetupData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::PerformanceToolLauncher_OverrideConfig>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settingsManager, playerDataModel, mainCamera, recPlayState, songController, gamePause, sceneSetupData,
                                                          overrideConfig);
}
inline void GlobalNamespace::PerformanceToolLauncher::Run(::GlobalNamespace::PerformanceRecorder* recorder, ::GlobalNamespace::SongController* songController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher*>::get(), "Run", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PerformanceRecorder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, recorder, songController);
}
inline void GlobalNamespace::PerformanceToolLauncher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PerformanceToolLauncher* GlobalNamespace::PerformanceToolLauncher::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PerformanceToolLauncher*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceToolLauncher::PerformanceToolLauncher() {}
