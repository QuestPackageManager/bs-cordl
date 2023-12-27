#pragma once
#include "UnityEngine/ProBuilder/zzzz__LogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::LogLevel::LogLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::LogLevel::LogLevel() {}
constexpr ::UnityEngine::ProBuilder::LogLevel UnityEngine::ProBuilder::LogLevel::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::LogLevel UnityEngine::ProBuilder::LogLevel::Error{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::LogLevel UnityEngine::ProBuilder::LogLevel::Warning{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ProBuilder::LogLevel UnityEngine::ProBuilder::LogLevel::Info{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::ProBuilder::LogLevel UnityEngine::ProBuilder::LogLevel::Default{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::ProBuilder::LogLevel UnityEngine::ProBuilder::LogLevel::All{ static_cast<int32_t>(0xff) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
