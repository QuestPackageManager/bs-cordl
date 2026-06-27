#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/MatchResultErrorCode.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__MatchResultErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode::MatchResultErrorCode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode::MatchResultErrorCode()   {
}
constexpr ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode  UnityEngine::UIElements::StyleSheets::MatchResultErrorCode::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode  UnityEngine::UIElements::StyleSheets::MatchResultErrorCode::Syntax{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode  UnityEngine::UIElements::StyleSheets::MatchResultErrorCode::EmptyValue{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode  UnityEngine::UIElements::StyleSheets::MatchResultErrorCode::ExpectedEndOfValue{static_cast<int32_t>(0x3)};
