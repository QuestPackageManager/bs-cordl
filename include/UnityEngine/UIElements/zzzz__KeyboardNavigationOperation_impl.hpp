#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/KeyboardNavigationOperation.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationOperation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation::KeyboardNavigationOperation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation::KeyboardNavigationOperation()   {
}
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  UnityEngine::UIElements::KeyboardNavigationOperation::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  UnityEngine::UIElements::KeyboardNavigationOperation::SelectAll{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  UnityEngine::UIElements::KeyboardNavigationOperation::Cancel{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  UnityEngine::UIElements::KeyboardNavigationOperation::Submit{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  UnityEngine::UIElements::KeyboardNavigationOperation::Previous{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  UnityEngine::UIElements::KeyboardNavigationOperation::Next{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  UnityEngine::UIElements::KeyboardNavigationOperation::MoveRight{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  UnityEngine::UIElements::KeyboardNavigationOperation::MoveLeft{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  UnityEngine::UIElements::KeyboardNavigationOperation::PageUp{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  UnityEngine::UIElements::KeyboardNavigationOperation::PageDown{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  UnityEngine::UIElements::KeyboardNavigationOperation::Begin{static_cast<int32_t>(0xa)};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  UnityEngine::UIElements::KeyboardNavigationOperation::End{static_cast<int32_t>(0xb)};
