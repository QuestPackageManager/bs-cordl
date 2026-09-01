#pragma once
// IWYU pragma private; include "BeatSaber\FeatureFlags\IFeatureFlagService.hpp"
#include "BeatSaber/FeatureFlags/zzzz__IFeatureFlagService_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__Feature_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::FeatureFlags::IFeatureFlagService.IsFeatureEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::BeatSaber::FeatureFlags::IFeatureFlagService::*)(::BeatSaber::FeatureFlags::Feature)>(
    &::BeatSaber::FeatureFlags::IFeatureFlagService::IsFeatureEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::IFeatureFlagService*>(), { ::i2c::class_of<::BeatSaber::FeatureFlags::IFeatureFlagService*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::IFeatureFlagService.IsFeatureEnabledAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BeatSaber::FeatureFlags::IFeatureFlagService::*)(::BeatSaber::FeatureFlags::Feature)>(
    &::BeatSaber::FeatureFlags::IFeatureFlagService::IsFeatureEnabledAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::IFeatureFlagService*>(), { ::i2c::class_of<::BeatSaber::FeatureFlags::IFeatureFlagService*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<bool> BeatSaber::FeatureFlags::IFeatureFlagService::IsFeatureEnabled(::BeatSaber::FeatureFlags::Feature feature) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::FeatureFlags::IFeatureFlagService*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method, feature);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::FeatureFlags::IFeatureFlagService::IsFeatureEnabledAsync(::BeatSaber::FeatureFlags::Feature feature) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::FeatureFlags::IFeatureFlagService*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, feature);
}
