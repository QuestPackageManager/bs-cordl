#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUResidentDrawerSettings.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerSettings_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
// Ctor Parameters [CppParam { name: "mode", ty: "::UnityEngine::Rendering::GPUResidentDrawerMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "supportDitheringCrossFade", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "enableOcclusionCulling", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "allowInEditMode", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "smallMeshScreenPercentage", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "errorShader", ty: "::UnityW<::UnityEngine::Shader>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "loadingShader", ty: "::UnityW<::UnityEngine::Shader>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUResidentDrawerSettings::GPUResidentDrawerSettings(::UnityEngine::Rendering::GPUResidentDrawerMode mode, bool supportDitheringCrossFade,
                                                                                         bool enableOcclusionCulling, bool allowInEditMode, float_t smallMeshScreenPercentage,
                                                                                         ::UnityW<::UnityEngine::Shader> errorShader, ::UnityW<::UnityEngine::Shader> loadingShader) noexcept {
  this->mode = mode;
  this->supportDitheringCrossFade = supportDitheringCrossFade;
  this->enableOcclusionCulling = enableOcclusionCulling;
  this->allowInEditMode = allowInEditMode;
  this->smallMeshScreenPercentage = smallMeshScreenPercentage;
  this->errorShader = errorShader;
  this->loadingShader = loadingShader;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawerSettings::GPUResidentDrawerSettings() {}
