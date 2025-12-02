#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/ImportResourceParams.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ImportResourceParams_def.hpp"
// Ctor Parameters [CppParam { name: "clearOnFirstUse", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "clearColor", ty: "::UnityEngine::Color", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "discardOnLastUse", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams::ImportResourceParams(bool clearOnFirstUse, ::UnityEngine::Color clearColor, bool discardOnLastUse) noexcept {
  this->clearOnFirstUse = clearOnFirstUse;
  this->clearColor = clearColor;
  this->discardOnLastUse = discardOnLastUse;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams::ImportResourceParams() {}
