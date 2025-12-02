#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CoreProfileId.hpp"
#include "UnityEngine/Rendering/zzzz__CoreProfileId_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CoreProfileId::CoreProfileId(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CoreProfileId::CoreProfileId() {}
constexpr ::UnityEngine::Rendering::CoreProfileId UnityEngine::Rendering::CoreProfileId::BlitTextureInPotAtlas{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::CoreProfileId UnityEngine::Rendering::CoreProfileId::APVCellStreamingUpdate{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::CoreProfileId UnityEngine::Rendering::CoreProfileId::APVScenarioBlendingUpdate{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::CoreProfileId UnityEngine::Rendering::CoreProfileId::APVIndexDefragUpdate{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::CoreProfileId UnityEngine::Rendering::CoreProfileId::APVDiskStreamingUpdate{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::CoreProfileId UnityEngine::Rendering::CoreProfileId::APVDiskStreamingUpdatePool{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Rendering::CoreProfileId UnityEngine::Rendering::CoreProfileId::APVSamplingDebug{ static_cast<int32_t>(0x6) };
