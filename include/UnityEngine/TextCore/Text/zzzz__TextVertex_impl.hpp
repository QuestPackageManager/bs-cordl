#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextVertex.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextVertex_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv2", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::TextVertex::TextVertex(::UnityEngine::Vector3  position, ::UnityEngine::Vector4  uv, ::UnityEngine::Vector2  uv2, ::UnityEngine::Color32  color) noexcept  {
this->position = position;
this->uv = uv;
this->uv2 = uv2;
this->color = color;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextVertex::TextVertex()   {
}
