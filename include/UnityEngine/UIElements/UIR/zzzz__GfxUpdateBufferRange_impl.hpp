#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/GfxUpdateBufferRange.hpp"
#include "System/zzzz__UIntPtr_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GfxUpdateBufferRange_def.hpp"
// Ctor Parameters [CppParam { name: "offsetFromWriteStart", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "source", ty: "::System::UIntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::GfxUpdateBufferRange::GfxUpdateBufferRange(uint32_t  offsetFromWriteStart, uint32_t  size, ::System::UIntPtr  source) noexcept  {
this->offsetFromWriteStart = offsetFromWriteStart;
this->size = size;
this->source = source;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::GfxUpdateBufferRange::GfxUpdateBufferRange()   {
}
