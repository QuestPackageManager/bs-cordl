#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeSamplingDebugUpdate.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeSamplingDebugUpdate_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeSamplingDebugUpdate::ProbeSamplingDebugUpdate(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeSamplingDebugUpdate::ProbeSamplingDebugUpdate() {}
constexpr ::UnityEngine::Rendering::ProbeSamplingDebugUpdate UnityEngine::Rendering::ProbeSamplingDebugUpdate::Never{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::ProbeSamplingDebugUpdate UnityEngine::Rendering::ProbeSamplingDebugUpdate::Once{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::ProbeSamplingDebugUpdate UnityEngine::Rendering::ProbeSamplingDebugUpdate::Always{ static_cast<int32_t>(0x2) };
