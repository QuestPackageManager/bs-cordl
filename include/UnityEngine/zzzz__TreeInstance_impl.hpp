#pragma once
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__TreeInstance_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "widthScale", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "heightScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightmapColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "prototypeIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "temporaryDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TreeInstance::TreeInstance(::UnityEngine::Vector3 position, float_t widthScale, float_t heightScale, float_t rotation, ::UnityEngine::Color32 color,
                                                    ::UnityEngine::Color32 lightmapColor, int32_t prototypeIndex, float_t temporaryDistance) noexcept {
  this->position = position;
  this->widthScale = widthScale;
  this->heightScale = heightScale;
  this->rotation = rotation;
  this->color = color;
  this->lightmapColor = lightmapColor;
  this->prototypeIndex = prototypeIndex;
  this->temporaryDistance = temporaryDistance;
}
// Ctor Parameters []
constexpr ::UnityEngine::TreeInstance::TreeInstance() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
