#pragma once
// IWYU pragma private; include "UnityEngine/LogType.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LogType::LogType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LogType::LogType()   {
}
constexpr ::UnityEngine::LogType  UnityEngine::LogType::Error{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::LogType  UnityEngine::LogType::_cordl_Assert{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::LogType  UnityEngine::LogType::Warning{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::LogType  UnityEngine::LogType::Log{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::LogType  UnityEngine::LogType::Exception{static_cast<int32_t>(0x4)};
