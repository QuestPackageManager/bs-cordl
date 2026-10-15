#ifdef __cpp_modules
module;
#endif

#pragma once
#include "BeatSaber/Analytics/Settings/AudioSettingsTracker.hpp"
#include "BeatSaber/Analytics/Settings/ColorsSettingsTracker.hpp"
#include "BeatSaber/Analytics/Settings/ControllerSettingsTracker.hpp"
#include "BeatSaber/Analytics/Settings/EnvironmentsSettingsTracker.hpp"
#include "BeatSaber/Analytics/Settings/GraphicsSettingsTracker.hpp"
#include "BeatSaber/Analytics/Settings/MiscSettingsTracker.hpp"
#include "BeatSaber/Analytics/Settings/PlayerSettingsTracker.hpp"
#include "BeatSaber/Analytics/Settings/SettingsAnalyticsGenerated.hpp"
#include "BeatSaber/Analytics/Settings/SettingsChangeAnalytics.hpp"
#include "BeatSaber/Analytics/Settings/SettingsConfigPayload.hpp"
#include "BeatSaber/Analytics/Settings/SettingsSnapshotAnalytics.hpp"
#include "BeatSaber/Analytics/Settings/SettingsSnapshotCondition.hpp"
#include "BeatSaber/Analytics/Settings/SettingsTrackerFactory.hpp"
#ifdef __cpp_modules
export module Settings;
#endif
