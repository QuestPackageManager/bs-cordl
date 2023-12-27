#pragma once
#include "UnityEngine/ProBuilder/zzzz__MeshArrays_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::MeshArrays::MeshArrays(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshArrays::MeshArrays() {}
constexpr ::UnityEngine::ProBuilder::MeshArrays UnityEngine::ProBuilder::MeshArrays::Position{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::MeshArrays UnityEngine::ProBuilder::MeshArrays::Texture0{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ProBuilder::MeshArrays UnityEngine::ProBuilder::MeshArrays::Texture1{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::ProBuilder::MeshArrays UnityEngine::ProBuilder::MeshArrays::Lightmap{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::ProBuilder::MeshArrays UnityEngine::ProBuilder::MeshArrays::Texture2{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::ProBuilder::MeshArrays UnityEngine::ProBuilder::MeshArrays::Texture3{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::ProBuilder::MeshArrays UnityEngine::ProBuilder::MeshArrays::Color{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::ProBuilder::MeshArrays UnityEngine::ProBuilder::MeshArrays::Normal{ static_cast<int32_t>(0x40) };
constexpr ::UnityEngine::ProBuilder::MeshArrays UnityEngine::ProBuilder::MeshArrays::Tangent{ static_cast<int32_t>(0x80) };
constexpr ::UnityEngine::ProBuilder::MeshArrays UnityEngine::ProBuilder::MeshArrays::All{ static_cast<int32_t>(0xff) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
