#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/RotationEventData.hpp"
#include "BeatmapSaveDataCommon/zzzz__ExecutionTime_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__RotationEventData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__ExecutionTime_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::RotationEventData.get_executionTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::ExecutionTime (::BeatmapSaveDataVersion3::RotationEventData::*)()>(
    &::BeatmapSaveDataVersion3::RotationEventData::get_executionTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375aed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::RotationEventData*>(), { "get_executionTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::RotationEventData.get_rotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion3::RotationEventData::*)()>(&::BeatmapSaveDataVersion3::RotationEventData::get_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375aedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::RotationEventData*>(), { "get_rotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::RotationEventData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::RotationEventData::*)(float_t, ::BeatmapSaveDataCommon::ExecutionTime, float_t)>(
    &::BeatmapSaveDataVersion3::RotationEventData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x375aee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::RotationEventData*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::ExecutionTime>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataCommon::ExecutionTime& BeatmapSaveDataVersion3::RotationEventData::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr ::BeatmapSaveDataCommon::ExecutionTime const& BeatmapSaveDataVersion3::RotationEventData::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr void BeatmapSaveDataVersion3::RotationEventData::__cordl_internal_set_e(::BeatmapSaveDataCommon::ExecutionTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___e = value;
}
constexpr float_t& BeatmapSaveDataVersion3::RotationEventData::__cordl_internal_get_r() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr float_t const& BeatmapSaveDataVersion3::RotationEventData::__cordl_internal_get_r() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr void BeatmapSaveDataVersion3::RotationEventData::__cordl_internal_set_r(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r = value;
}
inline ::BeatmapSaveDataCommon::ExecutionTime BeatmapSaveDataVersion3::RotationEventData::get_executionTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::RotationEventData*>(), { "get_executionTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::ExecutionTime>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::RotationEventData::get_rotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::RotationEventData*>(), { "get_rotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::RotationEventData::_ctor(float_t beat, ::BeatmapSaveDataCommon::ExecutionTime executionTime, float_t rotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::RotationEventData*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::ExecutionTime>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, executionTime, rotation);
}
inline ::BeatmapSaveDataVersion3::RotationEventData* BeatmapSaveDataVersion3::RotationEventData::New_ctor(float_t beat, ::BeatmapSaveDataCommon::ExecutionTime executionTime, float_t rotation) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::RotationEventData*>(beat, executionTime, rotation));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::RotationEventData::RotationEventData() {}
