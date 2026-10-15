#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Attributes/AnalyticsExcludedAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "BeatSaber/Analytics/Attributes/zzzz__AnalyticsExcludedAttribute_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Attributes::AnalyticsExcludedAttribute.get_Reason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::Analytics::Attributes::AnalyticsExcludedAttribute::*)()>(
    &::BeatSaber::Analytics::Attributes::AnalyticsExcludedAttribute::get_Reason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34ff4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Attributes::AnalyticsExcludedAttribute*>(), { "get_Reason", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Attributes::AnalyticsExcludedAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Attributes::AnalyticsExcludedAttribute::*)(::StringW)>(
    &::BeatSaber::Analytics::Attributes::AnalyticsExcludedAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34ff4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Attributes::AnalyticsExcludedAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Analytics::Attributes::AnalyticsExcludedAttribute::__cordl_internal_get__Reason_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Reason_k__BackingField;
}
constexpr ::StringW const& BeatSaber::Analytics::Attributes::AnalyticsExcludedAttribute::__cordl_internal_get__Reason_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Reason_k__BackingField;
}
constexpr void BeatSaber::Analytics::Attributes::AnalyticsExcludedAttribute::__cordl_internal_set__Reason_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Reason_k__BackingField = value;
}
inline ::StringW BeatSaber::Analytics::Attributes::AnalyticsExcludedAttribute::get_Reason() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Attributes::AnalyticsExcludedAttribute*>(), { "get_Reason", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Attributes::AnalyticsExcludedAttribute::_ctor(::StringW reason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Attributes::AnalyticsExcludedAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline ::BeatSaber::Analytics::Attributes::AnalyticsExcludedAttribute* BeatSaber::Analytics::Attributes::AnalyticsExcludedAttribute::New_ctor(::StringW reason) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Attributes::AnalyticsExcludedAttribute*>(reason));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Attributes::AnalyticsExcludedAttribute::AnalyticsExcludedAttribute() {}
