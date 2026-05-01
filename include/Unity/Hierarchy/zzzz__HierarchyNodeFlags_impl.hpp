#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeFlags.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyNodeFlags::HierarchyNodeFlags(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyNodeFlags::HierarchyNodeFlags() {}
constexpr ::Unity::Hierarchy::HierarchyNodeFlags Unity::Hierarchy::HierarchyNodeFlags::None{ static_cast<uint32_t>(0x0u) };
constexpr ::Unity::Hierarchy::HierarchyNodeFlags Unity::Hierarchy::HierarchyNodeFlags::Expanded{ static_cast<uint32_t>(0x1u) };
constexpr ::Unity::Hierarchy::HierarchyNodeFlags Unity::Hierarchy::HierarchyNodeFlags::Selected{ static_cast<uint32_t>(0x2u) };
constexpr ::Unity::Hierarchy::HierarchyNodeFlags Unity::Hierarchy::HierarchyNodeFlags::Cut{ static_cast<uint32_t>(0x4u) };
constexpr ::Unity::Hierarchy::HierarchyNodeFlags Unity::Hierarchy::HierarchyNodeFlags::Hidden{ static_cast<uint32_t>(0x8u) };
