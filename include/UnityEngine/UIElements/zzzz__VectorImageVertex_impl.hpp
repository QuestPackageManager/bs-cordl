#pragma once
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImageVertex_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "tint", ty: "::UnityEngine::Color32", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "settingIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::VectorImageVertex::VectorImageVertex(::UnityEngine::Vector3 position, ::UnityEngine::Color32 tint, ::UnityEngine::Vector2 uv, uint32_t settingIndex) noexcept {
  this->position = position;
  this->tint = tint;
  this->uv = uv;
  this->settingIndex = settingIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VectorImageVertex::VectorImageVertex() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
