#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Attributes/AnalyticsTransformAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "BeatSaber/Analytics/Attributes/zzzz__AnalyticsTransformAttribute_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute.get_MethodName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute::*)()>(
    &::BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute::get_MethodName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34ff4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute*>(), { "get_MethodName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute::*)(::StringW)>(
    &::BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34ff4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute::__cordl_internal_get__MethodName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MethodName_k__BackingField;
}
constexpr ::StringW const& BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute::__cordl_internal_get__MethodName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MethodName_k__BackingField;
}
constexpr void BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute::__cordl_internal_set__MethodName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MethodName_k__BackingField = value;
}
inline ::StringW BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute::get_MethodName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute*>(), { "get_MethodName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute::_ctor(::StringW methodName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName);
}
inline ::BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute* BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute::New_ctor(::StringW methodName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute*>(methodName));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute::AnalyticsTransformAttribute() {}
