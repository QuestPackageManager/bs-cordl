#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_StatusType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_StatusType::HAPI_StatusType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_StatusType::HAPI_StatusType() {}
constexpr ::HoudiniEngineUnity::HAPI_StatusType HoudiniEngineUnity::HAPI_StatusType::HAPI_STATUS_CALL_RESULT{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_StatusType HoudiniEngineUnity::HAPI_StatusType::HAPI_STATUS_COOK_RESULT{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_StatusType HoudiniEngineUnity::HAPI_StatusType::HAPI_STATUS_COOK_STATE{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_StatusType HoudiniEngineUnity::HAPI_StatusType::HAPI_STATUS_MAX{ static_cast<int32_t>(0x3) };
