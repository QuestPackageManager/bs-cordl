#pragma once
// IWYU pragma private; include "UnityEngine/TransferFunction.hpp"
#include "UnityEngine/zzzz__TransferFunction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TransferFunction::TransferFunction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TransferFunction::TransferFunction() {}
constexpr ::UnityEngine::TransferFunction UnityEngine::TransferFunction::Unknown{ static_cast<int32_t>(0xffffffff) };
constexpr ::UnityEngine::TransferFunction UnityEngine::TransferFunction::sRGB{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TransferFunction UnityEngine::TransferFunction::BT1886{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::TransferFunction UnityEngine::TransferFunction::PQ{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::TransferFunction UnityEngine::TransferFunction::Linear{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::TransferFunction UnityEngine::TransferFunction::Gamma22{ static_cast<int32_t>(0x4) };
