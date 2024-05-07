#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/JSONTextMode.hpp"
#include "HoudiniEngineUnity/zzzz__JSONTextMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::JSONTextMode::JSONTextMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::JSONTextMode::JSONTextMode() {}
constexpr ::HoudiniEngineUnity::JSONTextMode HoudiniEngineUnity::JSONTextMode::Compact{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::JSONTextMode HoudiniEngineUnity::JSONTextMode::Indent{ static_cast<int32_t>(0x1) };
