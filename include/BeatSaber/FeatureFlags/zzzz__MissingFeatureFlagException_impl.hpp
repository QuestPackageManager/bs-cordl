#pragma once
// IWYU pragma private; include "BeatSaber\FeatureFlags\MissingFeatureFlagException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "BeatSaber/FeatureFlags/zzzz__MissingFeatureFlagException_def.hpp"
//  Writing Method size for method: ::BeatSaber::FeatureFlags::MissingFeatureFlagException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::FeatureFlags::MissingFeatureFlagException::*)(::StringW)>(&::BeatSaber::FeatureFlags::MissingFeatureFlagException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x328b708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::MissingFeatureFlagException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::FeatureFlags::MissingFeatureFlagException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::MissingFeatureFlagException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::BeatSaber::FeatureFlags::MissingFeatureFlagException* BeatSaber::FeatureFlags::MissingFeatureFlagException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::FeatureFlags::MissingFeatureFlagException*>(message));
}
// Ctor Parameters []
constexpr ::BeatSaber::FeatureFlags::MissingFeatureFlagException::MissingFeatureFlagException() {}
