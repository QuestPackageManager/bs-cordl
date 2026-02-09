#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CameraEvent.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CameraEvent::CameraEvent(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CameraEvent::CameraEvent()   {
}
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeDepthTexture{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterDepthTexture{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeDepthNormalsTexture{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterDepthNormalsTexture{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeGBuffer{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterGBuffer{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeLighting{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterLighting{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeFinalPass{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterFinalPass{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeForwardOpaque{static_cast<int32_t>(0xa)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterForwardOpaque{static_cast<int32_t>(0xb)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeImageEffectsOpaque{static_cast<int32_t>(0xc)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterImageEffectsOpaque{static_cast<int32_t>(0xd)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeSkybox{static_cast<int32_t>(0xe)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterSkybox{static_cast<int32_t>(0xf)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeForwardAlpha{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterForwardAlpha{static_cast<int32_t>(0x11)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeImageEffects{static_cast<int32_t>(0x12)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterImageEffects{static_cast<int32_t>(0x13)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterEverything{static_cast<int32_t>(0x14)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeReflections{static_cast<int32_t>(0x15)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterReflections{static_cast<int32_t>(0x16)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::BeforeHaloAndLensFlares{static_cast<int32_t>(0x17)};
constexpr ::UnityEngine::Rendering::CameraEvent  UnityEngine::Rendering::CameraEvent::AfterHaloAndLensFlares{static_cast<int32_t>(0x18)};
