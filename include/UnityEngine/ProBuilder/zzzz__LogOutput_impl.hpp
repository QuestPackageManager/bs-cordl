#pragma once
#include "UnityEngine/ProBuilder/zzzz__LogOutput_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::LogOutput::LogOutput(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::LogOutput::LogOutput() {}
constexpr ::UnityEngine::ProBuilder::LogOutput UnityEngine::ProBuilder::LogOutput::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::LogOutput UnityEngine::ProBuilder::LogOutput::Console{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::LogOutput UnityEngine::ProBuilder::LogOutput::File{ static_cast<int32_t>(0x2) };
