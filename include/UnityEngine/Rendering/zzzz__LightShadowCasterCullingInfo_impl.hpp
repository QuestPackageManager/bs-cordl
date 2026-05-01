#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LightShadowCasterCullingInfo.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingProjectionType_impl.hpp"
#include "UnityEngine/zzzz__RangeInt_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LightShadowCasterCullingInfo_def.hpp"
// Ctor Parameters [CppParam { name: "splitRange", ty: "::UnityEngine::RangeInt", modifiers: "", def_value: Some("{}") }, CppParam { name: "projectionType", ty:
// "::UnityEngine::Rendering::BatchCullingProjectionType", modifiers: "", def_value: Some("{}") }, CppParam { name: "splitExclusionMask", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::LightShadowCasterCullingInfo::LightShadowCasterCullingInfo(::UnityEngine::RangeInt splitRange, ::UnityEngine::Rendering::BatchCullingProjectionType projectionType,
                                                                                               uint16_t splitExclusionMask) noexcept {
  this->splitRange = splitRange;
  this->projectionType = projectionType;
  this->splitExclusionMask = splitExclusionMask;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LightShadowCasterCullingInfo::LightShadowCasterCullingInfo() {}
