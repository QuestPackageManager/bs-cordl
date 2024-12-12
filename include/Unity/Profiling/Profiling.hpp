#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Unity/Profiling/DebugScreenCapture.hpp"
#include "Unity/Profiling/IgnoredByDeepProfilerAttribute.hpp"
#include "Unity/Profiling/ProfilerCategory.hpp"
#include "Unity/Profiling/ProfilerCategoryColor.hpp"
#include "Unity/Profiling/ProfilerCounterOptions.hpp"
#include "Unity/Profiling/ProfilerMarker.hpp"
#include "Unity/Profiling/ProfilerMarkerDataUnit.hpp"
#include "Unity/Profiling/ProfilerRecorder.hpp"
#include "Unity/Profiling/ProfilerRecorderDebugView.hpp"
#include "Unity/Profiling/ProfilerRecorderOptions.hpp"
#ifdef __cpp_modules
export module Profiling;
#endif
