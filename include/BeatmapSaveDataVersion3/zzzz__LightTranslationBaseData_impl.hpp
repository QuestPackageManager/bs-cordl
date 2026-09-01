#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3\LightTranslationBaseData.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightTranslationBaseData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightTranslationBaseData.get_beat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion3::LightTranslationBaseData::*)()>(&::BeatmapSaveDataVersion3::LightTranslationBaseData::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationBaseData*>(), { "get_beat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightTranslationBaseData.get_usePreviousEventTranslationValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatmapSaveDataVersion3::LightTranslationBaseData::*)()>(
    &::BeatmapSaveDataVersion3::LightTranslationBaseData::get_usePreviousEventTranslationValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x375f5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationBaseData*>(), { "get_usePreviousEventTranslationValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightTranslationBaseData.get_easeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::EaseType (::BeatmapSaveDataVersion3::LightTranslationBaseData::*)()>(
    &::BeatmapSaveDataVersion3::LightTranslationBaseData::get_easeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationBaseData*>(), { "get_easeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightTranslationBaseData.get_translation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion3::LightTranslationBaseData::*)()>(&::BeatmapSaveDataVersion3::LightTranslationBaseData::get_translation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationBaseData*>(), { "get_translation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightTranslationBaseData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::LightTranslationBaseData::*)(float_t, bool, ::BeatmapSaveDataCommon::EaseType, float_t)>(
    &::BeatmapSaveDataVersion3::LightTranslationBaseData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x375f604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationBaseData*>(),
                                         { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::BeatmapSaveDataCommon::EaseType>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr float_t const& BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_set_b(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr int32_t const& BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_set_p(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___p = value;
}
constexpr ::BeatmapSaveDataCommon::EaseType& BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr ::BeatmapSaveDataCommon::EaseType const& BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr void BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_set_e(::BeatmapSaveDataCommon::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___e = value;
}
constexpr float_t& BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr float_t const& BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_set_t(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___t = value;
}
inline float_t BeatmapSaveDataVersion3::LightTranslationBaseData::get_beat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationBaseData*>(), { "get_beat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::LightTranslationBaseData::get_usePreviousEventTranslationValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationBaseData*>(), { "get_usePreviousEventTranslationValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataVersion3::LightTranslationBaseData::get_easeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationBaseData*>(), { "get_easeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::EaseType>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::LightTranslationBaseData::get_translation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationBaseData*>(), { "get_translation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::LightTranslationBaseData::_ctor(float_t beat, bool usePreviousEventTranslationValue, ::BeatmapSaveDataCommon::EaseType easeType, float_t translation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightTranslationBaseData*>(),
                                              { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::BeatmapSaveDataCommon::EaseType>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, usePreviousEventTranslationValue, easeType, translation);
}
inline ::BeatmapSaveDataVersion3::LightTranslationBaseData* BeatmapSaveDataVersion3::LightTranslationBaseData::New_ctor(float_t beat, bool usePreviousEventTranslationValue,
                                                                                                                        ::BeatmapSaveDataCommon::EaseType easeType, float_t translation) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::LightTranslationBaseData*>(beat, usePreviousEventTranslationValue, easeType, translation));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::LightTranslationBaseData::LightTranslationBaseData() {}
