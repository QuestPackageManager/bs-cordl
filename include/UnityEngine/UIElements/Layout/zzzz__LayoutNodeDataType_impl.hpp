#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutNodeDataType.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNodeDataType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutNodeDataType::LayoutNodeDataType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutNodeDataType::LayoutNodeDataType() {}
constexpr ::UnityEngine::UIElements::Layout::LayoutNodeDataType UnityEngine::UIElements::Layout::LayoutNodeDataType::Node{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::Layout::LayoutNodeDataType UnityEngine::UIElements::Layout::LayoutNodeDataType::Style{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::Layout::LayoutNodeDataType UnityEngine::UIElements::Layout::LayoutNodeDataType::Computed{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::Layout::LayoutNodeDataType UnityEngine::UIElements::Layout::LayoutNodeDataType::Cache{ static_cast<int32_t>(0x3) };
