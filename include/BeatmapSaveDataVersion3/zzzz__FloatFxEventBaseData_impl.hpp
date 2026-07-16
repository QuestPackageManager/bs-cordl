#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/FloatFxEventBaseData.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__FloatFxEventBaseData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FloatFxEventBaseData.get_beat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion3::FloatFxEventBaseData::*)()>(&::BeatmapSaveDataVersion3::FloatFxEventBaseData::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375aa24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>(), { "get_beat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FloatFxEventBaseData.get_usePreviousEventValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatmapSaveDataVersion3::FloatFxEventBaseData::*)()>(&::BeatmapSaveDataVersion3::FloatFxEventBaseData::get_usePreviousEventValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x375aa2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>(), { "get_usePreviousEventValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FloatFxEventBaseData.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion3::FloatFxEventBaseData::*)()>(&::BeatmapSaveDataVersion3::FloatFxEventBaseData::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375aa3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FloatFxEventBaseData.get_easeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::EaseType (::BeatmapSaveDataVersion3::FloatFxEventBaseData::*)()>(
    &::BeatmapSaveDataVersion3::FloatFxEventBaseData::get_easeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375aa44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>(), { "get_easeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FloatFxEventBaseData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::FloatFxEventBaseData::*)(float_t, bool, float_t, ::BeatmapSaveDataCommon::EaseType)>(
    &::BeatmapSaveDataVersion3::FloatFxEventBaseData::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x375aa4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>(),
                                         { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::EaseType>() } })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr float_t const& BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_set_b(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr int32_t const& BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_set_p(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___p = value;
}
constexpr float_t& BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_get_v() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v;
}
constexpr float_t const& BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_get_v() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v;
}
constexpr void BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_set_v(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___v = value;
}
constexpr ::BeatmapSaveDataCommon::EaseType& BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr ::BeatmapSaveDataCommon::EaseType const& BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_set_i(::BeatmapSaveDataCommon::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
inline float_t BeatmapSaveDataVersion3::FloatFxEventBaseData::get_beat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>(), { "get_beat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::FloatFxEventBaseData::get_usePreviousEventValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>(), { "get_usePreviousEventValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::FloatFxEventBaseData::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataVersion3::FloatFxEventBaseData::get_easeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>(), { "get_easeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::EaseType>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::FloatFxEventBaseData::_ctor(float_t beat, bool usePreviousEventValue, float_t value, ::BeatmapSaveDataCommon::EaseType easeType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>(),
                                              { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::EaseType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, usePreviousEventValue, value, easeType);
}
inline ::BeatmapSaveDataVersion3::FloatFxEventBaseData* BeatmapSaveDataVersion3::FloatFxEventBaseData::New_ctor(float_t beat, bool usePreviousEventValue, float_t value,
                                                                                                                ::BeatmapSaveDataCommon::EaseType easeType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>(beat, usePreviousEventValue, value, easeType));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::FloatFxEventBaseData::FloatFxEventBaseData() {}
