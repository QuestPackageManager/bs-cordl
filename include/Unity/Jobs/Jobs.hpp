#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Unity/Jobs/IJob.hpp"
#include "Unity/Jobs/IJobExtensions.hpp"
#include "Unity/Jobs/IJobParallelFor.hpp"
#include "Unity/Jobs/IJobParallelForExtensions.hpp"
#include "Unity/Jobs/JobHandle.hpp"
#ifdef __cpp_modules
export module Jobs;
#endif
