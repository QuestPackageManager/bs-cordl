#pragma once
#include "UnityEngine/Tilemaps/zzzz__TileFlags_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tile_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileDataNative_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileFlags_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tile_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
// Ctor Parameters [CppParam { name: "m_Sprite", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_GameObject", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_Flags", ty: "::UnityEngine::Tilemaps::TileFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ColliderType", ty: "::UnityEngine::Tilemaps::__Tile__ColliderType",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Tilemaps::TileDataNative::TileDataNative(int32_t m_Sprite, ::UnityEngine::Color m_Color, ::UnityEngine::Matrix4x4 m_Transform, int32_t m_GameObject,
                                                                  ::UnityEngine::Tilemaps::TileFlags m_Flags, ::UnityEngine::Tilemaps::__Tile__ColliderType m_ColliderType) noexcept {
  this->m_Sprite = m_Sprite;
  this->m_Color = m_Color;
  this->m_Transform = m_Transform;
  this->m_GameObject = m_GameObject;
  this->m_Flags = m_Flags;
  this->m_ColliderType = m_ColliderType;
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::TileDataNative::TileDataNative() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
