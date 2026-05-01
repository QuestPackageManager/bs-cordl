#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System/Runtime/Diagnostics/DiagnosticTraceBase.hpp"
#include "System/Runtime/Diagnostics/DiagnosticTraceSource.hpp"
#include "System/Runtime/Diagnostics/DiagnosticsEventProvider.hpp"
#include "System/Runtime/Diagnostics/DictionaryTraceRecord.hpp"
#include "System/Runtime/Diagnostics/EtwDiagnosticTrace.hpp"
#include "System/Runtime/Diagnostics/EtwProvider.hpp"
#include "System/Runtime/Diagnostics/EventDescriptor.hpp"
#include "System/Runtime/Diagnostics/EventLogger.hpp"
#include "System/Runtime/Diagnostics/EventTraceActivity.hpp"
#include "System/Runtime/Diagnostics/ITraceSourceStringProvider.hpp"
#include "System/Runtime/Diagnostics/StringTraceRecord.hpp"
#include "System/Runtime/Diagnostics/TraceRecord.hpp"
#ifdef __cpp_modules
export module Diagnostics;
#endif
