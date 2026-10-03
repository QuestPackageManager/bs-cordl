#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/ImportResourceParams.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureUVOrigin_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ImportResourceParams_def.hpp"
// Ctor Parameters [CppParam { name: "clearOnFirstUse", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "clearColor", ty: "::UnityEngine::Color", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "discardOnLastUse", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "textureUVOrigin", ty:
// "::UnityEngine::Rendering::RenderGraphModule::TextureUVOrigin", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams::ImportResourceParams(bool clearOnFirstUse, ::UnityEngine::Color clearColor, bool discardOnLastUse,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::TextureUVOrigin textureUVOrigin) noexcept {
  this->clearOnFirstUse = clearOnFirstUse;
  this->clearColor = clearColor;
  this->discardOnLastUse = discardOnLastUse;
  this->textureUVOrigin = textureUVOrigin;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams::ImportResourceParams() {}
