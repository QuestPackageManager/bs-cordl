#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Unity/Burst/Intrinsics/Arm.hpp"
#include "Unity/Burst/Intrinsics/BurstTargetCpuAttribute.hpp"
#include "Unity/Burst/Intrinsics/Common.hpp"
#include "Unity/Burst/Intrinsics/V128DebugView.hpp"
#include "Unity/Burst/Intrinsics/V256DebugView.hpp"
#include "Unity/Burst/Intrinsics/V64DebugView.hpp"
#include "Unity/Burst/Intrinsics/X86.hpp"
#include "Unity/Burst/Intrinsics/v128.hpp"
#include "Unity/Burst/Intrinsics/v256.hpp"
#include "Unity/Burst/Intrinsics/v64.hpp"
#ifdef __cpp_modules
export module Intrinsics;
#endif
