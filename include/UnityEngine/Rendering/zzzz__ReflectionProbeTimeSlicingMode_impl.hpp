#pragma once
#include "UnityEngine/Rendering/zzzz__ReflectionProbeTimeSlicingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode::ReflectionProbeTimeSlicingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode::ReflectionProbeTimeSlicingMode() {}
constexpr ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode UnityEngine::Rendering::ReflectionProbeTimeSlicingMode::AllFacesAtOnce{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode UnityEngine::Rendering::ReflectionProbeTimeSlicingMode::IndividualFaces{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode UnityEngine::Rendering::ReflectionProbeTimeSlicingMode::NoTimeSlicing{ static_cast<int32_t>(0x2) };
