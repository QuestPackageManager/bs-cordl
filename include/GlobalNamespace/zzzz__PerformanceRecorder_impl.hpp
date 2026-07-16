#pragma once
// IWYU pragma private; include "GlobalNamespace/PerformanceRecorder.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PerformanceRecorder_def.hpp"
#include "BeatSaber/Automation/zzzz__RecPlayBehaviourState_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventRecorder_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventTweenRecorder_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectRecorder_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "GlobalNamespace/zzzz__IGamePause_def.hpp"
#include "GlobalNamespace/zzzz__OculusMetrics_def.hpp"
#include "GlobalNamespace/zzzz__OvrToolMetrics_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceConfigurationChecks_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceConfigurationStats_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__ProfilerMetrics_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.get_ReportDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PerformanceRecorder::*)()>(&::GlobalNamespace::PerformanceRecorder::get_ReportDescriptor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f3dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "get_ReportDescriptor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.set_ReportDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceRecorder::*)(::StringW)>(&::GlobalNamespace::PerformanceRecorder::set_ReportDescriptor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f3e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "set_ReportDescriptor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.get_StartEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PerformanceRecorder::*)()>(&::GlobalNamespace::PerformanceRecorder::get_StartEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f3e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "get_StartEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.set_StartEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceRecorder::*)(bool)>(&::GlobalNamespace::PerformanceRecorder::set_StartEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f3e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "set_StartEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.get_SettingsManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SettingsManager* (::GlobalNamespace::PerformanceRecorder::*)()>(
    &::GlobalNamespace::PerformanceRecorder::get_SettingsManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f3e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "get_SettingsManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.set_SettingsManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceRecorder::*)(::GlobalNamespace::SettingsManager*)>(
    &::GlobalNamespace::PerformanceRecorder::set_SettingsManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f3e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "set_SettingsManager", {}, { ::i2c::type_of<::GlobalNamespace::SettingsManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.get_PlayerSpecificSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerSpecificSettings* (::GlobalNamespace::PerformanceRecorder::*)()>(
    &::GlobalNamespace::PerformanceRecorder::get_PlayerSpecificSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f3e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "get_PlayerSpecificSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.set_PlayerSpecificSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceRecorder::*)(::GlobalNamespace::PlayerSpecificSettings*)>(
    &::GlobalNamespace::PerformanceRecorder::set_PlayerSpecificSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f3e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(),
                                                                                           { "set_PlayerSpecificSettings", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.get_GameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayModifierMask (::GlobalNamespace::PerformanceRecorder::*)()>(
    &::GlobalNamespace::PerformanceRecorder::get_GameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f3e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "get_GameplayModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.set_GameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceRecorder::*)(::GlobalNamespace::GameplayModifierMask)>(
    &::GlobalNamespace::PerformanceRecorder::set_GameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f3e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "set_GameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.get_RecPlayState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Automation::RecPlayBehaviourState* (::GlobalNamespace::PerformanceRecorder::*)()>(
    &::GlobalNamespace::PerformanceRecorder::get_RecPlayState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f3e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "get_RecPlayState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.set_RecPlayState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceRecorder::*)(::BeatSaber::Automation::RecPlayBehaviourState*)>(
    &::GlobalNamespace::PerformanceRecorder::set_RecPlayState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f3e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(),
                                                                                           { "set_RecPlayState", {}, { ::i2c::type_of<::BeatSaber::Automation::RecPlayBehaviourState*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.get_GamePause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IGamePause* (::GlobalNamespace::PerformanceRecorder::*)()>(&::GlobalNamespace::PerformanceRecorder::get_GamePause)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f3e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "get_GamePause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.set_GamePause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceRecorder::*)(::GlobalNamespace::IGamePause*)>(&::GlobalNamespace::PerformanceRecorder::set_GamePause)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f3e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "set_GamePause", {}, { ::i2c::type_of<::GlobalNamespace::IGamePause*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.get_SceneSetupData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayCoreSceneSetupData* (::GlobalNamespace::PerformanceRecorder::*)()>(
    &::GlobalNamespace::PerformanceRecorder::get_SceneSetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f3e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "get_SceneSetupData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.set_SceneSetupData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceRecorder::*)(::GlobalNamespace::GameplayCoreSceneSetupData*)>(
    &::GlobalNamespace::PerformanceRecorder::set_SceneSetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f3e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(),
                                                                                           { "set_SceneSetupData", {}, { ::i2c::type_of<::GlobalNamespace::GameplayCoreSceneSetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.get_ObjectManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapObjectManager* (::GlobalNamespace::PerformanceRecorder::*)()>(
    &::GlobalNamespace::PerformanceRecorder::get_ObjectManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f3e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "get_ObjectManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.set_ObjectManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceRecorder::*)(::GlobalNamespace::BeatmapObjectManager*)>(
    &::GlobalNamespace::PerformanceRecorder::set_ObjectManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f3e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "set_ObjectManager", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapObjectManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.get_CallbackController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapCallbacksController* (::GlobalNamespace::PerformanceRecorder::*)()>(
    &::GlobalNamespace::PerformanceRecorder::get_CallbackController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f3e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "get_CallbackController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.set_CallbackController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceRecorder::*)(::GlobalNamespace::BeatmapCallbacksController*)>(
    &::GlobalNamespace::PerformanceRecorder::set_CallbackController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f3e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(),
                                                                                           { "set_CallbackController", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.get_TimeSync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioTimeSyncController> (::GlobalNamespace::PerformanceRecorder::*)()>(
    &::GlobalNamespace::PerformanceRecorder::get_TimeSync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f3e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "get_TimeSync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.set_TimeSync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceRecorder::*)(::GlobalNamespace::AudioTimeSyncController*)>(
    &::GlobalNamespace::PerformanceRecorder::set_TimeSync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f3ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "set_TimeSync", {}, { ::i2c::type_of<::GlobalNamespace::AudioTimeSyncController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceRecorder::*)()>(&::GlobalNamespace::PerformanceRecorder::Awake)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58f3eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceRecorder::*)()>(&::GlobalNamespace::PerformanceRecorder::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f3eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceRecorder::*)()>(&::GlobalNamespace::PerformanceRecorder::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f3fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceRecorder::*)()>(&::GlobalNamespace::PerformanceRecorder::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f47fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.CollectFrameData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceRecorder::*)()>(&::GlobalNamespace::PerformanceRecorder::CollectFrameData)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x58f4800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "CollectFrameData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.ClearRecordingData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceRecorder::*)()>(&::GlobalNamespace::PerformanceRecorder::ClearRecordingData)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x58f3ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "ClearRecordingData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.GenerateReports
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceRecorder::*)()>(&::GlobalNamespace::PerformanceRecorder::GenerateReports)> {
  constexpr static std::size_t size = 0x80c;
  constexpr static std::size_t addrs = 0x58f3ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "GenerateReports", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder.WriteFileReport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::GlobalNamespace::PerformanceRecorder::WriteFileReport)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58f51d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "WriteFileReport", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceRecorder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceRecorder::*)()>(&::GlobalNamespace::PerformanceRecorder::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x58f57e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__ReportDescriptor_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReportDescriptor_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__ReportDescriptor_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReportDescriptor_k__BackingField;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__ReportDescriptor_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ReportDescriptor_k__BackingField = value;
}
constexpr bool& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__StartEnabled_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StartEnabled_k__BackingField;
}
constexpr bool const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__StartEnabled_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StartEnabled_k__BackingField;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__StartEnabled_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____StartEnabled_k__BackingField = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__SettingsManager_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SettingsManager_k__BackingField;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__SettingsManager_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SettingsManager_k__BackingField;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__SettingsManager_k__BackingField(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SettingsManager_k__BackingField = value;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__PlayerSpecificSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PlayerSpecificSettings_k__BackingField;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings* const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__PlayerSpecificSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PlayerSpecificSettings_k__BackingField;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__PlayerSpecificSettings_k__BackingField(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____PlayerSpecificSettings_k__BackingField = value;
}
constexpr ::GlobalNamespace::GameplayModifierMask& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__GameplayModifiers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GameplayModifiers_k__BackingField;
}
constexpr ::GlobalNamespace::GameplayModifierMask const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__GameplayModifiers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GameplayModifiers_k__BackingField;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__GameplayModifiers_k__BackingField(::GlobalNamespace::GameplayModifierMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____GameplayModifiers_k__BackingField = value;
}
constexpr ::BeatSaber::Automation::RecPlayBehaviourState*& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__RecPlayState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RecPlayState_k__BackingField;
}
constexpr ::BeatSaber::Automation::RecPlayBehaviourState* const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__RecPlayState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RecPlayState_k__BackingField;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__RecPlayState_k__BackingField(::BeatSaber::Automation::RecPlayBehaviourState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____RecPlayState_k__BackingField = value;
}
constexpr ::GlobalNamespace::IGamePause*& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__GamePause_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GamePause_k__BackingField;
}
constexpr ::GlobalNamespace::IGamePause* const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__GamePause_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GamePause_k__BackingField;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__GamePause_k__BackingField(::GlobalNamespace::IGamePause* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____GamePause_k__BackingField = value;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__SceneSetupData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SceneSetupData_k__BackingField;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__SceneSetupData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SceneSetupData_k__BackingField;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__SceneSetupData_k__BackingField(::GlobalNamespace::GameplayCoreSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SceneSetupData_k__BackingField = value;
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__ObjectManager_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ObjectManager_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapObjectManager* const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__ObjectManager_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ObjectManager_k__BackingField;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__ObjectManager_k__BackingField(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ObjectManager_k__BackingField = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__CallbackController_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CallbackController_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__CallbackController_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CallbackController_k__BackingField;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__CallbackController_k__BackingField(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CallbackController_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__TimeSync_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TimeSync_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__TimeSync_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TimeSync_k__BackingField;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__TimeSync_k__BackingField(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TimeSync_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__cpuTimes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cpuTimes;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__cpuTimes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cpuTimes;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__cpuTimes(::System::Collections::Generic::List_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cpuTimes = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__gpuTimes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gpuTimes;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__gpuTimes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gpuTimes;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__gpuTimes(::System::Collections::Generic::List_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gpuTimes = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__songTimes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimes;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__songTimes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimes;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__songTimes(::System::Collections::Generic::List_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songTimes = value;
}
constexpr ::GlobalNamespace::PerformanceConfigurationChecks*& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__configChecks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configChecks;
}
constexpr ::GlobalNamespace::PerformanceConfigurationChecks* const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__configChecks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configChecks;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__configChecks(::GlobalNamespace::PerformanceConfigurationChecks* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____configChecks = value;
}
constexpr ::GlobalNamespace::PerformanceConfigurationStats*& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__configStats() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configStats;
}
constexpr ::GlobalNamespace::PerformanceConfigurationStats* const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__configStats() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configStats;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__configStats(::GlobalNamespace::PerformanceConfigurationStats* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____configStats = value;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapDataItem*>& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__beatmapItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapItems;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapDataItem*> const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__beatmapItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapItems;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__beatmapItems(::ArrayW<::GlobalNamespace::BeatmapDataItem*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapItems = value;
}
constexpr ::GlobalNamespace::BeatmapObjectRecorder*& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__beatmapObjectRecorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectRecorder;
}
constexpr ::GlobalNamespace::BeatmapObjectRecorder* const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__beatmapObjectRecorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectRecorder;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__beatmapObjectRecorder(::GlobalNamespace::BeatmapObjectRecorder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectRecorder = value;
}
constexpr ::GlobalNamespace::BeatmapEventRecorder*& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__beatmapEventRecorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventRecorder;
}
constexpr ::GlobalNamespace::BeatmapEventRecorder* const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__beatmapEventRecorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventRecorder;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__beatmapEventRecorder(::GlobalNamespace::BeatmapEventRecorder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapEventRecorder = value;
}
constexpr ::GlobalNamespace::BeatmapEventTweenRecorder*& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__beatmapEventTweenRecorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventTweenRecorder;
}
constexpr ::GlobalNamespace::BeatmapEventTweenRecorder* const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__beatmapEventTweenRecorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventTweenRecorder;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__beatmapEventTweenRecorder(::GlobalNamespace::BeatmapEventTweenRecorder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapEventTweenRecorder = value;
}
constexpr ::GlobalNamespace::ProfilerMetrics*& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__profilerMetrics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____profilerMetrics;
}
constexpr ::GlobalNamespace::ProfilerMetrics* const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__profilerMetrics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____profilerMetrics;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__profilerMetrics(::GlobalNamespace::ProfilerMetrics* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____profilerMetrics = value;
}
constexpr ::GlobalNamespace::OculusMetrics*& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__oculusMetrics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusMetrics;
}
constexpr ::GlobalNamespace::OculusMetrics* const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__oculusMetrics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusMetrics;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__oculusMetrics(::GlobalNamespace::OculusMetrics* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____oculusMetrics = value;
}
constexpr ::GlobalNamespace::OvrToolMetrics*& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__ovrToolMetrics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ovrToolMetrics;
}
constexpr ::GlobalNamespace::OvrToolMetrics* const& GlobalNamespace::PerformanceRecorder::__cordl_internal_get__ovrToolMetrics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ovrToolMetrics;
}
constexpr void GlobalNamespace::PerformanceRecorder::__cordl_internal_set__ovrToolMetrics(::GlobalNamespace::OvrToolMetrics* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ovrToolMetrics = value;
}
inline ::StringW GlobalNamespace::PerformanceRecorder::get_ReportDescriptor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "get_ReportDescriptor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceRecorder::set_ReportDescriptor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "set_ReportDescriptor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PerformanceRecorder::get_StartEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "get_StartEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceRecorder::set_StartEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "set_StartEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SettingsManager* GlobalNamespace::PerformanceRecorder::get_SettingsManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "get_SettingsManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SettingsManager*>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceRecorder::set_SettingsManager(::GlobalNamespace::SettingsManager* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "set_SettingsManager", {}, { ::i2c::type_of<::GlobalNamespace::SettingsManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerSpecificSettings* GlobalNamespace::PerformanceRecorder::get_PlayerSpecificSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "get_PlayerSpecificSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettings*>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceRecorder::set_PlayerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(),
                                                                                         { "set_PlayerSpecificSettings", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameplayModifierMask GlobalNamespace::PerformanceRecorder::get_GameplayModifiers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "get_GameplayModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifierMask>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceRecorder::set_GameplayModifiers(::GlobalNamespace::GameplayModifierMask value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "set_GameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Automation::RecPlayBehaviourState* GlobalNamespace::PerformanceRecorder::get_RecPlayState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "get_RecPlayState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Automation::RecPlayBehaviourState*>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceRecorder::set_RecPlayState(::BeatSaber::Automation::RecPlayBehaviourState* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "set_RecPlayState", {}, { ::i2c::type_of<::BeatSaber::Automation::RecPlayBehaviourState*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IGamePause* GlobalNamespace::PerformanceRecorder::get_GamePause() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "get_GamePause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IGamePause*>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceRecorder::set_GamePause(::GlobalNamespace::IGamePause* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "set_GamePause", {}, { ::i2c::type_of<::GlobalNamespace::IGamePause*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameplayCoreSceneSetupData* GlobalNamespace::PerformanceRecorder::get_SceneSetupData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "get_SceneSetupData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayCoreSceneSetupData*>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceRecorder::set_SceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(),
                                                                                         { "set_SceneSetupData", {}, { ::i2c::type_of<::GlobalNamespace::GameplayCoreSceneSetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapObjectManager* GlobalNamespace::PerformanceRecorder::get_ObjectManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "get_ObjectManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectManager*>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceRecorder::set_ObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "set_ObjectManager", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapObjectManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapCallbacksController* GlobalNamespace::PerformanceRecorder::get_CallbackController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "get_CallbackController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCallbacksController*>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceRecorder::set_CallbackController(::GlobalNamespace::BeatmapCallbacksController* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(),
                                                                                         { "set_CallbackController", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::AudioTimeSyncController> GlobalNamespace::PerformanceRecorder::get_TimeSync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "get_TimeSync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioTimeSyncController>>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceRecorder::set_TimeSync(::GlobalNamespace::AudioTimeSyncController* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "set_TimeSync", {}, { ::i2c::type_of<::GlobalNamespace::AudioTimeSyncController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PerformanceRecorder::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceRecorder::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceRecorder::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceRecorder::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceRecorder::CollectFrameData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "CollectFrameData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceRecorder::ClearRecordingData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "ClearRecordingData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceRecorder::GenerateReports() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "GenerateReports", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PerformanceRecorder::WriteFileReport(::StringW path, ::StringW contents) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { "WriteFileReport", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, contents);
}
inline void GlobalNamespace::PerformanceRecorder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceRecorder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PerformanceRecorder* GlobalNamespace::PerformanceRecorder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerformanceRecorder*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceRecorder::PerformanceRecorder() {}
