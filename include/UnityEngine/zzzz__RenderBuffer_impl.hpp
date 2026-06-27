#pragma once
// IWYU pragma private; include "UnityEngine/RenderBuffer.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__RenderBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "m_RenderTextureInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BufferPtr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RenderBuffer::RenderBuffer(int32_t  m_RenderTextureInstanceID, ::System::IntPtr  m_BufferPtr) noexcept  {
this->m_RenderTextureInstanceID = m_RenderTextureInstanceID;
this->m_BufferPtr = m_BufferPtr;
}
// Ctor Parameters []
constexpr ::UnityEngine::RenderBuffer::RenderBuffer()   {
}
