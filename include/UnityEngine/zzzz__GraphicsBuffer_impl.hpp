#pragma once
// IWYU pragma private; include "UnityEngine/GraphicsBuffer.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__GraphicsBuffer__Target::__GraphicsBuffer__Target(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::__GraphicsBuffer__Target::__GraphicsBuffer__Target() {}
constexpr ::UnityEngine::__GraphicsBuffer__Target UnityEngine::__GraphicsBuffer__Target::Vertex{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::__GraphicsBuffer__Target UnityEngine::__GraphicsBuffer__Target::Index{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::__GraphicsBuffer__Target UnityEngine::__GraphicsBuffer__Target::CopySource{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::__GraphicsBuffer__Target UnityEngine::__GraphicsBuffer__Target::CopyDestination{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::__GraphicsBuffer__Target UnityEngine::__GraphicsBuffer__Target::Structured{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::__GraphicsBuffer__Target UnityEngine::__GraphicsBuffer__Target::Raw{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::__GraphicsBuffer__Target UnityEngine::__GraphicsBuffer__Target::Append{ static_cast<int32_t>(0x40) };
constexpr ::UnityEngine::__GraphicsBuffer__Target UnityEngine::__GraphicsBuffer__Target::Counter{ static_cast<int32_t>(0x80) };
constexpr ::UnityEngine::__GraphicsBuffer__Target UnityEngine::__GraphicsBuffer__Target::IndirectArguments{ static_cast<int32_t>(0x100) };
constexpr ::UnityEngine::__GraphicsBuffer__Target UnityEngine::__GraphicsBuffer__Target::Constant{ static_cast<int32_t>(0x200) };
constexpr void*& UnityEngine::GraphicsBuffer::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void* const& UnityEngine::GraphicsBuffer::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::GraphicsBuffer::__cordl_internal_set_m_Ptr(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
// Ctor Parameters []
constexpr ::UnityEngine::GraphicsBuffer::GraphicsBuffer() {}
