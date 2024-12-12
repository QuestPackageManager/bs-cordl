#pragma once
// IWYU pragma private; include "UnityEngine/GraphicsBuffer.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::GraphicsBuffer_Target::GraphicsBuffer_Target(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::GraphicsBuffer_Target::GraphicsBuffer_Target() {}
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::GraphicsBuffer_Target::Vertex{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::GraphicsBuffer_Target::Index{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::GraphicsBuffer_Target::CopySource{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::GraphicsBuffer_Target::CopyDestination{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::GraphicsBuffer_Target::Structured{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::GraphicsBuffer_Target::Raw{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::GraphicsBuffer_Target::Append{ static_cast<int32_t>(0x40) };
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::GraphicsBuffer_Target::Counter{ static_cast<int32_t>(0x80) };
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::GraphicsBuffer_Target::IndirectArguments{ static_cast<int32_t>(0x100) };
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::GraphicsBuffer_Target::Constant{ static_cast<int32_t>(0x200) };
constexpr ::System::IntPtr& UnityEngine::GraphicsBuffer::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::GraphicsBuffer::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::GraphicsBuffer::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
// Ctor Parameters []
constexpr ::UnityEngine::GraphicsBuffer::GraphicsBuffer() {}
