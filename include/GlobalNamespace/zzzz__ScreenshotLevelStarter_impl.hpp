#pragma once
// IWYU pragma private; include "GlobalNamespace/ScreenshotLevelStarter.hpp"
#include "BeatSaber/Settings/zzzz__Settings_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ScreenshotLevelStarter_def.hpp"
#include "BeatSaber/Init/zzzz__GameVersionProvider_def.hpp"
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__DeterminismConfig_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__ICoroutineStarter_def.hpp"
#include "GlobalNamespace/zzzz__ILevelEndActions_def.hpp"
#include "GlobalNamespace/zzzz__IRenderingParamsApplicator_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__PauseController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__ScreenshotLevelStarter_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "GlobalNamespace/zzzz__TimeHelper_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__WaitForEndOfFrame_def.hpp"
// Ctor Parameters [CppParam { name: "framerate", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "screenshotPeriod", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "overwriteExistingFolder", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Settings::RunScreenshotLevelData_ScreenshotLevelStarter_Settings(int32_t framerate, float_t screenshotPeriod,
                                                                                                                                            bool overwriteExistingFolder) noexcept {
  this->framerate = framerate;
  this->screenshotPeriod = screenshotPeriod;
  this->overwriteExistingFolder = overwriteExistingFolder;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Settings::RunScreenshotLevelData_ScreenshotLevelStarter_Settings() {}
//  Writing Method size for method: ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey::*)(
    ::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5722878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey.ToBeatmapKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapKey (::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey::*)(::GlobalNamespace::BeatmapLevelsModel*)>(
        &::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey::ToBeatmapKey)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x572343c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey>::get(), "ToBeatmapKey",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsModel*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey::_ctor(::StringW levelId, ::StringW characteristic, ::StringW difficulty) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelId, characteristic, difficulty);
}
inline ::GlobalNamespace::BeatmapKey GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey::ToBeatmapKey(::GlobalNamespace::BeatmapLevelsModel* beatmapLevels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey>::get(), "ToBeatmapKey",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey, false>(this, ___internal_method, beatmapLevels);
}
// Ctor Parameters [CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "characteristic", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "difficulty", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey(::StringW levelId,
                                                                                                                                                                    ::StringW characteristic,
                                                                                                                                                                    ::StringW difficulty) noexcept {
  this->levelId = levelId;
  this->characteristic = characteristic;
  this->difficulty = difficulty;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey() {}
// Ctor Parameters [CppParam { name: "beatmapKey", ty: "::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "screenshotTimes", ty: "::System::Collections::Generic::List_1<float_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "overrideGlobalSettings", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "settings", ty: "::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Settings", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "differenceThreshold", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command::RunScreenshotLevelData_ScreenshotLevelStarter_Command(
    ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_SerializedBeatmapKey beatmapKey, ::System::Collections::Generic::List_1<float_t>* screenshotTimes, bool overrideGlobalSettings,
    ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Settings settings, float_t differenceThreshold) noexcept {
  this->beatmapKey = beatmapKey;
  this->screenshotTimes = screenshotTimes;
  this->overrideGlobalSettings = overrideGlobalSettings;
  this->settings = settings;
  this->differenceThreshold = differenceThreshold;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command::RunScreenshotLevelData_ScreenshotLevelStarter_Command() {}
//  Writing Method size for method: ::GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0::*)()>(
        &::GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57238c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0._ToBeatmapKey_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0::*)(
    ::GlobalNamespace::BeatmapCharacteristicSO*)>(&::GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0::_ToBeatmapKey_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57238c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0*>::get(),
        "<ToBeatmapKey>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0::__cordl_internal_get_localCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localCharacteristic;
}
constexpr ::StringW const& GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0::__cordl_internal_get_localCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localCharacteristic;
}
constexpr void GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0::__cordl_internal_set_localCharacteristic(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localCharacteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0::_ToBeatmapKey_b__0(::GlobalNamespace::BeatmapCharacteristicSO* characteristicSO) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0*>::get(), "<ToBeatmapKey>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, characteristicSO);
}
inline ::GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0*
GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0::
    SerializedBeatmapKey_RunScreenshotLevelData_ScreenshotLevelStarter___c__DisplayClass4_0() {}
// Ctor Parameters [CppParam { name: "command", ty: "::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command", modifiers: "", def_value: Some("{}") }, CppParam { name: "gameSettings",
// ty: "::BeatSaber::Settings::Settings", modifiers: "", def_value: Some("{}") }, CppParam { name: "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_FolderMetadata::RunScreenshotLevelData_ScreenshotLevelStarter_FolderMetadata(
    ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command command, ::BeatSaber::Settings::Settings gameSettings, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers) noexcept {
  this->command = command;
  this->gameSettings = gameSettings;
  this->playerSpecificSettings = playerSpecificSettings;
  this->gameplayModifiers = gameplayModifiers;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_FolderMetadata::RunScreenshotLevelData_ScreenshotLevelStarter_FolderMetadata() {}
// Ctor Parameters [CppParam { name: "deviceUID", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "deviceName", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "deviceType", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "devicePlatform", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "deviceModel", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_DeviceMetadata::RunScreenshotLevelData_ScreenshotLevelStarter_DeviceMetadata(::StringW deviceUID, ::StringW deviceName,
                                                                                                                                                        ::StringW deviceType, ::StringW devicePlatform,
                                                                                                                                                        ::StringW deviceModel) noexcept {
  this->deviceUID = deviceUID;
  this->deviceName = deviceName;
  this->deviceType = deviceType;
  this->devicePlatform = devicePlatform;
  this->deviceModel = deviceModel;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_DeviceMetadata::RunScreenshotLevelData_ScreenshotLevelStarter_DeviceMetadata() {}
// Ctor Parameters [CppParam { name: "gameVersion", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_BuildSpecificMetadata::RunScreenshotLevelData_ScreenshotLevelStarter_BuildSpecificMetadata(::StringW gameVersion) noexcept {
  this->gameVersion = gameVersion;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_BuildSpecificMetadata::RunScreenshotLevelData_ScreenshotLevelStarter_BuildSpecificMetadata() {}
// Ctor Parameters [CppParam { name: "globalScreenshotSettings", ty: "::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Settings", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "screenshotLevels", ty:
// "::ArrayW<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command,::Array<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command>*>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::ScreenshotLevelStarter_RunScreenshotLevelData::ScreenshotLevelStarter_RunScreenshotLevelData(
    ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Settings globalScreenshotSettings,
    ::ArrayW<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command, ::Array<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command>*> screenshotLevels) noexcept {
  this->globalScreenshotSettings = globalScreenshotSettings;
  this->screenshotLevels = screenshotLevels;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenshotLevelStarter_RunScreenshotLevelData::ScreenshotLevelStarter_RunScreenshotLevelData() {}
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::*)()>(
    &::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57238e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0._RunScreenshotLevel_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::*)()>(
    &::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::_RunScreenshotLevel_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x57238e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0*>::get(),
                                                 "<RunScreenshotLevel>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0._RunScreenshotLevel_g__HandleLevelEnded_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::*)()>(
    &::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::_RunScreenshotLevel_g__HandleLevelEnded_1)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5723904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0*>::get(),
                                                 "<RunScreenshotLevel>g__HandleLevelEnded|1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0._RunScreenshotLevel_g__GetNextScreenshotTime_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::*)()>(
    &::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::_RunScreenshotLevel_g__GetNextScreenshotTime_2)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5723a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0*>::get(),
                                                 "<RunScreenshotLevel>g__GetNextScreenshotTime|2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::__cordl_internal_get_audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::__cordl_internal_get_audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioTimeSyncController;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::__cordl_internal_set_audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PauseController>& GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::__cordl_internal_get_pauseController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pauseController;
}
constexpr ::UnityW<::GlobalNamespace::PauseController> const& GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::__cordl_internal_get_pauseController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pauseController;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::__cordl_internal_set_pauseController(::UnityW<::GlobalNamespace::PauseController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pauseController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ScreenshotLevelStarter*& GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::ScreenshotLevelStarter* const& GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::__cordl_internal_set___4__this(::GlobalNamespace::ScreenshotLevelStarter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::__cordl_internal_get_originalFixedDeltaTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalFixedDeltaTime;
}
constexpr float_t const& GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::__cordl_internal_get_originalFixedDeltaTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalFixedDeltaTime;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::__cordl_internal_set_originalFixedDeltaTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___originalFixedDeltaTime = value;
}
constexpr bool& GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::__cordl_internal_get_levelEnded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelEnded;
}
constexpr bool const& GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::__cordl_internal_get_levelEnded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelEnded;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::__cordl_internal_set_levelEnded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelEnded = value;
}
constexpr ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command& GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::__cordl_internal_get_command() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___command;
}
constexpr ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command const& GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::__cordl_internal_get_command() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___command;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::__cordl_internal_set_command(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___command = value;
}
constexpr int32_t& GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::__cordl_internal_get_nextScreenshotTimeIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextScreenshotTimeIndex;
}
constexpr int32_t const& GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::__cordl_internal_get_nextScreenshotTimeIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextScreenshotTimeIndex;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::__cordl_internal_set_nextScreenshotTimeIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextScreenshotTimeIndex = value;
}
inline void GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::_RunScreenshotLevel_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0*>::get(),
                                               "<RunScreenshotLevel>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::_RunScreenshotLevel_g__HandleLevelEnded_1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0*>::get(),
                                               "<RunScreenshotLevel>g__HandleLevelEnded|1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::_RunScreenshotLevel_g__GetNextScreenshotTime_2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0*>::get(),
                                               "<RunScreenshotLevel>g__GetNextScreenshotTime|2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0* GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0::ScreenshotLevelStarter___c__DisplayClass46_0() {}
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1::*)()>(
    &::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5723b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1._RunScreenshotLevel_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1::*)()>(
    &::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1::_RunScreenshotLevel_b__3)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5723b10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1*>::get(),
                                                 "<RunScreenshotLevel>b__3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>*& GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1::__cordl_internal_get_versionTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versionTask;
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>* const&
GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1::__cordl_internal_get_versionTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versionTask;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1::__cordl_internal_set_versionTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataVersion>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___versionTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1::_RunScreenshotLevel_b__3() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1*>::get(),
                                               "<RunScreenshotLevel>b__3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1* GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1::ScreenshotLevelStarter___c__DisplayClass46_1() {}
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::*)(int32_t)>(
    &::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5722b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::*)()>(
    &::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5723b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::*)()>(
    &::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::MoveNext)> {
  constexpr static std::size_t size = 0x2020;
  constexpr static std::size_t addrs = 0x5723b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::*)()>(
    &::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__m__Finally1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5725b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46*>::get(), "<>m__Finally1",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::*)()>(
    &::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5725c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::*)()>(
    &::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5725c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::*)()>(
    &::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5725c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ScreenshotLevelStarter*& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::ScreenshotLevelStarter* const& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_set___4__this(::GlobalNamespace::ScreenshotLevelStarter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get_command() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___command;
}
constexpr ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command const& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get_command() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___command;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_set_command(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___command = value;
}
constexpr ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1*& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get___8__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____8__1;
}
constexpr ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1* const& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get___8__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____8__1;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_set___8__1(::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_1* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____8__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0*& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get___8__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____8__2;
}
constexpr ::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0* const& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get___8__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____8__2;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_set___8__2(::GlobalNamespace::ScreenshotLevelStarter___c__DisplayClass46_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____8__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get__beatmapLevel_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel_5__2;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get__beatmapLevel_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel_5__2;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_set__beatmapLevel_5__2(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevel_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get__beatmapKey_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey_5__3;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get__beatmapKey_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey_5__3;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_set__beatmapKey_5__3(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapKey_5__3 = value;
}
constexpr ::StringW& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get__screenshotExportFolderPath_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenshotExportFolderPath_5__4;
}
constexpr ::StringW const& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get__screenshotExportFolderPath_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenshotExportFolderPath_5__4;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_set__screenshotExportFolderPath_5__4(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____screenshotExportFolderPath_5__4)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get__gameplayModifiers_5__5() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers_5__5;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get__gameplayModifiers_5__5() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers_5__5;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_set__gameplayModifiers_5__5(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayModifiers_5__5)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get__playerSpecificSettings_5__6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSpecificSettings_5__6;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings* const& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get__playerSpecificSettings_5__6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSpecificSettings_5__6;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_set__playerSpecificSettings_5__6(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerSpecificSettings_5__6)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ILevelEndActions*& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get__levelEndActions_5__7() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelEndActions_5__7;
}
constexpr ::GlobalNamespace::ILevelEndActions* const& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get__levelEndActions_5__7() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelEndActions_5__7;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_set__levelEndActions_5__7(::GlobalNamespace::ILevelEndActions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelEndActions_5__7)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get__songDuration_5__8() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songDuration_5__8;
}
constexpr float_t const& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get__songDuration_5__8() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songDuration_5__8;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_set__songDuration_5__8(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songDuration_5__8 = value;
}
constexpr float_t& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get__nextScreenshotTime_5__9() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextScreenshotTime_5__9;
}
constexpr float_t const& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get__nextScreenshotTime_5__9() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextScreenshotTime_5__9;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_set__nextScreenshotTime_5__9(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextScreenshotTime_5__9 = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get__renderCamera_5__10() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderCamera_5__10;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get__renderCamera_5__10() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderCamera_5__10;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_set__renderCamera_5__10(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderCamera_5__10)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get__screenshotTexture_5__11() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenshotTexture_5__11;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get__screenshotTexture_5__11() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenshotTexture_5__11;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_set__screenshotTexture_5__11(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____screenshotTexture_5__11)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get__cancellationTokenSource_5__12() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource_5__12;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_get__cancellationTokenSource_5__12() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource_5__12;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__cordl_internal_set__cancellationTokenSource_5__12(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancellationTokenSource_5__12)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46*>::get(), "<>m__Finally1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46* GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevel_d__46::ScreenshotLevelStarter__RunScreenshotLevel_d__46() {}
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::*)(int32_t)>(
    &::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5725c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::*)()>(
    &::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5725c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::*)()>(
    &::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::MoveNext)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5725c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::*)()>(
    &::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5725ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::*)()>(
    &::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5725efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::*)()>(
    &::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5725f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ScreenshotLevelStarter*& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::ScreenshotLevelStarter* const& GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::__cordl_internal_set___4__this(::GlobalNamespace::ScreenshotLevelStarter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45* GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45::ScreenshotLevelStarter__RunScreenshotLevelQueue_d__45() {}
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter.get_Screenshotting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ScreenshotLevelStarter::*)()>(
    &::GlobalNamespace::ScreenshotLevelStarter::get_Screenshotting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5722838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(),
                                                                               "get_Screenshotting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter.EnqueueScreenshotLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotLevelStarter::*)(
    ::StringW, ::StringW, ::StringW, float_t, ::System::Collections::Generic::List_1<float_t>*, int32_t)>(&::GlobalNamespace::ScreenshotLevelStarter::EnqueueScreenshotLevel)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5722848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(), "EnqueueScreenshotLevel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<float_t>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter.EnqueueScreenshotLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotLevelStarter::*)(
    ::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command)>(&::GlobalNamespace::ScreenshotLevelStarter::EnqueueScreenshotLevel)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5722884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(), "EnqueueScreenshotLevel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter.StopScreenshotting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotLevelStarter::*)()>(
    &::GlobalNamespace::ScreenshotLevelStarter::StopScreenshotting)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x57229f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(),
                                                                               "StopScreenshotting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter.RunScreenshotLevelQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ScreenshotLevelStarter::*)()>(
    &::GlobalNamespace::ScreenshotLevelStarter::RunScreenshotLevelQueue)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x57229a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(),
                                                                               "RunScreenshotLevelQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter.RunScreenshotLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (
    ::GlobalNamespace::ScreenshotLevelStarter::*)(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command)>(&::GlobalNamespace::ScreenshotLevelStarter::RunScreenshotLevel)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5722af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(), "RunScreenshotLevel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter.SaveMetadata
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command, ::StringW, ::ByRef<::BeatSaber::Settings::Settings>,
                         ::ByRef<::GlobalNamespace::PlayerSpecificSettings*>, ::ByRef<::GlobalNamespace::GameplayModifiers*>)>(&::GlobalNamespace::ScreenshotLevelStarter::SaveMetadata)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5722b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(), "SaveMetadata", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::BeatSaber::Settings::Settings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::PlayerSpecificSettings*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::GameplayModifiers*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter.SaveDeviceMetadata
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::ScreenshotLevelStarter::SaveDeviceMetadata)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5722efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(), "SaveDeviceMetadata",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter.SaveBuildSpecificMetadata
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ByRef<::StringW>)>(&::GlobalNamespace::ScreenshotLevelStarter::SaveBuildSpecificMetadata)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5723104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(), "SaveBuildSpecificMetadata", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter.SaveMetadataObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::StringW)>(&::GlobalNamespace::ScreenshotLevelStarter::SaveMetadataObject)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5722cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(),
                                                                               "SaveMetadataObject", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter.TakeScreenshotFromCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Texture2D*)>(
    &::GlobalNamespace::ScreenshotLevelStarter::TakeScreenshotFromCamera)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x57231f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(), "TakeScreenshotFromCamera", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter.HandlePauseControllerCanPause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotLevelStarter::*)(::System::Action_1<bool>*)>(
    &::GlobalNamespace::ScreenshotLevelStarter::HandlePauseControllerCanPause)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5723340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(), "HandlePauseControllerCanPause", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotLevelStarter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotLevelStarter::*)()>(&::GlobalNamespace::ScreenshotLevelStarter::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x572335c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameScenesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__menuTransitionsHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__menuTransitionsHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_set__menuTransitionsHelper(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuTransitionsHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__beatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevels;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__beatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevels;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_set__beatmapLevels(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::Init::GameVersionProvider*& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__gameVersionProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameVersionProvider;
}
constexpr ::BeatSaber::Init::GameVersionProvider* const& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__gameVersionProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameVersionProvider;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_set__gameVersionProvider(::BeatSaber::Init::GameVersionProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameVersionProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::DeterminismConfig*& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__determinismConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____determinismConfig;
}
constexpr ::GlobalNamespace::DeterminismConfig* const& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__determinismConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____determinismConfig;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_set__determinismConfig(::GlobalNamespace::DeterminismConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____determinismConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ICoroutineStarter*& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__coroutineStarter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coroutineStarter;
}
constexpr ::GlobalNamespace::ICoroutineStarter* const& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__coroutineStarter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coroutineStarter;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____coroutineStarter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IRenderingParamsApplicator*& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__renderingParamsApplicator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderingParamsApplicator;
}
constexpr ::GlobalNamespace::IRenderingParamsApplicator* const& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__renderingParamsApplicator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderingParamsApplicator;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_set__renderingParamsApplicator(::GlobalNamespace::IRenderingParamsApplicator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderingParamsApplicator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::TimeHelper>& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__timeHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelper;
}
constexpr ::UnityW<::GlobalNamespace::TimeHelper> const& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__timeHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelper;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_set__timeHelper(::UnityW<::GlobalNamespace::TimeHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timeHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command>*&
GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__commandQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command>* const&
GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__commandQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandQueue;
}
constexpr void
GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_set__commandQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____commandQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__screenshotQueueCoroutine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenshotQueueCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__screenshotQueueCoroutine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenshotQueueCoroutine;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_set__screenshotQueueCoroutine(::UnityEngine::Coroutine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____screenshotQueueCoroutine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__cachedGameVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedGameVersion;
}
constexpr ::StringW const& GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_get__cachedGameVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedGameVersion;
}
constexpr void GlobalNamespace::ScreenshotLevelStarter::__cordl_internal_set__cachedGameVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cachedGameVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ScreenshotLevelStarter::setStaticF_kWaitForEndOfFrame(::UnityEngine::WaitForEndOfFrame* value) {
  ::cordl_internals::setStaticField<::UnityEngine::WaitForEndOfFrame*, "kWaitForEndOfFrame", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get>(
      std::forward<::UnityEngine::WaitForEndOfFrame*>(value));
}
inline ::UnityEngine::WaitForEndOfFrame* GlobalNamespace::ScreenshotLevelStarter::getStaticF_kWaitForEndOfFrame() {
  return ::cordl_internals::getStaticField<::UnityEngine::WaitForEndOfFrame*, "kWaitForEndOfFrame",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get>();
}
inline bool GlobalNamespace::ScreenshotLevelStarter::get_Screenshotting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(),
                                                                             "get_Screenshotting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::ScreenshotLevelStarter::EnqueueScreenshotLevel(::StringW levelID, ::StringW characteristic, ::StringW difficulty, float_t screenshotPeriod,
                                                                            ::System::Collections::Generic::List_1<float_t>* screenshotTimes, int32_t captureFramerate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(), "EnqueueScreenshotLevel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<float_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelID, characteristic, difficulty, screenshotPeriod, screenshotTimes, captureFramerate);
}
inline void GlobalNamespace::ScreenshotLevelStarter::EnqueueScreenshotLevel(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command command) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(), "EnqueueScreenshotLevel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, command);
}
inline void GlobalNamespace::ScreenshotLevelStarter::StopScreenshotting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(),
                                                                             "StopScreenshotting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ScreenshotLevelStarter::RunScreenshotLevelQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(),
                                                                             "RunScreenshotLevelQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ScreenshotLevelStarter::RunScreenshotLevel(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command command) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(), "RunScreenshotLevel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, command);
}
inline void GlobalNamespace::ScreenshotLevelStarter::SaveMetadata(::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command command, ::StringW metadataFolderPath,
                                                                  ::ByRef<::BeatSaber::Settings::Settings> settings, ::ByRef<::GlobalNamespace::PlayerSpecificSettings*> playerSpecificSettings,
                                                                  ::ByRef<::GlobalNamespace::GameplayModifiers*> gameplayModifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(), "SaveMetadata", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RunScreenshotLevelData_ScreenshotLevelStarter_Command>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::BeatSaber::Settings::Settings>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::PlayerSpecificSettings*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::GameplayModifiers*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, command, metadataFolderPath, settings, playerSpecificSettings, gameplayModifiers);
}
inline void GlobalNamespace::ScreenshotLevelStarter::SaveDeviceMetadata(::StringW metadataFolderPath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(), "SaveDeviceMetadata",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, metadataFolderPath);
}
inline void GlobalNamespace::ScreenshotLevelStarter::SaveBuildSpecificMetadata(::StringW metadataFolderPath, ::ByRef<::StringW> gameVersion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(),
                                                                             "SaveBuildSpecificMetadata", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, metadataFolderPath, gameVersion);
}
inline void GlobalNamespace::ScreenshotLevelStarter::SaveMetadataObject(::System::Object* obj, ::StringW path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(), "SaveMetadataObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, path);
}
inline void GlobalNamespace::ScreenshotLevelStarter::TakeScreenshotFromCamera(::UnityEngine::Camera* camera, ::UnityEngine::Texture2D* screenshotTexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(), "TakeScreenshotFromCamera", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, camera, screenshotTexture);
}
inline void GlobalNamespace::ScreenshotLevelStarter::HandlePauseControllerCanPause(::System::Action_1<bool>* canPause) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(), "HandlePauseControllerCanPause", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, canPause);
}
inline void GlobalNamespace::ScreenshotLevelStarter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotLevelStarter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ScreenshotLevelStarter* GlobalNamespace::ScreenshotLevelStarter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ScreenshotLevelStarter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenshotLevelStarter::ScreenshotLevelStarter() {}
