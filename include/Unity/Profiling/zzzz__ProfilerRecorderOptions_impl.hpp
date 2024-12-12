#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerRecorderOptions.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorderOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::ProfilerRecorderOptions::ProfilerRecorderOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::ProfilerRecorderOptions::ProfilerRecorderOptions() {}
constexpr ::Unity::Profiling::ProfilerRecorderOptions Unity::Profiling::ProfilerRecorderOptions::None{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Profiling::ProfilerRecorderOptions Unity::Profiling::ProfilerRecorderOptions::StartImmediately{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Profiling::ProfilerRecorderOptions Unity::Profiling::ProfilerRecorderOptions::KeepAliveDuringDomainReload{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Profiling::ProfilerRecorderOptions Unity::Profiling::ProfilerRecorderOptions::CollectOnlyOnCurrentThread{ static_cast<int32_t>(0x4) };
constexpr ::Unity::Profiling::ProfilerRecorderOptions Unity::Profiling::ProfilerRecorderOptions::WrapAroundWhenCapacityReached{ static_cast<int32_t>(0x8) };
constexpr ::Unity::Profiling::ProfilerRecorderOptions Unity::Profiling::ProfilerRecorderOptions::SumAllSamplesInFrame{ static_cast<int32_t>(0x10) };
constexpr ::Unity::Profiling::ProfilerRecorderOptions Unity::Profiling::ProfilerRecorderOptions::GpuRecorder{ static_cast<int32_t>(0x40) };
constexpr ::Unity::Profiling::ProfilerRecorderOptions Unity::Profiling::ProfilerRecorderOptions::Default{ static_cast<int32_t>(0x18) };
