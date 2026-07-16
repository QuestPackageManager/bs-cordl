#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/EventBox.hpp"
#include "BeatmapSaveDataCommon/zzzz__DistributionParamType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__EventBox_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__DistributionParamType_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__IndexFilter_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::EventBox.get_indexFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataVersion3::IndexFilter* (::BeatmapSaveDataVersion3::EventBox::*)()>(&::BeatmapSaveDataVersion3::EventBox::get_indexFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375a97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::EventBox*>(), { "get_indexFilter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::EventBox.get_beatDistributionParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion3::EventBox::*)()>(&::BeatmapSaveDataVersion3::EventBox::get_beatDistributionParam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375a984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::EventBox*>(), { "get_beatDistributionParam", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::EventBox.get_beatDistributionParamType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::DistributionParamType (::BeatmapSaveDataVersion3::EventBox::*)()>(
    &::BeatmapSaveDataVersion3::EventBox::get_beatDistributionParamType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375a98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::EventBox*>(), { "get_beatDistributionParamType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::EventBox._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::EventBox::*)(::BeatmapSaveDataVersion3::IndexFilter*, float_t, ::BeatmapSaveDataCommon::DistributionParamType)>(
    &::BeatmapSaveDataVersion3::EventBox::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x375a994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::BeatmapSaveDataVersion3::EventBox*>(),
                         { ".ctor", {}, { ::i2c::type_of<::BeatmapSaveDataVersion3::IndexFilter*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::DistributionParamType>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataVersion3::IndexFilter*& BeatmapSaveDataVersion3::EventBox::__cordl_internal_get_f() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___f;
}
constexpr ::BeatmapSaveDataVersion3::IndexFilter* const& BeatmapSaveDataVersion3::EventBox::__cordl_internal_get_f() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___f;
}
constexpr void BeatmapSaveDataVersion3::EventBox::__cordl_internal_set_f(::BeatmapSaveDataVersion3::IndexFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___f = value;
}
constexpr float_t& BeatmapSaveDataVersion3::EventBox::__cordl_internal_get_w() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w;
}
constexpr float_t const& BeatmapSaveDataVersion3::EventBox::__cordl_internal_get_w() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w;
}
constexpr void BeatmapSaveDataVersion3::EventBox::__cordl_internal_set_w(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___w = value;
}
constexpr ::BeatmapSaveDataCommon::DistributionParamType& BeatmapSaveDataVersion3::EventBox::__cordl_internal_get_d() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr ::BeatmapSaveDataCommon::DistributionParamType const& BeatmapSaveDataVersion3::EventBox::__cordl_internal_get_d() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr void BeatmapSaveDataVersion3::EventBox::__cordl_internal_set_d(::BeatmapSaveDataCommon::DistributionParamType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___d = value;
}
inline ::BeatmapSaveDataVersion3::IndexFilter* BeatmapSaveDataVersion3::EventBox::get_indexFilter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::EventBox*>(), { "get_indexFilter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::IndexFilter*>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::EventBox::get_beatDistributionParam() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::EventBox*>(), { "get_beatDistributionParam", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::DistributionParamType BeatmapSaveDataVersion3::EventBox::get_beatDistributionParamType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::EventBox*>(), { "get_beatDistributionParamType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::DistributionParamType>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::EventBox::_ctor(::BeatmapSaveDataVersion3::IndexFilter* indexFilter, float_t beatDistributionParam,
                                                     ::BeatmapSaveDataCommon::DistributionParamType beatDistributionParamType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::BeatmapSaveDataVersion3::EventBox*>(),
                       { ".ctor", {}, { ::i2c::type_of<::BeatmapSaveDataVersion3::IndexFilter*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::DistributionParamType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indexFilter, beatDistributionParam, beatDistributionParamType);
}
inline ::BeatmapSaveDataVersion3::EventBox* BeatmapSaveDataVersion3::EventBox::New_ctor(::BeatmapSaveDataVersion3::IndexFilter* indexFilter, float_t beatDistributionParam,
                                                                                        ::BeatmapSaveDataCommon::DistributionParamType beatDistributionParamType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::EventBox*>(indexFilter, beatDistributionParam, beatDistributionParamType));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::EventBox::EventBox() {}
