#pragma once
#include "UnityEngine/Rendering/zzzz__RenderTextureSubElement_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderTextureSubElement::RenderTextureSubElement(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderTextureSubElement::RenderTextureSubElement() {}
constexpr ::UnityEngine::Rendering::RenderTextureSubElement UnityEngine::Rendering::RenderTextureSubElement::Color{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RenderTextureSubElement UnityEngine::Rendering::RenderTextureSubElement::Depth{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::RenderTextureSubElement UnityEngine::Rendering::RenderTextureSubElement::Stencil{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::RenderTextureSubElement UnityEngine::Rendering::RenderTextureSubElement::Default{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
