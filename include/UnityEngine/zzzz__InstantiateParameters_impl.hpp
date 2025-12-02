#pragma once
// IWYU pragma private; include "UnityEngine/InstantiateParameters.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_impl.hpp"
#include "UnityEngine/zzzz__InstantiateParameters_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "parent", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}") }, CppParam { name: "scene", ty: "::UnityEngine::SceneManagement::Scene",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "worldSpace", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InstantiateParameters::InstantiateParameters(::UnityW<::UnityEngine::Transform> parent, ::UnityEngine::SceneManagement::Scene scene, bool worldSpace) noexcept {
  this->parent = parent;
  this->scene = scene;
  this->worldSpace = worldSpace;
}
// Ctor Parameters []
constexpr ::UnityEngine::InstantiateParameters::InstantiateParameters() {}
