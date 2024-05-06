#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_PDG_State.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PDG_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_PDG_State::HAPI_PDG_State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_PDG_State::HAPI_PDG_State() {}
constexpr ::HoudiniEngineUnity::HAPI_PDG_State HoudiniEngineUnity::HAPI_PDG_State::HAPI_PDG_STATE_READY{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_State HoudiniEngineUnity::HAPI_PDG_State::HAPI_PDG_STATE_COOKING{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_State HoudiniEngineUnity::HAPI_PDG_State::HAPI_PDG_STATE_MAX{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_State HoudiniEngineUnity::HAPI_PDG_State::HAPI_PDG_STATE_MAX_READY_STATE{ static_cast<int32_t>(0x0) };
