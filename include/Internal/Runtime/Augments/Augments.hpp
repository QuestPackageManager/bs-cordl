#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Internal/Runtime/Augments/AsyncStatus.hpp"
#include "Internal/Runtime/Augments/ReflectionExecutionDomainCallbacks.hpp"
#include "Internal/Runtime/Augments/RuntimeAugments.hpp"
#include "Internal/Runtime/Augments/RuntimeThread.hpp"
#include "Internal/Runtime/Augments/TaskTraceCallbacks.hpp"
#ifdef __cpp_modules
export module Augments;
#endif
