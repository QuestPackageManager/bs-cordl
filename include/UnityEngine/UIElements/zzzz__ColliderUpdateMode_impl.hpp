#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ColliderUpdateMode.hpp"
#include "UnityEngine/UIElements/zzzz__ColliderUpdateMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::ColliderUpdateMode::ColliderUpdateMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ColliderUpdateMode::ColliderUpdateMode() {}
constexpr ::UnityEngine::UIElements::ColliderUpdateMode UnityEngine::UIElements::ColliderUpdateMode::MatchBoundingBox{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::ColliderUpdateMode UnityEngine::UIElements::ColliderUpdateMode::Keep{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::ColliderUpdateMode UnityEngine::UIElements::ColliderUpdateMode::MatchDocumentRect{ static_cast<int32_t>(0x2) };
