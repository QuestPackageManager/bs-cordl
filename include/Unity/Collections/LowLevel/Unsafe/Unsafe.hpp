#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Unity/Collections/LowLevel/Unsafe/NativeArrayUnsafeUtility.hpp"
#include "Unity/Collections/LowLevel/Unsafe/NativeContainerAttribute.hpp"
#include "Unity/Collections/LowLevel/Unsafe/NativeContainerIsAtomicWriteOnlyAttribute.hpp"
#include "Unity/Collections/LowLevel/Unsafe/NativeContainerIsReadOnlyAttribute.hpp"
#include "Unity/Collections/LowLevel/Unsafe/NativeContainerNeedsThreadIndexAttribute.hpp"
#include "Unity/Collections/LowLevel/Unsafe/NativeContainerSupportsDeallocateOnJobCompletionAttribute.hpp"
#include "Unity/Collections/LowLevel/Unsafe/NativeContainerSupportsDeferredConvertListToArray.hpp"
#include "Unity/Collections/LowLevel/Unsafe/NativeContainerSupportsMinMaxWriteRestrictionAttribute.hpp"
#include "Unity/Collections/LowLevel/Unsafe/NativeDisableContainerSafetyRestrictionAttribute.hpp"
#include "Unity/Collections/LowLevel/Unsafe/NativeDisableUnsafePtrRestrictionAttribute.hpp"
#include "Unity/Collections/LowLevel/Unsafe/NativeSetClassTypeToNullOnScheduleAttribute.hpp"
#include "Unity/Collections/LowLevel/Unsafe/NativeSetThreadIndexAttribute.hpp"
#include "Unity/Collections/LowLevel/Unsafe/NativeSliceUnsafeUtility.hpp"
#include "Unity/Collections/LowLevel/Unsafe/UnsafeUtility.hpp"
#include "Unity/Collections/LowLevel/Unsafe/WriteAccessRequiredAttribute.hpp"
#ifdef __cpp_modules
export module Unsafe;
#endif
