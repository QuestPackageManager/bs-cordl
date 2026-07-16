#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/ColorBoostEventData.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__ColorBoostEventData_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::ColorBoostEventData.get_boost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatmapSaveDataVersion3::ColorBoostEventData::*)()>(&::BeatmapSaveDataVersion3::ColorBoostEventData::get_boost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375aeb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::ColorBoostEventData*>(), { "get_boost", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::ColorBoostEventData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::ColorBoostEventData::*)(float_t, bool)>(&::BeatmapSaveDataVersion3::ColorBoostEventData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x375aeb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::ColorBoostEventData*>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& BeatmapSaveDataVersion3::ColorBoostEventData::__cordl_internal_get_o() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___o;
}
constexpr bool const& BeatmapSaveDataVersion3::ColorBoostEventData::__cordl_internal_get_o() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___o;
}
constexpr void BeatmapSaveDataVersion3::ColorBoostEventData::__cordl_internal_set_o(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___o = value;
}
inline bool BeatmapSaveDataVersion3::ColorBoostEventData::get_boost() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::ColorBoostEventData*>(), { "get_boost", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::ColorBoostEventData::_ctor(float_t beat, bool boost) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::ColorBoostEventData*>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, boost);
}
inline ::BeatmapSaveDataVersion3::ColorBoostEventData* BeatmapSaveDataVersion3::ColorBoostEventData::New_ctor(float_t beat, bool boost) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::ColorBoostEventData*>(beat, boost));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::ColorBoostEventData::ColorBoostEventData() {}
