#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShaderInput.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShaderInput_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShaderInput_def.hpp"
// Ctor Parameters [CppParam { name: "worldToShadowMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "shadowParams", ty: "::UnityEngine::Vector4",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ShaderInput_ShadowData::ShaderInput_ShadowData(::UnityEngine::Matrix4x4 worldToShadowMatrix, ::UnityEngine::Vector4 shadowParams) noexcept {
  this->worldToShadowMatrix = worldToShadowMatrix;
  this->shadowParams = shadowParams;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShaderInput_ShadowData::ShaderInput_ShadowData() {}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Vector4", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "attenuation", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "spotDirection", ty: "::UnityEngine::Vector4", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "occlusionProbeChannels", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "layerMask", ty: "uint32_t", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ShaderInput_LightData::ShaderInput_LightData(::UnityEngine::Vector4 position, ::UnityEngine::Vector4 color, ::UnityEngine::Vector4 attenuation,
                                                                                            ::UnityEngine::Vector4 spotDirection, ::UnityEngine::Vector4 occlusionProbeChannels,
                                                                                            uint32_t layerMask) noexcept {
  this->position = position;
  this->color = color;
  this->attenuation = attenuation;
  this->spotDirection = spotDirection;
  this->occlusionProbeChannels = occlusionProbeChannels;
  this->layerMask = layerMask;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShaderInput_LightData::ShaderInput_LightData() {}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShaderInput::ShaderInput() {}
