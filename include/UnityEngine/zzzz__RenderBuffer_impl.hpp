#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__RenderBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "m_RenderTextureInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BufferPtr", ty: "void*", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::RenderBuffer::RenderBuffer(int32_t m_RenderTextureInstanceID, void* m_BufferPtr) noexcept {
  this->m_RenderTextureInstanceID = m_RenderTextureInstanceID;
  this->m_BufferPtr = m_BufferPtr;
}
// Ctor Parameters []
constexpr ::UnityEngine::RenderBuffer::RenderBuffer() {}
