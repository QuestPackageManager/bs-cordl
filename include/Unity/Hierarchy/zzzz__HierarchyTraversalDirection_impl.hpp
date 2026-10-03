#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyTraversalDirection.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyTraversalDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Hierarchy::HierarchyTraversalDirection::HierarchyTraversalDirection(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyTraversalDirection::HierarchyTraversalDirection() {}
constexpr ::Unity::Hierarchy::HierarchyTraversalDirection Unity::Hierarchy::HierarchyTraversalDirection::Parents{ static_cast<uint32_t>(0x0u) };
constexpr ::Unity::Hierarchy::HierarchyTraversalDirection Unity::Hierarchy::HierarchyTraversalDirection::Children{ static_cast<uint32_t>(0x1u) };
