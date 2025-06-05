#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialSongController.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController_InitData::*)(float_t, ::GlobalNamespace::BeatmapData*)>(
    &::GlobalNamespace::TutorialSongController_InitData::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3bf3688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TutorialSongController_InitData::_ctor(float_t songBpm, ::GlobalNamespace::BeatmapData* beatmapData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songBpm, beatmapData);
}
inline ::GlobalNamespace::TutorialSongController_InitData* GlobalNamespace::TutorialSongController_InitData::New_ctor(float_t songBpm, ::GlobalNamespace::BeatmapData* beatmapData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TutorialSongController_InitData*>(songBpm, beatmapData));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::TutorialSongController_SequenceCutInfo::*)()>(
    &::GlobalNamespace::TutorialSongController_SequenceCutInfo::get_isFinished)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3bf30f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>::get(), "get_isFinished",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_SequenceCutInfo.get_allIsOK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::TutorialSongController_SequenceCutInfo::*)()>(
    &::GlobalNamespace::TutorialSongController_SequenceCutInfo::get_allIsOK)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3bf3108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>::get(), "get_allIsOK",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_SequenceCutInfo.get_missedAny
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::TutorialSongController_SequenceCutInfo::*)()>(
    &::GlobalNamespace::TutorialSongController_SequenceCutInfo::get_missedAny)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3bf32b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>::get(), "get_missedAny",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_SequenceCutInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController_SequenceCutInfo::*)(
    int32_t, ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType)>(&::GlobalNamespace::TutorialSongController_SequenceCutInfo::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3bf338c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_SequenceCutInfo.MarkCut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController_SequenceCutInfo::*)(::ByRef<::GlobalNamespace::NoteCutInfo>)>(
    &::GlobalNamespace::TutorialSongController_SequenceCutInfo::MarkCut)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3bf3038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>::get(), "MarkCut", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::NoteCutInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_SequenceCutInfo.MarkMiss
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController_SequenceCutInfo::*)()>(
    &::GlobalNamespace::TutorialSongController_SequenceCutInfo::MarkMiss)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3bf328c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>::get(), "MarkMiss",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>::get(),
                                                                             "get_isFinished", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::TutorialSongController_SequenceCutInfo::get_allIsOK() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>::get(),
                                                                             "get_allIsOK", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::TutorialSongController_SequenceCutInfo::get_missedAny() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>::get(),
                                                                             "get_missedAny", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialSongController_SequenceCutInfo::_ctor(int32_t cuttableObjectsCount, ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType noteType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cuttableObjectsCount, noteType);
}
inline void GlobalNamespace::TutorialSongController_SequenceCutInfo::MarkCut(::ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>::get(), "MarkCut", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::NoteCutInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteCutInfo);
}
inline void GlobalNamespace::TutorialSongController_SequenceCutInfo::MarkMiss() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>::get(),
                                                                             "MarkMiss", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TutorialSongController_SequenceCutInfo*
GlobalNamespace::TutorialSongController_SequenceCutInfo::New_ctor(int32_t cuttableObjectsCount, ::GlobalNamespace::SequenceCutInfo_TutorialSongController_NoteType noteType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TutorialSongController_SequenceCutInfo*>(cuttableObjectsCount, noteType));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSongController_SequenceCutInfo::TutorialSongController_SequenceCutInfo() {}
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData::*)(
    ::GlobalNamespace::Signal*, int32_t, int32_t, int32_t)>(&::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3bf36c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal, firstTimeBeatOffset, beatOffset, lineIndex);
}
inline ::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*
GlobalNamespace::TutorialSongController_TutorialObjectSpawnData::New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*>(signal, firstTimeBeatOffset, beatOffset, lineIndex));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData::TutorialSongController_TutorialObjectSpawnData() {}
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData::*)(
    ::GlobalNamespace::Signal*, int32_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3bf3704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer);
}
inline ::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData*
GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData::New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                               ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData*>(signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSongController_TutorialJumpingNoteSpawnData::TutorialSongController_TutorialJumpingNoteSpawnData() {}
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData::*)(
    ::GlobalNamespace::Signal*, int32_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteCutDirection, ::GlobalNamespace::ColorType)>(
    &::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3bf2608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get() })));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer, cutDirection, colorType);
}
inline ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*
GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData::New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                             ::GlobalNamespace::NoteLineLayer noteLineLayer, ::GlobalNamespace::NoteCutDirection cutDirection,
                                                                             ::GlobalNamespace::ColorType colorType) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*>(signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer, cutDirection, colorType));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData::TutorialSongController_TutorialBasicNoteSpawnData() {}
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_TutorialChainSpawnData.get_headLineIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::TutorialSongController_TutorialChainSpawnData::*)()>(
    &::GlobalNamespace::TutorialSongController_TutorialChainSpawnData::get_headLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bf3754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_TutorialChainSpawnData*>::get(), "get_headLineIndex",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_TutorialChainSpawnData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController_TutorialChainSpawnData::*)(
    ::GlobalNamespace::Signal*, int32_t, int32_t, int32_t, ::GlobalNamespace::ColorType, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteCutDirection, int32_t,
    ::GlobalNamespace::NoteLineLayer, int32_t, float_t, float_t)>(&::GlobalNamespace::TutorialSongController_TutorialChainSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3bf375c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_TutorialChainSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 12>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_TutorialChainSpawnData*>::get(), "get_headLineIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialSongController_TutorialChainSpawnData::_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                  ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteLineLayer headLineLayer,
                                                                                  ::GlobalNamespace::NoteCutDirection headCutDirection, int32_t tailLineIndex,
                                                                                  ::GlobalNamespace::NoteLineLayer tailLineLayer, int32_t sliceCount, float_t squishAmount, float_t tailTimeOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_TutorialChainSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 12>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal, firstTimeBeatOffset, beatOffset, lineIndex, colorType, headLineLayer, headCutDirection, tailLineIndex,
                                                          tailLineLayer, sliceCount, squishAmount, tailTimeOffset);
}
inline ::GlobalNamespace::TutorialSongController_TutorialChainSpawnData* GlobalNamespace::TutorialSongController_TutorialChainSpawnData::New_ctor(
    ::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteLineLayer headLineLayer,
    ::GlobalNamespace::NoteCutDirection headCutDirection, int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailLineLayer, int32_t sliceCount, float_t squishAmount, float_t tailTimeOffset) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TutorialSongController_TutorialChainSpawnData*>(
      signal, firstTimeBeatOffset, beatOffset, lineIndex, colorType, headLineLayer, headCutDirection, tailLineIndex, tailLineLayer, sliceCount, squishAmount, tailTimeOffset));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSongController_TutorialChainSpawnData::TutorialSongController_TutorialChainSpawnData() {}
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_TutorialArcSpawnData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController_TutorialArcSpawnData::*)(
    ::GlobalNamespace::Signal*, ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*, ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*)>(
    &::GlobalNamespace::TutorialSongController_TutorialArcSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3bf37f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_TutorialArcSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headNote)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tailNote)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TutorialSongController_TutorialArcSpawnData::_ctor(::GlobalNamespace::Signal* signal, ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* headNote,
                                                                                ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* tailNote) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_TutorialArcSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal, headNote, tailNote);
}
inline ::GlobalNamespace::TutorialSongController_TutorialArcSpawnData*
GlobalNamespace::TutorialSongController_TutorialArcSpawnData::New_ctor(::GlobalNamespace::Signal* signal, ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* headNote,
                                                                       ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* tailNote) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TutorialSongController_TutorialArcSpawnData*>(signal, headNote, tailNote));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSongController_TutorialArcSpawnData::TutorialSongController_TutorialArcSpawnData() {}
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData::*)(
    ::GlobalNamespace::Signal*, int32_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3bf266c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData::_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                     ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer);
}
inline ::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData*
GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData::New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                            ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData*>(signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData::TutorialSongController_TutorialBombNoteSpawnData() {}
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData::*)(
    ::GlobalNamespace::Signal*, int32_t, int32_t, int32_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3bf26bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal, firstTimeBeatOffset, beatOffset, lineIndex, width, height, noteLineLayer);
}
inline ::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData*
GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData::New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, int32_t width,
                                                                            int32_t height, ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData*>(signal, firstTimeBeatOffset, beatOffset, lineIndex, width, height, noteLineLayer));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData::TutorialSongController_TutorialObstacleSpawnData() {}
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController::*)()>(&::GlobalNamespace::TutorialSongController::Awake)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x3bf2124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController::*)()>(&::GlobalNamespace::TutorialSongController::Start)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3bf2720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController::*)()>(&::GlobalNamespace::TutorialSongController::OnDestroy)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x3bf2880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.StartSong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController::*)(float_t)>(
    &::GlobalNamespace::TutorialSongController::StartSong)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3bf160c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "StartSong", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.StopSong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController::*)()>(&::GlobalNamespace::TutorialSongController::StopSong)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3bf2e98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.PauseSong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController::*)()>(&::GlobalNamespace::TutorialSongController::PauseSong)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3bf2ec0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.ResumeSong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController::*)()>(&::GlobalNamespace::TutorialSongController::ResumeSong)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3bf2ee8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.HandleNoteWasCut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController::*)(
    ::GlobalNamespace::NoteController*, ::ByRef<::GlobalNamespace::NoteCutInfo>)>(&::GlobalNamespace::TutorialSongController::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x3bf2f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "HandleNoteWasCut", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::NoteCutInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.HandleNoteWasMissed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::TutorialSongController::HandleNoteWasMissed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3bf31ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "HandleNoteWasMissed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.HandleObstacleDidPassThreeQuartersOfMove2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::TutorialSongController::HandleObstacleDidPassThreeQuartersOfMove2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3bf329c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "HandleObstacleDidPassThreeQuartersOfMove2",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.RaiseSignalsForIndividualCut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController::*)(::GlobalNamespace::NoteCutInfo)>(
    &::GlobalNamespace::TutorialSongController::RaiseSignalsForIndividualCut)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3bf3088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "RaiseSignalsForIndividualCut", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.RaiseSignalForIncorrectCutSequence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController::*)()>(
    &::GlobalNamespace::TutorialSongController::RaiseSignalForIncorrectCutSequence)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3bf3144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "RaiseSignalForIncorrectCutSequence",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.UpdateBeatmapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController::*)(float_t, int32_t)>(
    &::GlobalNamespace::TutorialSongController::UpdateBeatmapData)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x3bf29c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "UpdateBeatmapData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.GetNextBeatmapObjectBeat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::TutorialSongController::*)(int32_t)>(
    &::GlobalNamespace::TutorialSongController::GetNextBeatmapObjectBeat)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3bf32c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "GetNextBeatmapObjectBeat",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.GetTimeFromBeat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TutorialSongController::*)(int32_t)>(
    &::GlobalNamespace::TutorialSongController::GetTimeFromBeat)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3bf3334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "GetTimeFromBeat",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.CreateObstacleData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::ObstacleData* (::GlobalNamespace::TutorialSongController::*)(float_t, int32_t, ::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData*)>(
        &::GlobalNamespace::TutorialSongController::CreateObstacleData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3bf33f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "CreateObstacleData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.CreateBasicNoteData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::NoteData* (::GlobalNamespace::TutorialSongController::*)(float_t, int32_t, ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*)>(
        &::GlobalNamespace::TutorialSongController::CreateBasicNoteData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3bf335c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "CreateBasicNoteData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.CreateBombNoteData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::NoteData* (::GlobalNamespace::TutorialSongController::*)(float_t, int32_t, ::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData*)>(
        &::GlobalNamespace::TutorialSongController::CreateBombNoteData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3bf33c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "CreateBombNoteData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.CreateChainData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::SliderData*> (
    ::GlobalNamespace::TutorialSongController::*)(float_t, float_t, int32_t, ::GlobalNamespace::TutorialSongController_TutorialChainSpawnData*)>(
    &::GlobalNamespace::TutorialSongController::CreateChainData)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3bf34d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "CreateChainData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TutorialSongController_TutorialChainSpawnData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.CreateArcData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderData* (
    ::GlobalNamespace::TutorialSongController::*)(::GlobalNamespace::NoteData*, ::GlobalNamespace::NoteData*)>(&::GlobalNamespace::TutorialSongController::CreateArcData)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3bf35f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "CreateArcData", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController::*)()>(&::GlobalNamespace::TutorialSongController::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3bf3668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteCuttingTutorialPartDidStartSignal)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteCuttingInAnyDirectionDidStartSignal)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____chainCuttingDidStartSignal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____chainLinkMissedSignal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arcCuttingDidStartSignal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arcHeadOrTailMissedSignal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arcMiddleInfoSignal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bombCuttingTutorialPartDidStartSignal)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftObstacleTutorialPartDidStartSignal)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightObstacleTutorialPartDidStartSignal)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____topObstacleTutorialPartDidStartSignal)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteWasCutOKSignal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteWasCutTooSoonSignal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteWasCutWithWrongColorSignal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteWasCutFromDifferentDirectionSignal)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteWasCutWithSlowSpeedSignal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bombWasCutSignal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentSequenceCutInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*, ::Array<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*>*>&
GlobalNamespace::TutorialSongController::__cordl_internal_get__normalModeTutorialObjectsSpawnData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalModeTutorialObjectsSpawnData;
}
constexpr ::ArrayW<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*, ::Array<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*>*> const&
GlobalNamespace::TutorialSongController::__cordl_internal_get__normalModeTutorialObjectsSpawnData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalModeTutorialObjectsSpawnData;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__normalModeTutorialObjectsSpawnData(
    ::ArrayW<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*, ::Array<::GlobalNamespace::TutorialSongController_TutorialObjectSpawnData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normalModeTutorialObjectsSpawnData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TutorialSongController::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialSongController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialSongController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialSongController::StartSong(float_t startTimeOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "StartSong",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startTimeOffset);
}
inline void GlobalNamespace::TutorialSongController::StopSong() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialSongController::PauseSong() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialSongController::ResumeSong() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialSongController::HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ::ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "HandleNoteWasCut", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::NoteCutInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController, noteCutInfo);
}
inline void GlobalNamespace::TutorialSongController::HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "HandleNoteWasMissed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::TutorialSongController::HandleObstacleDidPassThreeQuartersOfMove2(::GlobalNamespace::ObstacleController* obstacleController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "HandleObstacleDidPassThreeQuartersOfMove2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::TutorialSongController::RaiseSignalsForIndividualCut(::GlobalNamespace::NoteCutInfo noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "RaiseSignalsForIndividualCut", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteCutInfo);
}
inline void GlobalNamespace::TutorialSongController::RaiseSignalForIncorrectCutSequence() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "RaiseSignalForIncorrectCutSequence",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialSongController::UpdateBeatmapData(float_t noteTime, int32_t noteBeat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "UpdateBeatmapData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteTime, noteBeat);
}
inline int32_t GlobalNamespace::TutorialSongController::GetNextBeatmapObjectBeat(int32_t beatOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "GetNextBeatmapObjectBeat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, beatOffset);
}
inline float_t GlobalNamespace::TutorialSongController::GetTimeFromBeat(int32_t beatNumber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "GetTimeFromBeat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, beatNumber);
}
inline ::GlobalNamespace::ObstacleData* GlobalNamespace::TutorialSongController::CreateObstacleData(float_t time, int32_t beat,
                                                                                                    ::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData* tutorialObstacleSpawnData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "CreateObstacleData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TutorialSongController_TutorialObstacleSpawnData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ObstacleData*, false>(this, ___internal_method, time, beat, tutorialObstacleSpawnData);
}
inline ::GlobalNamespace::NoteData* GlobalNamespace::TutorialSongController::CreateBasicNoteData(float_t time, int32_t beat,
                                                                                                 ::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData* tutorialBasicNoteSpawnData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "CreateBasicNoteData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TutorialSongController_TutorialBasicNoteSpawnData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*, false>(this, ___internal_method, time, beat, tutorialBasicNoteSpawnData);
}
inline ::GlobalNamespace::NoteData* GlobalNamespace::TutorialSongController::CreateBombNoteData(float_t time, int32_t beat,
                                                                                                ::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData* tutorialBombNoteSpawnData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "CreateBombNoteData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TutorialSongController_TutorialBombNoteSpawnData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*, false>(this, ___internal_method, time, beat, tutorialBombNoteSpawnData);
}
inline ::System::ValueTuple_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::SliderData*>
GlobalNamespace::TutorialSongController::CreateChainData(float_t time, float_t tailTime, int32_t beat, ::GlobalNamespace::TutorialSongController_TutorialChainSpawnData* tutorialChainSpawnData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "CreateChainData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TutorialSongController_TutorialChainSpawnData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::SliderData*>, false>(this, ___internal_method, time, tailTime, beat,
                                                                                                                                          tutorialChainSpawnData);
}
inline ::GlobalNamespace::SliderData* GlobalNamespace::TutorialSongController::CreateArcData(::GlobalNamespace::NoteData* headData, ::GlobalNamespace::NoteData* tailData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "CreateArcData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderData*, false>(this, ___internal_method, headData, tailData);
}
inline void GlobalNamespace::TutorialSongController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TutorialSongController* GlobalNamespace::TutorialSongController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TutorialSongController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSongController::TutorialSongController() {}
