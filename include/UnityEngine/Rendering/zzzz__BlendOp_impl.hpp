#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BlendOp.hpp"
#include "UnityEngine/Rendering/zzzz__BlendOp_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BlendOp::BlendOp(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BlendOp::BlendOp() {}
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::Add{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::Subtract{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::ReverseSubtract{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::Min{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::Max{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::LogicalClear{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::LogicalSet{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::LogicalCopy{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::LogicalCopyInverted{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::LogicalNoop{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::LogicalInvert{ static_cast<int32_t>(0xa) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::LogicalAnd{ static_cast<int32_t>(0xb) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::LogicalNand{ static_cast<int32_t>(0xc) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::LogicalOr{ static_cast<int32_t>(0xd) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::LogicalNor{ static_cast<int32_t>(0xe) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::LogicalXor{ static_cast<int32_t>(0xf) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::LogicalEquivalence{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::LogicalAndReverse{ static_cast<int32_t>(0x11) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::LogicalAndInverted{ static_cast<int32_t>(0x12) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::LogicalOrReverse{ static_cast<int32_t>(0x13) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::LogicalOrInverted{ static_cast<int32_t>(0x14) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::Multiply{ static_cast<int32_t>(0x15) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::Screen{ static_cast<int32_t>(0x16) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::Overlay{ static_cast<int32_t>(0x17) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::Darken{ static_cast<int32_t>(0x18) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::Lighten{ static_cast<int32_t>(0x19) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::ColorDodge{ static_cast<int32_t>(0x1a) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::ColorBurn{ static_cast<int32_t>(0x1b) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::HardLight{ static_cast<int32_t>(0x1c) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::SoftLight{ static_cast<int32_t>(0x1d) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::Difference{ static_cast<int32_t>(0x1e) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::Exclusion{ static_cast<int32_t>(0x1f) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::HSLHue{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::HSLSaturation{ static_cast<int32_t>(0x21) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::HSLColor{ static_cast<int32_t>(0x22) };
constexpr ::UnityEngine::Rendering::BlendOp UnityEngine::Rendering::BlendOp::HSLLuminosity{ static_cast<int32_t>(0x23) };
