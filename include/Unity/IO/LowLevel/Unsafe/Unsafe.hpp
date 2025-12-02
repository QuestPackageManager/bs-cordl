#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Unity/IO/LowLevel/Unsafe/AssetLoadingSubsystem.hpp"
#include "Unity/IO/LowLevel/Unsafe/AsyncReadManager.hpp"
#include "Unity/IO/LowLevel/Unsafe/AsyncReadManagerMetricsFilters.hpp"
#include "Unity/IO/LowLevel/Unsafe/AsyncReadManagerRequestMetric.hpp"
#include "Unity/IO/LowLevel/Unsafe/FileHandle.hpp"
#include "Unity/IO/LowLevel/Unsafe/FileInfoResult.hpp"
#include "Unity/IO/LowLevel/Unsafe/FileReadType.hpp"
#include "Unity/IO/LowLevel/Unsafe/FileState.hpp"
#include "Unity/IO/LowLevel/Unsafe/Priority.hpp"
#include "Unity/IO/LowLevel/Unsafe/ProcessingState.hpp"
#include "Unity/IO/LowLevel/Unsafe/ReadCommand.hpp"
#include "Unity/IO/LowLevel/Unsafe/ReadCommandArray.hpp"
#include "Unity/IO/LowLevel/Unsafe/ReadHandle.hpp"
#include "Unity/IO/LowLevel/Unsafe/ReadStatus.hpp"
#ifdef __cpp_modules
export module Unsafe;
#endif
