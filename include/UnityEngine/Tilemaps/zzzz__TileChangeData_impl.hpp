#pragma once
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileChangeData_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TileAsset", ty: "::UnityEngine::Object*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "m_Color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Transform", ty: "::UnityEngine::Matrix4x4",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Tilemaps::TileChangeData::TileChangeData(::UnityEngine::Vector3Int m_Position, ::UnityEngine::Object* m_TileAsset, ::UnityEngine::Color m_Color,
                                                                  ::UnityEngine::Matrix4x4 m_Transform) noexcept {
  this->m_Position = m_Position;
  this->m_TileAsset = m_TileAsset;
  this->m_Color = m_Color;
  this->m_Transform = m_Transform;
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::TileChangeData::TileChangeData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
