#pragma once
#include "Unity/Burst/zzzz__BurstTargetCpu_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::BurstTargetCpu::BurstTargetCpu(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstTargetCpu::BurstTargetCpu() {}
constexpr ::Unity::Burst::BurstTargetCpu Unity::Burst::BurstTargetCpu::Auto{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Burst::BurstTargetCpu Unity::Burst::BurstTargetCpu::X86_SSE2{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Burst::BurstTargetCpu Unity::Burst::BurstTargetCpu::X86_SSE4{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Burst::BurstTargetCpu Unity::Burst::BurstTargetCpu::X64_SSE2{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Burst::BurstTargetCpu Unity::Burst::BurstTargetCpu::X64_SSE4{ static_cast<int32_t>(0x4) };
constexpr ::Unity::Burst::BurstTargetCpu Unity::Burst::BurstTargetCpu::AVX{ static_cast<int32_t>(0x5) };
constexpr ::Unity::Burst::BurstTargetCpu Unity::Burst::BurstTargetCpu::AVX2{ static_cast<int32_t>(0x6) };
constexpr ::Unity::Burst::BurstTargetCpu Unity::Burst::BurstTargetCpu::WASM32{ static_cast<int32_t>(0x7) };
constexpr ::Unity::Burst::BurstTargetCpu Unity::Burst::BurstTargetCpu::ARMV7A_NEON32{ static_cast<int32_t>(0x8) };
constexpr ::Unity::Burst::BurstTargetCpu Unity::Burst::BurstTargetCpu::ARMV8A_AARCH64{ static_cast<int32_t>(0x9) };
constexpr ::Unity::Burst::BurstTargetCpu Unity::Burst::BurstTargetCpu::THUMB2_NEON32{ static_cast<int32_t>(0xa) };
constexpr ::Unity::Burst::BurstTargetCpu Unity::Burst::BurstTargetCpu::ARMV8A_AARCH64_HALFFP{ static_cast<int32_t>(0xb) };
constexpr ::Unity::Burst::BurstTargetCpu Unity::Burst::BurstTargetCpu::ARMV9A{ static_cast<int32_t>(0xc) };
