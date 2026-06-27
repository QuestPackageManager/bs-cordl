#pragma once
// IWYU pragma private; include "UnityEngine/RenderingPath.hpp"
#include "UnityEngine/zzzz__RenderingPath_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RenderingPath::RenderingPath(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::RenderingPath::RenderingPath()   {
}
constexpr ::UnityEngine::RenderingPath  UnityEngine::RenderingPath::UsePlayerSettings{static_cast<int32_t>(0xffffffff)};
constexpr ::UnityEngine::RenderingPath  UnityEngine::RenderingPath::VertexLit{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::RenderingPath  UnityEngine::RenderingPath::Forward{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::RenderingPath  UnityEngine::RenderingPath::DeferredLighting{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::RenderingPath  UnityEngine::RenderingPath::DeferredShading{static_cast<int32_t>(0x3)};
