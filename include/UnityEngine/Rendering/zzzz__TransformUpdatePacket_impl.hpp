#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/TransformUpdatePacket.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TransformUpdatePacket_def.hpp"
// Ctor Parameters [CppParam { name: "localToWorld0", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "localToWorld1", ty: "::Unity::Mathematics::float4",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "localToWorld2", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::TransformUpdatePacket::TransformUpdatePacket(::Unity::Mathematics::float4 localToWorld0, ::Unity::Mathematics::float4 localToWorld1,
                                                                                 ::Unity::Mathematics::float4 localToWorld2) noexcept {
  this->localToWorld0 = localToWorld0;
  this->localToWorld1 = localToWorld1;
  this->localToWorld2 = localToWorld2;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::TransformUpdatePacket::TransformUpdatePacket() {}
