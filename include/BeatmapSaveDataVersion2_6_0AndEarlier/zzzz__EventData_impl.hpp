#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion2_6_0AndEarlier/EventData.hpp"
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventType_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveDataItem_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__EventData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventType_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::EventData.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::EventData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::EventData::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>(), { ::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::EventData.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::BeatmapEventType (::BeatmapSaveDataVersion2_6_0AndEarlier::EventData::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::EventData::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::EventData.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataVersion2_6_0AndEarlier::EventData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::EventData::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::EventData.get_floatValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::EventData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::EventData::get_floatValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>(), { "get_floatValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::EventData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion2_6_0AndEarlier::EventData::*)(float_t, ::BeatmapSaveDataCommon::BeatmapEventType, int32_t, float_t)>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::EventData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x375b444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>(),
                            { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::BeatmapEventType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_get__time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time;
}
constexpr float_t const& BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_get__time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_set__time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____time = value;
}
constexpr ::BeatmapSaveDataCommon::BeatmapEventType& BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::BeatmapSaveDataCommon::BeatmapEventType const& BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_set__type(::BeatmapSaveDataCommon::BeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
constexpr int32_t& BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr int32_t const& BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_set__value(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
constexpr float_t& BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_get__floatValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValue;
}
constexpr float_t const& BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_get__floatValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValue;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::EventData::__cordl_internal_set__floatValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatValue = value;
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::EventData::get_time() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::BeatmapEventType BeatmapSaveDataVersion2_6_0AndEarlier::EventData::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::BeatmapEventType>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion2_6_0AndEarlier::EventData::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::EventData::get_floatValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>(), { "get_floatValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion2_6_0AndEarlier::EventData::_ctor(float_t time, ::BeatmapSaveDataCommon::BeatmapEventType type, int32_t value, float_t floatValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>(),
                          { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::BeatmapEventType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, type, value, floatValue);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::EventData* BeatmapSaveDataVersion2_6_0AndEarlier::EventData::New_ctor(float_t time, ::BeatmapSaveDataCommon::BeatmapEventType type, int32_t value,
                                                                                                                      float_t floatValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>(time, type, value, floatValue));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::EventData::EventData() {}
