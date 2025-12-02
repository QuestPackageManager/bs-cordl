#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PunctualLightData.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PunctualLightData_def.hpp"
// Ctor Parameters [CppParam { name: "wsPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "color", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "attenuation", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") },
// CppParam { name: "spotDirection", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "occlusionProbeInfo", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "layerMask", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::PunctualLightData::PunctualLightData(::UnityEngine::Vector3 wsPos, float_t radius, ::UnityEngine::Vector4 color, ::UnityEngine::Vector4 attenuation,
                                                                                    ::UnityEngine::Vector3 spotDirection, int32_t flags, ::UnityEngine::Vector4 occlusionProbeInfo,
                                                                                    uint32_t layerMask) noexcept {
  this->wsPos = wsPos;
  this->radius = radius;
  this->color = color;
  this->attenuation = attenuation;
  this->spotDirection = spotDirection;
  this->flags = flags;
  this->occlusionProbeInfo = occlusionProbeInfo;
  this->layerMask = layerMask;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PunctualLightData::PunctualLightData() {}
