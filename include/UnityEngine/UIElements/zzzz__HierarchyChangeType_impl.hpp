#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/HierarchyChangeType.hpp"
#include "UnityEngine/UIElements/zzzz__HierarchyChangeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::HierarchyChangeType::HierarchyChangeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::HierarchyChangeType::HierarchyChangeType() {}
constexpr ::UnityEngine::UIElements::HierarchyChangeType UnityEngine::UIElements::HierarchyChangeType::AddedToParent{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::HierarchyChangeType UnityEngine::UIElements::HierarchyChangeType::RemovedFromParent{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::HierarchyChangeType UnityEngine::UIElements::HierarchyChangeType::ChildrenReordered{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::HierarchyChangeType UnityEngine::UIElements::HierarchyChangeType::AttachedToPanel{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UIElements::HierarchyChangeType UnityEngine::UIElements::HierarchyChangeType::DetachedFromPanel{ static_cast<int32_t>(0x4) };
