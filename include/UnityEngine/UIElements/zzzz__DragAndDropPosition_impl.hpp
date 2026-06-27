#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DragAndDropPosition.hpp"
#include "UnityEngine/UIElements/zzzz__DragAndDropPosition_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::DragAndDropPosition::DragAndDropPosition(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DragAndDropPosition::DragAndDropPosition()   {
}
constexpr ::UnityEngine::UIElements::DragAndDropPosition  UnityEngine::UIElements::DragAndDropPosition::OverItem{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::DragAndDropPosition  UnityEngine::UIElements::DragAndDropPosition::BetweenItems{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::DragAndDropPosition  UnityEngine::UIElements::DragAndDropPosition::OutsideItems{static_cast<int32_t>(0x2)};
