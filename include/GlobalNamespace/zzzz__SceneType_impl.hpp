#pragma once
#include "GlobalNamespace/zzzz__SceneType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SceneType::SceneType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SceneType::SceneType() {}
constexpr ::GlobalNamespace::SceneType GlobalNamespace::SceneType::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::SceneType GlobalNamespace::SceneType::Menu{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::SceneType GlobalNamespace::SceneType::Game{ static_cast<int32_t>(0x2) };
