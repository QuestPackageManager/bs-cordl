#pragma once
#include "UnityEngine/ProBuilder/zzzz__EditLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::EditLevel::EditLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::EditLevel::EditLevel() {}
constexpr ::UnityEngine::ProBuilder::EditLevel UnityEngine::ProBuilder::EditLevel::Top{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::EditLevel UnityEngine::ProBuilder::EditLevel::Geometry{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::EditLevel UnityEngine::ProBuilder::EditLevel::Texture{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ProBuilder::EditLevel UnityEngine::ProBuilder::EditLevel::Plugin{ static_cast<int32_t>(0x3) };
