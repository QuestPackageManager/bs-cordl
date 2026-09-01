#pragma once
// IWYU pragma private; include "TMPro\Compute_DT_EventArgs.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__Compute_DistanceTransform_EventTypes_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "TMPro/zzzz__Compute_DT_EventArgs_def.hpp"
#include "TMPro/zzzz__Compute_DistanceTransform_EventTypes_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::TMPro::Compute_DT_EventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::Compute_DT_EventArgs::*)(::TMPro::Compute_DistanceTransform_EventTypes, float_t)>(&::TMPro::Compute_DT_EventArgs::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6948c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::Compute_DT_EventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::TMPro::Compute_DistanceTransform_EventTypes>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::Compute_DT_EventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::Compute_DT_EventArgs::*)(::TMPro::Compute_DistanceTransform_EventTypes, ::ArrayW<::UnityEngine::Color>)>(
    &::TMPro::Compute_DT_EventArgs::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6948c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::Compute_DT_EventArgs*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::TMPro::Compute_DistanceTransform_EventTypes>(), ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
constexpr ::TMPro::Compute_DistanceTransform_EventTypes& TMPro::Compute_DT_EventArgs::__cordl_internal_get_EventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EventType;
}
constexpr ::TMPro::Compute_DistanceTransform_EventTypes const& TMPro::Compute_DT_EventArgs::__cordl_internal_get_EventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EventType;
}
constexpr void TMPro::Compute_DT_EventArgs::__cordl_internal_set_EventType(::TMPro::Compute_DistanceTransform_EventTypes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EventType = value;
}
constexpr float_t& TMPro::Compute_DT_EventArgs::__cordl_internal_get_ProgressPercentage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProgressPercentage;
}
constexpr float_t const& TMPro::Compute_DT_EventArgs::__cordl_internal_get_ProgressPercentage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProgressPercentage;
}
constexpr void TMPro::Compute_DT_EventArgs::__cordl_internal_set_ProgressPercentage(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ProgressPercentage = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& TMPro::Compute_DT_EventArgs::__cordl_internal_get_Colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Colors;
}
constexpr ::ArrayW<::UnityEngine::Color> const& TMPro::Compute_DT_EventArgs::__cordl_internal_get_Colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Colors;
}
constexpr void TMPro::Compute_DT_EventArgs::__cordl_internal_set_Colors(::ArrayW<::UnityEngine::Color> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Colors = value;
}
inline void TMPro::Compute_DT_EventArgs::_ctor(::TMPro::Compute_DistanceTransform_EventTypes type, float_t progress) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::Compute_DT_EventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::TMPro::Compute_DistanceTransform_EventTypes>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, progress);
}
inline void TMPro::Compute_DT_EventArgs::_ctor(::TMPro::Compute_DistanceTransform_EventTypes type, ::ArrayW<::UnityEngine::Color> colors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::Compute_DT_EventArgs*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::TMPro::Compute_DistanceTransform_EventTypes>(), ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, colors);
}
inline ::TMPro::Compute_DT_EventArgs* TMPro::Compute_DT_EventArgs::New_ctor(::TMPro::Compute_DistanceTransform_EventTypes type, float_t progress) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::Compute_DT_EventArgs*>(type, progress));
}
inline ::TMPro::Compute_DT_EventArgs* TMPro::Compute_DT_EventArgs::New_ctor(::TMPro::Compute_DistanceTransform_EventTypes type, ::ArrayW<::UnityEngine::Color> colors) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::Compute_DT_EventArgs*>(type, colors));
}
// Ctor Parameters []
constexpr ::TMPro::Compute_DT_EventArgs::Compute_DT_EventArgs() {}
