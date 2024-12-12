#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/TileAnimationData.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileAnimationFlags_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileAnimationData_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
// Ctor Parameters [CppParam { name: "m_AnimatedSprites", ty: "::ArrayW<::UnityW<::UnityEngine::Sprite>,::Array<::UnityW<::UnityEngine::Sprite>>*>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_AnimationSpeed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AnimationStartTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_Flags", ty: "::UnityEngine::Tilemaps::TileAnimationFlags", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Tilemaps::TileAnimationData::TileAnimationData(::ArrayW<::UnityW<::UnityEngine::Sprite>, ::Array<::UnityW<::UnityEngine::Sprite>>*> m_AnimatedSprites,
                                                                        float_t m_AnimationSpeed, float_t m_AnimationStartTime, ::UnityEngine::Tilemaps::TileAnimationFlags m_Flags) noexcept {
  this->m_AnimatedSprites = m_AnimatedSprites;
  this->m_AnimationSpeed = m_AnimationSpeed;
  this->m_AnimationStartTime = m_AnimationStartTime;
  this->m_Flags = m_Flags;
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::TileAnimationData::TileAnimationData() {}
