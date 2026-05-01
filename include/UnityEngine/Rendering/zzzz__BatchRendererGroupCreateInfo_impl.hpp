#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchRendererGroupCreateInfo.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererGroupCreateInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererGroup_def.hpp"
// Ctor Parameters [CppParam { name: "cullingCallback", ty: "::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "finishedCullingCallback", ty: "::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling*", modifiers: "", def_value: Some("{}") }, CppParam { name: "userContext", ty: "::System::IntPtr",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchRendererGroupCreateInfo::BatchRendererGroupCreateInfo(::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* cullingCallback,
                                                                                               ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling* finishedCullingCallback,
                                                                                               ::System::IntPtr userContext) noexcept {
  this->cullingCallback = cullingCallback;
  this->finishedCullingCallback = finishedCullingCallback;
  this->userContext = userContext;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchRendererGroupCreateInfo::BatchRendererGroupCreateInfo() {}
