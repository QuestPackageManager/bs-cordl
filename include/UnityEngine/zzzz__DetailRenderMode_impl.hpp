#pragma once
#include "UnityEngine/zzzz__DetailRenderMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::DetailRenderMode::DetailRenderMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::DetailRenderMode::DetailRenderMode() {}
constexpr ::UnityEngine::DetailRenderMode UnityEngine::DetailRenderMode::GrassBillboard{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::DetailRenderMode UnityEngine::DetailRenderMode::VertexLit{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::DetailRenderMode UnityEngine::DetailRenderMode::Grass{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
