#pragma once
// IWYU pragma private; include "UnityEngine/Playables/DirectorWrapMode.hpp"
#include "UnityEngine/Playables/zzzz__DirectorWrapMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::DirectorWrapMode::DirectorWrapMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::DirectorWrapMode::DirectorWrapMode()   {
}
constexpr ::UnityEngine::Playables::DirectorWrapMode  UnityEngine::Playables::DirectorWrapMode::Hold{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Playables::DirectorWrapMode  UnityEngine::Playables::DirectorWrapMode::Loop{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Playables::DirectorWrapMode  UnityEngine::Playables::DirectorWrapMode::None{static_cast<int32_t>(0x2)};
