#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Unity/Collections/Allocator.hpp"
#include "Unity/Collections/DeallocateOnJobCompletionAttribute.hpp"
#include "Unity/Collections/NativeArrayDebugView_1.hpp"
#include "Unity/Collections/NativeArrayDispose.hpp"
#include "Unity/Collections/NativeArrayDisposeJob.hpp"
#include "Unity/Collections/NativeArrayOptions.hpp"
#include "Unity/Collections/NativeArray_1.hpp"
#include "Unity/Collections/NativeDisableParallelForRestrictionAttribute.hpp"
#include "Unity/Collections/NativeFixedLengthAttribute.hpp"
#include "Unity/Collections/NativeLeakDetection.hpp"
#include "Unity/Collections/NativeMatchesParallelForLengthAttribute.hpp"
#include "Unity/Collections/NativeSliceDebugView_1.hpp"
#include "Unity/Collections/NativeSliceExtensions.hpp"
#include "Unity/Collections/NativeSlice_1.hpp"
#include "Unity/Collections/ReadOnlyAttribute.hpp"
#include "Unity/Collections/WriteOnlyAttribute.hpp"
#ifdef __cpp_modules
export module Collections;
#endif
