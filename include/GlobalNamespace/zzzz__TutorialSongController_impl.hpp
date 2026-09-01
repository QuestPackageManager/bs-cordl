#pragma once
// IWYU pragma private; include "GlobalNamespace\TutorialSongController.hpp"
#include "GlobalNamespace/zzzz__ColorType_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_impl.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_impl.hpp"
#include "GlobalNamespace/zzzz__SongController_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialSongController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialSongController_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__TutorialSongController_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController_InitData::*)(float_t, ::GlobalNamespace::BeatmapData*)>(
    &::GlobalNamespace::TutorialSongController_InitData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59fa5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_InitData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::BeatmapData*>() } })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::TutorialSongController_InitData::__cordl_internal_get_songBpm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songBpm;
}
constexpr float_t const& GlobalNamespace::TutorialSongController_InitData::__cordl_internal_get_songBpm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songBpm;
}
constexpr void GlobalNamespace::TutorialSongController_InitData::__cordl_internal_set_songBpm(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songBpm = value;
}
constexpr ::GlobalNamespace::BeatmapData*& GlobalNamespace::TutorialSongController_InitData::__cordl_internal_get_beatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapData;
}
constexpr ::GlobalNamespace::BeatmapData* const& GlobalNamespace::TutorialSongController_InitData::__cordl_internal_get_beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapData;
}
constexpr void GlobalNamespace::TutorialSongController_InitData::__cordl_internal_set_beatmapData(::GlobalNamespace::BeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapData = value;
}
inline void GlobalNamespace::TutorialSongController_InitData::_ctor(float_t songBpm, ::GlobalNamespace::BeatmapData* beatmapData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_InitData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::BeatmapData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, songBpm, beatmapData);
}
inline ::GlobalNamespace::TutorialSongController_InitData* GlobalNamespace::TutorialSongController_InitData::New_ctor(float_t songBpm, ::GlobalNamespace::BeatmapData* beatmapData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TutorialSongController_InitData*>(songBpm, beatmapData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSongController_InitData::TutorialSongController_InitData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType::SequenceCutInfo_TutorialSongController_NoteType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType::SequenceCutInfo_TutorialSongController_NoteType() {}
constexpr ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType::Chain{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType::Arc{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_SequenceCutInfo.get_isFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TutorialSongController_SequenceCutInfo::*)()>(
    &::GlobalNamespace::TutorialSongController_SequenceCutInfo::get_isFinished)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59fa078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>(), { "get_isFinished", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_SequenceCutInfo.get_allIsOK
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TutorialSongController_SequenceCutInfo::*)()>(
    &::GlobalNamespace::TutorialSongController_SequenceCutInfo::get_allIsOK)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x59fa090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>(), { "get_allIsOK", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_SequenceCutInfo.get_missedAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TutorialSongController_SequenceCutInfo::*)()>(
    &::GlobalNamespace::TutorialSongController_SequenceCutInfo::get_missedAny)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59fa23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>(), { "get_missedAny", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_SequenceCutInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController_SequenceCutInfo::*)(
    int32_t, ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType)>(&::GlobalNamespace::TutorialSongController_SequenceCutInfo::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59fa308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_SequenceCutInfo.MarkCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController_SequenceCutInfo::*)(::by_ref<::GlobalNamespace::NoteCutInfo>)>(
    &::GlobalNamespace::TutorialSongController_SequenceCutInfo::MarkCut)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x59f9fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>(),
                                                                                           { "MarkCut", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_SequenceCutInfo.MarkMiss
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController_SequenceCutInfo::*)()>(&::GlobalNamespace::TutorialSongController_SequenceCutInfo::MarkMiss)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59fa214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>(), { "MarkMiss", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_get_anyWasCutTooSoon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anyWasCutTooSoon;
}
constexpr bool const& GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_get_anyWasCutTooSoon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anyWasCutTooSoon;
}
constexpr void GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_set_anyWasCutTooSoon(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___anyWasCutTooSoon = value;
}
constexpr bool& GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_get_allSaberTypeOK() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allSaberTypeOK;
}
constexpr bool const& GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_get_allSaberTypeOK() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allSaberTypeOK;
}
constexpr void GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_set_allSaberTypeOK(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allSaberTypeOK = value;
}
constexpr bool& GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_get_allSpeedOK() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allSpeedOK;
}
constexpr bool const& GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_get_allSpeedOK() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allSpeedOK;
}
constexpr void GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_set_allSpeedOK(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allSpeedOK = value;
}
constexpr bool& GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_get_allDirectionOK() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allDirectionOK;
}
constexpr bool const& GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_get_allDirectionOK() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allDirectionOK;
}
constexpr void GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_set_allDirectionOK(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allDirectionOK = value;
}
constexpr ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType& GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_get_noteType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteType;
}
constexpr ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType const& GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_get_noteType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteType;
}
constexpr void GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_set_noteType(::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteType = value;
}
constexpr int32_t& GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_get_cuttableObjectsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cuttableObjectsCount;
}
constexpr int32_t const& GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_get_cuttableObjectsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cuttableObjectsCount;
}
constexpr void GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_set_cuttableObjectsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cuttableObjectsCount = value;
}
constexpr int32_t& GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_get_cutObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutObjects;
}
constexpr int32_t const& GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_get_cutObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutObjects;
}
constexpr void GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_set_cutObjects(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cutObjects = value;
}
constexpr int32_t& GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_get_missedObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missedObjects;
}
constexpr int32_t const& GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_get_missedObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missedObjects;
}
constexpr void GlobalNamespace::TutorialSongController_SequenceCutInfo::__cordl_internal_set_missedObjects(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___missedObjects = value;
}
inline bool GlobalNamespace::TutorialSongController_SequenceCutInfo::get_isFinished() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>(), { "get_isFinished", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::TutorialSongController_SequenceCutInfo::get_allIsOK() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>(), { "get_allIsOK", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::TutorialSongController_SequenceCutInfo::get_missedAny() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>(), { "get_missedAny", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialSongController_SequenceCutInfo::_ctor(int32_t cuttableObjectsCount, ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType noteType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cuttableObjectsCount, noteType);
}
inline void GlobalNamespace::TutorialSongController_SequenceCutInfo::MarkCut(::by_ref<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>(),
                                                                                         { "MarkCut", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteCutInfo);
}
inline void GlobalNamespace::TutorialSongController_SequenceCutInfo::MarkMiss() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>(), { "MarkMiss", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TutorialSongController_SequenceCutInfo*
GlobalNamespace::TutorialSongController_SequenceCutInfo::New_ctor(int32_t cuttableObjectsCount, ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType noteType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>(cuttableObjectsCount, noteType));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSongController_SequenceCutInfo::TutorialSongController_SequenceCutInfo() {}
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData::*)(::GlobalNamespace::Signal*, int32_t, int32_t, int32_t)>(
    &::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59fa5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::Signal*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::TutorialSongController_TutorialObjectSpawnData::__cordl_internal_get_signal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::TutorialSongController_TutorialObjectSpawnData::__cordl_internal_get_signal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signal;
}
constexpr void GlobalNamespace::TutorialSongController_TutorialObjectSpawnData::__cordl_internal_set_signal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signal = value;
}
constexpr int32_t& GlobalNamespace::TutorialSongController_TutorialObjectSpawnData::__cordl_internal_get_beatOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatOffset;
}
constexpr int32_t const& GlobalNamespace::TutorialSongController_TutorialObjectSpawnData::__cordl_internal_get_beatOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatOffset;
}
constexpr void GlobalNamespace::TutorialSongController_TutorialObjectSpawnData::__cordl_internal_set_beatOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatOffset = value;
}
constexpr int32_t& GlobalNamespace::TutorialSongController_TutorialObjectSpawnData::__cordl_internal_get_firstTimeBeatOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstTimeBeatOffset;
}
constexpr int32_t const& GlobalNamespace::TutorialSongController_TutorialObjectSpawnData::__cordl_internal_get_firstTimeBeatOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstTimeBeatOffset;
}
constexpr void GlobalNamespace::TutorialSongController_TutorialObjectSpawnData::__cordl_internal_set_firstTimeBeatOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstTimeBeatOffset = value;
}
constexpr int32_t& GlobalNamespace::TutorialSongController_TutorialObjectSpawnData::__cordl_internal_get_lineIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineIndex;
}
constexpr int32_t const& GlobalNamespace::TutorialSongController_TutorialObjectSpawnData::__cordl_internal_get_lineIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineIndex;
}
constexpr void GlobalNamespace::TutorialSongController_TutorialObjectSpawnData::__cordl_internal_set_lineIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineIndex = value;
}
inline void GlobalNamespace::TutorialSongController_TutorialObjectSpawnData::_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::Signal*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signal, firstTimeBeatOffset, beatOffset, lineIndex);
}
inline ::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*
GlobalNamespace::TutorialSongController_TutorialObjectSpawnData::New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*>(signal, firstTimeBeatOffset, beatOffset, lineIndex));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData::TutorialSongController_TutorialObjectSpawnData() {}
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData::*)(
    ::GlobalNamespace::Signal*, int32_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59fa600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::GlobalNamespace::Signal*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData::__cordl_internal_get_noteLineLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteLineLayer;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData::__cordl_internal_get_noteLineLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteLineLayer;
}
constexpr void GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData::__cordl_internal_set_noteLineLayer(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteLineLayer = value;
}
inline void GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData::_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                        ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::Signal*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer);
}
inline ::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData*
GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData::New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                               ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData*>(signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData::TutorialSongController_TutorialJumpingNoteSpawnData() {}
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData::*)(
    ::GlobalNamespace::Signal*, int32_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteCutDirection, ::GlobalNamespace::ColorType)>(
    &::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59f9544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::Signal*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(), ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NoteCutDirection& GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData::__cordl_internal_get_cutDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutDirection;
}
constexpr ::GlobalNamespace::NoteCutDirection const& GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData::__cordl_internal_get_cutDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutDirection;
}
constexpr void GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData::__cordl_internal_set_cutDirection(::GlobalNamespace::NoteCutDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cutDirection = value;
}
constexpr ::GlobalNamespace::ColorType& GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData::__cordl_internal_get_colorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorType;
}
constexpr ::GlobalNamespace::ColorType const& GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData::__cordl_internal_get_colorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorType;
}
constexpr void GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData::__cordl_internal_set_colorType(::GlobalNamespace::ColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorType = value;
}
inline void GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData::_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                      ::GlobalNamespace::NoteLineLayer noteLineLayer, ::GlobalNamespace::NoteCutDirection cutDirection,
                                                                                      ::GlobalNamespace::ColorType colorType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::Signal*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(), ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer, cutDirection, colorType);
}
inline ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*
GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData::New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                             ::GlobalNamespace::NoteLineLayer noteLineLayer, ::GlobalNamespace::NoteCutDirection cutDirection,
                                                                             ::GlobalNamespace::ColorType colorType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*>(signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer,
                                                                                                                                 cutDirection, colorType));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData::TutorialSongController_TutorialBasicNoteSpawnData() {}
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_TutorialChainSpawnData.get_headLineIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TutorialSongController_TutorialChainSpawnData::*)()>(
    &::GlobalNamespace::TutorialSongController_TutorialChainSpawnData::get_headLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59fa610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_TutorialChainSpawnData*>(), { "get_headLineIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_TutorialChainSpawnData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController_TutorialChainSpawnData::*)(
    ::GlobalNamespace::Signal*, int32_t, int32_t, int32_t, ::GlobalNamespace::ColorType, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteCutDirection, int32_t,
    ::GlobalNamespace::NoteLineLayer, int32_t, float_t, float_t)>(&::GlobalNamespace::TutorialSongController_TutorialChainSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x59fa618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_TutorialChainSpawnData*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::Signal*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<::GlobalNamespace::ColorType>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ColorType& GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_get_colorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorType;
}
constexpr ::GlobalNamespace::ColorType const& GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_get_colorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorType;
}
constexpr void GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_set_colorType(::GlobalNamespace::ColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorType = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_get_headLineLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headLineLayer;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_get_headLineLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headLineLayer;
}
constexpr void GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_set_headLineLayer(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headLineLayer = value;
}
constexpr ::GlobalNamespace::NoteCutDirection& GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_get_headCutDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headCutDirection;
}
constexpr ::GlobalNamespace::NoteCutDirection const& GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_get_headCutDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headCutDirection;
}
constexpr void GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_set_headCutDirection(::GlobalNamespace::NoteCutDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headCutDirection = value;
}
constexpr int32_t& GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_get_tailLineIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailLineIndex;
}
constexpr int32_t const& GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_get_tailLineIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailLineIndex;
}
constexpr void GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_set_tailLineIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tailLineIndex = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_get_tailLineLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailLineLayer;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_get_tailLineLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailLineLayer;
}
constexpr void GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_set_tailLineLayer(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tailLineLayer = value;
}
constexpr int32_t& GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_get_sliceCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliceCount;
}
constexpr int32_t const& GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_get_sliceCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliceCount;
}
constexpr void GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_set_sliceCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sliceCount = value;
}
constexpr float_t& GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_get_squishAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___squishAmount;
}
constexpr float_t const& GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_get_squishAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___squishAmount;
}
constexpr void GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_set_squishAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___squishAmount = value;
}
constexpr float_t& GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_get_tailTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailTimeOffset;
}
constexpr float_t const& GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_get_tailTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailTimeOffset;
}
constexpr void GlobalNamespace::TutorialSongController_TutorialChainSpawnData::__cordl_internal_set_tailTimeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tailTimeOffset = value;
}
inline int32_t GlobalNamespace::TutorialSongController_TutorialChainSpawnData::get_headLineIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_TutorialChainSpawnData*>(), { "get_headLineIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialSongController_TutorialChainSpawnData::_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                  ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteLineLayer headLineLayer,
                                                                                  ::GlobalNamespace::NoteCutDirection headCutDirection, int32_t tailLineIndex,
                                                                                  ::GlobalNamespace::NoteLineLayer tailLineLayer, int32_t sliceCount, float_t squishAmount, float_t tailTimeOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_TutorialChainSpawnData*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::Signal*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<::GlobalNamespace::ColorType>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signal, firstTimeBeatOffset, beatOffset, lineIndex, colorType, headLineLayer, headCutDirection, tailLineIndex,
                                                   tailLineLayer, sliceCount, squishAmount, tailTimeOffset);
}
inline ::GlobalNamespace::TutorialSongController_TutorialChainSpawnData* GlobalNamespace::TutorialSongController_TutorialChainSpawnData::New_ctor(
    ::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteLineLayer headLineLayer,
    ::GlobalNamespace::NoteCutDirection headCutDirection, int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailLineLayer, int32_t sliceCount, float_t squishAmount, float_t tailTimeOffset) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::TutorialSongController_TutorialChainSpawnData*>(signal, firstTimeBeatOffset, beatOffset, lineIndex, colorType, headLineLayer, headCutDirection,
                                                                                                         tailLineIndex, tailLineLayer, sliceCount, squishAmount, tailTimeOffset));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSongController_TutorialChainSpawnData::TutorialSongController_TutorialChainSpawnData() {}
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_TutorialArcSpawnData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController_TutorialArcSpawnData::*)(
    ::GlobalNamespace::Signal*, ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*, ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*)>(
    &::GlobalNamespace::TutorialSongController_TutorialArcSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59fa648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_TutorialArcSpawnData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::Signal*>(), ::i2c::type_of<::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*& GlobalNamespace::TutorialSongController_TutorialArcSpawnData::__cordl_internal_get_headNote() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headNote;
}
constexpr ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* const& GlobalNamespace::TutorialSongController_TutorialArcSpawnData::__cordl_internal_get_headNote() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headNote;
}
constexpr void GlobalNamespace::TutorialSongController_TutorialArcSpawnData::__cordl_internal_set_headNote(::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headNote = value;
}
constexpr ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*& GlobalNamespace::TutorialSongController_TutorialArcSpawnData::__cordl_internal_get_tailNote() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailNote;
}
constexpr ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* const& GlobalNamespace::TutorialSongController_TutorialArcSpawnData::__cordl_internal_get_tailNote() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailNote;
}
constexpr void GlobalNamespace::TutorialSongController_TutorialArcSpawnData::__cordl_internal_set_tailNote(::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tailNote = value;
}
inline void GlobalNamespace::TutorialSongController_TutorialArcSpawnData::_ctor(::GlobalNamespace::Signal* signal, ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* headNote,
                                                                                ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* tailNote) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_TutorialArcSpawnData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::Signal*>(), ::i2c::type_of<::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*>(),
                                                               ::i2c::type_of<::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signal, headNote, tailNote);
}
inline ::GlobalNamespace::TutorialSongController_TutorialArcSpawnData*
GlobalNamespace::TutorialSongController_TutorialArcSpawnData::New_ctor(::GlobalNamespace::Signal* signal, ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* headNote,
                                                                       ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* tailNote) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TutorialSongController_TutorialArcSpawnData*>(signal, headNote, tailNote));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSongController_TutorialArcSpawnData::TutorialSongController_TutorialArcSpawnData() {}
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData::*)(
    ::GlobalNamespace::Signal*, int32_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59f9558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::GlobalNamespace::Signal*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData::_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                     ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::Signal*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer);
}
inline ::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData*
GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData::New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                            ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData*>(signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData::TutorialSongController_TutorialBombNoteSpawnData() {}
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData::*)(
    ::GlobalNamespace::Signal*, int32_t, int32_t, int32_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59f9568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::Signal*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData::__cordl_internal_get_noteLineLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteLineLayer;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData::__cordl_internal_get_noteLineLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteLineLayer;
}
constexpr void GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData::__cordl_internal_set_noteLineLayer(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteLineLayer = value;
}
constexpr int32_t& GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData::__cordl_internal_get_width() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___width;
}
constexpr int32_t const& GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData::__cordl_internal_get_width() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___width;
}
constexpr void GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData::__cordl_internal_set_width(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___width = value;
}
constexpr int32_t& GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData::__cordl_internal_get_height() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height;
}
constexpr int32_t const& GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData::__cordl_internal_get_height() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height;
}
constexpr void GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData::__cordl_internal_set_height(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___height = value;
}
inline void GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData::_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                     int32_t width, int32_t height, ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::Signal*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signal, firstTimeBeatOffset, beatOffset, lineIndex, width, height, noteLineLayer);
}
inline ::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData*
GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData::New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, int32_t width,
                                                                            int32_t height, ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData*>(signal, firstTimeBeatOffset, beatOffset, lineIndex, width, height, noteLineLayer));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData::TutorialSongController_TutorialObstacleSpawnData() {}
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController::*)()>(&::GlobalNamespace::TutorialSongController::Awake)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x59f90ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController::*)()>(&::GlobalNamespace::TutorialSongController::Start)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x59f957c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController::*)()>(&::GlobalNamespace::TutorialSongController::OnDestroy)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x59f96ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.StartSong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController::*)(float_t)>(&::GlobalNamespace::TutorialSongController::StartSong)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x59f8518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { "StartSong", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.StopSong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController::*)()>(&::GlobalNamespace::TutorialSongController::StopSong)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59f9e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { ::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.PauseSong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController::*)()>(&::GlobalNamespace::TutorialSongController::PauseSong)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59f9e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { ::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.ResumeSong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController::*)()>(&::GlobalNamespace::TutorialSongController::ResumeSong)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59f9e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { ::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.HandleNoteWasCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController::*)(::GlobalNamespace::NoteController*, ::by_ref<::GlobalNamespace::NoteCutInfo>)>(
    &::GlobalNamespace::TutorialSongController::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x59f9e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(),
                                                { "HandleNoteWasCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.HandleNoteWasMissed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::TutorialSongController::HandleNoteWasMissed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x59fa174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { "HandleNoteWasMissed", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.HandleObstacleDidPassThreeQuartersOfMove2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::TutorialSongController::HandleObstacleDidPassThreeQuartersOfMove2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59fa224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(),
                                                             { "HandleObstacleDidPassThreeQuartersOfMove2", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.RaiseSignalsForIndividualCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController::*)(::GlobalNamespace::NoteCutInfo)>(
    &::GlobalNamespace::TutorialSongController::RaiseSignalsForIndividualCut)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x59fa010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { "RaiseSignalsForIndividualCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.RaiseSignalForIncorrectCutSequence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController::*)()>(&::GlobalNamespace::TutorialSongController::RaiseSignalForIncorrectCutSequence)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x59fa0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { "RaiseSignalForIncorrectCutSequence", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.UpdateBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController::*)(float_t, int32_t)>(&::GlobalNamespace::TutorialSongController::UpdateBeatmapData)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x59f9844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { "UpdateBeatmapData", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.GetNextBeatmapObjectBeat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TutorialSongController::*)(int32_t)>(&::GlobalNamespace::TutorialSongController::GetNextBeatmapObjectBeat)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x59fa24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { "GetNextBeatmapObjectBeat", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.GetTimeFromBeat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TutorialSongController::*)(int32_t)>(&::GlobalNamespace::TutorialSongController::GetTimeFromBeat)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59fa2b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { "GetTimeFromBeat", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.CreateObstacleData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::ObstacleData* (::GlobalNamespace::TutorialSongController::*)(float_t, int32_t, ::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData*)>(
        &::GlobalNamespace::TutorialSongController::CreateObstacleData)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x59fa340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::TutorialSongController*>(),
            { "CreateObstacleData", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.CreateBasicNoteData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::NoteData* (::GlobalNamespace::TutorialSongController::*)(float_t, int32_t, ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*)>(
        &::GlobalNamespace::TutorialSongController::CreateBasicNoteData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59fa2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::TutorialSongController*>(),
            { "CreateBasicNoteData", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.CreateBombNoteData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::NoteData* (::GlobalNamespace::TutorialSongController::*)(float_t, int32_t, ::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData*)>(
        &::GlobalNamespace::TutorialSongController::CreateBombNoteData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59fa320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::TutorialSongController*>(),
            { "CreateBombNoteData", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.CreateChainData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::SliderData*> (::GlobalNamespace::TutorialSongController::*)(
    float_t, float_t, int32_t, ::GlobalNamespace::TutorialSongController_TutorialChainSpawnData*)>(&::GlobalNamespace::TutorialSongController::CreateChainData)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x59fa424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { "CreateChainData",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                                                                            ::i2c::type_of<::GlobalNamespace::TutorialSongController_TutorialChainSpawnData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.CreateArcData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SliderData* (::GlobalNamespace::TutorialSongController::*)(::GlobalNamespace::NoteData*, ::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::TutorialSongController::CreateArcData)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x59fa554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(),
                                                             { "CreateArcData", {}, { ::i2c::type_of<::GlobalNamespace::NoteData*>(), ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialSongController::*)()>(&::GlobalNamespace::TutorialSongController::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59fa5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::TutorialSongController::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::TutorialSongController::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSyncController = value;
}
constexpr int32_t& GlobalNamespace::TutorialSongController::__cordl_internal_get__startWaitTimeInBeats() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startWaitTimeInBeats;
}
constexpr int32_t const& GlobalNamespace::TutorialSongController::__cordl_internal_get__startWaitTimeInBeats() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startWaitTimeInBeats;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__startWaitTimeInBeats(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startWaitTimeInBeats = value;
}
constexpr int32_t& GlobalNamespace::TutorialSongController::__cordl_internal_get__numberOfBeatsToSnap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfBeatsToSnap;
}
constexpr int32_t const& GlobalNamespace::TutorialSongController::__cordl_internal_get__numberOfBeatsToSnap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfBeatsToSnap;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__numberOfBeatsToSnap(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfBeatsToSnap = value;
}
constexpr int32_t& GlobalNamespace::TutorialSongController::__cordl_internal_get__obstacleDurationInBeats() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleDurationInBeats;
}
constexpr int32_t const& GlobalNamespace::TutorialSongController::__cordl_internal_get__obstacleDurationInBeats() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleDurationInBeats;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__obstacleDurationInBeats(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacleDurationInBeats = value;
}
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::TutorialSongController::__cordl_internal_get__noteCuttingTutorialPartDidStartSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCuttingTutorialPartDidStartSignal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::TutorialSongController::__cordl_internal_get__noteCuttingTutorialPartDidStartSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCuttingTutorialPartDidStartSignal;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__noteCuttingTutorialPartDidStartSignal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteCuttingTutorialPartDidStartSignal = value;
}
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::TutorialSongController::__cordl_internal_get__noteCuttingInAnyDirectionDidStartSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCuttingInAnyDirectionDidStartSignal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::TutorialSongController::__cordl_internal_get__noteCuttingInAnyDirectionDidStartSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCuttingInAnyDirectionDidStartSignal;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__noteCuttingInAnyDirectionDidStartSignal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteCuttingInAnyDirectionDidStartSignal = value;
}
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::TutorialSongController::__cordl_internal_get__chainCuttingDidStartSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chainCuttingDidStartSignal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::TutorialSongController::__cordl_internal_get__chainCuttingDidStartSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chainCuttingDidStartSignal;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__chainCuttingDidStartSignal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____chainCuttingDidStartSignal = value;
}
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::TutorialSongController::__cordl_internal_get__chainLinkMissedSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chainLinkMissedSignal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::TutorialSongController::__cordl_internal_get__chainLinkMissedSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chainLinkMissedSignal;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__chainLinkMissedSignal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____chainLinkMissedSignal = value;
}
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::TutorialSongController::__cordl_internal_get__arcCuttingDidStartSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcCuttingDidStartSignal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::TutorialSongController::__cordl_internal_get__arcCuttingDidStartSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcCuttingDidStartSignal;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__arcCuttingDidStartSignal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arcCuttingDidStartSignal = value;
}
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::TutorialSongController::__cordl_internal_get__arcHeadOrTailMissedSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcHeadOrTailMissedSignal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::TutorialSongController::__cordl_internal_get__arcHeadOrTailMissedSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcHeadOrTailMissedSignal;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__arcHeadOrTailMissedSignal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arcHeadOrTailMissedSignal = value;
}
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::TutorialSongController::__cordl_internal_get__arcMiddleInfoSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcMiddleInfoSignal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::TutorialSongController::__cordl_internal_get__arcMiddleInfoSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcMiddleInfoSignal;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__arcMiddleInfoSignal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arcMiddleInfoSignal = value;
}
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::TutorialSongController::__cordl_internal_get__bombCuttingTutorialPartDidStartSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombCuttingTutorialPartDidStartSignal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::TutorialSongController::__cordl_internal_get__bombCuttingTutorialPartDidStartSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombCuttingTutorialPartDidStartSignal;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__bombCuttingTutorialPartDidStartSignal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bombCuttingTutorialPartDidStartSignal = value;
}
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::TutorialSongController::__cordl_internal_get__leftObstacleTutorialPartDidStartSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftObstacleTutorialPartDidStartSignal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::TutorialSongController::__cordl_internal_get__leftObstacleTutorialPartDidStartSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftObstacleTutorialPartDidStartSignal;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__leftObstacleTutorialPartDidStartSignal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftObstacleTutorialPartDidStartSignal = value;
}
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::TutorialSongController::__cordl_internal_get__rightObstacleTutorialPartDidStartSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightObstacleTutorialPartDidStartSignal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::TutorialSongController::__cordl_internal_get__rightObstacleTutorialPartDidStartSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightObstacleTutorialPartDidStartSignal;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__rightObstacleTutorialPartDidStartSignal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightObstacleTutorialPartDidStartSignal = value;
}
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::TutorialSongController::__cordl_internal_get__topObstacleTutorialPartDidStartSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topObstacleTutorialPartDidStartSignal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::TutorialSongController::__cordl_internal_get__topObstacleTutorialPartDidStartSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topObstacleTutorialPartDidStartSignal;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__topObstacleTutorialPartDidStartSignal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____topObstacleTutorialPartDidStartSignal = value;
}
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::TutorialSongController::__cordl_internal_get__noteWasCutOKSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteWasCutOKSignal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::TutorialSongController::__cordl_internal_get__noteWasCutOKSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteWasCutOKSignal;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__noteWasCutOKSignal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteWasCutOKSignal = value;
}
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::TutorialSongController::__cordl_internal_get__noteWasCutTooSoonSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteWasCutTooSoonSignal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::TutorialSongController::__cordl_internal_get__noteWasCutTooSoonSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteWasCutTooSoonSignal;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__noteWasCutTooSoonSignal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteWasCutTooSoonSignal = value;
}
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::TutorialSongController::__cordl_internal_get__noteWasCutWithWrongColorSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteWasCutWithWrongColorSignal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::TutorialSongController::__cordl_internal_get__noteWasCutWithWrongColorSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteWasCutWithWrongColorSignal;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__noteWasCutWithWrongColorSignal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteWasCutWithWrongColorSignal = value;
}
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::TutorialSongController::__cordl_internal_get__noteWasCutFromDifferentDirectionSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteWasCutFromDifferentDirectionSignal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::TutorialSongController::__cordl_internal_get__noteWasCutFromDifferentDirectionSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteWasCutFromDifferentDirectionSignal;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__noteWasCutFromDifferentDirectionSignal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteWasCutFromDifferentDirectionSignal = value;
}
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::TutorialSongController::__cordl_internal_get__noteWasCutWithSlowSpeedSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteWasCutWithSlowSpeedSignal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::TutorialSongController::__cordl_internal_get__noteWasCutWithSlowSpeedSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteWasCutWithSlowSpeedSignal;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__noteWasCutWithSlowSpeedSignal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteWasCutWithSlowSpeedSignal = value;
}
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::TutorialSongController::__cordl_internal_get__bombWasCutSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombWasCutSignal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::TutorialSongController::__cordl_internal_get__bombWasCutSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombWasCutSignal;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__bombWasCutSignal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bombWasCutSignal = value;
}
constexpr ::GlobalNamespace::TutorialSongController_InitData*& GlobalNamespace::TutorialSongController::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::TutorialSongController_InitData* const& GlobalNamespace::TutorialSongController::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__initData(::GlobalNamespace::TutorialSongController_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initData = value;
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::TutorialSongController::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::GlobalNamespace::BeatmapObjectManager* const& GlobalNamespace::TutorialSongController::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectManager = value;
}
constexpr int32_t& GlobalNamespace::TutorialSongController::__cordl_internal_get__tutorialBeatmapObjectIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialBeatmapObjectIndex;
}
constexpr int32_t const& GlobalNamespace::TutorialSongController::__cordl_internal_get__tutorialBeatmapObjectIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialBeatmapObjectIndex;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__tutorialBeatmapObjectIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tutorialBeatmapObjectIndex = value;
}
constexpr int32_t& GlobalNamespace::TutorialSongController::__cordl_internal_get__prevSpawnedBeatmapObjectIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevSpawnedBeatmapObjectIndex;
}
constexpr int32_t const& GlobalNamespace::TutorialSongController::__cordl_internal_get__prevSpawnedBeatmapObjectIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevSpawnedBeatmapObjectIndex;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__prevSpawnedBeatmapObjectIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevSpawnedBeatmapObjectIndex = value;
}
constexpr float_t& GlobalNamespace::TutorialSongController::__cordl_internal_get__songBpm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songBpm;
}
constexpr float_t const& GlobalNamespace::TutorialSongController::__cordl_internal_get__songBpm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songBpm;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__songBpm(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songBpm = value;
}
constexpr ::GlobalNamespace::BeatmapData*& GlobalNamespace::TutorialSongController::__cordl_internal_get__beatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr ::GlobalNamespace::BeatmapData* const& GlobalNamespace::TutorialSongController::__cordl_internal_get__beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__beatmapData(::GlobalNamespace::BeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapData = value;
}
constexpr ::GlobalNamespace::TutorialSongController_SequenceCutInfo*& GlobalNamespace::TutorialSongController::__cordl_internal_get__currentSequenceCutInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSequenceCutInfo;
}
constexpr ::GlobalNamespace::TutorialSongController_SequenceCutInfo* const& GlobalNamespace::TutorialSongController::__cordl_internal_get__currentSequenceCutInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSequenceCutInfo;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__currentSequenceCutInfo(::GlobalNamespace::TutorialSongController_SequenceCutInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentSequenceCutInfo = value;
}
constexpr ::ArrayW<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*>& GlobalNamespace::TutorialSongController::__cordl_internal_get__normalModeTutorialObjectsSpawnData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalModeTutorialObjectsSpawnData;
}
constexpr ::ArrayW<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*> const&
GlobalNamespace::TutorialSongController::__cordl_internal_get__normalModeTutorialObjectsSpawnData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalModeTutorialObjectsSpawnData;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__normalModeTutorialObjectsSpawnData(::ArrayW<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalModeTutorialObjectsSpawnData = value;
}
inline void GlobalNamespace::TutorialSongController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialSongController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialSongController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialSongController::StartSong(float_t startTimeOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { "StartSong", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startTimeOffset);
}
inline void GlobalNamespace::TutorialSongController::StopSong() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialSongController::PauseSong() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialSongController::ResumeSong() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialSongController::HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ::by_ref<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(),
                                              { "HandleNoteWasCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController, noteCutInfo);
}
inline void GlobalNamespace::TutorialSongController::HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { "HandleNoteWasMissed", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::TutorialSongController::HandleObstacleDidPassThreeQuartersOfMove2(::GlobalNamespace::ObstacleController* obstacleController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(),
                                                           { "HandleObstacleDidPassThreeQuartersOfMove2", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::TutorialSongController::RaiseSignalsForIndividualCut(::GlobalNamespace::NoteCutInfo noteCutInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { "RaiseSignalsForIndividualCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteCutInfo);
}
inline void GlobalNamespace::TutorialSongController::RaiseSignalForIncorrectCutSequence() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { "RaiseSignalForIncorrectCutSequence", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialSongController::UpdateBeatmapData(float_t noteTime, int32_t noteBeat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { "UpdateBeatmapData", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteTime, noteBeat);
}
inline int32_t GlobalNamespace::TutorialSongController::GetNextBeatmapObjectBeat(int32_t beatOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { "GetNextBeatmapObjectBeat", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, beatOffset);
}
inline float_t GlobalNamespace::TutorialSongController::GetTimeFromBeat(int32_t beatNumber) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { "GetTimeFromBeat", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, beatNumber);
}
inline ::GlobalNamespace::ObstacleData* GlobalNamespace::TutorialSongController::CreateObstacleData(float_t time, int32_t beat,
                                                                                                    ::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData* tutorialObstacleSpawnData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::TutorialSongController*>(),
          { "CreateObstacleData", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ObstacleData*>(this, ___internal_method, time, beat, tutorialObstacleSpawnData);
}
inline ::GlobalNamespace::NoteData* GlobalNamespace::TutorialSongController::CreateBasicNoteData(float_t time, int32_t beat,
                                                                                                 ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* tutorialBasicNoteSpawnData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::TutorialSongController*>(),
          { "CreateBasicNoteData", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*>(this, ___internal_method, time, beat, tutorialBasicNoteSpawnData);
}
inline ::GlobalNamespace::NoteData* GlobalNamespace::TutorialSongController::CreateBombNoteData(float_t time, int32_t beat,
                                                                                                ::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData* tutorialBombNoteSpawnData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::TutorialSongController*>(),
          { "CreateBombNoteData", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*>(this, ___internal_method, time, beat, tutorialBombNoteSpawnData);
}
inline ::System::ValueTuple_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::SliderData*>
GlobalNamespace::TutorialSongController::CreateChainData(float_t time, float_t tailTime, int32_t beat, ::GlobalNamespace::TutorialSongController_TutorialChainSpawnData* tutorialChainSpawnData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { "CreateChainData",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                                                                          ::i2c::type_of<::GlobalNamespace::TutorialSongController_TutorialChainSpawnData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::SliderData*>>(this, ___internal_method, time, tailTime, beat,
                                                                                                                                   tutorialChainSpawnData);
}
inline ::GlobalNamespace::SliderData* GlobalNamespace::TutorialSongController::CreateArcData(::GlobalNamespace::NoteData* headData, ::GlobalNamespace::NoteData* tailData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(),
                                                           { "CreateArcData", {}, { ::i2c::type_of<::GlobalNamespace::NoteData*>(), ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderData*>(this, ___internal_method, headData, tailData);
}
inline void GlobalNamespace::TutorialSongController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialSongController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TutorialSongController* GlobalNamespace::TutorialSongController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TutorialSongController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSongController::TutorialSongController() {}
