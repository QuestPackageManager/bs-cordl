#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/LightRotationBaseData.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__RotationDirection_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightRotationBaseData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__RotationDirection_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightRotationBaseData.get_beat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion3::LightRotationBaseData::*)()>(&::BeatmapSaveDataVersion3::LightRotationBaseData::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375ad80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationBaseData*>(), { "get_beat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightRotationBaseData.get_usePreviousEventRotationValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatmapSaveDataVersion3::LightRotationBaseData::*)()>(
    &::BeatmapSaveDataVersion3::LightRotationBaseData::get_usePreviousEventRotationValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x375ad88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationBaseData*>(), { "get_usePreviousEventRotationValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightRotationBaseData.get_easeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::EaseType (::BeatmapSaveDataVersion3::LightRotationBaseData::*)()>(
    &::BeatmapSaveDataVersion3::LightRotationBaseData::get_easeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375ad98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationBaseData*>(), { "get_easeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightRotationBaseData.get_loopsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataVersion3::LightRotationBaseData::*)()>(&::BeatmapSaveDataVersion3::LightRotationBaseData::get_loopsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375ada0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationBaseData*>(), { "get_loopsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightRotationBaseData.get_rotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion3::LightRotationBaseData::*)()>(&::BeatmapSaveDataVersion3::LightRotationBaseData::get_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375ada8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationBaseData*>(), { "get_rotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightRotationBaseData.get_rotationDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::RotationDirection (::BeatmapSaveDataVersion3::LightRotationBaseData::*)()>(
    &::BeatmapSaveDataVersion3::LightRotationBaseData::get_rotationDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375adb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationBaseData*>(), { "get_rotationDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightRotationBaseData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::LightRotationBaseData::*)(
    float_t, bool, ::BeatmapSaveDataCommon::EaseType, int32_t, float_t, ::BeatmapSaveDataCommon::RotationDirection)>(&::BeatmapSaveDataVersion3::LightRotationBaseData::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x375adb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationBaseData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::BeatmapSaveDataCommon::EaseType>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::RotationDirection>() } })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::LightRotationBaseData::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr float_t const& BeatmapSaveDataVersion3::LightRotationBaseData::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion3::LightRotationBaseData::__cordl_internal_set_b(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::LightRotationBaseData::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr int32_t const& BeatmapSaveDataVersion3::LightRotationBaseData::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void BeatmapSaveDataVersion3::LightRotationBaseData::__cordl_internal_set_p(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___p = value;
}
constexpr ::BeatmapSaveDataCommon::EaseType& BeatmapSaveDataVersion3::LightRotationBaseData::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr ::BeatmapSaveDataCommon::EaseType const& BeatmapSaveDataVersion3::LightRotationBaseData::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr void BeatmapSaveDataVersion3::LightRotationBaseData::__cordl_internal_set_e(::BeatmapSaveDataCommon::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___e = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::LightRotationBaseData::__cordl_internal_get_l() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l;
}
constexpr int32_t const& BeatmapSaveDataVersion3::LightRotationBaseData::__cordl_internal_get_l() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l;
}
constexpr void BeatmapSaveDataVersion3::LightRotationBaseData::__cordl_internal_set_l(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l = value;
}
constexpr float_t& BeatmapSaveDataVersion3::LightRotationBaseData::__cordl_internal_get_r() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr float_t const& BeatmapSaveDataVersion3::LightRotationBaseData::__cordl_internal_get_r() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr void BeatmapSaveDataVersion3::LightRotationBaseData::__cordl_internal_set_r(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r = value;
}
constexpr ::BeatmapSaveDataCommon::RotationDirection& BeatmapSaveDataVersion3::LightRotationBaseData::__cordl_internal_get_o() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___o;
}
constexpr ::BeatmapSaveDataCommon::RotationDirection const& BeatmapSaveDataVersion3::LightRotationBaseData::__cordl_internal_get_o() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___o;
}
constexpr void BeatmapSaveDataVersion3::LightRotationBaseData::__cordl_internal_set_o(::BeatmapSaveDataCommon::RotationDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___o = value;
}
inline float_t BeatmapSaveDataVersion3::LightRotationBaseData::get_beat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationBaseData*>(), { "get_beat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::LightRotationBaseData::get_usePreviousEventRotationValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationBaseData*>(), { "get_usePreviousEventRotationValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataVersion3::LightRotationBaseData::get_easeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationBaseData*>(), { "get_easeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::EaseType>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::LightRotationBaseData::get_loopsCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationBaseData*>(), { "get_loopsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::LightRotationBaseData::get_rotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationBaseData*>(), { "get_rotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::RotationDirection BeatmapSaveDataVersion3::LightRotationBaseData::get_rotationDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationBaseData*>(), { "get_rotationDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::RotationDirection>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::LightRotationBaseData::_ctor(float_t beat, bool usePreviousEventRotationValue, ::BeatmapSaveDataCommon::EaseType easeType, int32_t loopsCount, float_t rotation,
                                                                  ::BeatmapSaveDataCommon::RotationDirection rotationDirection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::LightRotationBaseData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::BeatmapSaveDataCommon::EaseType>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::RotationDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, usePreviousEventRotationValue, easeType, loopsCount, rotation, rotationDirection);
}
inline ::BeatmapSaveDataVersion3::LightRotationBaseData* BeatmapSaveDataVersion3::LightRotationBaseData::New_ctor(float_t beat, bool usePreviousEventRotationValue,
                                                                                                                  ::BeatmapSaveDataCommon::EaseType easeType, int32_t loopsCount, float_t rotation,
                                                                                                                  ::BeatmapSaveDataCommon::RotationDirection rotationDirection) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::LightRotationBaseData*>(beat, usePreviousEventRotationValue, easeType, loopsCount, rotation, rotationDirection));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::LightRotationBaseData::LightRotationBaseData() {}
