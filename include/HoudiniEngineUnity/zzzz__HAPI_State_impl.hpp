#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_State::HAPI_State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_State::HAPI_State() {}
constexpr ::HoudiniEngineUnity::HAPI_State HoudiniEngineUnity::HAPI_State::HAPI_STATE_READY{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_State HoudiniEngineUnity::HAPI_State::HAPI_STATE_READY_WITH_FATAL_ERRORS{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_State HoudiniEngineUnity::HAPI_State::HAPI_STATE_READY_WITH_COOK_ERRORS{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_State HoudiniEngineUnity::HAPI_State::HAPI_STATE_STARTING_COOK{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_State HoudiniEngineUnity::HAPI_State::HAPI_STATE_COOKING{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HAPI_State HoudiniEngineUnity::HAPI_State::HAPI_STATE_STARTING_LOAD{ static_cast<int32_t>(0x5) };
constexpr ::HoudiniEngineUnity::HAPI_State HoudiniEngineUnity::HAPI_State::HAPI_STATE_LOADING{ static_cast<int32_t>(0x6) };
constexpr ::HoudiniEngineUnity::HAPI_State HoudiniEngineUnity::HAPI_State::HAPI_STATE_MAX{ static_cast<int32_t>(0x7) };
constexpr ::HoudiniEngineUnity::HAPI_State HoudiniEngineUnity::HAPI_State::HAPI_STATE_MAX_READY_STATE{ static_cast<int32_t>(0x2) };
