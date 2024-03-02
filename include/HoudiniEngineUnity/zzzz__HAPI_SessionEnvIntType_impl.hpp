#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_SessionEnvIntType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_SessionEnvIntType::HAPI_SessionEnvIntType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_SessionEnvIntType::HAPI_SessionEnvIntType() {}
constexpr ::HoudiniEngineUnity::HAPI_SessionEnvIntType HoudiniEngineUnity::HAPI_SessionEnvIntType::HAPI_SESSIONENVINT_INVALID{ static_cast<int32_t>(0xffffffff) };
constexpr ::HoudiniEngineUnity::HAPI_SessionEnvIntType HoudiniEngineUnity::HAPI_SessionEnvIntType::HAPI_SESSIONENVINT_LICENSE{ static_cast<int32_t>(0x64) };
constexpr ::HoudiniEngineUnity::HAPI_SessionEnvIntType HoudiniEngineUnity::HAPI_SessionEnvIntType::HAPI_SESSIONENVINT_MAX{ static_cast<int32_t>(0x65) };
