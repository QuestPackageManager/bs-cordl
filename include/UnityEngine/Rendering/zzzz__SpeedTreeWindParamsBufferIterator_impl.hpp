#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SpeedTreeWindParamsBufferIterator.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SpeedTreeWindParamsBufferIterator_def.hpp"
#include "UnityEngine/Rendering/zzzz__SpeedTreeWindParamsBufferIterator_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator__uintParamOffsets_e__FixedBuffer::SpeedTreeWindParamsBufferIterator__uintParamOffsets_e__FixedBuffer(
    int32_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator__uintParamOffsets_e__FixedBuffer::SpeedTreeWindParamsBufferIterator__uintParamOffsets_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "bufferPtr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "uintParamOffsets", ty:
// "::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator__uintParamOffsets_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "uintStride", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "elementOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "elementsCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator::SpeedTreeWindParamsBufferIterator(
    ::System::IntPtr bufferPtr, ::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator__uintParamOffsets_e__FixedBuffer uintParamOffsets, int32_t uintStride, int32_t elementOffset,
    int32_t elementsCount) noexcept {
  this->bufferPtr = bufferPtr;
  this->uintParamOffsets = uintParamOffsets;
  this->uintStride = uintStride;
  this->elementOffset = elementOffset;
  this->elementsCount = elementsCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator::SpeedTreeWindParamsBufferIterator() {}
