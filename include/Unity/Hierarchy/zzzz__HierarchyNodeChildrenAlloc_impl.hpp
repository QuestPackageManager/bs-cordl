#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeChildrenAlloc.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeChildrenAlloc_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeChildrenAlloc_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer::HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer(int32_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer::HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer() {}
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
constexpr int32_t& Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_get_RemovedCount() {
  return this->___RemovedCount;
}
constexpr int32_t const& Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_get_RemovedCount() const {
  return this->___RemovedCount;
}
constexpr void Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_set_RemovedCount(int32_t value) {
  this->___RemovedCount = value;
}
constexpr ::Unity::Hierarchy::HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer& Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_get_Reserved() {
  return this->___Reserved;
}
constexpr ::Unity::Hierarchy::HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer const& Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_get_Reserved() const {
  return this->___Reserved;
}
constexpr void Unity::Hierarchy::HierarchyNodeChildrenAlloc::__cordl_internal_set_Reserved(::Unity::Hierarchy::HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer value) {
  this->___Reserved = value;
}
// Ctor Parameters [CppParam { name: "Ptr", ty: "::Unity::Hierarchy::HierarchyNode*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Size", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "RemovedCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "Reserved", ty: "::Unity::Hierarchy::HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyNodeChildrenAlloc::HierarchyNodeChildrenAlloc(::Unity::Hierarchy::HierarchyNode* Ptr, int32_t Size, int32_t Capacity, int32_t RemovedCount,
                                                                                     ::Unity::Hierarchy::HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer Reserved) noexcept {
  this->Ptr = Ptr;
  this->Size = Size;
  this->Capacity = Capacity;
  this->RemovedCount = RemovedCount;
  this->Reserved = Reserved;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyNodeChildrenAlloc::HierarchyNodeChildrenAlloc() {}
