#pragma once
// IWYU pragma private; include "BeatSaber\FeatureFlags\IFeatureFlags.hpp"
#include "BeatSaber/FeatureFlags/zzzz__IFeatureFlags_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__Feature_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
//  Writing Method size for method: ::BeatSaber::FeatureFlags::IFeatureFlags.GetConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::BeatSaber::FeatureFlags::Feature, ::BeatSaber::FeatureFlags::FeatureConfiguration*>* (
    ::BeatSaber::FeatureFlags::IFeatureFlags::*)()>(&::BeatSaber::FeatureFlags::IFeatureFlags::GetConfiguration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::IFeatureFlags*>(), { ::i2c::class_of<::BeatSaber::FeatureFlags::IFeatureFlags*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::BeatSaber::FeatureFlags::Feature, ::BeatSaber::FeatureFlags::FeatureConfiguration*>*
BeatSaber::FeatureFlags::IFeatureFlags::GetConfiguration() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::FeatureFlags::IFeatureFlags*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::BeatSaber::FeatureFlags::Feature, ::BeatSaber::FeatureFlags::FeatureConfiguration*>*>(
      this, ___internal_method);
}
