#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/FeatureConfiguration_Hardcoded.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_impl.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_Hardcoded_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FeatureConfiguration_Hardcoded._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FeatureConfiguration_Hardcoded::*)(bool)>(&::GlobalNamespace::FeatureConfiguration_Hardcoded::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x328a6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FeatureConfiguration_Hardcoded*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::FeatureConfiguration_Hardcoded::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr bool const& GlobalNamespace::FeatureConfiguration_Hardcoded::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::FeatureConfiguration_Hardcoded::__cordl_internal_set_value(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline void GlobalNamespace::FeatureConfiguration_Hardcoded::_ctor(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FeatureConfiguration_Hardcoded*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::FeatureConfiguration_Hardcoded* GlobalNamespace::FeatureConfiguration_Hardcoded::New_ctor(bool value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FeatureConfiguration_Hardcoded*>(value));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FeatureConfiguration_Hardcoded::FeatureConfiguration_Hardcoded() {}
