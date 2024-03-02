#pragma once
#include "GlobalNamespace/zzzz__PerformanceToolLauncher_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PerformanceToolLauncher_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__IGamePause_def.hpp"
#include "GlobalNamespace/zzzz__MainCamera_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceRecorder_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceToolLauncher_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceVisualizer_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__SongController_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
// Ctor Parameters [CppParam { name: "visualizer", ty: "::UnityW<::GlobalNamespace::PerformanceVisualizer>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "recorder", ty:
// "::UnityW<::GlobalNamespace::PerformanceRecorder>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__PerformanceToolLauncher__Assets::__PerformanceToolLauncher__Assets(::UnityW<::GlobalNamespace::PerformanceVisualizer> visualizer,
                                                                                                  ::UnityW<::GlobalNamespace::PerformanceRecorder> recorder) noexcept {
  this->visualizer = visualizer;
  this->recorder = recorder;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PerformanceToolLauncher__Assets::__PerformanceToolLauncher__Assets() {}
inline void GlobalNamespace::__PerformanceToolLauncher__OverrideConfig::setStaticF_kDefault(::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig, "kDefault",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>::get>(
      std::forward<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>(value));
}
inline ::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig GlobalNamespace::__PerformanceToolLauncher__OverrideConfig::getStaticF_kDefault() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig, "kDefault",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>::get>();
}
// Ctor Parameters [CppParam { name: "enableRecording", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "minFpsWindow", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig::__PerformanceToolLauncher__OverrideConfig(bool enableRecording, float_t minFpsWindow) noexcept {
  this->enableRecording = enableRecording;
  this->minFpsWindow = minFpsWindow;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig::__PerformanceToolLauncher__OverrideConfig() {}
//  Writing Method size for method: ::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0::*)()>(
    &::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2401ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0._Run_g__HandleSongControllerSongDidStart_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0::*)()>(
    &::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0::_Run_g__HandleSongControllerSongDidStart_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2401b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0*>::get(),
                                                 "<Run>g__HandleSongControllerSongDidStart|0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0._Run_g__HandleSongControllerSongDidFinish_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0::*)()>(
    &::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0::_Run_g__HandleSongControllerSongDidFinish_1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2401bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0*>::get(),
                                                 "<Run>g__HandleSongControllerSongDidFinish|1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SongController>& GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0::__cordl_internal_get_songController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songController;
}
constexpr ::UnityW<::GlobalNamespace::SongController> const& GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0::__cordl_internal_get_songController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songController;
}
constexpr void GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0::__cordl_internal_set_songController(::UnityW<::GlobalNamespace::SongController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___songController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PerformanceRecorder>& GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0::__cordl_internal_get_recorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recorder;
}
constexpr ::UnityW<::GlobalNamespace::PerformanceRecorder> const& GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0::__cordl_internal_get_recorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recorder;
}
constexpr void GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0::__cordl_internal_set_recorder(::UnityW<::GlobalNamespace::PerformanceRecorder> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___recorder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0* GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0*>());
}
inline void GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0::_Run_g__HandleSongControllerSongDidStart_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0*>::get(),
                                               "<Run>g__HandleSongControllerSongDidStart|0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0::_Run_g__HandleSongControllerSongDidFinish_1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0*>::get(),
                                               "<Run>g__HandleSongControllerSongDidFinish|1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PerformanceToolLauncher____c__DisplayClass4_0::__PerformanceToolLauncher____c__DisplayClass4_0() {}
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PerformanceToolLauncher::*)(
    ::GlobalNamespace::MainSettingsModelSO*, ::GlobalNamespace::PlayerDataModel*, ::GlobalNamespace::MainCamera*, ::GlobalNamespace::SongController*, ::GlobalNamespace::IGamePause*,
    ::GlobalNamespace::GameplayCoreSceneSetupData*, ::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>)>(&::GlobalNamespace::PerformanceToolLauncher::Initialize)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x24016c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainSettingsModelSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainCamera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IGamePause*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayCoreSceneSetupData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::PerformanceRecorder*, ::GlobalNamespace::SongController*)>(
    &::GlobalNamespace::PerformanceToolLauncher::Run)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x24019b0;

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
  constexpr static std::size_t addrs = 0x2401ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__PerformanceToolLauncher__Assets& GlobalNamespace::PerformanceToolLauncher::__cordl_internal_get__assets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assets;
}
constexpr ::GlobalNamespace::__PerformanceToolLauncher__Assets const& GlobalNamespace::PerformanceToolLauncher::__cordl_internal_get__assets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assets;
}
constexpr void GlobalNamespace::PerformanceToolLauncher::__cordl_internal_set__assets(::GlobalNamespace::__PerformanceToolLauncher__Assets value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____assets = value;
}
/// @param songController: ::GlobalNamespace::SongController* (default: nullptr)
/// @param gamePause: ::GlobalNamespace::IGamePause* (default: nullptr)
/// @param sceneSetupData: ::GlobalNamespace::GameplayCoreSceneSetupData* (default: nullptr)
/// @param overrideConfig: ::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig> (default: {})
inline void GlobalNamespace::PerformanceToolLauncher::Initialize(::GlobalNamespace::MainSettingsModelSO* mainSettings, ::GlobalNamespace::PlayerDataModel* playerDataModel,
                                                                 ::GlobalNamespace::MainCamera* mainCamera, ::GlobalNamespace::SongController* songController, ::GlobalNamespace::IGamePause* gamePause,
                                                                 ::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData,
                                                                 ::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig> overrideConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainSettingsModelSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainCamera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IGamePause*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayCoreSceneSetupData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mainSettings, playerDataModel, mainCamera, songController, gamePause, sceneSetupData, overrideConfig);
}
inline void GlobalNamespace::PerformanceToolLauncher::Run(::GlobalNamespace::PerformanceRecorder* recorder, ::GlobalNamespace::SongController* songController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher*>::get(), "Run", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PerformanceRecorder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, recorder, songController);
}
inline ::GlobalNamespace::PerformanceToolLauncher* GlobalNamespace::PerformanceToolLauncher::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PerformanceToolLauncher*>());
}
inline void GlobalNamespace::PerformanceToolLauncher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceToolLauncher::PerformanceToolLauncher() {}
