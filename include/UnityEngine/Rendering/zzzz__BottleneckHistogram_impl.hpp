#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BottleneckHistogram.hpp"
#include "UnityEngine/Rendering/zzzz__BottleneckHistogram_def.hpp"
// Ctor Parameters [CppParam { name: "PresentLimited", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "CPU", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "GPU", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Balanced", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BottleneckHistogram::BottleneckHistogram(float_t PresentLimited, float_t CPU, float_t GPU, float_t Balanced) noexcept {
  this->PresentLimited = PresentLimited;
  this->CPU = CPU;
  this->GPU = GPU;
  this->Balanced = Balanced;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BottleneckHistogram::BottleneckHistogram() {}
