#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3\BasicEventData.hpp"
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventType_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BasicEventData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventType_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BasicEventData.get_eventType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::BeatmapEventType (::BeatmapSaveDataVersion3::BasicEventData::*)()>(
    &::BeatmapSaveDataVersion3::BasicEventData::get_eventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BasicEventData*>(), { "get_eventType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BasicEventData.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataVersion3::BasicEventData::*)()>(&::BeatmapSaveDataVersion3::BasicEventData::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BasicEventData*>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BasicEventData.get_floatValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion3::BasicEventData::*)()>(&::BeatmapSaveDataVersion3::BasicEventData::get_floatValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BasicEventData*>(), { "get_floatValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BasicEventData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::BasicEventData::*)(float_t, ::BeatmapSaveDataCommon::BeatmapEventType, int32_t, float_t)>(
    &::BeatmapSaveDataVersion3::BasicEventData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x375f630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BasicEventData*>(),
                            { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::BeatmapEventType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataCommon::BeatmapEventType& BeatmapSaveDataVersion3::BasicEventData::__cordl_internal_get_et() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___et;
}
constexpr ::BeatmapSaveDataCommon::BeatmapEventType const& BeatmapSaveDataVersion3::BasicEventData::__cordl_internal_get_et() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___et;
}
constexpr void BeatmapSaveDataVersion3::BasicEventData::__cordl_internal_set_et(::BeatmapSaveDataCommon::BeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___et = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::BasicEventData::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr int32_t const& BeatmapSaveDataVersion3::BasicEventData::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void BeatmapSaveDataVersion3::BasicEventData::__cordl_internal_set_i(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
constexpr float_t& BeatmapSaveDataVersion3::BasicEventData::__cordl_internal_get_f() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___f;
}
constexpr float_t const& BeatmapSaveDataVersion3::BasicEventData::__cordl_internal_get_f() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___f;
}
constexpr void BeatmapSaveDataVersion3::BasicEventData::__cordl_internal_set_f(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___f = value;
}
inline ::BeatmapSaveDataCommon::BeatmapEventType BeatmapSaveDataVersion3::BasicEventData::get_eventType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BasicEventData*>(), { "get_eventType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::BeatmapEventType>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::BasicEventData::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BasicEventData*>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::BasicEventData::get_floatValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BasicEventData*>(), { "get_floatValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::BasicEventData::_ctor(float_t beat, ::BeatmapSaveDataCommon::BeatmapEventType eventType, int32_t value, float_t floatValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BasicEventData*>(),
                          { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::BeatmapEventType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, eventType, value, floatValue);
}
inline ::BeatmapSaveDataVersion3::BasicEventData* BeatmapSaveDataVersion3::BasicEventData::New_ctor(float_t beat, ::BeatmapSaveDataCommon::BeatmapEventType eventType, int32_t value,
                                                                                                    float_t floatValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::BasicEventData*>(beat, eventType, value, floatValue));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::BasicEventData::BasicEventData() {}
