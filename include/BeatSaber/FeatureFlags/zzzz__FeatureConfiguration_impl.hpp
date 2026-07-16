#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/FeatureConfiguration.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_Hardcoded_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_RemoteWithDependency_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_Remote_def.hpp"
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureConfiguration._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::FeatureFlags::FeatureConfiguration::*)()>(&::BeatSaber::FeatureFlags::FeatureConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x328a6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::FeatureConfiguration*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void BeatSaber::FeatureFlags::FeatureConfiguration::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::FeatureConfiguration*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::FeatureFlags::FeatureConfiguration* BeatSaber::FeatureFlags::FeatureConfiguration::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::FeatureFlags::FeatureConfiguration*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::FeatureFlags::FeatureConfiguration::FeatureConfiguration() {}
