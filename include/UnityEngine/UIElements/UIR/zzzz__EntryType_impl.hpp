#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/EntryType.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::EntryType::EntryType(uint16_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::EntryType::EntryType() {}
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::DrawSolidMesh{ static_cast<uint16_t>(0x0u) };
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::DrawTexturedMesh{ static_cast<uint16_t>(0x1u) };
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::DrawTexturedMeshSkipAtlas{ static_cast<uint16_t>(0x2u) };
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::DrawTextMesh{ static_cast<uint16_t>(0x3u) };
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::DrawGradients{ static_cast<uint16_t>(0x4u) };
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::DrawImmediate{ static_cast<uint16_t>(0x5u) };
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::DrawImmediateCull{ static_cast<uint16_t>(0x6u) };
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::DrawChildren{ static_cast<uint16_t>(0x7u) };
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::BeginStencilMask{ static_cast<uint16_t>(0x8u) };
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::EndStencilMask{ static_cast<uint16_t>(0x9u) };
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::PopStencilMask{ static_cast<uint16_t>(0xau) };
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::PushClippingRect{ static_cast<uint16_t>(0xbu) };
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::PopClippingRect{ static_cast<uint16_t>(0xcu) };
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::PushScissors{ static_cast<uint16_t>(0xdu) };
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::PopScissors{ static_cast<uint16_t>(0xeu) };
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::PushGroupMatrix{ static_cast<uint16_t>(0xfu) };
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::PopGroupMatrix{ static_cast<uint16_t>(0x10u) };
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::PushRenderTexture{ static_cast<uint16_t>(0x11u) };
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::BlitAndPopRenderTexture{ static_cast<uint16_t>(0x12u) };
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::PushDefaultMaterial{ static_cast<uint16_t>(0x13u) };
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::PopDefaultMaterial{ static_cast<uint16_t>(0x14u) };
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::CutRenderChain{ static_cast<uint16_t>(0x15u) };
constexpr ::UnityEngine::UIElements::UIR::EntryType UnityEngine::UIElements::UIR::EntryType::DedicatedPlaceholder{ static_cast<uint16_t>(0x16u) };
