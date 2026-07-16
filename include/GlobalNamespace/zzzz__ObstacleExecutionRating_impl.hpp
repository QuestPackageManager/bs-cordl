#pragma once
// IWYU pragma private; include "GlobalNamespace/ObstacleExecutionRating.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleExecutionRating_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleExecutionRating_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ObstacleExecutionRating_Rating::ObstacleExecutionRating_Rating(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObstacleExecutionRating_Rating::ObstacleExecutionRating_Rating() {}
constexpr ::GlobalNamespace::ObstacleExecutionRating_Rating GlobalNamespace::ObstacleExecutionRating_Rating::OK{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ObstacleExecutionRating_Rating GlobalNamespace::ObstacleExecutionRating_Rating::NotGood{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::ObstacleExecutionRating.get_rating
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ObstacleExecutionRating_Rating (::GlobalNamespace::ObstacleExecutionRating::*)()>(
    &::GlobalNamespace::ObstacleExecutionRating::get_rating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x373ac34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleExecutionRating*>(), { "get_rating", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleExecutionRating._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleExecutionRating::*)(float_t, ::GlobalNamespace::ObstacleExecutionRating_Rating)>(
    &::GlobalNamespace::ObstacleExecutionRating::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x373ac3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleExecutionRating*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ObstacleExecutionRating_Rating>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ObstacleExecutionRating_Rating& GlobalNamespace::ObstacleExecutionRating::__cordl_internal_get__rating_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rating_k__BackingField;
}
constexpr ::GlobalNamespace::ObstacleExecutionRating_Rating const& GlobalNamespace::ObstacleExecutionRating::__cordl_internal_get__rating_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rating_k__BackingField;
}
constexpr void GlobalNamespace::ObstacleExecutionRating::__cordl_internal_set__rating_k__BackingField(::GlobalNamespace::ObstacleExecutionRating_Rating value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rating_k__BackingField = value;
}
inline ::GlobalNamespace::ObstacleExecutionRating_Rating GlobalNamespace::ObstacleExecutionRating::get_rating() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleExecutionRating*>(), { "get_rating", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ObstacleExecutionRating_Rating>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleExecutionRating::_ctor(float_t time, ::GlobalNamespace::ObstacleExecutionRating_Rating rating) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleExecutionRating*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ObstacleExecutionRating_Rating>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, rating);
}
inline ::GlobalNamespace::ObstacleExecutionRating* GlobalNamespace::ObstacleExecutionRating::New_ctor(float_t time, ::GlobalNamespace::ObstacleExecutionRating_Rating rating) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ObstacleExecutionRating*>(time, rating));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObstacleExecutionRating::ObstacleExecutionRating() {}
