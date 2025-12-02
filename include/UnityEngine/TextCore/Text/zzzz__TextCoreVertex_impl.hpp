#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextCoreVertex.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextCoreVertex_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "uv0", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv2", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::TextCoreVertex::TextCoreVertex(::UnityEngine::Vector3 position, ::UnityEngine::Color32 color, ::UnityEngine::Vector2 uv0,
                                                                        ::UnityEngine::Vector2 uv2) noexcept {
  this->position = position;
  this->color = color;
  this->uv0 = uv0;
  this->uv2 = uv2;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextCoreVertex::TextCoreVertex() {}
