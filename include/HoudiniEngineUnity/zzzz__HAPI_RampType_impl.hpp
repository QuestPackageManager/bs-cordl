#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_RampType.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_RampType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_RampType::HAPI_RampType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_RampType::HAPI_RampType() {}
constexpr ::HoudiniEngineUnity::HAPI_RampType HoudiniEngineUnity::HAPI_RampType::HAPI_RAMPTYPE_INVALID{ static_cast<int32_t>(0xffffffff) };
constexpr ::HoudiniEngineUnity::HAPI_RampType HoudiniEngineUnity::HAPI_RampType::HAPI_RAMPTYPE_FLOAT{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_RampType HoudiniEngineUnity::HAPI_RampType::HAPI_RAMPTYPE_COLOR{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_RampType HoudiniEngineUnity::HAPI_RampType::HAPI_RAMPTYPE_MAX{ static_cast<int32_t>(0x2) };
