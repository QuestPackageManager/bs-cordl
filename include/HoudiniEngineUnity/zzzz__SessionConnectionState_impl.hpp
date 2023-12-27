#pragma once
#include "HoudiniEngineUnity/zzzz__SessionConnectionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::SessionConnectionState::SessionConnectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::SessionConnectionState::SessionConnectionState() {}
constexpr ::HoudiniEngineUnity::SessionConnectionState HoudiniEngineUnity::SessionConnectionState::NOT_CONNECTED{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::SessionConnectionState HoudiniEngineUnity::SessionConnectionState::CONNECTED{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::SessionConnectionState HoudiniEngineUnity::SessionConnectionState::FAILED_TO_CONNECT{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
