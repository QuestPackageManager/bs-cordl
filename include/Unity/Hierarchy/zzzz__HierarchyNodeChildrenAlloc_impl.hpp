#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeChildrenAlloc.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeChildrenAlloc_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
constexpr ::Unity::Hierarchy::HierarchyNode*& Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_get_Ptr() {
  return this->___Ptr;
}
constexpr ::Unity::Hierarchy::HierarchyNode* const& Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_get_Ptr() const {
  return this->___Ptr;
}
constexpr void Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_set_Ptr(::Unity::Hierarchy::HierarchyNode* value) {
  this->___Ptr = value;
}
constexpr int32_t& Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_get_Size() {
  return this->___Size;
}
constexpr int32_t const& Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_get_Size() const {
  return this->___Size;
}
constexpr void Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_set_Size(int32_t value) {
  this->___Size = value;
}
constexpr int32_t& Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_get_Capacity() {
  return this->___Capacity;
}
constexpr int32_t const& Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_get_Capacity() const {
  return this->___Capacity;
}
constexpr void Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_set_Capacity(int32_t value) {
  this->___Capacity = value;
}
constexpr int32_t& Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_get_ControlBit() {
  return this->___ControlBit;
}
constexpr int32_t const& Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_get_ControlBit() const {
  return this->___ControlBit;
}
constexpr void Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_set_ControlBit(int32_t value) {
  this->___ControlBit = value;
}
constexpr int32_t& Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_get_NullCount() {
  return this->___NullCount;
}
constexpr int32_t const& Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_get_NullCount() const {
  return this->___NullCount;
}
constexpr void Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_set_NullCount(int32_t value) {
  this->___NullCount = value;
}
constexpr int32_t& Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_get_Reserved0() {
  return this->___Reserved0;
}
constexpr int32_t const& Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_get_Reserved0() const {
  return this->___Reserved0;
}
constexpr void Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_set_Reserved0(int32_t value) {
  this->___Reserved0 = value;
}
constexpr int32_t& Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_get_Reserved1() {
  return this->___Reserved1;
}
constexpr int32_t const& Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_get_Reserved1() const {
  return this->___Reserved1;
}
constexpr void Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_set_Reserved1(int32_t value) {
  this->___Reserved1 = value;
}
// Ctor Parameters [CppParam { name: "Ptr", ty: "::Unity::Hierarchy::HierarchyNode*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Size", ty: "int32_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ControlBit", ty: "int32_t", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "NullCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved0", ty: "int32_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved1", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Hierarchy::HierarchyNodeChildrenAlloc::HierarchyNodeChildrenAlloc(::Unity::Hierarchy::HierarchyNode* Ptr, int32_t Size, int32_t Capacity, int32_t ControlBit, int32_t NullCount,
                                                                                     int32_t Reserved0, int32_t Reserved1) noexcept {
  this->Ptr = Ptr;
  this->Size = Size;
  this->Capacity = Capacity;
  this->ControlBit = ControlBit;
  this->NullCount = NullCount;
  this->Reserved0 = Reserved0;
  this->Reserved1 = Reserved1;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyNodeChildrenAlloc::HierarchyNodeChildrenAlloc() {}
