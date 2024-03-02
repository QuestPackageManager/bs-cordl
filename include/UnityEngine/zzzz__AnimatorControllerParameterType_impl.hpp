#pragma once
#include "UnityEngine/zzzz__AnimatorControllerParameterType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AnimatorControllerParameterType::AnimatorControllerParameterType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimatorControllerParameterType::AnimatorControllerParameterType() {}
constexpr ::UnityEngine::AnimatorControllerParameterType UnityEngine::AnimatorControllerParameterType::Float{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::AnimatorControllerParameterType UnityEngine::AnimatorControllerParameterType::Int{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::AnimatorControllerParameterType UnityEngine::AnimatorControllerParameterType::Bool{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::AnimatorControllerParameterType UnityEngine::AnimatorControllerParameterType::Trigger{ static_cast<int32_t>(0x9) };
