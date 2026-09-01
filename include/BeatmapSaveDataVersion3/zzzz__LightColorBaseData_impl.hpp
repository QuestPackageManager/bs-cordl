#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3\LightColorBaseData.hpp"
#include "BeatmapSaveDataCommon/zzzz__EnvironmentColorType_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__TransitionType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightColorBaseData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EnvironmentColorType_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__TransitionType_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightColorBaseData.get_beat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion3::LightColorBaseData::*)()>(&::BeatmapSaveDataVersion3::LightColorBaseData::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorBaseData*>(), { "get_beat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightColorBaseData.get_transitionType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataVersion3::TransitionType (::BeatmapSaveDataVersion3::LightColorBaseData::*)()>(
    &::BeatmapSaveDataVersion3::LightColorBaseData::get_transitionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorBaseData*>(), { "get_transitionType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightColorBaseData.get_colorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::EnvironmentColorType (::BeatmapSaveDataVersion3::LightColorBaseData::*)()>(
    &::BeatmapSaveDataVersion3::LightColorBaseData::get_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorBaseData*>(), { "get_colorType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightColorBaseData.get_brightness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion3::LightColorBaseData::*)()>(&::BeatmapSaveDataVersion3::LightColorBaseData::get_brightness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorBaseData*>(), { "get_brightness", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightColorBaseData.get_strobeBeatFrequency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataVersion3::LightColorBaseData::*)()>(&::BeatmapSaveDataVersion3::LightColorBaseData::get_strobeBeatFrequency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorBaseData*>(), { "get_strobeBeatFrequency", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightColorBaseData.get_strobeBrightness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion3::LightColorBaseData::*)()>(&::BeatmapSaveDataVersion3::LightColorBaseData::get_strobeBrightness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorBaseData*>(), { "get_strobeBrightness", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightColorBaseData.get_strobeFade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatmapSaveDataVersion3::LightColorBaseData::*)()>(&::BeatmapSaveDataVersion3::LightColorBaseData::get_strobeFade)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x375f468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorBaseData*>(), { "get_strobeFade", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightColorBaseData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::LightColorBaseData::*)(
    float_t, ::BeatmapSaveDataVersion3::TransitionType, ::BeatmapSaveDataCommon::EnvironmentColorType, float_t, int32_t, float_t, bool)>(&::BeatmapSaveDataVersion3::LightColorBaseData::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x375f478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorBaseData*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataVersion3::TransitionType>(), ::i2c::type_of<::BeatmapSaveDataCommon::EnvironmentColorType>(),
                                             ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::LightColorBaseData::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr float_t const& BeatmapSaveDataVersion3::LightColorBaseData::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion3::LightColorBaseData::__cordl_internal_set_b(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
constexpr ::BeatmapSaveDataVersion3::TransitionType& BeatmapSaveDataVersion3::LightColorBaseData::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr ::BeatmapSaveDataVersion3::TransitionType const& BeatmapSaveDataVersion3::LightColorBaseData::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void BeatmapSaveDataVersion3::LightColorBaseData::__cordl_internal_set_i(::BeatmapSaveDataVersion3::TransitionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
constexpr ::BeatmapSaveDataCommon::EnvironmentColorType& BeatmapSaveDataVersion3::LightColorBaseData::__cordl_internal_get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr ::BeatmapSaveDataCommon::EnvironmentColorType const& BeatmapSaveDataVersion3::LightColorBaseData::__cordl_internal_get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr void BeatmapSaveDataVersion3::LightColorBaseData::__cordl_internal_set_c(::BeatmapSaveDataCommon::EnvironmentColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___c = value;
}
constexpr float_t& BeatmapSaveDataVersion3::LightColorBaseData::__cordl_internal_get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr float_t const& BeatmapSaveDataVersion3::LightColorBaseData::__cordl_internal_get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void BeatmapSaveDataVersion3::LightColorBaseData::__cordl_internal_set_s(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::LightColorBaseData::__cordl_internal_get_f() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___f;
}
constexpr int32_t const& BeatmapSaveDataVersion3::LightColorBaseData::__cordl_internal_get_f() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___f;
}
constexpr void BeatmapSaveDataVersion3::LightColorBaseData::__cordl_internal_set_f(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___f = value;
}
constexpr float_t& BeatmapSaveDataVersion3::LightColorBaseData::__cordl_internal_get_sb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sb;
}
constexpr float_t const& BeatmapSaveDataVersion3::LightColorBaseData::__cordl_internal_get_sb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sb;
}
constexpr void BeatmapSaveDataVersion3::LightColorBaseData::__cordl_internal_set_sb(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sb = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::LightColorBaseData::__cordl_internal_get_sf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sf;
}
constexpr int32_t const& BeatmapSaveDataVersion3::LightColorBaseData::__cordl_internal_get_sf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sf;
}
constexpr void BeatmapSaveDataVersion3::LightColorBaseData::__cordl_internal_set_sf(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sf = value;
}
inline float_t BeatmapSaveDataVersion3::LightColorBaseData::get_beat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorBaseData*>(), { "get_beat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::TransitionType BeatmapSaveDataVersion3::LightColorBaseData::get_transitionType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorBaseData*>(), { "get_transitionType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::TransitionType>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::EnvironmentColorType BeatmapSaveDataVersion3::LightColorBaseData::get_colorType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorBaseData*>(), { "get_colorType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::EnvironmentColorType>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::LightColorBaseData::get_brightness() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorBaseData*>(), { "get_brightness", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::LightColorBaseData::get_strobeBeatFrequency() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorBaseData*>(), { "get_strobeBeatFrequency", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::LightColorBaseData::get_strobeBrightness() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorBaseData*>(), { "get_strobeBrightness", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::LightColorBaseData::get_strobeFade() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorBaseData*>(), { "get_strobeFade", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::LightColorBaseData::_ctor(float_t beat, ::BeatmapSaveDataVersion3::TransitionType transitionType, ::BeatmapSaveDataCommon::EnvironmentColorType colorType,
                                                               float_t brightness, int32_t strobeFrequency, float_t strobeBrightness, bool strobeFade) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightColorBaseData*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataVersion3::TransitionType>(), ::i2c::type_of<::BeatmapSaveDataCommon::EnvironmentColorType>(),
                                           ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, transitionType, colorType, brightness, strobeFrequency, strobeBrightness, strobeFade);
}
inline ::BeatmapSaveDataVersion3::LightColorBaseData* BeatmapSaveDataVersion3::LightColorBaseData::New_ctor(float_t beat, ::BeatmapSaveDataVersion3::TransitionType transitionType,
                                                                                                            ::BeatmapSaveDataCommon::EnvironmentColorType colorType, float_t brightness,
                                                                                                            int32_t strobeFrequency, float_t strobeBrightness, bool strobeFade) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::LightColorBaseData*>(beat, transitionType, colorType, brightness, strobeFrequency, strobeBrightness, strobeFade));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::LightColorBaseData::LightColorBaseData() {}
