#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Unity/Burst/BurstAuthorizedExternalMethodAttribute.hpp"
#include "Unity/Burst/BurstCompileAttribute.hpp"
#include "Unity/Burst/BurstCompiler.hpp"
#include "Unity/Burst/BurstCompilerOptions.hpp"
#include "Unity/Burst/BurstDiscardAttribute.hpp"
#include "Unity/Burst/BurstExecutionEnvironment.hpp"
#include "Unity/Burst/BurstRuntime.hpp"
#include "Unity/Burst/BurstString.hpp"
#include "Unity/Burst/BurstTargetCpu.hpp"
#include "Unity/Burst/CompilationPriority.hpp"
#include "Unity/Burst/DiagnosticId.hpp"
#include "Unity/Burst/FloatMode.hpp"
#include "Unity/Burst/FloatPrecision.hpp"
#include "Unity/Burst/FunctionPointer_1.hpp"
#include "Unity/Burst/GlobalSafetyChecksSettingKind.hpp"
#include "Unity/Burst/IFunctionPointer.hpp"
#include "Unity/Burst/NativeDumpFlags.hpp"
#include "Unity/Burst/NoAliasAttribute.hpp"
#include "Unity/Burst/OptimizeFor.hpp"
#include "Unity/Burst/SafeStringArrayHelper.hpp"
#include "Unity/Burst/SharedStatic.hpp"
#include "Unity/Burst/SharedStatic_1.hpp"
#include "Unity/Burst/Unsafe.hpp"
#ifdef __cpp_modules
export module Burst;
#endif
