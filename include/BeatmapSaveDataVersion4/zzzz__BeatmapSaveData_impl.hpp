#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/BeatmapSaveData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatmapSaveData_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__ArcBeatIndex_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__Arc_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatIndex_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatmapBeatIndex_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BombNote_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__ChainBeatIndex_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__Chain_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__ColorNote_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__NoteJumpMovementSpeedEvent_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__Obstacle_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion4::BeatmapSaveData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion4::BeatmapSaveData::*)()>(&::BeatmapSaveDataVersion4::BeatmapSaveData::_ctor)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x2708398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion4::BeatmapSaveData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::StringW const& BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_set_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*>& BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_colorNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorNotes;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*> const&
BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_colorNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorNotes;
}
constexpr void
BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_set_colorNotes(::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*>& BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_bombNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bombNotes;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*> const&
BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_bombNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bombNotes;
}
constexpr void
BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_set_bombNotes(::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bombNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*>& BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_obstacles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacles;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*> const&
BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_obstacles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacles;
}
constexpr void
BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_set_obstacles(::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obstacles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::ChainBeatIndex*, ::Array<::BeatmapSaveDataVersion4::ChainBeatIndex*>*>& BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_chains() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chains;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::ChainBeatIndex*, ::Array<::BeatmapSaveDataVersion4::ChainBeatIndex*>*> const&
BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_chains() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chains;
}
constexpr void BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_set_chains(::ArrayW<::BeatmapSaveDataVersion4::ChainBeatIndex*, ::Array<::BeatmapSaveDataVersion4::ChainBeatIndex*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chains)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::ArcBeatIndex*, ::Array<::BeatmapSaveDataVersion4::ArcBeatIndex*>*>& BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_arcs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arcs;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::ArcBeatIndex*, ::Array<::BeatmapSaveDataVersion4::ArcBeatIndex*>*> const& BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_arcs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arcs;
}
constexpr void BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_set_arcs(::ArrayW<::BeatmapSaveDataVersion4::ArcBeatIndex*, ::Array<::BeatmapSaveDataVersion4::ArcBeatIndex*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___arcs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*>& BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_colorNotesData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorNotesData;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> const& BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_colorNotesData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorNotesData;
}
constexpr void BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_set_colorNotesData(::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorNotesData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*>& BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_bombNotesData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bombNotesData;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*> const& BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_bombNotesData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bombNotesData;
}
constexpr void BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_set_bombNotesData(::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bombNotesData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*>& BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_obstaclesData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstaclesData;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*> const& BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_obstaclesData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstaclesData;
}
constexpr void BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_set_obstaclesData(::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obstaclesData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::Chain, ::Array<::BeatmapSaveDataVersion4::Chain>*>& BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_chainsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chainsData;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::Chain, ::Array<::BeatmapSaveDataVersion4::Chain>*> const& BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_chainsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chainsData;
}
constexpr void BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_set_chainsData(::ArrayW<::BeatmapSaveDataVersion4::Chain, ::Array<::BeatmapSaveDataVersion4::Chain>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chainsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*>& BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_arcsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arcsData;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*> const& BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_arcsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arcsData;
}
constexpr void BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_set_arcsData(::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___arcsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*>& BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_njsEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___njsEvents;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*> const& BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_njsEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___njsEvents;
}
constexpr void BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_set_njsEvents(::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___njsEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent, ::Array<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent>*>&
BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_njsEventData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___njsEventData;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent, ::Array<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent>*> const&
BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_get_njsEventData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___njsEventData;
}
constexpr void BeatmapSaveDataVersion4::BeatmapSaveData::__cordl_internal_set_njsEventData(
    ::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent, ::Array<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___njsEventData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatmapSaveDataVersion4::BeatmapSaveData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion4::BeatmapSaveData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion4::BeatmapSaveData* BeatmapSaveDataVersion4::BeatmapSaveData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion4::BeatmapSaveData*>());
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::BeatmapSaveData::BeatmapSaveData() {}
