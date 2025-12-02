#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CPUSharedInstanceFlags.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceFlags_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TransformUpdateFlags_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceFlags_def.hpp"
// Ctor Parameters [CppParam { name: "transformUpdateFlags", ty: "::UnityEngine::Rendering::TransformUpdateFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceFlags", ty:
// "::UnityEngine::Rendering::InstanceFlags", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CPUSharedInstanceFlags::CPUSharedInstanceFlags(::UnityEngine::Rendering::TransformUpdateFlags transformUpdateFlags,
                                                                                   ::UnityEngine::Rendering::InstanceFlags instanceFlags) noexcept {
  this->transformUpdateFlags = transformUpdateFlags;
  this->instanceFlags = instanceFlags;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CPUSharedInstanceFlags::CPUSharedInstanceFlags() {}
