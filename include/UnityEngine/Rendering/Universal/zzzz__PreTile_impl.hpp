#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PreTile.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PreTile_def.hpp"
// Ctor Parameters [CppParam { name: "planeLeft", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "planeRight", ty: "::Unity::Mathematics::float4",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "planeBottom", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "planeTop", ty:
// "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::PreTile::PreTile(::Unity::Mathematics::float4 planeLeft, ::Unity::Mathematics::float4 planeRight, ::Unity::Mathematics::float4 planeBottom,
                                                                ::Unity::Mathematics::float4 planeTop) noexcept {
  this->planeLeft = planeLeft;
  this->planeRight = planeRight;
  this->planeBottom = planeBottom;
  this->planeTop = planeTop;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PreTile::PreTile() {}
