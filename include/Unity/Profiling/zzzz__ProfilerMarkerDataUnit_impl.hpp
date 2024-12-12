#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerMarkerDataUnit.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarkerDataUnit_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::ProfilerMarkerDataUnit::ProfilerMarkerDataUnit(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::ProfilerMarkerDataUnit::ProfilerMarkerDataUnit() {}
constexpr ::Unity::Profiling::ProfilerMarkerDataUnit Unity::Profiling::ProfilerMarkerDataUnit::Undefined{ static_cast<uint8_t>(0x0u) };
constexpr ::Unity::Profiling::ProfilerMarkerDataUnit Unity::Profiling::ProfilerMarkerDataUnit::TimeNanoseconds{ static_cast<uint8_t>(0x1u) };
constexpr ::Unity::Profiling::ProfilerMarkerDataUnit Unity::Profiling::ProfilerMarkerDataUnit::Bytes{ static_cast<uint8_t>(0x2u) };
constexpr ::Unity::Profiling::ProfilerMarkerDataUnit Unity::Profiling::ProfilerMarkerDataUnit::Count{ static_cast<uint8_t>(0x3u) };
constexpr ::Unity::Profiling::ProfilerMarkerDataUnit Unity::Profiling::ProfilerMarkerDataUnit::Percent{ static_cast<uint8_t>(0x4u) };
constexpr ::Unity::Profiling::ProfilerMarkerDataUnit Unity::Profiling::ProfilerMarkerDataUnit::FrequencyHz{ static_cast<uint8_t>(0x5u) };
