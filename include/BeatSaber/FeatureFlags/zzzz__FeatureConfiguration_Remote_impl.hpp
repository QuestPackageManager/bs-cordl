#pragma once
// IWYU pragma private; include "BeatSaber\FeatureFlags\FeatureConfiguration_Remote.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_impl.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_Remote_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FeatureConfiguration_Remote._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FeatureConfiguration_Remote::*)(::StringW, bool)>(&::GlobalNamespace::FeatureConfiguration_Remote::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x328b780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FeatureConfiguration_Remote*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FeatureConfiguration_Remote::__cordl_internal_get_feature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___feature;
}
constexpr ::StringW const& GlobalNamespace::FeatureConfiguration_Remote::__cordl_internal_get_feature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___feature;
}
constexpr void GlobalNamespace::FeatureConfiguration_Remote::__cordl_internal_set_feature(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___feature = value;
}
constexpr bool& GlobalNamespace::FeatureConfiguration_Remote::__cordl_internal_get_defaultValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultValue;
}
constexpr bool const& GlobalNamespace::FeatureConfiguration_Remote::__cordl_internal_get_defaultValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultValue;
}
constexpr void GlobalNamespace::FeatureConfiguration_Remote::__cordl_internal_set_defaultValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultValue = value;
}
inline void GlobalNamespace::FeatureConfiguration_Remote::_ctor(::StringW feature, bool defaultValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FeatureConfiguration_Remote*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, feature, defaultValue);
}
inline ::GlobalNamespace::FeatureConfiguration_Remote* GlobalNamespace::FeatureConfiguration_Remote::New_ctor(::StringW feature, bool defaultValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FeatureConfiguration_Remote*>(feature, defaultValue));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FeatureConfiguration_Remote::FeatureConfiguration_Remote() {}
