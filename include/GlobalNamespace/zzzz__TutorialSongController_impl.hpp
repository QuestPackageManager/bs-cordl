#pragma once
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
#include "GlobalNamespace/zzzz__TutorialSongController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__TutorialSongController__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TutorialSongController__InitData::*)(float_t, ::GlobalNamespace::BeatmapData*)>(
    &::GlobalNamespace::__TutorialSongController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x262df2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TutorialSongController__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::__TutorialSongController__InitData::__cordl_internal_get_songBpm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songBpm;
}
constexpr float_t const& GlobalNamespace::__TutorialSongController__InitData::__cordl_internal_get_songBpm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songBpm;
}
constexpr void GlobalNamespace::__TutorialSongController__InitData::__cordl_internal_set_songBpm(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songBpm = value;
}
constexpr ::GlobalNamespace::BeatmapData*& GlobalNamespace::__TutorialSongController__InitData::__cordl_internal_get_beatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapData*> const& GlobalNamespace::__TutorialSongController__InitData::__cordl_internal_get_beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapData;
}
constexpr void GlobalNamespace::__TutorialSongController__InitData::__cordl_internal_set_beatmapData(::GlobalNamespace::BeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__TutorialSongController__InitData* GlobalNamespace::__TutorialSongController__InitData::New_ctor(float_t songBpm, ::GlobalNamespace::BeatmapData* beatmapData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__TutorialSongController__InitData*>(songBpm, beatmapData));
}
inline void GlobalNamespace::__TutorialSongController__InitData::_ctor(float_t songBpm, ::GlobalNamespace::BeatmapData* beatmapData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TutorialSongController__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songBpm, beatmapData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TutorialSongController__InitData::__TutorialSongController__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData::*)(
    ::GlobalNamespace::Signal*, int32_t, int32_t, int32_t)>(&::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x262df64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData::__cordl_internal_get_signal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData::__cordl_internal_get_signal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signal;
}
constexpr void GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData::__cordl_internal_set_signal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData::__cordl_internal_get_beatOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatOffset;
}
constexpr int32_t const& GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData::__cordl_internal_get_beatOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatOffset;
}
constexpr void GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData::__cordl_internal_set_beatOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatOffset = value;
}
constexpr int32_t& GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData::__cordl_internal_get_firstTimeBeatOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstTimeBeatOffset;
}
constexpr int32_t const& GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData::__cordl_internal_get_firstTimeBeatOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstTimeBeatOffset;
}
constexpr void GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData::__cordl_internal_set_firstTimeBeatOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstTimeBeatOffset = value;
}
constexpr int32_t& GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData::__cordl_internal_get_lineIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineIndex;
}
constexpr int32_t const& GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData::__cordl_internal_get_lineIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineIndex;
}
constexpr void GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData::__cordl_internal_set_lineIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineIndex = value;
}
inline ::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*
GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData::New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*>(signal, firstTimeBeatOffset, beatOffset, lineIndex));
}
inline void GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData::_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal, firstTimeBeatOffset, beatOffset, lineIndex);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData::__TutorialSongController__TutorialObjectSpawnData() {}
//  Writing Method size for method: ::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData::*)(
    ::GlobalNamespace::Signal*, int32_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x262dfa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData::__cordl_internal_get_noteLineLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteLineLayer;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData::__cordl_internal_get_noteLineLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteLineLayer;
}
constexpr void GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData::__cordl_internal_set_noteLineLayer(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteLineLayer = value;
}
inline ::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData*
GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData::New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                  ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData*>(signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer));
}
inline void GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData::_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                           ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData::__TutorialSongController__TutorialJumpingNoteSpawnData() {}
//  Writing Method size for method: ::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData::*)(
    ::GlobalNamespace::Signal*, int32_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteCutDirection, ::GlobalNamespace::ColorType)>(
    &::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x262d5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NoteCutDirection& GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData::__cordl_internal_get_cutDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutDirection;
}
constexpr ::GlobalNamespace::NoteCutDirection const& GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData::__cordl_internal_get_cutDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutDirection;
}
constexpr void GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData::__cordl_internal_set_cutDirection(::GlobalNamespace::NoteCutDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cutDirection = value;
}
constexpr ::GlobalNamespace::ColorType& GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData::__cordl_internal_get_colorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorType;
}
constexpr ::GlobalNamespace::ColorType const& GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData::__cordl_internal_get_colorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorType;
}
constexpr void GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData::__cordl_internal_set_colorType(::GlobalNamespace::ColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorType = value;
}
inline ::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData*
GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData::New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                ::GlobalNamespace::NoteLineLayer noteLineLayer, ::GlobalNamespace::NoteCutDirection cutDirection,
                                                                                ::GlobalNamespace::ColorType colorType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData*>(signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer,
                                                                                                                            cutDirection, colorType));
}
inline void GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData::_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                         ::GlobalNamespace::NoteLineLayer noteLineLayer, ::GlobalNamespace::NoteCutDirection cutDirection,
                                                                                         ::GlobalNamespace::ColorType colorType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer, cutDirection, colorType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData::__TutorialSongController__TutorialBasicNoteSpawnData() {}
//  Writing Method size for method: ::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData::*)(
    ::GlobalNamespace::Signal*, int32_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x262d604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData*
GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData::New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                               ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData*>(signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer));
}
inline void GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData::_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                        ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData::__TutorialSongController__TutorialBombNoteSpawnData() {}
//  Writing Method size for method: ::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData::*)(
    ::GlobalNamespace::Signal*, int32_t, int32_t, int32_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x262d654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData::__cordl_internal_get_noteLineLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteLineLayer;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData::__cordl_internal_get_noteLineLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteLineLayer;
}
constexpr void GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData::__cordl_internal_set_noteLineLayer(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteLineLayer = value;
}
constexpr int32_t& GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData::__cordl_internal_get_width() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___width;
}
constexpr int32_t const& GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData::__cordl_internal_get_width() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___width;
}
constexpr void GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData::__cordl_internal_set_width(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___width = value;
}
constexpr int32_t& GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData::__cordl_internal_get_height() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height;
}
constexpr int32_t const& GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData::__cordl_internal_get_height() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height;
}
constexpr void GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData::__cordl_internal_set_height(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___height = value;
}
inline ::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData*
GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData::New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, int32_t width,
                                                                               int32_t height, ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData*>(signal, firstTimeBeatOffset, beatOffset, lineIndex, width, height, noteLineLayer));
}
inline void GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData::_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                        int32_t width, int32_t height, ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Signal*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal, firstTimeBeatOffset, beatOffset, lineIndex, width, height, noteLineLayer);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData::__TutorialSongController__TutorialObstacleSpawnData() {}
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController::*)()>(&::GlobalNamespace::TutorialSongController::Awake)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x262d094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController::*)()>(&::GlobalNamespace::TutorialSongController::Start)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x262d6b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController::*)()>(&::GlobalNamespace::TutorialSongController::OnDestroy)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x262d824;

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
  constexpr static std::size_t addrs = 0x262c53c;

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
  constexpr static std::size_t addrs = 0x262dbb0;

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
  constexpr static std::size_t addrs = 0x262dbd8;

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
  constexpr static std::size_t addrs = 0x262dc00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.HandleNoteWasCut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController::*)(
    ::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&::GlobalNamespace::TutorialSongController::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x262dc1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "HandleNoteWasCut", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.HandleNoteWasMissed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::TutorialSongController::HandleNoteWasMissed)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x262dd04;

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
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x262dd70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "HandleObstacleDidPassThreeQuartersOfMove2",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.UpdateBeatmapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController::*)(float_t)>(
    &::GlobalNamespace::TutorialSongController::UpdateBeatmapData)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x262d978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "UpdateBeatmapData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.GetNextBeatmapObjectTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TutorialSongController::*)(int32_t)>(
    &::GlobalNamespace::TutorialSongController::GetNextBeatmapObjectTime)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x262dd84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "GetNextBeatmapObjectTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.CreateObstacleData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ObstacleData* (
    ::GlobalNamespace::TutorialSongController::*)(float_t, ::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData*)>(&::GlobalNamespace::TutorialSongController::CreateObstacleData)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x262de40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "CreateObstacleData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.CreateBasicNoteData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::NoteData* (::GlobalNamespace::TutorialSongController::*)(float_t, ::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData*)>(
        &::GlobalNamespace::TutorialSongController::CreateBasicNoteData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x262ddfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "CreateBasicNoteData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController.CreateBombNoteData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteData* (
    ::GlobalNamespace::TutorialSongController::*)(float_t, ::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData*)>(&::GlobalNamespace::TutorialSongController::CreateBombNoteData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x262de20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "CreateBombNoteData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSongController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSongController::*)()>(&::GlobalNamespace::TutorialSongController::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x262df0c;

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
constexpr ::GlobalNamespace::__TutorialSongController__InitData*& GlobalNamespace::TutorialSongController::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__TutorialSongController__InitData*> const& GlobalNamespace::TutorialSongController::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__initData(::GlobalNamespace::__TutorialSongController__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::TutorialSongController::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& GlobalNamespace::TutorialSongController::__cordl_internal_get__beatmapObjectManager() const {
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
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapData*> const& GlobalNamespace::TutorialSongController::__cordl_internal_get__beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__beatmapData(::GlobalNamespace::BeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*, ::Array<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*>*>&
GlobalNamespace::TutorialSongController::__cordl_internal_get__normalModeTutorialObjectsSpawnData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalModeTutorialObjectsSpawnData;
}
constexpr ::ArrayW<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*, ::Array<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*>*> const&
GlobalNamespace::TutorialSongController::__cordl_internal_get__normalModeTutorialObjectsSpawnData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalModeTutorialObjectsSpawnData;
}
constexpr void GlobalNamespace::TutorialSongController::__cordl_internal_set__normalModeTutorialObjectsSpawnData(
    ::ArrayW<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*, ::Array<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*>*> value) {
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
/// @param startTimeOffset: float_t (default: 0.0)
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
inline void GlobalNamespace::TutorialSongController::HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "HandleNoteWasCut", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get() })));
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
inline void GlobalNamespace::TutorialSongController::UpdateBeatmapData(float_t noteTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "UpdateBeatmapData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteTime);
}
inline float_t GlobalNamespace::TutorialSongController::GetNextBeatmapObjectTime(int32_t beatOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "GetNextBeatmapObjectTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, beatOffset);
}
inline ::GlobalNamespace::ObstacleData* GlobalNamespace::TutorialSongController::CreateObstacleData(float_t time,
                                                                                                    ::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData* tutorialObstacleSpawnData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "CreateObstacleData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ObstacleData*, false>(this, ___internal_method, time, tutorialObstacleSpawnData);
}
inline ::GlobalNamespace::NoteData* GlobalNamespace::TutorialSongController::CreateBasicNoteData(float_t time,
                                                                                                 ::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData* tutorialBasicNoteSpawnData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "CreateBasicNoteData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*, false>(this, ___internal_method, time, tutorialBasicNoteSpawnData);
}
inline ::GlobalNamespace::NoteData* GlobalNamespace::TutorialSongController::CreateBombNoteData(float_t time,
                                                                                                ::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData* tutorialBombNoteSpawnData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), "CreateBombNoteData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*, false>(this, ___internal_method, time, tutorialBombNoteSpawnData);
}
inline ::GlobalNamespace::TutorialSongController* GlobalNamespace::TutorialSongController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TutorialSongController*>());
}
inline void GlobalNamespace::TutorialSongController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSongController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSongController::TutorialSongController() {}
