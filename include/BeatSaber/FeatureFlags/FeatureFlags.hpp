#ifdef __cpp_modules
module;
#endif

#pragma once
#include "BeatSaber/FeatureFlags/Feature.hpp"
#include "BeatSaber/FeatureFlags/FeatureConfiguration.hpp"
#include "BeatSaber/FeatureFlags/FeatureConfiguration_Hardcoded.hpp"
#include "BeatSaber/FeatureFlags/FeatureConfiguration_Remote.hpp"
#include "BeatSaber/FeatureFlags/FeatureConfiguration_RemoteWithDependency.hpp"
#include "BeatSaber/FeatureFlags/FeatureFlagService.hpp"
#include "BeatSaber/FeatureFlags/FeatureFlags.hpp"
#include "BeatSaber/FeatureFlags/FeatureFlagsEnabledQuery.hpp"
#include "BeatSaber/FeatureFlags/IFeatureFlagService.hpp"
#include "BeatSaber/FeatureFlags/IFeatureFlags.hpp"
#include "BeatSaber/FeatureFlags/MissingFeatureFlagException.hpp"
#include "BeatSaber/FeatureFlags/MockFeatureFlagService.hpp"
#ifdef __cpp_modules
export module FeatureFlags;
#endif
