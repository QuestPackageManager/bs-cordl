#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMaterialData.hpp"
#include "GlobalNamespace/zzzz__OVRTextureData_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMaterialData_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
// Ctor Parameters [CppParam { name: "shader", ty: "::UnityW<::UnityEngine::Shader>", modifiers: "", def_value: Some("{}") }, CppParam { name: "textureId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "texture", ty: "::GlobalNamespace::OVRTextureData", modifiers: "", def_value: Some("{}") }, CppParam { name: "baseColorFactor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRMaterialData::OVRMaterialData(::UnityW<::UnityEngine::Shader>  shader, int32_t  textureId, ::GlobalNamespace::OVRTextureData  texture, ::UnityEngine::Color  baseColorFactor) noexcept  {
this->shader = shader;
this->textureId = textureId;
this->texture = texture;
this->baseColorFactor = baseColorFactor;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMaterialData::OVRMaterialData()   {
}
