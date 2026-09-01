#pragma once
// IWYU pragma private; include "GlobalNamespace\GameplayCoreSceneSetupData.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_impl.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_impl.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapBasicData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__PracticeSettings_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__31.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__31::*)()>(
    &::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x9d0;
  constexpr static std::size_t addrs = 0x590d1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__31>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__31.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__31::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x590dbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__31>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__31::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__31>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__31::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__31>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__31::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GameplayCoreSceneSetupData*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_beatmapLevelDataVersion_5__2", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__4", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__31::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__31(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::GameplayCoreSceneSetupData* __4__this,
    ::GlobalNamespace::BeatmapLevelDataVersion _beatmapLevelDataVersion_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>> __u__3,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__4) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_beatmapLevelDataVersion_5__2 = _beatmapLevelDataVersion_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
  this->__u__4 = __u__4;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__31::GameplayCoreSceneSetupData__LoadTransformedBeatmapDataAsync_d__31() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreSceneSetupData.get_songAudioClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::GlobalNamespace::GameplayCoreSceneSetupData::*)()>(
    &::GlobalNamespace::GameplayCoreSceneSetupData::get_songAudioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590ce10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(), { "get_songAudioClip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreSceneSetupData.set_songAudioClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayCoreSceneSetupData::*)(::UnityEngine::AudioClip*)>(
    &::GlobalNamespace::GameplayCoreSceneSetupData::set_songAudioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590ce18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(), { "set_songAudioClip", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreSceneSetupData.get_beatmapLevelData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IBeatmapLevelData* (::GlobalNamespace::GameplayCoreSceneSetupData::*)()>(
    &::GlobalNamespace::GameplayCoreSceneSetupData::get_beatmapLevelData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590ce20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(), { "get_beatmapLevelData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreSceneSetupData.set_beatmapLevelData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayCoreSceneSetupData::*)(::GlobalNamespace::IBeatmapLevelData*)>(
    &::GlobalNamespace::GameplayCoreSceneSetupData::set_beatmapLevelData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590ce28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(),
                                                                                           { "set_beatmapLevelData", {}, { ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreSceneSetupData.get_transformedBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IReadonlyBeatmapData* (::GlobalNamespace::GameplayCoreSceneSetupData::*)()>(
    &::GlobalNamespace::GameplayCoreSceneSetupData::get_transformedBeatmapData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590ce30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(), { "get_transformedBeatmapData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreSceneSetupData.set_transformedBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayCoreSceneSetupData::*)(::GlobalNamespace::IReadonlyBeatmapData*)>(
    &::GlobalNamespace::GameplayCoreSceneSetupData::set_transformedBeatmapData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590ce38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(),
                                                                                           { "set_transformedBeatmapData", {}, { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayCoreSceneSetupData::*)(
    ::by_ref<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::PracticeSettings*,
    ::GlobalNamespace::EnvironmentInfoSO*, ::GlobalNamespace::EnvironmentInfoSO*, ::GlobalNamespace::ColorScheme*, ::GlobalNamespace::SettingsManager*, ::GlobalNamespace::AudioClipAsyncLoader*,
    ::GlobalNamespace::BeatmapDataLoader*, ::GlobalNamespace::BeatmapLevelsEntitlementModel*, bool, ::GlobalNamespace::EnvironmentsListModel*, bool, ::GlobalNamespace::BeatmapLevelsModel*,
    ::GlobalNamespace::IBeatmapLevelData*)>(&::GlobalNamespace::GameplayCoreSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x590ce40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(),
                         { ".ctor",
                           {},
                           { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                             ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::PracticeSettings*>(),
                             ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(), ::i2c::type_of<::GlobalNamespace::ColorScheme*>(),
                             ::i2c::type_of<::GlobalNamespace::SettingsManager*>(), ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDataLoader*>(),
                             ::i2c::type_of<::GlobalNamespace::BeatmapLevelsEntitlementModel*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(),
                             ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreSceneSetupData.ApplyDisableUpdateAlwaysConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayCoreSceneSetupData::*)()>(
    &::GlobalNamespace::GameplayCoreSceneSetupData::ApplyDisableUpdateAlwaysConfiguration)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x590d0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(), { "ApplyDisableUpdateAlwaysConfiguration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreSceneSetupData.LoadTransformedBeatmapDataAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::GameplayCoreSceneSetupData::*)()>(
    &::GlobalNamespace::GameplayCoreSceneSetupData::LoadTransformedBeatmapDataAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x590d130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(), { "LoadTransformedBeatmapDataAsync", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get_beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get_beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapKey = value;
}
constexpr ::GlobalNamespace::BeatmapBasicData*& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get_beatmapBasicData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapBasicData;
}
constexpr ::GlobalNamespace::BeatmapBasicData* const& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get_beatmapBasicData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapBasicData;
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_set_beatmapBasicData(::GlobalNamespace::BeatmapBasicData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapBasicData = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get_beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get_beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapLevel = value;
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get_gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get_gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameplayModifiers = value;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get_playerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings* const& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get_playerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerSpecificSettings = value;
}
constexpr ::GlobalNamespace::PracticeSettings*& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get_practiceSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practiceSettings;
}
constexpr ::GlobalNamespace::PracticeSettings* const& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get_practiceSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practiceSettings;
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_set_practiceSettings(::GlobalNamespace::PracticeSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___practiceSettings = value;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get_targetEnvironmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetEnvironmentInfo;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get_targetEnvironmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetEnvironmentInfo;
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_set_targetEnvironmentInfo(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetEnvironmentInfo = value;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get_originalEnvironmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalEnvironmentInfo;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get_originalEnvironmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalEnvironmentInfo;
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_set_originalEnvironmentInfo(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___originalEnvironmentInfo = value;
}
constexpr ::GlobalNamespace::ColorScheme*& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get_colorScheme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorScheme;
}
constexpr ::GlobalNamespace::ColorScheme* const& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get_colorScheme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorScheme;
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_set_colorScheme(::GlobalNamespace::ColorScheme* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorScheme = value;
}
constexpr ::GlobalNamespace::EnvironmentsListModel*& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get_environmentsListModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentsListModel;
}
constexpr ::GlobalNamespace::EnvironmentsListModel* const& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get_environmentsListModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentsListModel;
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_set_environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentsListModel = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get__songAudioClip_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songAudioClip_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get__songAudioClip_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songAudioClip_k__BackingField;
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_set__songAudioClip_k__BackingField(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songAudioClip_k__BackingField = value;
}
constexpr ::GlobalNamespace::IBeatmapLevelData*& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get__beatmapLevelData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelData_k__BackingField;
}
constexpr ::GlobalNamespace::IBeatmapLevelData* const& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get__beatmapLevelData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelData_k__BackingField;
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_set__beatmapLevelData_k__BackingField(::GlobalNamespace::IBeatmapLevelData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelData_k__BackingField = value;
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData*& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get__transformedBeatmapData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformedBeatmapData_k__BackingField;
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData* const& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get__transformedBeatmapData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformedBeatmapData_k__BackingField;
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_set__transformedBeatmapData_k__BackingField(::GlobalNamespace::IReadonlyBeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transformedBeatmapData_k__BackingField = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get__beatmapLevelsEntitlementModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsEntitlementModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel* const& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get__beatmapLevelsEntitlementModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsEntitlementModel;
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_set__beatmapLevelsEntitlementModel(::GlobalNamespace::BeatmapLevelsEntitlementModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsEntitlementModel = value;
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader*& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get__audioClipAsyncLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipAsyncLoader;
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader* const& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get__audioClipAsyncLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipAsyncLoader;
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioClipAsyncLoader = value;
}
constexpr ::GlobalNamespace::BeatmapDataLoader*& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get__beatmapDataLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataLoader;
}
constexpr ::GlobalNamespace::BeatmapDataLoader* const& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get__beatmapDataLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataLoader;
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_set__beatmapDataLoader(::GlobalNamespace::BeatmapDataLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDataLoader = value;
}
constexpr bool& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get__allowNullBeatmapLevelData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowNullBeatmapLevelData;
}
constexpr bool const& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get__allowNullBeatmapLevelData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowNullBeatmapLevelData;
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_set__allowNullBeatmapLevelData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowNullBeatmapLevelData = value;
}
constexpr bool& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get__enableBeatmapDataCaching() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableBeatmapDataCaching;
}
constexpr bool const& GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_get__enableBeatmapDataCaching() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableBeatmapDataCaching;
}
constexpr void GlobalNamespace::GameplayCoreSceneSetupData::__cordl_internal_set__enableBeatmapDataCaching(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableBeatmapDataCaching = value;
}
inline ::UnityW<::UnityEngine::AudioClip> GlobalNamespace::GameplayCoreSceneSetupData::get_songAudioClip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(), { "get_songAudioClip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayCoreSceneSetupData::set_songAudioClip(::UnityEngine::AudioClip* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(), { "set_songAudioClip", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IBeatmapLevelData* GlobalNamespace::GameplayCoreSceneSetupData::get_beatmapLevelData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(), { "get_beatmapLevelData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevelData*>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayCoreSceneSetupData::set_beatmapLevelData(::GlobalNamespace::IBeatmapLevelData* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(),
                                                                                         { "set_beatmapLevelData", {}, { ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::GameplayCoreSceneSetupData::get_transformedBeatmapData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(), { "get_transformedBeatmapData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadonlyBeatmapData*>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayCoreSceneSetupData::set_transformedBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(),
                                                                                         { "set_transformedBeatmapData", {}, { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayCoreSceneSetupData::_ctor(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                               ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                               ::GlobalNamespace::PracticeSettings* practiceSettings, ::GlobalNamespace::EnvironmentInfoSO* targetEnvironmentInfo,
                                                               ::GlobalNamespace::EnvironmentInfoSO* originalEnvironmentInfo, ::GlobalNamespace::ColorScheme* colorScheme,
                                                               ::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader,
                                                               ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, ::GlobalNamespace::BeatmapLevelsEntitlementModel* beatmapLevelsEntitlementModel,
                                                               bool enableBeatmapDataCaching, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, bool allowNullBeatmapLevelData,
                                                               ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(),
                       { ".ctor",
                         {},
                         { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                           ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::PracticeSettings*>(),
                           ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(), ::i2c::type_of<::GlobalNamespace::ColorScheme*>(),
                           ::i2c::type_of<::GlobalNamespace::SettingsManager*>(), ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDataLoader*>(),
                           ::i2c::type_of<::GlobalNamespace::BeatmapLevelsEntitlementModel*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(),
                           ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapKey, beatmapLevel, gameplayModifiers, playerSpecificSettings, practiceSettings, targetEnvironmentInfo,
                                                   originalEnvironmentInfo, colorScheme, settingsManager, audioClipAsyncLoader, beatmapDataLoader, beatmapLevelsEntitlementModel,
                                                   enableBeatmapDataCaching, environmentsListModel, allowNullBeatmapLevelData, beatmapLevelsModel, beatmapLevelData);
}
inline void GlobalNamespace::GameplayCoreSceneSetupData::ApplyDisableUpdateAlwaysConfiguration() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(), { "ApplyDisableUpdateAlwaysConfiguration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::GameplayCoreSceneSetupData::LoadTransformedBeatmapDataAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(), { "LoadTransformedBeatmapDataAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayCoreSceneSetupData* GlobalNamespace::GameplayCoreSceneSetupData::New_ctor(
    ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings, ::GlobalNamespace::EnvironmentInfoSO* targetEnvironmentInfo,
    ::GlobalNamespace::EnvironmentInfoSO* originalEnvironmentInfo, ::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::SettingsManager* settingsManager,
    ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader,
    ::GlobalNamespace::BeatmapLevelsEntitlementModel* beatmapLevelsEntitlementModel, bool enableBeatmapDataCaching, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
    bool allowNullBeatmapLevelData, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayCoreSceneSetupData*>(
                                              beatmapKey, beatmapLevel, gameplayModifiers, playerSpecificSettings, practiceSettings, targetEnvironmentInfo, originalEnvironmentInfo, colorScheme,
                                              settingsManager, audioClipAsyncLoader, beatmapDataLoader, beatmapLevelsEntitlementModel, enableBeatmapDataCaching, environmentsListModel,
                                              allowNullBeatmapLevelData, beatmapLevelsModel, beatmapLevelData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData::GameplayCoreSceneSetupData() {}
