#pragma once
#include "HoudiniEngineUnity/zzzz__SessionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::SessionMode::SessionMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::SessionMode::SessionMode() {}
constexpr ::HoudiniEngineUnity::SessionMode HoudiniEngineUnity::SessionMode::Socket{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::SessionMode HoudiniEngineUnity::SessionMode::Pipe{ static_cast<int32_t>(0x1) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
