#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MainSystemInit_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
#include "GlobalNamespace/zzzz__RelativeSfxVolumePerLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__CustomLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__CoroutineStarter_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLightsUpdateSystem_def.hpp"
#include "GlobalNamespace/zzzz__PSVR2Helper_def.hpp"
#include "GlobalNamespace/zzzz__DevicelessVRHelper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsPromoDataSO_def.hpp"
#include "GlobalNamespace/zzzz__PS4LevelProductsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__CachedMediaAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__PS4LeaderboardIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateManager_def.hpp"
#include "GlobalNamespace/zzzz__AlwaysOwnedContentContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__PS5LeaderboardIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__OculusNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__AchievementIdsModelSO_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "GlobalNamespace/zzzz__RichPresenceManager_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectContainerSO_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectGraphicsSettingsPresetsSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassGraphicsSettingsPresetsSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__PS4NetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelDataSO_def.hpp"
#include "GlobalNamespace/zzzz__PS5NetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentAudioEffectsPlayer_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentCommandLineArgsProvider_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__UnityXRHelper_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererGraphicsSettingsPresets_def.hpp"
#include "GlobalNamespace/zzzz__ExternalCamerasManager_def.hpp"
#include "GlobalNamespace/zzzz__GameLiftNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__NetworkConfigSO_def.hpp"
#include "GlobalNamespace/zzzz__PS5LevelProductsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModelSO_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardScoreUploader_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsSO_def.hpp"
#include "GlobalNamespace/zzzz__CampaignProgressModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollectionSO_def.hpp"
#include "GlobalNamespace/zzzz__VoipManager_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerEntitlementChecker_def.hpp"
#include "GlobalNamespace/zzzz__OculusLevelProductsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__PSVRHelper_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SonyAchievementIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__OculusVRHelper_def.hpp"
#include "GlobalNamespace/zzzz__SteamNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__TimeHelper_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__PS5ActivityIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SteamLevelProductsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementsModelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)()>(&::GlobalNamespace::MainSystemInit::Init)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x2226700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "Init",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*, bool)>(
    &::GlobalNamespace::MainSystemInit::InstallBindings)> {
  constexpr static std::size_t size = 0x1838;
  constexpr static std::size_t addrs = 0x2226b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallBindings", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallHapticsController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::MainSystemInit::InstallHapticsController)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2228718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallHapticsController", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallRichPresence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*, bool)>(
    &::GlobalNamespace::MainSystemInit::InstallRichPresence)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x22284c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallRichPresence", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallOculusDestinationBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::MainSystemInit::InstallOculusDestinationBindings)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x22283c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallOculusDestinationBindings", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallPlatformLeaderboardsModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*, bool)>(
    &::GlobalNamespace::MainSystemInit::InstallPlatformLeaderboardsModel)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x22285b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallPlatformLeaderboardsModel", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallPS5Bindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::MainSystemInit::InstallPS5Bindings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22288d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallPS5Bindings", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallPS4Bindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::MainSystemInit::InstallPS4Bindings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22288dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallPS4Bindings", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)()>(&::GlobalNamespace::MainSystemInit::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x22288e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MainSettingsModelSO*& GlobalNamespace::MainSystemInit::__get__mainSettingsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> const& GlobalNamespace::MainSystemInit::__get__mainSettingsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainSettingsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AudioManagerSO*& GlobalNamespace::MainSystemInit::__get__audioManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioManagerSO*> const& GlobalNamespace::MainSystemInit::__get__audioManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr void GlobalNamespace::MainSystemInit::__set__audioManager(::GlobalNamespace::AudioManagerSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelSO*& GlobalNamespace::MainSystemInit::__get__perceivedLoudnessPerLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perceivedLoudnessPerLevel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerceivedLoudnessPerLevelSO*> const& GlobalNamespace::MainSystemInit::__get__perceivedLoudnessPerLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perceivedLoudnessPerLevel;
}
constexpr void GlobalNamespace::MainSystemInit::__set__perceivedLoudnessPerLevel(::GlobalNamespace::PerceivedLoudnessPerLevelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____perceivedLoudnessPerLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RelativeSfxVolumePerLevelSO*& GlobalNamespace::MainSystemInit::__get__relativeSfxVolumePerLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeSfxVolumePerLevel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RelativeSfxVolumePerLevelSO*> const& GlobalNamespace::MainSystemInit::__get__relativeSfxVolumePerLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeSfxVolumePerLevel;
}
constexpr void GlobalNamespace::MainSystemInit::__set__relativeSfxVolumePerLevel(::GlobalNamespace::RelativeSfxVolumePerLevelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____relativeSfxVolumePerLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*& GlobalNamespace::MainSystemInit::__get__mirrorRendererGraphicsSettingsPresets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRendererGraphicsSettingsPresets;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*> const& GlobalNamespace::MainSystemInit::__get__mirrorRendererGraphicsSettingsPresets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRendererGraphicsSettingsPresets;
}
constexpr void GlobalNamespace::MainSystemInit::__set__mirrorRendererGraphicsSettingsPresets(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirrorRendererGraphicsSettingsPresets)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*& GlobalNamespace::MainSystemInit::__get__mainEffectGraphicsSettingsPresets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectGraphicsSettingsPresets;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*> const& GlobalNamespace::MainSystemInit::__get__mainEffectGraphicsSettingsPresets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectGraphicsSettingsPresets;
}
constexpr void GlobalNamespace::MainSystemInit::__set__mainEffectGraphicsSettingsPresets(::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainEffectGraphicsSettingsPresets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*& GlobalNamespace::MainSystemInit::__get__bloomPrePassGraphicsSettingsPresets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassGraphicsSettingsPresets;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*> const& GlobalNamespace::MainSystemInit::__get__bloomPrePassGraphicsSettingsPresets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassGraphicsSettingsPresets;
}
constexpr void GlobalNamespace::MainSystemInit::__set__bloomPrePassGraphicsSettingsPresets(::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrePassGraphicsSettingsPresets)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MirrorRendererSO*& GlobalNamespace::MainSystemInit::__get__mirrorRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRenderer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirrorRendererSO*> const& GlobalNamespace::MainSystemInit::__get__mirrorRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRenderer;
}
constexpr void GlobalNamespace::MainSystemInit::__set__mirrorRenderer(::GlobalNamespace::MirrorRendererSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirrorRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MainEffectContainerSO*& GlobalNamespace::MainSystemInit::__get__mainEffectContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainEffectContainerSO*> const& GlobalNamespace::MainSystemInit::__get__mainEffectContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectContainer;
}
constexpr void GlobalNamespace::MainSystemInit::__set__mainEffectContainer(::GlobalNamespace::MainEffectContainerSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainEffectContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BloomPrePassEffectContainerSO*& GlobalNamespace::MainSystemInit::__get__bloomPrePassEffectContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassEffectContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassEffectContainerSO*> const& GlobalNamespace::MainSystemInit::__get__bloomPrePassEffectContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassEffectContainer;
}
constexpr void GlobalNamespace::MainSystemInit::__set__bloomPrePassEffectContainer(::GlobalNamespace::BloomPrePassEffectContainerSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrePassEffectContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SongPackMasksModelSO*& GlobalNamespace::MainSystemInit::__get__songPackMasksModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMasksModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMasksModelSO*> const& GlobalNamespace::MainSystemInit::__get__songPackMasksModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMasksModel;
}
constexpr void GlobalNamespace::MainSystemInit::__set__songPackMasksModel(::GlobalNamespace::SongPackMasksModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPackMasksModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AppStaticSettingsSO*& GlobalNamespace::MainSystemInit::__get__appStaticSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appStaticSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppStaticSettingsSO*> const& GlobalNamespace::MainSystemInit::__get__appStaticSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appStaticSettings;
}
constexpr void GlobalNamespace::MainSystemInit::__set__appStaticSettings(::GlobalNamespace::AppStaticSettingsSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appStaticSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*& GlobalNamespace::MainSystemInit::__get__standardLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelScenesTransitionSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> const&
GlobalNamespace::MainSystemInit::__get__standardLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::MainSystemInit::__set__standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____standardLevelScenesTransitionSetupData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*& GlobalNamespace::MainSystemInit::__get__missionLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelScenesTransitionSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*> const&
GlobalNamespace::MainSystemInit::__get__missionLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::MainSystemInit::__set__missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionLevelScenesTransitionSetupData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*& GlobalNamespace::MainSystemInit::__get__multiplayerLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelScenesTransitionSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*> const&
GlobalNamespace::MainSystemInit::__get__multiplayerLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::MainSystemInit::__set__multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerLevelScenesTransitionSetupData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::TimeHelper*& GlobalNamespace::MainSystemInit::__get__timeHelperPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelperPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TimeHelper*> const& GlobalNamespace::MainSystemInit::__get__timeHelperPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelperPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__timeHelperPrefab(::GlobalNamespace::TimeHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timeHelperPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerDataModel*& GlobalNamespace::MainSystemInit::__get__playerDataModelPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModelPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& GlobalNamespace::MainSystemInit::__get__playerDataModelPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModelPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__playerDataModelPrefab(::GlobalNamespace::PlayerDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModelPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::CampaignProgressModel*& GlobalNamespace::MainSystemInit::__get__campaignProgressModelPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____campaignProgressModelPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CampaignProgressModel*> const& GlobalNamespace::MainSystemInit::__get__campaignProgressModelPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____campaignProgressModelPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__campaignProgressModelPrefab(::GlobalNamespace::CampaignProgressModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____campaignProgressModelPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::MainSystemInit::__get__beatmapLevelsModelPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModelPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& GlobalNamespace::MainSystemInit::__get__beatmapLevelsModelPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModelPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__beatmapLevelsModelPrefab(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsModelPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::CustomLevelLoader*& GlobalNamespace::MainSystemInit::__get__customLevelLoaderPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customLevelLoaderPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CustomLevelLoader*> const& GlobalNamespace::MainSystemInit::__get__customLevelLoaderPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customLevelLoaderPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__customLevelLoaderPrefab(::GlobalNamespace::CustomLevelLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____customLevelLoaderPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::CachedMediaAsyncLoader*& GlobalNamespace::MainSystemInit::__get__cachedMediaAsyncLoaderPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedMediaAsyncLoaderPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CachedMediaAsyncLoader*> const& GlobalNamespace::MainSystemInit::__get__cachedMediaAsyncLoaderPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedMediaAsyncLoaderPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__cachedMediaAsyncLoaderPrefab(::GlobalNamespace::CachedMediaAsyncLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cachedMediaAsyncLoaderPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ExternalCamerasManager*& GlobalNamespace::MainSystemInit::__get__externalCamerasManagerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____externalCamerasManagerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ExternalCamerasManager*> const& GlobalNamespace::MainSystemInit::__get__externalCamerasManagerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____externalCamerasManagerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__externalCamerasManagerPrefab(::GlobalNamespace::ExternalCamerasManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____externalCamerasManagerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerSessionManager*& GlobalNamespace::MainSystemInit::__get__multiplayerSessionManagerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManagerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerSessionManager*> const& GlobalNamespace::MainSystemInit::__get__multiplayerSessionManagerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManagerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__multiplayerSessionManagerPrefab(::GlobalNamespace::MultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManagerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::VoipManager*& GlobalNamespace::MainSystemInit::__get__voipManagerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____voipManagerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VoipManager*> const& GlobalNamespace::MainSystemInit::__get__voipManagerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____voipManagerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__voipManagerPrefab(::GlobalNamespace::VoipManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____voipManagerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameLiftNetworkPlayerModel*& GlobalNamespace::MainSystemInit::__get__gameLiftNetworkPlayerModelPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameLiftNetworkPlayerModelPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameLiftNetworkPlayerModel*> const& GlobalNamespace::MainSystemInit::__get__gameLiftNetworkPlayerModelPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameLiftNetworkPlayerModelPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__gameLiftNetworkPlayerModelPrefab(::GlobalNamespace::GameLiftNetworkPlayerModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameLiftNetworkPlayerModelPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::NetworkPlayerEntitlementChecker*& GlobalNamespace::MainSystemInit::__get__networkPlayerEntitlementCheckerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkPlayerEntitlementCheckerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPlayerEntitlementChecker*> const& GlobalNamespace::MainSystemInit::__get__networkPlayerEntitlementCheckerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkPlayerEntitlementCheckerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__networkPlayerEntitlementCheckerPrefab(::GlobalNamespace::NetworkPlayerEntitlementChecker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____networkPlayerEntitlementCheckerPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::HapticFeedbackManager*& GlobalNamespace::MainSystemInit::__get__hapticFeedbackControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticFeedbackManager*> const& GlobalNamespace::MainSystemInit::__get__hapticFeedbackControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackControllerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__hapticFeedbackControllerPrefab(::GlobalNamespace::HapticFeedbackManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hapticFeedbackControllerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::TimeTweeningManager*& GlobalNamespace::MainSystemInit::__get__tweeningManagerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManagerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& GlobalNamespace::MainSystemInit::__get__tweeningManagerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManagerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__tweeningManagerPrefab(::Tweening::TimeTweeningManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tweeningManagerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BloomPrePassLightsUpdateSystem*& GlobalNamespace::MainSystemInit::__get__lightsUpdateSystemPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightsUpdateSystemPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassLightsUpdateSystem*> const& GlobalNamespace::MainSystemInit::__get__lightsUpdateSystemPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightsUpdateSystemPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__lightsUpdateSystemPrefab(::GlobalNamespace::BloomPrePassLightsUpdateSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightsUpdateSystemPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentAudioEffectsPlayer*& GlobalNamespace::MainSystemInit::__get__environmentAudioEffectsPlayerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentAudioEffectsPlayerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentAudioEffectsPlayer*> const& GlobalNamespace::MainSystemInit::__get__environmentAudioEffectsPlayerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentAudioEffectsPlayerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__environmentAudioEffectsPlayerPrefab(::GlobalNamespace::EnvironmentAudioEffectsPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentAudioEffectsPlayerPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::NodePoseSyncStateManager*& GlobalNamespace::MainSystemInit::__get__nodePoseSyncStateManagerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManagerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NodePoseSyncStateManager*> const& GlobalNamespace::MainSystemInit::__get__nodePoseSyncStateManagerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManagerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__nodePoseSyncStateManagerPrefab(::GlobalNamespace::NodePoseSyncStateManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodePoseSyncStateManagerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AlwaysOwnedContentContainerSO*& GlobalNamespace::MainSystemInit::__get__alwaysOwnedContentContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alwaysOwnedContentContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AlwaysOwnedContentContainerSO*> const& GlobalNamespace::MainSystemInit::__get__alwaysOwnedContentContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alwaysOwnedContentContainer;
}
constexpr void GlobalNamespace::MainSystemInit::__set__alwaysOwnedContentContainer(::GlobalNamespace::AlwaysOwnedContentContainerSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____alwaysOwnedContentContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PSVRHelper*& GlobalNamespace::MainSystemInit::__get__psVRHelperPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____psVRHelperPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PSVRHelper*> const& GlobalNamespace::MainSystemInit::__get__psVRHelperPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____psVRHelperPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__psVRHelperPrefab(::GlobalNamespace::PSVRHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____psVRHelperPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PSVR2Helper*& GlobalNamespace::MainSystemInit::__get__psVR2HelperPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____psVR2HelperPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PSVR2Helper*> const& GlobalNamespace::MainSystemInit::__get__psVR2HelperPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____psVR2HelperPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__psVR2HelperPrefab(::GlobalNamespace::PSVR2Helper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____psVR2HelperPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OculusVRHelper*& GlobalNamespace::MainSystemInit::__get__oculusVRHelperPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusVRHelperPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusVRHelper*> const& GlobalNamespace::MainSystemInit::__get__oculusVRHelperPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusVRHelperPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__oculusVRHelperPrefab(::GlobalNamespace::OculusVRHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____oculusVRHelperPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::UnityXRHelper*& GlobalNamespace::MainSystemInit::__get__unityXRHelperPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unityXRHelperPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::UnityXRHelper*> const& GlobalNamespace::MainSystemInit::__get__unityXRHelperPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unityXRHelperPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__unityXRHelperPrefab(::GlobalNamespace::UnityXRHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unityXRHelperPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::DevicelessVRHelper*& GlobalNamespace::MainSystemInit::__get__devicelessVRHelperPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devicelessVRHelperPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DevicelessVRHelper*> const& GlobalNamespace::MainSystemInit::__get__devicelessVRHelperPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devicelessVRHelperPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__devicelessVRHelperPrefab(::GlobalNamespace::DevicelessVRHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____devicelessVRHelperPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SteamLevelProductsModelSO*& GlobalNamespace::MainSystemInit::__get__steamLevelProductsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steamLevelProductsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SteamLevelProductsModelSO*> const& GlobalNamespace::MainSystemInit::__get__steamLevelProductsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steamLevelProductsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__set__steamLevelProductsModel(::GlobalNamespace::SteamLevelProductsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____steamLevelProductsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OculusLevelProductsModelSO*& GlobalNamespace::MainSystemInit::__get__oculusLevelProducsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusLevelProducsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusLevelProductsModelSO*> const& GlobalNamespace::MainSystemInit::__get__oculusLevelProducsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusLevelProducsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__set__oculusLevelProducsModel(::GlobalNamespace::OculusLevelProductsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____oculusLevelProducsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PS4LevelProductsModelSO*& GlobalNamespace::MainSystemInit::__get__ps4LevelProductsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4LevelProductsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS4LevelProductsModelSO*> const& GlobalNamespace::MainSystemInit::__get__ps4LevelProductsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4LevelProductsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__set__ps4LevelProductsModel(::GlobalNamespace::PS4LevelProductsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps4LevelProductsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PS5LevelProductsModelSO*& GlobalNamespace::MainSystemInit::__get__ps5LevelProductsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5LevelProductsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5LevelProductsModelSO*> const& GlobalNamespace::MainSystemInit::__get__ps5LevelProductsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5LevelProductsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__set__ps5LevelProductsModel(::GlobalNamespace::PS5LevelProductsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps5LevelProductsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PS4LeaderboardIdsModelSO*& GlobalNamespace::MainSystemInit::__get__ps4LeaderboardIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4LeaderboardIdsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS4LeaderboardIdsModelSO*> const& GlobalNamespace::MainSystemInit::__get__ps4LeaderboardIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4LeaderboardIdsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__set__ps4LeaderboardIdsModel(::GlobalNamespace::PS4LeaderboardIdsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps4LeaderboardIdsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PS5LeaderboardIdsModelSO*& GlobalNamespace::MainSystemInit::__get__ps5LeaderboardIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5LeaderboardIdsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5LeaderboardIdsModelSO*> const& GlobalNamespace::MainSystemInit::__get__ps5LeaderboardIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5LeaderboardIdsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__set__ps5LeaderboardIdsModel(::GlobalNamespace::PS5LeaderboardIdsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps5LeaderboardIdsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LeaderboardIdsModelSO*& GlobalNamespace::MainSystemInit::__get__riftLeaderboardIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____riftLeaderboardIdsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardIdsModelSO*> const& GlobalNamespace::MainSystemInit::__get__riftLeaderboardIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____riftLeaderboardIdsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__set__riftLeaderboardIdsModel(::GlobalNamespace::LeaderboardIdsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____riftLeaderboardIdsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LeaderboardIdsModelSO*& GlobalNamespace::MainSystemInit::__get__questLeaderboardIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____questLeaderboardIdsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardIdsModelSO*> const& GlobalNamespace::MainSystemInit::__get__questLeaderboardIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____questLeaderboardIdsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__set__questLeaderboardIdsModel(::GlobalNamespace::LeaderboardIdsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____questLeaderboardIdsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LeaderboardIdsModelSO*& GlobalNamespace::MainSystemInit::__get__steamLeaderboardIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steamLeaderboardIdsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardIdsModelSO*> const& GlobalNamespace::MainSystemInit::__get__steamLeaderboardIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steamLeaderboardIdsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__set__steamLeaderboardIdsModel(::GlobalNamespace::LeaderboardIdsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____steamLeaderboardIdsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RichPresenceManager*& GlobalNamespace::MainSystemInit::__get__richPresenceManagerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____richPresenceManagerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RichPresenceManager*> const& GlobalNamespace::MainSystemInit::__get__richPresenceManagerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____richPresenceManagerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__richPresenceManagerPrefab(::GlobalNamespace::RichPresenceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____richPresenceManagerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::DlcPromoPanelDataSO*& GlobalNamespace::MainSystemInit::__get__dlcPromoPanelData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelDataSO*> const& GlobalNamespace::MainSystemInit::__get__dlcPromoPanelData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelData;
}
constexpr void GlobalNamespace::MainSystemInit::__set__dlcPromoPanelData(::GlobalNamespace::DlcPromoPanelDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dlcPromoPanelData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsPromoDataSO*& GlobalNamespace::MainSystemInit::__get__beatmapLevelsPromoData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsPromoData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsPromoDataSO*> const& GlobalNamespace::MainSystemInit::__get__beatmapLevelsPromoData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsPromoData;
}
constexpr void GlobalNamespace::MainSystemInit::__set__beatmapLevelsPromoData(::GlobalNamespace::BeatmapLevelsPromoDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsPromoData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::NetworkConfigSO*& GlobalNamespace::MainSystemInit::__get__networkConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkConfigSO*> const& GlobalNamespace::MainSystemInit::__get__networkConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr void GlobalNamespace::MainSystemInit::__set__networkConfig(::GlobalNamespace::NetworkConfigSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____networkConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SteamNetworkPlayerModel*& GlobalNamespace::MainSystemInit::__get__steamNetworkPlayerModelPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steamNetworkPlayerModelPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SteamNetworkPlayerModel*> const& GlobalNamespace::MainSystemInit::__get__steamNetworkPlayerModelPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steamNetworkPlayerModelPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__steamNetworkPlayerModelPrefab(::GlobalNamespace::SteamNetworkPlayerModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____steamNetworkPlayerModelPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OculusNetworkPlayerModel*& GlobalNamespace::MainSystemInit::__get__oculusNetworkPlayerModelPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusNetworkPlayerModelPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusNetworkPlayerModel*> const& GlobalNamespace::MainSystemInit::__get__oculusNetworkPlayerModelPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusNetworkPlayerModelPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__oculusNetworkPlayerModelPrefab(::GlobalNamespace::OculusNetworkPlayerModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____oculusNetworkPlayerModelPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PS4NetworkPlayerModel*& GlobalNamespace::MainSystemInit::__get__ps4NetworkPlayerModelPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4NetworkPlayerModelPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS4NetworkPlayerModel*> const& GlobalNamespace::MainSystemInit::__get__ps4NetworkPlayerModelPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4NetworkPlayerModelPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__ps4NetworkPlayerModelPrefab(::GlobalNamespace::PS4NetworkPlayerModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps4NetworkPlayerModelPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PS5NetworkPlayerModel*& GlobalNamespace::MainSystemInit::__get__ps5NetworkPlayerModelPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5NetworkPlayerModelPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5NetworkPlayerModel*> const& GlobalNamespace::MainSystemInit::__get__ps5NetworkPlayerModelPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5NetworkPlayerModelPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__ps5NetworkPlayerModelPrefab(::GlobalNamespace::PS5NetworkPlayerModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps5NetworkPlayerModelPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollectionSO*& GlobalNamespace::MainSystemInit::__get__beatmapCharacteristicCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicCollection;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollectionSO*> const& GlobalNamespace::MainSystemInit::__get__beatmapCharacteristicCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicCollection;
}
constexpr void GlobalNamespace::MainSystemInit::__set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollectionSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCharacteristicCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LeaderboardScoreUploader*& GlobalNamespace::MainSystemInit::__get__leaderboardScoreUploader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardScoreUploader;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardScoreUploader*> const& GlobalNamespace::MainSystemInit::__get__leaderboardScoreUploader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardScoreUploader;
}
constexpr void GlobalNamespace::MainSystemInit::__set__leaderboardScoreUploader(::GlobalNamespace::LeaderboardScoreUploader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leaderboardScoreUploader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlatformLeaderboardsModel*& GlobalNamespace::MainSystemInit::__get__platformLeaderboardsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformLeaderboardsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlatformLeaderboardsModel*> const& GlobalNamespace::MainSystemInit::__get__platformLeaderboardsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformLeaderboardsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__set__platformLeaderboardsModel(::GlobalNamespace::PlatformLeaderboardsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformLeaderboardsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SonyAchievementIdsModelSO*& GlobalNamespace::MainSystemInit::__get__ps4AchievementIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4AchievementIdsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyAchievementIdsModelSO*> const& GlobalNamespace::MainSystemInit::__get__ps4AchievementIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4AchievementIdsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__set__ps4AchievementIdsModel(::GlobalNamespace::SonyAchievementIdsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps4AchievementIdsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SonyAchievementIdsModelSO*& GlobalNamespace::MainSystemInit::__get__ps5AchievmentIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5AchievmentIdsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyAchievementIdsModelSO*> const& GlobalNamespace::MainSystemInit::__get__ps5AchievmentIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5AchievmentIdsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__set__ps5AchievmentIdsModel(::GlobalNamespace::SonyAchievementIdsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps5AchievmentIdsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementIdsModelSO*& GlobalNamespace::MainSystemInit::__get__achievementIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementIdsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementIdsModelSO*> const& GlobalNamespace::MainSystemInit::__get__achievementIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementIdsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__set__achievementIdsModel(::GlobalNamespace::AchievementIdsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____achievementIdsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementsModelSO*& GlobalNamespace::MainSystemInit::__get__achievementsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementsModelSO*> const& GlobalNamespace::MainSystemInit::__get__achievementsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__set__achievementsModel(::GlobalNamespace::AchievementsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____achievementsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PS5ActivityIdsModelSO*& GlobalNamespace::MainSystemInit::__get__ps5ActivityIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5ActivityIdsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5ActivityIdsModelSO*> const& GlobalNamespace::MainSystemInit::__get__ps5ActivityIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5ActivityIdsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__set__ps5ActivityIdsModel(::GlobalNamespace::PS5ActivityIdsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps5ActivityIdsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelSO*& GlobalNamespace::MainSystemInit::__get__anyBeatmapLevelSO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anyBeatmapLevelSO;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelSO*> const& GlobalNamespace::MainSystemInit::__get__anyBeatmapLevelSO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anyBeatmapLevelSO;
}
constexpr void GlobalNamespace::MainSystemInit::__set__anyBeatmapLevelSO(::GlobalNamespace::BeatmapLevelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____anyBeatmapLevelSO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::CoroutineStarter*& GlobalNamespace::MainSystemInit::__get__coroutineStarter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coroutineStarter;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CoroutineStarter*> const& GlobalNamespace::MainSystemInit::__get__coroutineStarter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coroutineStarter;
}
constexpr void GlobalNamespace::MainSystemInit::__set__coroutineStarter(::GlobalNamespace::CoroutineStarter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____coroutineStarter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentCommandLineArgsProvider*& GlobalNamespace::MainSystemInit::__get__commandLineArgsProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandLineArgsProvider;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentCommandLineArgsProvider*> const& GlobalNamespace::MainSystemInit::__get__commandLineArgsProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandLineArgsProvider;
}
constexpr void GlobalNamespace::MainSystemInit::__set__commandLineArgsProvider(::GlobalNamespace::EnvironmentCommandLineArgsProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____commandLineArgsProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MenuTransitionsHelper*& GlobalNamespace::MainSystemInit::__get__menuTransitionHelperPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionHelperPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> const& GlobalNamespace::MainSystemInit::__get__menuTransitionHelperPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionHelperPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__set__menuTransitionHelperPrefab(::GlobalNamespace::MenuTransitionsHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuTransitionHelperPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::MainSystemInit::__get__defaultMaxCachedBeatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultMaxCachedBeatmapLevels;
}
constexpr int32_t const& GlobalNamespace::MainSystemInit::__get__defaultMaxCachedBeatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultMaxCachedBeatmapLevels;
}
constexpr void GlobalNamespace::MainSystemInit::__set__defaultMaxCachedBeatmapLevels(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultMaxCachedBeatmapLevels = value;
}
constexpr int32_t& GlobalNamespace::MainSystemInit::__get__ps4MaxCachedBeatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4MaxCachedBeatmapLevels;
}
constexpr int32_t const& GlobalNamespace::MainSystemInit::__get__ps4MaxCachedBeatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4MaxCachedBeatmapLevels;
}
constexpr void GlobalNamespace::MainSystemInit::__set__ps4MaxCachedBeatmapLevels(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ps4MaxCachedBeatmapLevels = value;
}
inline void GlobalNamespace::MainSystemInit::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "Init",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainSystemInit::InstallBindings(::Zenject::DiContainer* container, bool isRunningFromTests) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallBindings", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, isRunningFromTests);
}
inline void GlobalNamespace::MainSystemInit::InstallHapticsController(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallHapticsController", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline void GlobalNamespace::MainSystemInit::InstallRichPresence(::Zenject::DiContainer* container, bool isRunningFromTests) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallRichPresence", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, isRunningFromTests);
}
inline void GlobalNamespace::MainSystemInit::InstallOculusDestinationBindings(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallOculusDestinationBindings", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline void GlobalNamespace::MainSystemInit::InstallPlatformLeaderboardsModel(::Zenject::DiContainer* container, bool isRunningFromTests) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallPlatformLeaderboardsModel", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, isRunningFromTests);
}
inline void GlobalNamespace::MainSystemInit::InstallPS5Bindings(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallPS5Bindings", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline void GlobalNamespace::MainSystemInit::InstallPS4Bindings(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallPS4Bindings", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline ::GlobalNamespace::MainSystemInit* GlobalNamespace::MainSystemInit::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MainSystemInit*>());
}
inline void GlobalNamespace::MainSystemInit::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainSystemInit::MainSystemInit() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
