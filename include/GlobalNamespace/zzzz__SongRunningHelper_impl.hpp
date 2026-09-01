#pragma once
// IWYU pragma private; include "GlobalNamespace\SongRunningHelper.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_impl.hpp"
#include "GlobalNamespace/zzzz__PlaymodeOptions_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SongRunningHelper_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__ICoroutineStarter_def.hpp"
#include "GlobalNamespace/zzzz__ILevelEndActions_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__PauseController_def.hpp"
#include "GlobalNamespace/zzzz__PlaymodeOptions_def.hpp"
#include "GlobalNamespace/zzzz__SongRunningHelper_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters []
constexpr ::GlobalNamespace::SongRunningHelper_MessageStrings::SongRunningHelper_MessageStrings() {}
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper_QueuedSongParams._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongRunningHelper_QueuedSongParams::*)(
    ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty, bool, ::GlobalNamespace::GameplayModifiers_SongSpeed,
    ::GlobalNamespace::PlaymodeOptions, ::StringW, bool, ::StringW, bool, bool,
    ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*, float_t, bool, float_t)>(
    &::GlobalNamespace::SongRunningHelper_QueuedSongParams::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58bceb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper_QueuedSongParams>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(),
                                ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers_SongSpeed>(), ::i2c::type_of<::GlobalNamespace::PlaymodeOptions>(),
                                ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                ::i2c::type_of<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*>(),
                                ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SongRunningHelper_QueuedSongParams::_ctor(
    ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapCharacteristic characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty, bool advancedHud,
    ::GlobalNamespace::GameplayModifiers_SongSpeed songSpeed, ::GlobalNamespace::PlaymodeOptions playmodeOptions, ::StringW recordingRelativePath, bool profileSong, ::StringW reportDescriptor,
    bool zenMode, bool disablePause, ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* songFinishedCallback,
    float_t startTimeSec, bool clearNotesOnStart, float_t playDurationSec) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper_QueuedSongParams>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(),
                              ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers_SongSpeed>(), ::i2c::type_of<::GlobalNamespace::PlaymodeOptions>(),
                              ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                              ::i2c::type_of<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*>(), ::i2c::type_of<float_t>(),
                              ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, beatmapLevel, characteristic, difficulty, advancedHud, songSpeed, playmodeOptions, recordingRelativePath, profileSong,
                                                   reportDescriptor, zenMode, disablePause, songFinishedCallback, startTimeSec, clearNotesOnStart, playDurationSec);
}
// Ctor Parameters [CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "difficulty", ty:
// "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: Some("{}") }, CppParam { name: "characteristic", ty: "::GlobalNamespace::BeatmapCharacteristic", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "advancedHud", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "songSpeed", ty: "::GlobalNamespace::GameplayModifiers_SongSpeed", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "playmodeOptions", ty: "::GlobalNamespace::PlaymodeOptions", modifiers: "", def_value: Some("{}") }, CppParam { name: "recordingRelativePath", ty:
// "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "profileSong", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "reportDescriptor", ty: "::StringW",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "songFinishedCallback", ty:
// "::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*,::GlobalNamespace::LevelCompletionResults*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "zenMode", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "disablePause", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "startTimeSec", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "clearNotesOnStart", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "playDurationSec", ty: "float_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::SongRunningHelper_QueuedSongParams::SongRunningHelper_QueuedSongParams(
    ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapDifficulty difficulty, ::GlobalNamespace::BeatmapCharacteristic characteristic, bool advancedHud,
    ::GlobalNamespace::GameplayModifiers_SongSpeed songSpeed, ::GlobalNamespace::PlaymodeOptions playmodeOptions, ::StringW recordingRelativePath, bool profileSong, ::StringW reportDescriptor,
    ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* songFinishedCallback, bool zenMode, bool disablePause,
    float_t startTimeSec, bool clearNotesOnStart, float_t playDurationSec) noexcept {
  this->beatmapLevel = beatmapLevel;
  this->difficulty = difficulty;
  this->characteristic = characteristic;
  this->advancedHud = advancedHud;
  this->songSpeed = songSpeed;
  this->playmodeOptions = playmodeOptions;
  this->recordingRelativePath = recordingRelativePath;
  this->profileSong = profileSong;
  this->reportDescriptor = reportDescriptor;
  this->songFinishedCallback = songFinishedCallback;
  this->zenMode = zenMode;
  this->disablePause = disablePause;
  this->startTimeSec = startTimeSec;
  this->clearNotesOnStart = clearNotesOnStart;
  this->playDurationSec = playDurationSec;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongRunningHelper_QueuedSongParams::SongRunningHelper_QueuedSongParams() {}
//  Writing Method size for method: ::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::*)(int32_t)>(
    &::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58bd908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::*)()>(
    &::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58bd910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::*)()>(
    &::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::MoveNext)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x58bd914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::*)()>(
    &::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58bdaf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d*>(),
                                                             { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::*)()>(
    &::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58bdafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::*)()>(
    &::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58bdb34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d*>(),
                                                             { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0*&
GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0* const&
GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void
GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::__cordl_internal_set___4__this(::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::__cordl_internal_get__targetSongTime_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetSongTime_5__2;
}
constexpr float_t const& GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::__cordl_internal_get__targetSongTime_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetSongTime_5__2;
}
constexpr void GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::__cordl_internal_set__targetSongTime_5__2(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetSongTime_5__2 = value;
}
inline void GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d*>(),
                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d*>(),
                                                           { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d*
GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d::__c__DisplayClass13_0_SongRunningHelper___StartLevel_g__WatchPlayDuration_3_d() {}
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::*)()>(&::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58bcf04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0._StartLevel_g__HandleLevelDidFinishCallback_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::*)(::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*)>(
        &::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::_StartLevel_g__HandleLevelDidFinishCallback_0)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x58bcf08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0*>(),
                                                { "<StartLevel>g__HandleLevelDidFinishCallback|0",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0._StartLevel_g__HandleStateChanged_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::*)()>(
    &::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::_StartLevel_g__HandleStateChanged_1)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x58bd34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0*>(), { "<StartLevel>g__HandleStateChanged|1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0._StartLevel_g__HandleLevelEnded_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::*)()>(
    &::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::_StartLevel_g__HandleLevelEnded_2)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x58bd57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0*>(), { "<StartLevel>g__HandleLevelEnded|2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0._StartLevel_g__WatchPlayDuration_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::*)()>(
    &::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::_StartLevel_g__WatchPlayDuration_3)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x58bd8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0*>(), { "<StartLevel>g__WatchPlayDuration|3", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SongRunningHelper*& GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::SongRunningHelper* const& GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_set___4__this(::GlobalNamespace::SongRunningHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr bool& GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_get_audioPlayingLogged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioPlayingLogged;
}
constexpr bool const& GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_get_audioPlayingLogged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioPlayingLogged;
}
constexpr void GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_set_audioPlayingLogged(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___audioPlayingLogged = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_get_audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_get_audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioTimeSyncController;
}
constexpr void GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_set_audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___audioTimeSyncController = value;
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_get_modifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiers;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_get_modifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiers;
}
constexpr void GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_set_modifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifiers = value;
}
constexpr bool& GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_get_levelEndedHandled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelEndedHandled;
}
constexpr bool const& GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_get_levelEndedHandled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelEndedHandled;
}
constexpr void GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_set_levelEndedHandled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelEndedHandled = value;
}
constexpr ::GlobalNamespace::SongRunningHelper_QueuedSongParams& GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_get_queuedSongParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queuedSongParams;
}
constexpr ::GlobalNamespace::SongRunningHelper_QueuedSongParams const& GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_get_queuedSongParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queuedSongParams;
}
constexpr void GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_set_queuedSongParams(::GlobalNamespace::SongRunningHelper_QueuedSongParams value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___queuedSongParams = value;
}
constexpr ::UnityW<::GlobalNamespace::PauseController>& GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_get_pauseController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pauseController;
}
constexpr ::UnityW<::GlobalNamespace::PauseController> const& GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_get_pauseController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pauseController;
}
constexpr void GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_set_pauseController(::UnityW<::GlobalNamespace::PauseController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pauseController = value;
}
constexpr ::GlobalNamespace::ILevelEndActions*& GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_get_levelEndActions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelEndActions;
}
constexpr ::GlobalNamespace::ILevelEndActions* const& GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_get_levelEndActions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelEndActions;
}
constexpr void GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::__cordl_internal_set_levelEndActions(::GlobalNamespace::ILevelEndActions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelEndActions = value;
}
inline void GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void
GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::_StartLevel_g__HandleLevelDidFinishCallback_0(::GlobalNamespace::StandardLevelScenesTransitionSetupData* standardLevelScenesTransition,
                                                                                                        ::GlobalNamespace::LevelCompletionResults* results) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0*>(),
                                              { "<StartLevel>g__HandleLevelDidFinishCallback|0",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standardLevelScenesTransition, results);
}
inline void GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::_StartLevel_g__HandleStateChanged_1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0*>(), { "<StartLevel>g__HandleStateChanged|1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::_StartLevel_g__HandleLevelEnded_2() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0*>(), { "<StartLevel>g__HandleLevelEnded|2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::_StartLevel_g__WatchPlayDuration_3() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0*>(), { "<StartLevel>g__WatchPlayDuration|3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0* GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0::SongRunningHelper___c__DisplayClass13_0() {}
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper__StartLevel_d__13._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongRunningHelper__StartLevel_d__13::*)(int32_t)>(&::GlobalNamespace::SongRunningHelper__StartLevel_d__13::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58bcd18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper__StartLevel_d__13*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper__StartLevel_d__13.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongRunningHelper__StartLevel_d__13::*)()>(
    &::GlobalNamespace::SongRunningHelper__StartLevel_d__13::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58bdb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper__StartLevel_d__13*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper__StartLevel_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SongRunningHelper__StartLevel_d__13::*)()>(&::GlobalNamespace::SongRunningHelper__StartLevel_d__13::MoveNext)> {
  constexpr static std::size_t size = 0xa78;
  constexpr static std::size_t addrs = 0x58bdb40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper__StartLevel_d__13*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper__StartLevel_d__13.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::SongRunningHelper__StartLevel_d__13::*)()>(
    &::GlobalNamespace::SongRunningHelper__StartLevel_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58be5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper__StartLevel_d__13*>(), { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper__StartLevel_d__13.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongRunningHelper__StartLevel_d__13::*)()>(
    &::GlobalNamespace::SongRunningHelper__StartLevel_d__13::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58be5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper__StartLevel_d__13*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper__StartLevel_d__13.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::SongRunningHelper__StartLevel_d__13::*)()>(
    &::GlobalNamespace::SongRunningHelper__StartLevel_d__13::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58be5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper__StartLevel_d__13*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SongRunningHelper__StartLevel_d__13::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::SongRunningHelper__StartLevel_d__13::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::SongRunningHelper__StartLevel_d__13::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::SongRunningHelper__StartLevel_d__13::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::SongRunningHelper__StartLevel_d__13::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::SongRunningHelper__StartLevel_d__13::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::GlobalNamespace::SongRunningHelper*& GlobalNamespace::SongRunningHelper__StartLevel_d__13::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::SongRunningHelper* const& GlobalNamespace::SongRunningHelper__StartLevel_d__13::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::SongRunningHelper__StartLevel_d__13::__cordl_internal_set___4__this(::GlobalNamespace::SongRunningHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::GlobalNamespace::SongRunningHelper_QueuedSongParams& GlobalNamespace::SongRunningHelper__StartLevel_d__13::__cordl_internal_get_queuedSongParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queuedSongParams;
}
constexpr ::GlobalNamespace::SongRunningHelper_QueuedSongParams const& GlobalNamespace::SongRunningHelper__StartLevel_d__13::__cordl_internal_get_queuedSongParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queuedSongParams;
}
constexpr void GlobalNamespace::SongRunningHelper__StartLevel_d__13::__cordl_internal_set_queuedSongParams(::GlobalNamespace::SongRunningHelper_QueuedSongParams value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___queuedSongParams = value;
}
constexpr ::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0*& GlobalNamespace::SongRunningHelper__StartLevel_d__13::__cordl_internal_get___8__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____8__1;
}
constexpr ::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0* const& GlobalNamespace::SongRunningHelper__StartLevel_d__13::__cordl_internal_get___8__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____8__1;
}
constexpr void GlobalNamespace::SongRunningHelper__StartLevel_d__13::__cordl_internal_set___8__1(::GlobalNamespace::SongRunningHelper___c__DisplayClass13_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____8__1 = value;
}
inline void GlobalNamespace::SongRunningHelper__StartLevel_d__13::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper__StartLevel_d__13*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::SongRunningHelper__StartLevel_d__13::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper__StartLevel_d__13*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SongRunningHelper__StartLevel_d__13::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper__StartLevel_d__13*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SongRunningHelper__StartLevel_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper__StartLevel_d__13*>(), { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::SongRunningHelper__StartLevel_d__13::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper__StartLevel_d__13*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SongRunningHelper__StartLevel_d__13::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper__StartLevel_d__13*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::SongRunningHelper__StartLevel_d__13* GlobalNamespace::SongRunningHelper__StartLevel_d__13::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SongRunningHelper__StartLevel_d__13*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::SongRunningHelper__StartLevel_d__13::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::SongRunningHelper__StartLevel_d__13::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::SongRunningHelper__StartLevel_d__13::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::SongRunningHelper__StartLevel_d__13::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::SongRunningHelper__StartLevel_d__13::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::SongRunningHelper__StartLevel_d__13::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongRunningHelper__StartLevel_d__13::SongRunningHelper__StartLevel_d__13() {}
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper.get_SongsRunning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SongRunningHelper::*)()>(&::GlobalNamespace::SongRunningHelper::get_SongsRunning)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58bc814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper*>(), { "get_SongsRunning", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper.FindBeatmapLevelPackBeatmaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::BeatmapLevel*> (::GlobalNamespace::SongRunningHelper::*)(::StringW, bool)>(
    &::GlobalNamespace::SongRunningHelper::FindBeatmapLevelPackBeatmaps)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x58bc858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper*>(), { "FindBeatmapLevelPackBeatmaps", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper.EnqueueLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SongRunningHelper::*)(::GlobalNamespace::SongRunningHelper_QueuedSongParams)>(
    &::GlobalNamespace::SongRunningHelper::EnqueueLevel)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x58bca70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper*>(),
                                                                                           { "EnqueueLevel", {}, { ::i2c::type_of<::GlobalNamespace::SongRunningHelper_QueuedSongParams>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper.StartLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::SongRunningHelper::*)(::GlobalNamespace::SongRunningHelper_QueuedSongParams)>(
    &::GlobalNamespace::SongRunningHelper::StartLevel)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58bcca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper*>(), { "StartLevel", {}, { ::i2c::type_of<::GlobalNamespace::SongRunningHelper_QueuedSongParams>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper.HandlePauseControllerCanPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongRunningHelper::*)(::System::Action_1<bool>*)>(
    &::GlobalNamespace::SongRunningHelper::HandlePauseControllerCanPause)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58bcd20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper*>(), { "HandlePauseControllerCanPause", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper.StopAllLevels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongRunningHelper::*)()>(&::GlobalNamespace::SongRunningHelper::StopAllLevels)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58bcd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper*>(), { "StopAllLevels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper.StopCurrentLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongRunningHelper::*)()>(&::GlobalNamespace::SongRunningHelper::StopCurrentLevel)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58bcddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper*>(), { "StopCurrentLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongRunningHelper::*)()>(&::GlobalNamespace::SongRunningHelper::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58bce40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MenuTransitionsHelper*& GlobalNamespace::SongRunningHelper::__cordl_internal_get__menuTransitionsHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr ::GlobalNamespace::MenuTransitionsHelper* const& GlobalNamespace::SongRunningHelper::__cordl_internal_get__menuTransitionsHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr void GlobalNamespace::SongRunningHelper::__cordl_internal_set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuTransitionsHelper = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::SongRunningHelper::__cordl_internal_get__beatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevels;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::SongRunningHelper::__cordl_internal_get__beatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevels;
}
constexpr void GlobalNamespace::SongRunningHelper::__cordl_internal_set__beatmapLevels(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevels = value;
}
constexpr ::GlobalNamespace::EnvironmentsListModel*& GlobalNamespace::SongRunningHelper::__cordl_internal_get__environmentsListModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentsListModel;
}
constexpr ::GlobalNamespace::EnvironmentsListModel* const& GlobalNamespace::SongRunningHelper::__cordl_internal_get__environmentsListModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentsListModel;
}
constexpr void GlobalNamespace::SongRunningHelper::__cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentsListModel = value;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::SongRunningHelper::__cordl_internal_get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::SongRunningHelper::__cordl_internal_get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::SongRunningHelper::__cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameScenesManager = value;
}
constexpr ::GlobalNamespace::ICoroutineStarter*& GlobalNamespace::SongRunningHelper::__cordl_internal_get__coroutineStarter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coroutineStarter;
}
constexpr ::GlobalNamespace::ICoroutineStarter* const& GlobalNamespace::SongRunningHelper::__cordl_internal_get__coroutineStarter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coroutineStarter;
}
constexpr void GlobalNamespace::SongRunningHelper::__cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____coroutineStarter = value;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::SongRunningHelper_QueuedSongParams>*& GlobalNamespace::SongRunningHelper::__cordl_internal_get__playQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::SongRunningHelper_QueuedSongParams>* const& GlobalNamespace::SongRunningHelper::__cordl_internal_get__playQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playQueue;
}
constexpr void GlobalNamespace::SongRunningHelper::__cordl_internal_set__playQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::SongRunningHelper_QueuedSongParams>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playQueue = value;
}
constexpr ::System::Nullable_1<::GlobalNamespace::SongRunningHelper_QueuedSongParams>& GlobalNamespace::SongRunningHelper::__cordl_internal_get__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
constexpr ::System::Nullable_1<::GlobalNamespace::SongRunningHelper_QueuedSongParams> const& GlobalNamespace::SongRunningHelper::__cordl_internal_get__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
constexpr void GlobalNamespace::SongRunningHelper::__cordl_internal_set__current(::System::Nullable_1<::GlobalNamespace::SongRunningHelper_QueuedSongParams> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____current = value;
}
inline bool GlobalNamespace::SongRunningHelper::get_SongsRunning() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper*>(), { "get_SongsRunning", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::BeatmapLevel*> GlobalNamespace::SongRunningHelper::FindBeatmapLevelPackBeatmaps(::StringW packId, bool ignoreCase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper*>(), { "FindBeatmapLevelPackBeatmaps", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapLevel*>>(this, ___internal_method, packId, ignoreCase);
}
inline bool GlobalNamespace::SongRunningHelper::EnqueueLevel(::GlobalNamespace::SongRunningHelper_QueuedSongParams queuedSongParams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper*>(), { "EnqueueLevel", {}, { ::i2c::type_of<::GlobalNamespace::SongRunningHelper_QueuedSongParams>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, queuedSongParams);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::SongRunningHelper::StartLevel(::GlobalNamespace::SongRunningHelper_QueuedSongParams queuedSongParams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper*>(), { "StartLevel", {}, { ::i2c::type_of<::GlobalNamespace::SongRunningHelper_QueuedSongParams>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, queuedSongParams);
}
inline void GlobalNamespace::SongRunningHelper::HandlePauseControllerCanPause(::System::Action_1<bool>* canPause) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper*>(), { "HandlePauseControllerCanPause", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canPause);
}
inline void GlobalNamespace::SongRunningHelper::StopAllLevels() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper*>(), { "StopAllLevels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SongRunningHelper::StopCurrentLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper*>(), { "StopCurrentLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SongRunningHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongRunningHelper*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SongRunningHelper* GlobalNamespace::SongRunningHelper::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SongRunningHelper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongRunningHelper::SongRunningHelper() {}
