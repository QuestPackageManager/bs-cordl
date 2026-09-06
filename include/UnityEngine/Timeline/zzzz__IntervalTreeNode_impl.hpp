#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/IntervalTreeNode.hpp"
#include "UnityEngine/Timeline/zzzz__IntervalTreeNode_def.hpp"
// Ctor Parameters [CppParam { name: "center", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "first", ty: "int32_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "last", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "left", ty: "int32_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "right", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Timeline::IntervalTreeNode::IntervalTreeNode(int64_t center, int32_t first, int32_t last, int32_t left, int32_t right) noexcept {
  this->center = center;
  this->first = first;
  this->last = last;
  this->left = left;
  this->right = right;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::IntervalTreeNode::IntervalTreeNode() {}
