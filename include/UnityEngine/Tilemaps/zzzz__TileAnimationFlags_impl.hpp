#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/TileAnimationFlags.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileAnimationFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Tilemaps::TileAnimationFlags::TileAnimationFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::TileAnimationFlags::TileAnimationFlags() {}
constexpr ::UnityEngine::Tilemaps::TileAnimationFlags UnityEngine::Tilemaps::TileAnimationFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Tilemaps::TileAnimationFlags UnityEngine::Tilemaps::TileAnimationFlags::LoopOnce{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Tilemaps::TileAnimationFlags UnityEngine::Tilemaps::TileAnimationFlags::PauseAnimation{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Tilemaps::TileAnimationFlags UnityEngine::Tilemaps::TileAnimationFlags::UpdatePhysics{ static_cast<int32_t>(0x4) };
