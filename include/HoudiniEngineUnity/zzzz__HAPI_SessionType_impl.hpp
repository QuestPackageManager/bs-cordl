#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_SessionType.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_SessionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_SessionType::HAPI_SessionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_SessionType::HAPI_SessionType() {}
constexpr ::HoudiniEngineUnity::HAPI_SessionType HoudiniEngineUnity::HAPI_SessionType::HAPI_SESSION_INPROCESS{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_SessionType HoudiniEngineUnity::HAPI_SessionType::HAPI_SESSION_THRIFT{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_SessionType HoudiniEngineUnity::HAPI_SessionType::HAPI_SESSION_CUSTOM1{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_SessionType HoudiniEngineUnity::HAPI_SessionType::HAPI_SESSION_CUSTOM2{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_SessionType HoudiniEngineUnity::HAPI_SessionType::HAPI_SESSION_CUSTOM3{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HAPI_SessionType HoudiniEngineUnity::HAPI_SessionType::HAPI_SESSION_MAX{ static_cast<int32_t>(0x5) };
