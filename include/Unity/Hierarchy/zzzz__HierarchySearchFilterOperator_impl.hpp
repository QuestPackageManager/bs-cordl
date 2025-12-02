#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchySearchFilterOperator.hpp"
#include "Unity/Hierarchy/zzzz__HierarchySearchFilterOperator_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchySearchFilterOperator::HierarchySearchFilterOperator(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchySearchFilterOperator::HierarchySearchFilterOperator() {}
constexpr ::Unity::Hierarchy::HierarchySearchFilterOperator Unity::Hierarchy::HierarchySearchFilterOperator::Equal{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Hierarchy::HierarchySearchFilterOperator Unity::Hierarchy::HierarchySearchFilterOperator::Contains{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Hierarchy::HierarchySearchFilterOperator Unity::Hierarchy::HierarchySearchFilterOperator::Greater{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Hierarchy::HierarchySearchFilterOperator Unity::Hierarchy::HierarchySearchFilterOperator::GreaterOrEqual{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Hierarchy::HierarchySearchFilterOperator Unity::Hierarchy::HierarchySearchFilterOperator::Lesser{ static_cast<int32_t>(0x4) };
constexpr ::Unity::Hierarchy::HierarchySearchFilterOperator Unity::Hierarchy::HierarchySearchFilterOperator::LesserOrEqual{ static_cast<int32_t>(0x5) };
constexpr ::Unity::Hierarchy::HierarchySearchFilterOperator Unity::Hierarchy::HierarchySearchFilterOperator::NotEqual{ static_cast<int32_t>(0x6) };
constexpr ::Unity::Hierarchy::HierarchySearchFilterOperator Unity::Hierarchy::HierarchySearchFilterOperator::Not{ static_cast<int32_t>(0x7) };
