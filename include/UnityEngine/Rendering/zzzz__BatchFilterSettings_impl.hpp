#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchFilterSettings.hpp"
#include "UnityEngine/Rendering/zzzz__BatchFilterSettings_def.hpp"
// Ctor Parameters [CppParam { name: "renderingLayerMask", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "layer", ty: "uint8_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_motionMode", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_shadowMode", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_receiveShadows", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_staticShadowCaster", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_allDepthSorted", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchFilterSettings::BatchFilterSettings(uint32_t renderingLayerMask, uint8_t layer, uint8_t m_motionMode, uint8_t m_shadowMode, uint8_t m_receiveShadows,
                                                                             uint8_t m_staticShadowCaster, uint8_t m_allDepthSorted) noexcept {
  this->renderingLayerMask = renderingLayerMask;
  this->layer = layer;
  this->m_motionMode = m_motionMode;
  this->m_shadowMode = m_shadowMode;
  this->m_receiveShadows = m_receiveShadows;
  this->m_staticShadowCaster = m_staticShadowCaster;
  this->m_allDepthSorted = m_allDepthSorted;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchFilterSettings::BatchFilterSettings() {}
