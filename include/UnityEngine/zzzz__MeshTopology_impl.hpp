#pragma once
// IWYU pragma private; include "UnityEngine/MeshTopology.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::MeshTopology::MeshTopology(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::MeshTopology::MeshTopology()   {
}
constexpr ::UnityEngine::MeshTopology  UnityEngine::MeshTopology::Triangles{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::MeshTopology  UnityEngine::MeshTopology::Quads{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::MeshTopology  UnityEngine::MeshTopology::Lines{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::MeshTopology  UnityEngine::MeshTopology::LineStrip{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::MeshTopology  UnityEngine::MeshTopology::Points{static_cast<int32_t>(0x5)};
