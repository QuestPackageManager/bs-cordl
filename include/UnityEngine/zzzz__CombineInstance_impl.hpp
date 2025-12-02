#pragma once
// IWYU pragma private; include "UnityEngine/CombineInstance.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/zzzz__CombineInstance_def.hpp"
// Ctor Parameters [CppParam { name: "m_MeshInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SubMeshIndex", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "m_Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LightmapScaleOffset", ty: "::UnityEngine::Vector4", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_RealtimeLightmapScaleOffset", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CombineInstance::CombineInstance(int32_t m_MeshInstanceID, int32_t m_SubMeshIndex, ::UnityEngine::Matrix4x4 m_Transform, ::UnityEngine::Vector4 m_LightmapScaleOffset,
                                                          ::UnityEngine::Vector4 m_RealtimeLightmapScaleOffset) noexcept {
  this->m_MeshInstanceID = m_MeshInstanceID;
  this->m_SubMeshIndex = m_SubMeshIndex;
  this->m_Transform = m_Transform;
  this->m_LightmapScaleOffset = m_LightmapScaleOffset;
  this->m_RealtimeLightmapScaleOffset = m_RealtimeLightmapScaleOffset;
}
// Ctor Parameters []
constexpr ::UnityEngine::CombineInstance::CombineInstance() {}
