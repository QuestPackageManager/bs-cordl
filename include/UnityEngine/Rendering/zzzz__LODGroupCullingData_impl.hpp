#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODGroupCullingData.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::LODGroupCullingData__percentageFlags_e__FixedBuffer::LODGroupCullingData__percentageFlags_e__FixedBuffer(bool FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LODGroupCullingData__percentageFlags_e__FixedBuffer::LODGroupCullingData__percentageFlags_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::LODGroupCullingData__sqrDistances_e__FixedBuffer::LODGroupCullingData__sqrDistances_e__FixedBuffer(float_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LODGroupCullingData__sqrDistances_e__FixedBuffer::LODGroupCullingData__sqrDistances_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::LODGroupCullingData__transitionDistances_e__FixedBuffer::LODGroupCullingData__transitionDistances_e__FixedBuffer(float_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LODGroupCullingData__transitionDistances_e__FixedBuffer::LODGroupCullingData__transitionDistances_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "worldSpaceReferencePoint", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodCount", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "sqrDistances", ty: "::UnityEngine::Rendering::LODGroupCullingData__sqrDistances_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "transitionDistances", ty: "::UnityEngine::Rendering::LODGroupCullingData__transitionDistances_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldSpaceSize", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "percentageFlags", ty: "::UnityEngine::Rendering::LODGroupCullingData__percentageFlags_e__FixedBuffer", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::LODGroupCullingData::LODGroupCullingData(::Unity::Mathematics::float3 worldSpaceReferencePoint, int32_t lodCount,
                                                                             ::UnityEngine::Rendering::LODGroupCullingData__sqrDistances_e__FixedBuffer sqrDistances,
                                                                             ::UnityEngine::Rendering::LODGroupCullingData__transitionDistances_e__FixedBuffer transitionDistances,
                                                                             float_t worldSpaceSize,
                                                                             ::UnityEngine::Rendering::LODGroupCullingData__percentageFlags_e__FixedBuffer percentageFlags) noexcept {
  this->worldSpaceReferencePoint = worldSpaceReferencePoint;
  this->lodCount = lodCount;
  this->sqrDistances = sqrDistances;
  this->transitionDistances = transitionDistances;
  this->worldSpaceSize = worldSpaceSize;
  this->percentageFlags = percentageFlags;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LODGroupCullingData::LODGroupCullingData() {}
