#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSelectorRelationship.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorRelationship_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSelectorRelationship::StyleSelectorRelationship(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSelectorRelationship::StyleSelectorRelationship()   {
}
constexpr ::UnityEngine::UIElements::StyleSelectorRelationship  UnityEngine::UIElements::StyleSelectorRelationship::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::StyleSelectorRelationship  UnityEngine::UIElements::StyleSelectorRelationship::Child{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::StyleSelectorRelationship  UnityEngine::UIElements::StyleSelectorRelationship::Descendent{static_cast<int32_t>(0x2)};
