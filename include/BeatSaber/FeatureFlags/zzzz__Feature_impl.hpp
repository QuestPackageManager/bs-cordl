#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/Feature.hpp"
#include "BeatSaber/FeatureFlags/zzzz__Feature_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::FeatureFlags::Feature::Feature(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::FeatureFlags::Feature::Feature()   {
}
constexpr ::BeatSaber::FeatureFlags::Feature  BeatSaber::FeatureFlags::Feature::BlockLevelAnalytics{static_cast<int32_t>(0x0)};
constexpr ::BeatSaber::FeatureFlags::Feature  BeatSaber::FeatureFlags::Feature::GameplayAnalytics{static_cast<int32_t>(0x1)};
