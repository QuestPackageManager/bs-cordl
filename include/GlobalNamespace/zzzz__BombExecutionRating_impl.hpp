#pragma once
// IWYU pragma private; include "GlobalNamespace/BombExecutionRating.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_impl.hpp"
#include "GlobalNamespace/zzzz__BombExecutionRating_def.hpp"
#include "GlobalNamespace/zzzz__BombExecutionRating_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BombExecutionRating_Rating::BombExecutionRating_Rating(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BombExecutionRating_Rating::BombExecutionRating_Rating() {}
constexpr ::GlobalNamespace::BombExecutionRating_Rating GlobalNamespace::BombExecutionRating_Rating::OK{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::BombExecutionRating_Rating GlobalNamespace::BombExecutionRating_Rating::NotGood{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::BombExecutionRating.get_rating
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BombExecutionRating_Rating (::GlobalNamespace::BombExecutionRating::*)()>(
    &::GlobalNamespace::BombExecutionRating::get_rating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3704a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombExecutionRating*>(), { "get_rating", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombExecutionRating._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombExecutionRating::*)(float_t, ::GlobalNamespace::BombExecutionRating_Rating)>(
    &::GlobalNamespace::BombExecutionRating::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3704a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombExecutionRating*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::BombExecutionRating_Rating>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BombExecutionRating_Rating& GlobalNamespace::BombExecutionRating::__cordl_internal_get__rating_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rating_k__BackingField;
}
constexpr ::GlobalNamespace::BombExecutionRating_Rating const& GlobalNamespace::BombExecutionRating::__cordl_internal_get__rating_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rating_k__BackingField;
}
constexpr void GlobalNamespace::BombExecutionRating::__cordl_internal_set__rating_k__BackingField(::GlobalNamespace::BombExecutionRating_Rating value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rating_k__BackingField = value;
}
inline ::GlobalNamespace::BombExecutionRating_Rating GlobalNamespace::BombExecutionRating::get_rating() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombExecutionRating*>(), { "get_rating", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BombExecutionRating_Rating>(this, ___internal_method);
}
inline void GlobalNamespace::BombExecutionRating::_ctor(float_t time, ::GlobalNamespace::BombExecutionRating_Rating rating) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombExecutionRating*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::BombExecutionRating_Rating>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, rating);
}
inline ::GlobalNamespace::BombExecutionRating* GlobalNamespace::BombExecutionRating::New_ctor(float_t time, ::GlobalNamespace::BombExecutionRating_Rating rating) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BombExecutionRating*>(time, rating));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BombExecutionRating::BombExecutionRating() {}
