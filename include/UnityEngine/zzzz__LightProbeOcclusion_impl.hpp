#pragma once
// IWYU pragma private; include "UnityEngine/LightProbeOcclusion.hpp"
#include "UnityEngine/zzzz__LightProbeOcclusion_def.hpp"
#include "UnityEngine/zzzz__LightProbeOcclusion_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LightProbeOcclusion__m_Occlusion_e__FixedBuffer::LightProbeOcclusion__m_Occlusion_e__FixedBuffer(float_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::LightProbeOcclusion__m_Occlusion_e__FixedBuffer::LightProbeOcclusion__m_Occlusion_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LightProbeOcclusion__m_OcclusionMaskChannel_e__FixedBuffer::LightProbeOcclusion__m_OcclusionMaskChannel_e__FixedBuffer(int8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::LightProbeOcclusion__m_OcclusionMaskChannel_e__FixedBuffer::LightProbeOcclusion__m_OcclusionMaskChannel_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LightProbeOcclusion__m_ProbeOcclusionLightIndex_e__FixedBuffer::LightProbeOcclusion__m_ProbeOcclusionLightIndex_e__FixedBuffer(int32_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::LightProbeOcclusion__m_ProbeOcclusionLightIndex_e__FixedBuffer::LightProbeOcclusion__m_ProbeOcclusionLightIndex_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "m_ProbeOcclusionLightIndex", ty: "::UnityEngine::LightProbeOcclusion__m_ProbeOcclusionLightIndex_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "m_Occlusion", ty: "::UnityEngine::LightProbeOcclusion__m_Occlusion_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "m_OcclusionMaskChannel", ty: "::UnityEngine::LightProbeOcclusion__m_OcclusionMaskChannel_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LightProbeOcclusion::LightProbeOcclusion(::UnityEngine::LightProbeOcclusion__m_ProbeOcclusionLightIndex_e__FixedBuffer m_ProbeOcclusionLightIndex,
                                                                  ::UnityEngine::LightProbeOcclusion__m_Occlusion_e__FixedBuffer m_Occlusion,
                                                                  ::UnityEngine::LightProbeOcclusion__m_OcclusionMaskChannel_e__FixedBuffer m_OcclusionMaskChannel) noexcept {
  this->m_ProbeOcclusionLightIndex = m_ProbeOcclusionLightIndex;
  this->m_Occlusion = m_Occlusion;
  this->m_OcclusionMaskChannel = m_OcclusionMaskChannel;
}
// Ctor Parameters []
constexpr ::UnityEngine::LightProbeOcclusion::LightProbeOcclusion() {}
