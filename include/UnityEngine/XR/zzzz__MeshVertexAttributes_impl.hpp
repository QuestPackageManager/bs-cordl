#pragma once
// IWYU pragma private; include "UnityEngine/XR/MeshVertexAttributes.hpp"
#include "UnityEngine/XR/zzzz__MeshVertexAttributes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::MeshVertexAttributes::MeshVertexAttributes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::MeshVertexAttributes::MeshVertexAttributes()   {
}
constexpr ::UnityEngine::XR::MeshVertexAttributes  UnityEngine::XR::MeshVertexAttributes::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::XR::MeshVertexAttributes  UnityEngine::XR::MeshVertexAttributes::Normals{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::XR::MeshVertexAttributes  UnityEngine::XR::MeshVertexAttributes::Tangents{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::XR::MeshVertexAttributes  UnityEngine::XR::MeshVertexAttributes::UVs{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::XR::MeshVertexAttributes  UnityEngine::XR::MeshVertexAttributes::Colors{static_cast<int32_t>(0x8)};
