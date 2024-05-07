#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderChainTextEntry.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainTextEntry_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
// Ctor Parameters [CppParam { name: "command", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "firstVertex", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::RenderChainTextEntry::RenderChainTextEntry(::UnityEngine::UIElements::UIR::RenderChainCommand* command, int32_t firstVertex, int32_t vertexCount) noexcept {
  this->command = command;
  this->firstVertex = firstVertex;
  this->vertexCount = vertexCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderChainTextEntry::RenderChainTextEntry() {}
