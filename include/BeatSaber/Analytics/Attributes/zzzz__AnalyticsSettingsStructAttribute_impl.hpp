#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Attributes/AnalyticsSettingsStructAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "BeatSaber/Analytics/Attributes/zzzz__AnalyticsSettingsStructAttribute_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute.get_Category
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute::*)()>(
    &::BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute::get_Category)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34ff4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute*>(), { "get_Category", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute::*)(::StringW)>(
    &::BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34ff4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute::__cordl_internal_get__Category_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Category_k__BackingField;
}
constexpr ::StringW const& BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute::__cordl_internal_get__Category_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Category_k__BackingField;
}
constexpr void BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute::__cordl_internal_set__Category_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Category_k__BackingField = value;
}
inline ::StringW BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute::get_Category() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute*>(), { "get_Category", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute::_ctor(::StringW category) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, category);
}
inline ::BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute* BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute::New_ctor(::StringW category) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute*>(category));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute::AnalyticsSettingsStructAttribute() {}
