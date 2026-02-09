#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/Syntax/ExpressionCombinator.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__ExpressionCombinator_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator::ExpressionCombinator(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator::ExpressionCombinator()   {
}
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator  UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator  UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator::Or{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator  UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator::OrOr{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator  UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator::AndAnd{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator  UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator::Juxtaposition{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator  UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator::Group{static_cast<int32_t>(0x5)};
