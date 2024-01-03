#pragma once
#include "GlobalNamespace/zzzz__PerformanceToolLauncher_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PerformanceToolLauncher_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__IGamePause_def.hpp"
#include "GlobalNamespace/zzzz__MainCamera_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceRecorder_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceToolLauncher_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceVisualizer_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
// Ctor Parameters [CppParam { name: "visualizer", ty: "::GlobalNamespace::PerformanceVisualizer*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "recorder", ty:
// "::GlobalNamespace::PerformanceRecorder*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__PerformanceToolLauncher__Assets::__PerformanceToolLauncher__Assets(::GlobalNamespace::PerformanceVisualizer* visualizer,
                                                                                                  ::GlobalNamespace::PerformanceRecorder* recorder) noexcept {
  this->visualizer = visualizer;
  this->recorder = recorder;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PerformanceToolLauncher__Assets::__PerformanceToolLauncher__Assets() {}
// Ctor Parameters [CppParam { name: "enableRecording", ty: "::GlobalNamespace::BoolSO*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "enableFpsVisualization", ty:
// "::GlobalNamespace::BoolSO*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "enableMemoryVisualization", ty: "::GlobalNamespace::BoolSO*", modifiers: "", def_value: Some("nullptr")
// }]
constexpr ::GlobalNamespace::__PerformanceToolLauncher__Config::__PerformanceToolLauncher__Config(::GlobalNamespace::BoolSO* enableRecording, ::GlobalNamespace::BoolSO* enableFpsVisualization,
                                                                                                  ::GlobalNamespace::BoolSO* enableMemoryVisualization) noexcept {
  this->enableRecording = enableRecording;
  this->enableFpsVisualization = enableFpsVisualization;
  this->enableMemoryVisualization = enableMemoryVisualization;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PerformanceToolLauncher__Config::__PerformanceToolLauncher__Config() {}
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
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PerformanceToolLauncher::*)(
    ::GlobalNamespace::MainCamera*, ::GlobalNamespace::IGamePause*, ::GlobalNamespace::GameplayCoreSceneSetupData*,
    ::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>)>(&::GlobalNamespace::PerformanceToolLauncher::Initialize)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x2304c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher*>::get(), "Initialize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainCamera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IGamePause*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayCoreSceneSetupData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PerformanceToolLauncher::*)()>(&::GlobalNamespace::PerformanceToolLauncher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2304f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__PerformanceToolLauncher__Assets& GlobalNamespace::PerformanceToolLauncher::__get__assets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assets;
}
constexpr ::GlobalNamespace::__PerformanceToolLauncher__Assets const& GlobalNamespace::PerformanceToolLauncher::__get__assets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assets;
}
constexpr void GlobalNamespace::PerformanceToolLauncher::__set__assets(::GlobalNamespace::__PerformanceToolLauncher__Assets value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____assets = value;
}
constexpr ::GlobalNamespace::__PerformanceToolLauncher__Config& GlobalNamespace::PerformanceToolLauncher::__get__config() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____config;
}
constexpr ::GlobalNamespace::__PerformanceToolLauncher__Config const& GlobalNamespace::PerformanceToolLauncher::__get__config() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____config;
}
constexpr void GlobalNamespace::PerformanceToolLauncher::__set__config(::GlobalNamespace::__PerformanceToolLauncher__Config value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____config = value;
}
/// @param gamePause: ::GlobalNamespace::IGamePause* (default: nullptr)
/// @param sceneSetupData: ::GlobalNamespace::GameplayCoreSceneSetupData* (default: nullptr)
/// @param overrideConfig: ::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig> (default: {})
inline void GlobalNamespace::PerformanceToolLauncher::Initialize(::GlobalNamespace::MainCamera* mainCamera, ::GlobalNamespace::IGamePause* gamePause,
                                                                 ::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData,
                                                                 ::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig> overrideConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher*>::get(), "Initialize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainCamera*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IGamePause*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayCoreSceneSetupData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mainCamera, gamePause, sceneSetupData, overrideConfig);
}
inline ::GlobalNamespace::PerformanceToolLauncher* GlobalNamespace::PerformanceToolLauncher::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PerformanceToolLauncher*>());
}
inline void GlobalNamespace::PerformanceToolLauncher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceToolLauncher::PerformanceToolLauncher() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
