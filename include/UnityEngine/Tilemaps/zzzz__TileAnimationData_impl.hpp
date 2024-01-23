#pragma once
#include "UnityEngine/Tilemaps/zzzz__TileAnimationData_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
// Ctor Parameters [CppParam { name: "m_AnimatedSprites", ty: "::ArrayW<::UnityW<::UnityEngine::Sprite>,::Array<::UnityW<::UnityEngine::Sprite>>*>", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "m_AnimationSpeed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AnimationStartTime", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Tilemaps::TileAnimationData::TileAnimationData(::ArrayW<::UnityW<::UnityEngine::Sprite>, ::Array<::UnityW<::UnityEngine::Sprite>>*> m_AnimatedSprites,
                                                                        float_t m_AnimationSpeed, float_t m_AnimationStartTime) noexcept {
  this->m_AnimatedSprites = m_AnimatedSprites;
  this->m_AnimationSpeed = m_AnimationSpeed;
  this->m_AnimationStartTime = m_AnimationStartTime;
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::TileAnimationData::TileAnimationData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
