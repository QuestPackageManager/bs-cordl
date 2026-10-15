#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Attributes/AnalyticsNameAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "BeatSaber/Analytics/Attributes/zzzz__AnalyticsNameAttribute_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Attributes::AnalyticsNameAttribute.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::Analytics::Attributes::AnalyticsNameAttribute::*)()>(
    &::BeatSaber::Analytics::Attributes::AnalyticsNameAttribute::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34ff4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Attributes::AnalyticsNameAttribute*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Attributes::AnalyticsNameAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Attributes::AnalyticsNameAttribute::*)(::StringW)>(
    &::BeatSaber::Analytics::Attributes::AnalyticsNameAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34ff4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Attributes::AnalyticsNameAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Analytics::Attributes::AnalyticsNameAttribute::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& BeatSaber::Analytics::Attributes::AnalyticsNameAttribute::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void BeatSaber::Analytics::Attributes::AnalyticsNameAttribute::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
inline ::StringW BeatSaber::Analytics::Attributes::AnalyticsNameAttribute::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Attributes::AnalyticsNameAttribute*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Attributes::AnalyticsNameAttribute::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Attributes::AnalyticsNameAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::BeatSaber::Analytics::Attributes::AnalyticsNameAttribute* BeatSaber::Analytics::Attributes::AnalyticsNameAttribute::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Attributes::AnalyticsNameAttribute*>(name));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Attributes::AnalyticsNameAttribute::AnalyticsNameAttribute() {}
