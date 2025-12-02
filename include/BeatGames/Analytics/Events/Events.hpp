#ifdef __cpp_modules
module;
#endif

#pragma once
#include "BeatGames/Analytics/Events/BasePlatformSessionAnalyticsEvent.hpp"
#include "BeatGames/Analytics/Events/CommonFieldProviders.hpp"
#include "BeatGames/Analytics/Events/FunctionalLogger.hpp"
#include "BeatGames/Analytics/Events/NavigationEvent.hpp"
#include "BeatGames/Analytics/Events/NavigationEventType.hpp"
#include "BeatGames/Analytics/Events/SessionEvent.hpp"
#include "BeatGames/Analytics/Events/SessionEventSender.hpp"
#include "BeatGames/Analytics/Events/TelemetryEvent.hpp"
#include "BeatGames/Analytics/Events/TelemetryEventSender.hpp"
#ifdef __cpp_modules
export module Events;
#endif
