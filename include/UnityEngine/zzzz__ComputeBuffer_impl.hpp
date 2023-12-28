#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
constexpr void*& UnityEngine::ComputeBuffer::__get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void* const& UnityEngine::ComputeBuffer::__get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::ComputeBuffer::__set_m_Ptr(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
// Ctor Parameters []
constexpr ::UnityEngine::ComputeBuffer::ComputeBuffer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
