#pragma once
// IWYU pragma private; include "GlobalNamespace\MainSystemInit.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MainSystemInit_def.hpp"
#include "BeatSaber/Destinations/zzzz__Destination_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticFeedbackManager_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerConfigSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsPromoDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLightsUpdateSystem_def.hpp"
#include "GlobalNamespace/zzzz__CampaignProgressModel_def.hpp"
#include "GlobalNamespace/zzzz__CoroutineStarter_def.hpp"
#include "GlobalNamespace/zzzz__CustomLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__DeterminismConfig_def.hpp"
#include "GlobalNamespace/zzzz__DevicelessVRHelper_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelDataSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentAudioEffectsPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GameLiftNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardIdsModel_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardScoreUploader_def.hpp"
#include "GlobalNamespace/zzzz__LocalServerNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__MainSystemInit_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerEntitlementChecker_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateManager_def.hpp"
#include "GlobalNamespace/zzzz__OculusLevelProductCollectionModel_def.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelModel_def.hpp"
#include "GlobalNamespace/zzzz__PersistentAudioNoiseController_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataFileManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__ResettableRandom_def.hpp"
#include "GlobalNamespace/zzzz__RichPresenceManager_def.hpp"
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModelSO_def.hpp"
#include "GlobalNamespace/zzzz__TimeHelper_def.hpp"
#include "GlobalNamespace/zzzz__UnityXRHelper_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSystemInit___c::*)()>(&::GlobalNamespace::MainSystemInit___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3777274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit___c._InstallBindings_b__27_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ResettableRandom* (::GlobalNamespace::MainSystemInit___c::*)(::Zenject::InjectContext*)>(
    &::GlobalNamespace::MainSystemInit___c::_InstallBindings_b__27_1)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3777278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit___c*>(), { "<InstallBindings>b__27_1", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit___c._InstallBindings_b__27_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PerceivedLoudnessPerLevelModel* (
    ::GlobalNamespace::MainSystemInit___c::*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*)>(
    &::GlobalNamespace::MainSystemInit___c::_InstallBindings_b__27_2)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3777378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit___c*>(),
                                         { "<InstallBindings>b__27_2", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit___c._InstallBindings_b__27_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OculusLevelProductCollectionModel* (
    ::GlobalNamespace::MainSystemInit___c::*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*)>(
    &::GlobalNamespace::MainSystemInit___c::_InstallBindings_b__27_3)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x37773ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit___c*>(),
                                         { "<InstallBindings>b__27_3", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit___c._InstallPlatformLeaderboardsModel_b__30_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LeaderboardIdsModel* (::GlobalNamespace::MainSystemInit___c::*)(::GlobalNamespace::BeatmapLevelsModel*)>(
    &::GlobalNamespace::MainSystemInit___c::_InstallPlatformLeaderboardsModel_b__30_0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3777460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit___c*>(),
                                                             { "<InstallPlatformLeaderboardsModel>b__30_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MainSystemInit___c::setStaticF___9(::GlobalNamespace::MainSystemInit___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MainSystemInit___c*, "<>9", ::GlobalNamespace::MainSystemInit___c*>(std::forward<::GlobalNamespace::MainSystemInit___c*>(value));
}
inline ::GlobalNamespace::MainSystemInit___c* GlobalNamespace::MainSystemInit___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MainSystemInit___c*, "<>9", ::GlobalNamespace::MainSystemInit___c*>();
}
inline void GlobalNamespace::MainSystemInit___c::setStaticF___9__27_1(::System::Func_2<::Zenject::InjectContext*, ::GlobalNamespace::ResettableRandom*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::InjectContext*, ::GlobalNamespace::ResettableRandom*>*, "<>9__27_1", ::GlobalNamespace::MainSystemInit___c*>(
      std::forward<::System::Func_2<::Zenject::InjectContext*, ::GlobalNamespace::ResettableRandom*>*>(value));
}
inline ::System::Func_2<::Zenject::InjectContext*, ::GlobalNamespace::ResettableRandom*>* GlobalNamespace::MainSystemInit___c::getStaticF___9__27_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::InjectContext*, ::GlobalNamespace::ResettableRandom*>*, "<>9__27_1", ::GlobalNamespace::MainSystemInit___c*>();
}
inline void GlobalNamespace::MainSystemInit___c::setStaticF___9__27_2(
    ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::PerceivedLoudnessPerLevelModel*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::PerceivedLoudnessPerLevelModel*>*, "<>9__27_2",
      ::GlobalNamespace::MainSystemInit___c*>(
      std::forward<::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::PerceivedLoudnessPerLevelModel*>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::PerceivedLoudnessPerLevelModel*>*
GlobalNamespace::MainSystemInit___c::getStaticF___9__27_2() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::PerceivedLoudnessPerLevelModel*>*, "<>9__27_2",
      ::GlobalNamespace::MainSystemInit___c*>();
}
inline void GlobalNamespace::MainSystemInit___c::setStaticF___9__27_3(
    ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::OculusLevelProductCollectionModel*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::OculusLevelProductCollectionModel*>*, "<>9__27_3",
      ::GlobalNamespace::MainSystemInit___c*>(
      std::forward<::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::OculusLevelProductCollectionModel*>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::OculusLevelProductCollectionModel*>*
GlobalNamespace::MainSystemInit___c::getStaticF___9__27_3() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::OculusLevelProductCollectionModel*>*, "<>9__27_3",
      ::GlobalNamespace::MainSystemInit___c*>();
}
inline void GlobalNamespace::MainSystemInit___c::setStaticF___9__30_0(::System::Func_2<::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::LeaderboardIdsModel*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::LeaderboardIdsModel*>*, "<>9__30_0", ::GlobalNamespace::MainSystemInit___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::LeaderboardIdsModel*>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::LeaderboardIdsModel*>* GlobalNamespace::MainSystemInit___c::getStaticF___9__30_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::LeaderboardIdsModel*>*, "<>9__30_0", ::GlobalNamespace::MainSystemInit___c*>();
}
inline void GlobalNamespace::MainSystemInit___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ResettableRandom* GlobalNamespace::MainSystemInit___c::_InstallBindings_b__27_1(::Zenject::InjectContext* ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit___c*>(), { "<InstallBindings>b__27_1", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ResettableRandom*>(this, ___internal_method, ctx);
}
inline ::GlobalNamespace::PerceivedLoudnessPerLevelModel*
GlobalNamespace::MainSystemInit___c::_InstallBindings_b__27_2(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit___c*>(),
                                       { "<InstallBindings>b__27_2", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>(this, ___internal_method, packDefinitions);
}
inline ::GlobalNamespace::OculusLevelProductCollectionModel*
GlobalNamespace::MainSystemInit___c::_InstallBindings_b__27_3(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit___c*>(),
                                       { "<InstallBindings>b__27_3", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OculusLevelProductCollectionModel*>(this, ___internal_method, packDefinitions);
}
inline ::GlobalNamespace::LeaderboardIdsModel* GlobalNamespace::MainSystemInit___c::_InstallPlatformLeaderboardsModel_b__30_0(::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit___c*>(),
                                                           { "<InstallPlatformLeaderboardsModel>b__30_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LeaderboardIdsModel*>(this, ___internal_method, beatmapLevelsModel);
}
inline ::GlobalNamespace::MainSystemInit___c* GlobalNamespace::MainSystemInit___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainSystemInit___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainSystemInit___c::MainSystemInit___c() {}
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit___c__DisplayClass27_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSystemInit___c__DisplayClass27_0::*)()>(&::GlobalNamespace::MainSystemInit___c__DisplayClass27_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3776d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit___c__DisplayClass27_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit___c__DisplayClass27_0._InstallBindings_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DeterminismConfig* (::GlobalNamespace::MainSystemInit___c__DisplayClass27_0::*)(::GlobalNamespace::TimeHelper*)>(
    &::GlobalNamespace::MainSystemInit___c__DisplayClass27_0::_InstallBindings_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x37774dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit___c__DisplayClass27_0*>(),
                                                                                           { "<InstallBindings>b__0", {}, { ::i2c::type_of<::GlobalNamespace::TimeHelper*>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::MainSystemInit___c__DisplayClass27_0::__cordl_internal_get_isRunningFromTests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRunningFromTests;
}
constexpr bool const& GlobalNamespace::MainSystemInit___c__DisplayClass27_0::__cordl_internal_get_isRunningFromTests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRunningFromTests;
}
constexpr void GlobalNamespace::MainSystemInit___c__DisplayClass27_0::__cordl_internal_set_isRunningFromTests(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isRunningFromTests = value;
}
inline void GlobalNamespace::MainSystemInit___c__DisplayClass27_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit___c__DisplayClass27_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DeterminismConfig* GlobalNamespace::MainSystemInit___c__DisplayClass27_0::_InstallBindings_b__0(::GlobalNamespace::TimeHelper* timeHelper) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit___c__DisplayClass27_0*>(),
                                                                                         { "<InstallBindings>b__0", {}, { ::i2c::type_of<::GlobalNamespace::TimeHelper*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DeterminismConfig*>(this, ___internal_method, timeHelper);
}
inline ::GlobalNamespace::MainSystemInit___c__DisplayClass27_0* GlobalNamespace::MainSystemInit___c__DisplayClass27_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainSystemInit___c__DisplayClass27_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainSystemInit___c__DisplayClass27_0::MainSystemInit___c__DisplayClass27_0() {}
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::GlobalNamespace::SettingsApplicatorSO*)>(&::GlobalNamespace::MainSystemInit::Init)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x376d400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::SettingsApplicatorSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*, ::BeatSaber::Destinations::Destination*)>(
    &::GlobalNamespace::MainSystemInit::InstallBindings)> {
  constexpr static std::size_t size = 0x1e8c;
  constexpr static std::size_t addrs = 0x376ddf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit*>(),
                                                             { "InstallBindings", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::BeatSaber::Destinations::Destination*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallRichPresence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*, bool)>(&::GlobalNamespace::MainSystemInit::InstallRichPresence)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x3776e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit*>(), { "InstallRichPresence", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallOculusDestinationBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::MainSystemInit::InstallOculusDestinationBindings)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3776d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit*>(), { "InstallOculusDestinationBindings", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallPlatformLeaderboardsModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*, bool)>(
    &::GlobalNamespace::MainSystemInit::InstallPlatformLeaderboardsModel)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x3776f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit*>(), { "InstallPlatformLeaderboardsModel", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSystemInit::*)()>(&::GlobalNamespace::MainSystemInit::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3777214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SongPackMasksModelSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__songPackMasksModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMasksModel;
}
constexpr ::UnityW<::GlobalNamespace::SongPackMasksModelSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__songPackMasksModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMasksModel;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__songPackMasksModel(::UnityW<::GlobalNamespace::SongPackMasksModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songPackMasksModel = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataFileManagerSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__playerDataFileManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataFileManager;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataFileManagerSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__playerDataFileManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataFileManager;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__playerDataFileManager(::UnityW<::GlobalNamespace::PlayerDataFileManagerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataFileManager = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::MainSystemInit::__cordl_internal_get__playerDataModelPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModelPrefab;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__playerDataModelPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModelPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__playerDataModelPrefab(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModelPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::CampaignProgressModel>& GlobalNamespace::MainSystemInit::__cordl_internal_get__campaignProgressModelPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____campaignProgressModelPrefab;
}
constexpr ::UnityW<::GlobalNamespace::CampaignProgressModel> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__campaignProgressModelPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____campaignProgressModelPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__campaignProgressModelPrefab(::UnityW<::GlobalNamespace::CampaignProgressModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____campaignProgressModelPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomLevelLoader>& GlobalNamespace::MainSystemInit::__cordl_internal_get__customLevelLoaderPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customLevelLoaderPrefab;
}
constexpr ::UnityW<::GlobalNamespace::CustomLevelLoader> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__customLevelLoaderPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customLevelLoaderPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__customLevelLoaderPrefab(::UnityW<::GlobalNamespace::CustomLevelLoader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____customLevelLoaderPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatSaberMultiplayerSessionManager>& GlobalNamespace::MainSystemInit::__cordl_internal_get__multiplayerSessionManagerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManagerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::BeatSaberMultiplayerSessionManager> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__multiplayerSessionManagerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManagerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__multiplayerSessionManagerPrefab(::UnityW<::GlobalNamespace::BeatSaberMultiplayerSessionManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManagerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel>& GlobalNamespace::MainSystemInit::__cordl_internal_get__gameLiftNetworkPlayerModelPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameLiftNetworkPlayerModelPrefab;
}
constexpr ::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__gameLiftNetworkPlayerModelPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameLiftNetworkPlayerModelPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__gameLiftNetworkPlayerModelPrefab(::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameLiftNetworkPlayerModelPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalServerNetworkPlayerModel>& GlobalNamespace::MainSystemInit::__cordl_internal_get__localServerNetworkPlayerModelPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localServerNetworkPlayerModelPrefab;
}
constexpr ::UnityW<::GlobalNamespace::LocalServerNetworkPlayerModel> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__localServerNetworkPlayerModelPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localServerNetworkPlayerModelPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__localServerNetworkPlayerModelPrefab(::UnityW<::GlobalNamespace::LocalServerNetworkPlayerModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localServerNetworkPlayerModelPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker>& GlobalNamespace::MainSystemInit::__cordl_internal_get__networkPlayerEntitlementCheckerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkPlayerEntitlementCheckerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__networkPlayerEntitlementCheckerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkPlayerEntitlementCheckerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__networkPlayerEntitlementCheckerPrefab(::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____networkPlayerEntitlementCheckerPrefab = value;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager>& GlobalNamespace::MainSystemInit::__cordl_internal_get__tweeningManagerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManagerPrefab;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__tweeningManagerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManagerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__tweeningManagerPrefab(::UnityW<::Tweening::TimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tweeningManagerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightsUpdateSystem>& GlobalNamespace::MainSystemInit::__cordl_internal_get__lightsUpdateSystemPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightsUpdateSystemPrefab;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightsUpdateSystem> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__lightsUpdateSystemPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightsUpdateSystemPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__lightsUpdateSystemPrefab(::UnityW<::GlobalNamespace::BloomPrePassLightsUpdateSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightsUpdateSystemPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer>& GlobalNamespace::MainSystemInit::__cordl_internal_get__environmentAudioEffectsPlayerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentAudioEffectsPlayerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__environmentAudioEffectsPlayerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentAudioEffectsPlayerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__environmentAudioEffectsPlayerPrefab(::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentAudioEffectsPlayerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::NodePoseSyncStateManager>& GlobalNamespace::MainSystemInit::__cordl_internal_get__nodePoseSyncStateManagerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManagerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::NodePoseSyncStateManager> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__nodePoseSyncStateManagerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManagerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__nodePoseSyncStateManagerPrefab(::UnityW<::GlobalNamespace::NodePoseSyncStateManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodePoseSyncStateManagerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::UnityXRHelper>& GlobalNamespace::MainSystemInit::__cordl_internal_get__unityXRHelperPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unityXRHelperPrefab;
}
constexpr ::UnityW<::GlobalNamespace::UnityXRHelper> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__unityXRHelperPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unityXRHelperPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__unityXRHelperPrefab(::UnityW<::GlobalNamespace::UnityXRHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unityXRHelperPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::DevicelessVRHelper>& GlobalNamespace::MainSystemInit::__cordl_internal_get__devicelessVRHelperPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devicelessVRHelperPrefab;
}
constexpr ::UnityW<::GlobalNamespace::DevicelessVRHelper> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__devicelessVRHelperPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devicelessVRHelperPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__devicelessVRHelperPrefab(::UnityW<::GlobalNamespace::DevicelessVRHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____devicelessVRHelperPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::RichPresenceManager>& GlobalNamespace::MainSystemInit::__cordl_internal_get__richPresenceManagerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____richPresenceManagerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::RichPresenceManager> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__richPresenceManagerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____richPresenceManagerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__richPresenceManagerPrefab(::UnityW<::GlobalNamespace::RichPresenceManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____richPresenceManagerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__dlcPromoPanelData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelData;
}
constexpr ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__dlcPromoPanelData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelData;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__dlcPromoPanelData(::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dlcPromoPanelData = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__beatmapLevelsPromoData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsPromoData;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__beatmapLevelsPromoData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsPromoData;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__beatmapLevelsPromoData(::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsPromoData = value;
}
constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader>& GlobalNamespace::MainSystemInit::__cordl_internal_get__leaderboardScoreUploader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardScoreUploader;
}
constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__leaderboardScoreUploader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardScoreUploader;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__leaderboardScoreUploader(::UnityW<::GlobalNamespace::LeaderboardScoreUploader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leaderboardScoreUploader = value;
}
constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel>& GlobalNamespace::MainSystemInit::__cordl_internal_get__platformLeaderboardsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformLeaderboardsModel;
}
constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__platformLeaderboardsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformLeaderboardsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__platformLeaderboardsModel(::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platformLeaderboardsModel = value;
}
constexpr ::UnityW<::GlobalNamespace::CoroutineStarter>& GlobalNamespace::MainSystemInit::__cordl_internal_get__coroutineStarter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coroutineStarter;
}
constexpr ::UnityW<::GlobalNamespace::CoroutineStarter> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__coroutineStarter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coroutineStarter;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__coroutineStarter(::UnityW<::GlobalNamespace::CoroutineStarter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____coroutineStarter = value;
}
constexpr int32_t& GlobalNamespace::MainSystemInit::__cordl_internal_get__defaultMaxCachedBeatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultMaxCachedBeatmapLevels;
}
constexpr int32_t const& GlobalNamespace::MainSystemInit::__cordl_internal_get__defaultMaxCachedBeatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultMaxCachedBeatmapLevels;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__defaultMaxCachedBeatmapLevels(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultMaxCachedBeatmapLevels = value;
}
constexpr ::UnityW<::GlobalNamespace::PersistentAudioNoiseController>& GlobalNamespace::MainSystemInit::__cordl_internal_get__persistentAudioNoisePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____persistentAudioNoisePrefab;
}
constexpr ::UnityW<::GlobalNamespace::PersistentAudioNoiseController> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__persistentAudioNoisePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____persistentAudioNoisePrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__persistentAudioNoisePrefab(::UnityW<::GlobalNamespace::PersistentAudioNoiseController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____persistentAudioNoisePrefab = value;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager>& GlobalNamespace::MainSystemInit::__cordl_internal_get__hapticFeedbackControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackControllerPrefab;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__hapticFeedbackControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackControllerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__hapticFeedbackControllerPrefab(::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticFeedbackControllerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioManagerConfigSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__audioManagerConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManagerConfig;
}
constexpr ::UnityW<::GlobalNamespace::AudioManagerConfigSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__audioManagerConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManagerConfig;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__audioManagerConfig(::UnityW<::GlobalNamespace::AudioManagerConfigSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioManagerConfig = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::MainSystemInit::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::MainSystemInit::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
inline void GlobalNamespace::MainSystemInit::Init(::GlobalNamespace::SettingsApplicatorSO* settingsApplicator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::SettingsApplicatorSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settingsApplicator);
}
inline void GlobalNamespace::MainSystemInit::InstallBindings(::Zenject::DiContainer* container, ::BeatSaber::Destinations::Destination* destination) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit*>(),
                                                           { "InstallBindings", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::BeatSaber::Destinations::Destination*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, destination);
}
inline void GlobalNamespace::MainSystemInit::InstallRichPresence(::Zenject::DiContainer* container, bool isRunningFromTests) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit*>(), { "InstallRichPresence", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, isRunningFromTests);
}
inline void GlobalNamespace::MainSystemInit::InstallOculusDestinationBindings(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit*>(), { "InstallOculusDestinationBindings", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void GlobalNamespace::MainSystemInit::InstallPlatformLeaderboardsModel(::Zenject::DiContainer* container, bool isRunningFromTests) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit*>(), { "InstallPlatformLeaderboardsModel", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, isRunningFromTests);
}
inline void GlobalNamespace::MainSystemInit::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSystemInit*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainSystemInit* GlobalNamespace::MainSystemInit::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainSystemInit*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainSystemInit::MainSystemInit() {}
