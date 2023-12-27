#pragma once
#include "UnityEngine/UIElements/zzzz__HierarchyChangeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::HierarchyChangeType::HierarchyChangeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::HierarchyChangeType::HierarchyChangeType() {}
constexpr ::UnityEngine::UIElements::HierarchyChangeType UnityEngine::UIElements::HierarchyChangeType::Add{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::HierarchyChangeType UnityEngine::UIElements::HierarchyChangeType::Remove{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::HierarchyChangeType UnityEngine::UIElements::HierarchyChangeType::Move{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
