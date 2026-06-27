#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSelectorType.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSelectorType::StyleSelectorType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSelectorType::StyleSelectorType()   {
}
constexpr ::UnityEngine::UIElements::StyleSelectorType  UnityEngine::UIElements::StyleSelectorType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::StyleSelectorType  UnityEngine::UIElements::StyleSelectorType::Wildcard{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::StyleSelectorType  UnityEngine::UIElements::StyleSelectorType::Type{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::StyleSelectorType  UnityEngine::UIElements::StyleSelectorType::Class{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::UIElements::StyleSelectorType  UnityEngine::UIElements::StyleSelectorType::PseudoClass{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UIElements::StyleSelectorType  UnityEngine::UIElements::StyleSelectorType::RecursivePseudoClass{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::UIElements::StyleSelectorType  UnityEngine::UIElements::StyleSelectorType::_cordl_ID{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::UIElements::StyleSelectorType  UnityEngine::UIElements::StyleSelectorType::Predicate{static_cast<int32_t>(0x7)};
