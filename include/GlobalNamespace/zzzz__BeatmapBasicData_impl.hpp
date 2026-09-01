#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapBasicData.hpp"
#include "GlobalNamespace/zzzz__EnvironmentName_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapBasicData_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentName_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapBasicData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapBasicData::*)(float_t, float_t, ::GlobalNamespace::EnvironmentName, ::GlobalNamespace::ColorScheme*, int32_t,
                                                                                                     int32_t, int32_t, int32_t, ::ArrayW<::StringW>, ::ArrayW<::StringW>)>(
    &::GlobalNamespace::BeatmapBasicData::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3720bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapBasicData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EnvironmentName>(),
                                                                 ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BeatmapBasicData::__cordl_internal_get_noteJumpMovementSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpMovementSpeed;
}
constexpr float_t const& GlobalNamespace::BeatmapBasicData::__cordl_internal_get_noteJumpMovementSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpMovementSpeed;
}
constexpr void GlobalNamespace::BeatmapBasicData::__cordl_internal_set_noteJumpMovementSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteJumpMovementSpeed = value;
}
constexpr float_t& GlobalNamespace::BeatmapBasicData::__cordl_internal_get_noteJumpStartBeatOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpStartBeatOffset;
}
constexpr float_t const& GlobalNamespace::BeatmapBasicData::__cordl_internal_get_noteJumpStartBeatOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpStartBeatOffset;
}
constexpr void GlobalNamespace::BeatmapBasicData::__cordl_internal_set_noteJumpStartBeatOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteJumpStartBeatOffset = value;
}
constexpr ::GlobalNamespace::EnvironmentName& GlobalNamespace::BeatmapBasicData::__cordl_internal_get_environmentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentName;
}
constexpr ::GlobalNamespace::EnvironmentName const& GlobalNamespace::BeatmapBasicData::__cordl_internal_get_environmentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentName;
}
constexpr void GlobalNamespace::BeatmapBasicData::__cordl_internal_set_environmentName(::GlobalNamespace::EnvironmentName value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentName = value;
}
constexpr ::GlobalNamespace::ColorScheme*& GlobalNamespace::BeatmapBasicData::__cordl_internal_get_beatmapColorScheme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapColorScheme;
}
constexpr ::GlobalNamespace::ColorScheme* const& GlobalNamespace::BeatmapBasicData::__cordl_internal_get_beatmapColorScheme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapColorScheme;
}
constexpr void GlobalNamespace::BeatmapBasicData::__cordl_internal_set_beatmapColorScheme(::GlobalNamespace::ColorScheme* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapColorScheme = value;
}
constexpr int32_t& GlobalNamespace::BeatmapBasicData::__cordl_internal_get_notesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notesCount;
}
constexpr int32_t const& GlobalNamespace::BeatmapBasicData::__cordl_internal_get_notesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notesCount;
}
constexpr void GlobalNamespace::BeatmapBasicData::__cordl_internal_set_notesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___notesCount = value;
}
constexpr int32_t& GlobalNamespace::BeatmapBasicData::__cordl_internal_get_cuttableObjectsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cuttableObjectsCount;
}
constexpr int32_t const& GlobalNamespace::BeatmapBasicData::__cordl_internal_get_cuttableObjectsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cuttableObjectsCount;
}
constexpr void GlobalNamespace::BeatmapBasicData::__cordl_internal_set_cuttableObjectsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cuttableObjectsCount = value;
}
constexpr int32_t& GlobalNamespace::BeatmapBasicData::__cordl_internal_get_obstaclesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstaclesCount;
}
constexpr int32_t const& GlobalNamespace::BeatmapBasicData::__cordl_internal_get_obstaclesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstaclesCount;
}
constexpr void GlobalNamespace::BeatmapBasicData::__cordl_internal_set_obstaclesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obstaclesCount = value;
}
constexpr int32_t& GlobalNamespace::BeatmapBasicData::__cordl_internal_get_bombsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bombsCount;
}
constexpr int32_t const& GlobalNamespace::BeatmapBasicData::__cordl_internal_get_bombsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bombsCount;
}
constexpr void GlobalNamespace::BeatmapBasicData::__cordl_internal_set_bombsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bombsCount = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::BeatmapBasicData::__cordl_internal_get_mappers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mappers;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::BeatmapBasicData::__cordl_internal_get_mappers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mappers;
}
constexpr void GlobalNamespace::BeatmapBasicData::__cordl_internal_set_mappers(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mappers = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::BeatmapBasicData::__cordl_internal_get_lighters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lighters;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::BeatmapBasicData::__cordl_internal_get_lighters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lighters;
}
constexpr void GlobalNamespace::BeatmapBasicData::__cordl_internal_set_lighters(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lighters = value;
}
inline void GlobalNamespace::BeatmapBasicData::_ctor(float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset, ::GlobalNamespace::EnvironmentName environmentName,
                                                     ::GlobalNamespace::ColorScheme* beatmapColorScheme, int32_t notesCount, int32_t cuttableObjectsCount, int32_t obstaclesCount, int32_t bombsCount,
                                                     ::ArrayW<::StringW> mappers, ::ArrayW<::StringW> lighters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapBasicData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EnvironmentName>(),
                                                               ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteJumpMovementSpeed, noteJumpStartBeatOffset, environmentName, beatmapColorScheme, notesCount, cuttableObjectsCount,
                                                   obstaclesCount, bombsCount, mappers, lighters);
}
inline ::GlobalNamespace::BeatmapBasicData* GlobalNamespace::BeatmapBasicData::New_ctor(float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset,
                                                                                        ::GlobalNamespace::EnvironmentName environmentName, ::GlobalNamespace::ColorScheme* beatmapColorScheme,
                                                                                        int32_t notesCount, int32_t cuttableObjectsCount, int32_t obstaclesCount, int32_t bombsCount,
                                                                                        ::ArrayW<::StringW> mappers, ::ArrayW<::StringW> lighters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapBasicData*>(noteJumpMovementSpeed, noteJumpStartBeatOffset, environmentName, beatmapColorScheme, notesCount,
                                                                                                cuttableObjectsCount, obstaclesCount, bombsCount, mappers, lighters));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapBasicData::BeatmapBasicData() {}
