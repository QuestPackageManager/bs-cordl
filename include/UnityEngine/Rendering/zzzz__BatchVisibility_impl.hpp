#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchVisibility.hpp"
#include "UnityEngine/Rendering/zzzz__BatchVisibility_def.hpp"
// Ctor Parameters [CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "instancesCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "visibleCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchVisibility::BatchVisibility(int32_t offset, int32_t instancesCount, int32_t visibleCount) noexcept {
  this->offset = offset;
  this->instancesCount = instancesCount;
  this->visibleCount = visibleCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchVisibility::BatchVisibility() {}
