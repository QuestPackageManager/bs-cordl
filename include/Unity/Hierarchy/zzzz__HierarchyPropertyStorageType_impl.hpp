#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyPropertyStorageType.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyPropertyStorageType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyPropertyStorageType::HierarchyPropertyStorageType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyPropertyStorageType::HierarchyPropertyStorageType() {}
constexpr ::Unity::Hierarchy::HierarchyPropertyStorageType Unity::Hierarchy::HierarchyPropertyStorageType::Sparse{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Hierarchy::HierarchyPropertyStorageType Unity::Hierarchy::HierarchyPropertyStorageType::Dense{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Hierarchy::HierarchyPropertyStorageType Unity::Hierarchy::HierarchyPropertyStorageType::Blob{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Hierarchy::HierarchyPropertyStorageType Unity::Hierarchy::HierarchyPropertyStorageType::Default{ static_cast<int32_t>(0x1) };
