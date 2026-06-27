#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VectorImageVertex.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImageVertex_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "tint", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "settingIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "circle", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::VectorImageVertex::VectorImageVertex(::UnityEngine::Vector3  position, ::UnityEngine::Color32  tint, ::UnityEngine::Vector2  uv, uint32_t  settingIndex, ::UnityEngine::Color32  flags, ::UnityEngine::Vector4  circle) noexcept  {
this->position = position;
this->tint = tint;
this->uv = uv;
this->settingIndex = settingIndex;
this->flags = flags;
this->circle = circle;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VectorImageVertex::VectorImageVertex()   {
}
