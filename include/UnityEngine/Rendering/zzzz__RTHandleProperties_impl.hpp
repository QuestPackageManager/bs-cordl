#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RTHandleProperties.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleProperties_def.hpp"
// Ctor Parameters [CppParam { name: "previousViewportSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "previousRenderTargetSize", ty:
// "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "currentViewportSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "currentRenderTargetSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "rtHandleScale", ty: "::UnityEngine::Vector4", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::RTHandleProperties::RTHandleProperties(::UnityEngine::Vector2Int previousViewportSize, ::UnityEngine::Vector2Int previousRenderTargetSize,
                                                                           ::UnityEngine::Vector2Int currentViewportSize, ::UnityEngine::Vector2Int currentRenderTargetSize,
                                                                           ::UnityEngine::Vector4 rtHandleScale) noexcept {
  this->previousViewportSize = previousViewportSize;
  this->previousRenderTargetSize = previousRenderTargetSize;
  this->currentViewportSize = currentViewportSize;
  this->currentRenderTargetSize = currentRenderTargetSize;
  this->rtHandleScale = rtHandleScale;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RTHandleProperties::RTHandleProperties() {}
