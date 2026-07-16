#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/BpmChangeEventData.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BpmChangeEventData_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BpmChangeEventData.get_bpm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion3::BpmChangeEventData::*)()>(&::BeatmapSaveDataVersion3::BpmChangeEventData::get_bpm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375aec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BpmChangeEventData*>(), { "get_bpm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BpmChangeEventData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::BpmChangeEventData::*)(float_t, float_t)>(&::BeatmapSaveDataVersion3::BpmChangeEventData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375aecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BpmChangeEventData*>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::BpmChangeEventData::__cordl_internal_get_m() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m;
}
constexpr float_t const& BeatmapSaveDataVersion3::BpmChangeEventData::__cordl_internal_get_m() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m;
}
constexpr void BeatmapSaveDataVersion3::BpmChangeEventData::__cordl_internal_set_m(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m = value;
}
inline float_t BeatmapSaveDataVersion3::BpmChangeEventData::get_bpm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BpmChangeEventData*>(), { "get_bpm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::BpmChangeEventData::_ctor(float_t beat, float_t bpm) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BpmChangeEventData*>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, bpm);
}
inline ::BeatmapSaveDataVersion3::BpmChangeEventData* BeatmapSaveDataVersion3::BpmChangeEventData::New_ctor(float_t beat, float_t bpm) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::BpmChangeEventData*>(beat, bpm));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::BpmChangeEventData::BpmChangeEventData() {}
