#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FieldPacking.hpp"
#include "UnityEngine/Rendering/zzzz__FieldPacking_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::FieldPacking::FieldPacking(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::FieldPacking::FieldPacking() {}
constexpr ::UnityEngine::Rendering::FieldPacking UnityEngine::Rendering::FieldPacking::NoPacking{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::FieldPacking UnityEngine::Rendering::FieldPacking::R11G11B10{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::FieldPacking UnityEngine::Rendering::FieldPacking::PackedFloat{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::FieldPacking UnityEngine::Rendering::FieldPacking::PackedUint{ static_cast<int32_t>(0x3) };
