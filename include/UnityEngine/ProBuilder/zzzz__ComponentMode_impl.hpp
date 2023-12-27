#pragma once
#include "UnityEngine/ProBuilder/zzzz__ComponentMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::ComponentMode::ComponentMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ComponentMode::ComponentMode() {}
constexpr ::UnityEngine::ProBuilder::ComponentMode UnityEngine::ProBuilder::ComponentMode::Vertex{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::ComponentMode UnityEngine::ProBuilder::ComponentMode::Edge{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::ComponentMode UnityEngine::ProBuilder::ComponentMode::Face{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
