#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UntypedUnsafeList.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UntypedUnsafeList_def.hpp"
// Ctor Parameters [CppParam { name: "Ptr", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_capacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "padding", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList::UntypedUnsafeList(void* Ptr, int32_t m_length, int32_t m_capacity,
                                                                                       ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator, int32_t padding) noexcept {
  this->Ptr = Ptr;
  this->m_length = m_length;
  this->m_capacity = m_capacity;
  this->Allocator = Allocator;
  this->padding = padding;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList::UntypedUnsafeList() {}
