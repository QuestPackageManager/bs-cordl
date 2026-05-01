#pragma once
// IWYU pragma private; include "Unity/Profiling/LowLevel/ProfilerMarkerDataType.hpp"
#include "Unity/Profiling/LowLevel/zzzz__ProfilerMarkerDataType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::LowLevel::ProfilerMarkerDataType::ProfilerMarkerDataType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::LowLevel::ProfilerMarkerDataType::ProfilerMarkerDataType() {}
constexpr ::Unity::Profiling::LowLevel::ProfilerMarkerDataType Unity::Profiling::LowLevel::ProfilerMarkerDataType::InstanceId{ static_cast<uint8_t>(0x1u) };
constexpr ::Unity::Profiling::LowLevel::ProfilerMarkerDataType Unity::Profiling::LowLevel::ProfilerMarkerDataType::Int32{ static_cast<uint8_t>(0x2u) };
constexpr ::Unity::Profiling::LowLevel::ProfilerMarkerDataType Unity::Profiling::LowLevel::ProfilerMarkerDataType::UInt32{ static_cast<uint8_t>(0x3u) };
constexpr ::Unity::Profiling::LowLevel::ProfilerMarkerDataType Unity::Profiling::LowLevel::ProfilerMarkerDataType::Int64{ static_cast<uint8_t>(0x4u) };
constexpr ::Unity::Profiling::LowLevel::ProfilerMarkerDataType Unity::Profiling::LowLevel::ProfilerMarkerDataType::UInt64{ static_cast<uint8_t>(0x5u) };
constexpr ::Unity::Profiling::LowLevel::ProfilerMarkerDataType Unity::Profiling::LowLevel::ProfilerMarkerDataType::Float{ static_cast<uint8_t>(0x6u) };
constexpr ::Unity::Profiling::LowLevel::ProfilerMarkerDataType Unity::Profiling::LowLevel::ProfilerMarkerDataType::Double{ static_cast<uint8_t>(0x7u) };
constexpr ::Unity::Profiling::LowLevel::ProfilerMarkerDataType Unity::Profiling::LowLevel::ProfilerMarkerDataType::String16{ static_cast<uint8_t>(0x9u) };
constexpr ::Unity::Profiling::LowLevel::ProfilerMarkerDataType Unity::Profiling::LowLevel::ProfilerMarkerDataType::Blob8{ static_cast<uint8_t>(0xbu) };
constexpr ::Unity::Profiling::LowLevel::ProfilerMarkerDataType Unity::Profiling::LowLevel::ProfilerMarkerDataType::GfxResourceId{ static_cast<uint8_t>(0xcu) };
