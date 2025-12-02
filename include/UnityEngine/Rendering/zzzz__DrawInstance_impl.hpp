#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DrawInstance.hpp"
#include "UnityEngine/Rendering/zzzz__DrawKey_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawInstance_def.hpp"
// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::Rendering::DrawKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceIndex", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::DrawInstance::DrawInstance(::UnityEngine::Rendering::DrawKey key, int32_t instanceIndex) noexcept {
  this->key = key;
  this->instanceIndex = instanceIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DrawInstance::DrawInstance() {}
