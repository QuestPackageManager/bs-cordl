#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapObjectExecutionRating.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectExecutionRating.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapObjectExecutionRating::*)()>(&::GlobalNamespace::BeatmapObjectExecutionRating::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3707874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectExecutionRating*>(), { "get_time", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectExecutionRating._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectExecutionRating::*)(float_t)>(&::GlobalNamespace::BeatmapObjectExecutionRating::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370787c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectExecutionRating*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BeatmapObjectExecutionRating::__cordl_internal_get__time_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time_k__BackingField;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectExecutionRating::__cordl_internal_get__time_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapObjectExecutionRating::__cordl_internal_set__time_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____time_k__BackingField = value;
}
inline float_t GlobalNamespace::BeatmapObjectExecutionRating::get_time() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectExecutionRating*>(), { "get_time", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectExecutionRating::_ctor(float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectExecutionRating*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline ::GlobalNamespace::BeatmapObjectExecutionRating* GlobalNamespace::BeatmapObjectExecutionRating::New_ctor(float_t time) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapObjectExecutionRating*>(time));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRating() {}
