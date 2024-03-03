#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_PDG_WorkitemState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WorkitemState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WorkitemState() {}
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_UNDEFINED{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_UNCOOKED{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_WAITING{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_SCHEDULED{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_COOKING{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_COOKED_SUCCESS{ static_cast<int32_t>(0x5) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_COOKED_CACHE{ static_cast<int32_t>(0x6) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_COOKED_FAIL{ static_cast<int32_t>(0x7) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_COOKED_CANCEL{ static_cast<int32_t>(0x8) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_DIRTY{ static_cast<int32_t>(0x9) };
