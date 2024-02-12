#pragma once
#include "UnityEngine/zzzz__ParticleSystemVertexStreams_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystemVertexStreams::ParticleSystemVertexStreams(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemVertexStreams::ParticleSystemVertexStreams() {}
constexpr ::UnityEngine::ParticleSystemVertexStreams UnityEngine::ParticleSystemVertexStreams::Position{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ParticleSystemVertexStreams UnityEngine::ParticleSystemVertexStreams::Normal{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ParticleSystemVertexStreams UnityEngine::ParticleSystemVertexStreams::Tangent{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::ParticleSystemVertexStreams UnityEngine::ParticleSystemVertexStreams::Color{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::ParticleSystemVertexStreams UnityEngine::ParticleSystemVertexStreams::UV{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::ParticleSystemVertexStreams UnityEngine::ParticleSystemVertexStreams::UV2BlendAndFrame{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::ParticleSystemVertexStreams UnityEngine::ParticleSystemVertexStreams::CenterAndVertexID{ static_cast<int32_t>(0x40) };
constexpr ::UnityEngine::ParticleSystemVertexStreams UnityEngine::ParticleSystemVertexStreams::Size{ static_cast<int32_t>(0x80) };
constexpr ::UnityEngine::ParticleSystemVertexStreams UnityEngine::ParticleSystemVertexStreams::Rotation{ static_cast<int32_t>(0x100) };
constexpr ::UnityEngine::ParticleSystemVertexStreams UnityEngine::ParticleSystemVertexStreams::Velocity{ static_cast<int32_t>(0x200) };
constexpr ::UnityEngine::ParticleSystemVertexStreams UnityEngine::ParticleSystemVertexStreams::Lifetime{ static_cast<int32_t>(0x400) };
constexpr ::UnityEngine::ParticleSystemVertexStreams UnityEngine::ParticleSystemVertexStreams::Custom1{ static_cast<int32_t>(0x800) };
constexpr ::UnityEngine::ParticleSystemVertexStreams UnityEngine::ParticleSystemVertexStreams::Custom2{ static_cast<int32_t>(0x1000) };
constexpr ::UnityEngine::ParticleSystemVertexStreams UnityEngine::ParticleSystemVertexStreams::Random{ static_cast<int32_t>(0x2000) };
constexpr ::UnityEngine::ParticleSystemVertexStreams UnityEngine::ParticleSystemVertexStreams::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ParticleSystemVertexStreams UnityEngine::ParticleSystemVertexStreams::All{ static_cast<int32_t>(0x7fffffff) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
