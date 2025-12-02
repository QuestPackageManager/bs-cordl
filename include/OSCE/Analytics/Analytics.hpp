#ifdef __cpp_modules
module;
#endif

#pragma once
#include "OSCE/Analytics/AnalyticsBatchingThread.hpp"
#include "OSCE/Analytics/AnalyticsManager.hpp"
#include "OSCE/Analytics/AnalyticsScribeConverter.hpp"
#include "OSCE/Analytics/AnalyticsSystemModeEnum.hpp"
#include "OSCE/Analytics/BaseAnalyticsEvent.hpp"
#include "OSCE/Analytics/CallStackAnalyticsEvent.hpp"
#include "OSCE/Analytics/GetIdParams.hpp"
#include "OSCE/Analytics/IdResponse.hpp"
#include "OSCE/Analytics/LoggerAnalyticsBatch.hpp"
#include "OSCE/Analytics/LoggerAnalyticsEvent.hpp"
#include "OSCE/Analytics/ScribeHelperUtility.hpp"
#include "OSCE/Analytics/UserSessionAnalyticsEvent.hpp"
#ifdef __cpp_modules
export module Analytics;
#endif
