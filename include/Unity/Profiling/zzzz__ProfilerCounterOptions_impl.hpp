#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerCounterOptions.hpp"
#include "Unity/Profiling/zzzz__ProfilerCounterOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::ProfilerCounterOptions::ProfilerCounterOptions(uint16_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::ProfilerCounterOptions::ProfilerCounterOptions()   {
}
constexpr ::Unity::Profiling::ProfilerCounterOptions  Unity::Profiling::ProfilerCounterOptions::None{static_cast<uint16_t>(0x0u)};
constexpr ::Unity::Profiling::ProfilerCounterOptions  Unity::Profiling::ProfilerCounterOptions::FlushOnEndOfFrame{static_cast<uint16_t>(0x2u)};
constexpr ::Unity::Profiling::ProfilerCounterOptions  Unity::Profiling::ProfilerCounterOptions::ResetToZeroOnFlush{static_cast<uint16_t>(0x4u)};
