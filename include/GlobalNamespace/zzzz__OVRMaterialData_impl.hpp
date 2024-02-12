#pragma once
#include "GlobalNamespace/zzzz__OVRTextureData_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMaterialData_def.hpp"
#include "GlobalNamespace/zzzz__OVRTextureData_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
// Ctor Parameters [CppParam { name: "shader", ty: "::UnityW<::UnityEngine::Shader>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "textureId", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "texture", ty: "::GlobalNamespace::OVRTextureData", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRMaterialData::OVRMaterialData(::UnityW<::UnityEngine::Shader> shader, int32_t textureId, ::GlobalNamespace::OVRTextureData texture) noexcept {
  this->shader = shader;
  this->textureId = textureId;
  this->texture = texture;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMaterialData::OVRMaterialData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
