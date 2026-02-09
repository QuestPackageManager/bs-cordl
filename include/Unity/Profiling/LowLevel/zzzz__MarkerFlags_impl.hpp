#pragma once
// IWYU pragma private; include "Unity/Profiling/LowLevel/MarkerFlags.hpp"
#include "Unity/Profiling/LowLevel/zzzz__MarkerFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::LowLevel::MarkerFlags::MarkerFlags(uint16_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::LowLevel::MarkerFlags::MarkerFlags()   {
}
constexpr ::Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::Default{static_cast<uint16_t>(0x0u)};
constexpr ::Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::Script{static_cast<uint16_t>(0x2u)};
constexpr ::Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::ScriptInvoke{static_cast<uint16_t>(0x20u)};
constexpr ::Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::ScriptDeepProfiler{static_cast<uint16_t>(0x40u)};
constexpr ::Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::AvailabilityEditor{static_cast<uint16_t>(0x4u)};
constexpr ::Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::AvailabilityNonDevelopment{static_cast<uint16_t>(0x8u)};
constexpr ::Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::Warning{static_cast<uint16_t>(0x10u)};
constexpr ::Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::Counter{static_cast<uint16_t>(0x80u)};
constexpr ::Unity::Profiling::LowLevel::MarkerFlags  Unity::Profiling::LowLevel::MarkerFlags::SampleGPU{static_cast<uint16_t>(0x100u)};
