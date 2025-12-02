#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShadowCastersCullingInfos.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LightShadowCasterCullingInfo_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowSplitData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowCastersCullingInfos_def.hpp"
// Ctor Parameters [CppParam { name: "splitBuffer", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ShadowSplitData>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "perLightInfos", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::LightShadowCasterCullingInfo>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ShadowCastersCullingInfos::ShadowCastersCullingInfos(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ShadowSplitData> splitBuffer,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::LightShadowCasterCullingInfo> perLightInfos) noexcept {
  this->splitBuffer = splitBuffer;
  this->perLightInfos = perLightInfos;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShadowCastersCullingInfos::ShadowCastersCullingInfos() {}
