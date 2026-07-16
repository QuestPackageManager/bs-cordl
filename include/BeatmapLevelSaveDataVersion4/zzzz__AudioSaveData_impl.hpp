#pragma once
// IWYU pragma private; include "BeatmapLevelSaveDataVersion4/AudioSaveData.hpp"
#include "BeatmapLevelSaveDataVersion4/zzzz__BpmData_impl.hpp"
#include "BeatmapLevelSaveDataVersion4/zzzz__LufsData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapLevelSaveDataVersion4/zzzz__AudioSaveData_def.hpp"
//  Writing Method size for method: ::BeatmapLevelSaveDataVersion4::AudioSaveData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapLevelSaveDataVersion4::AudioSaveData::*)()>(&::BeatmapLevelSaveDataVersion4::AudioSaveData::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x375b974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapLevelSaveDataVersion4::AudioSaveData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::StringW const& BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_set_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::StringW& BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_songChecksum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songChecksum;
}
constexpr ::StringW const& BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_songChecksum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songChecksum;
}
constexpr void BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_set_songChecksum(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songChecksum = value;
}
constexpr int32_t& BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_songSampleCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSampleCount;
}
constexpr int32_t const& BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_songSampleCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSampleCount;
}
constexpr void BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_set_songSampleCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songSampleCount = value;
}
constexpr int32_t& BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_songFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songFrequency;
}
constexpr int32_t const& BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_songFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songFrequency;
}
constexpr void BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_set_songFrequency(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songFrequency = value;
}
constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::BpmData*>& BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_bpmData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bpmData;
}
constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::BpmData*> const& BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_bpmData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bpmData;
}
constexpr void BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_set_bpmData(::ArrayW<::BeatmapLevelSaveDataVersion4::BpmData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bpmData = value;
}
constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::LufsData>& BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_lufsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lufsData;
}
constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::LufsData> const& BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_get_lufsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lufsData;
}
constexpr void BeatmapLevelSaveDataVersion4::AudioSaveData::__cordl_internal_set_lufsData(::ArrayW<::BeatmapLevelSaveDataVersion4::LufsData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lufsData = value;
}
inline void BeatmapLevelSaveDataVersion4::AudioSaveData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapLevelSaveDataVersion4::AudioSaveData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatmapLevelSaveDataVersion4::AudioSaveData* BeatmapLevelSaveDataVersion4::AudioSaveData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapLevelSaveDataVersion4::AudioSaveData*>());
}
// Ctor Parameters []
constexpr ::BeatmapLevelSaveDataVersion4::AudioSaveData::AudioSaveData() {}
