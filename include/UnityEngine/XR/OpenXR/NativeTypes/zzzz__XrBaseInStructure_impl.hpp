#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrBaseInStructure.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrBaseInStructure_def.hpp"
// Ctor Parameters [CppParam { name: "Type", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Next", ty: "void*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrBaseInStructure::XrBaseInStructure(uint32_t Type, void* Next) noexcept {
  this->Type = Type;
  this->Next = Next;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrBaseInStructure::XrBaseInStructure() {}
