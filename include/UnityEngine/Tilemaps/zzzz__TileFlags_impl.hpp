#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/TileFlags.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Tilemaps::TileFlags::TileFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::TileFlags::TileFlags() {}
constexpr ::UnityEngine::Tilemaps::TileFlags UnityEngine::Tilemaps::TileFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Tilemaps::TileFlags UnityEngine::Tilemaps::TileFlags::LockColor{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Tilemaps::TileFlags UnityEngine::Tilemaps::TileFlags::LockTransform{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Tilemaps::TileFlags UnityEngine::Tilemaps::TileFlags::InstantiateGameObjectRuntimeOnly{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Tilemaps::TileFlags UnityEngine::Tilemaps::TileFlags::KeepGameObjectRuntimeOnly{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Tilemaps::TileFlags UnityEngine::Tilemaps::TileFlags::LockAll{ static_cast<int32_t>(0x3) };
