#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_StatusVerbosity_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_StatusVerbosity(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_StatusVerbosity() {}
constexpr ::HoudiniEngineUnity::HAPI_StatusVerbosity HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_STATUSVERBOSITY_0{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_StatusVerbosity HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_STATUSVERBOSITY_1{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_StatusVerbosity HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_STATUSVERBOSITY_2{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_StatusVerbosity HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_STATUSVERBOSITY_ALL{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_StatusVerbosity HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_STATUSVERBOSITY_ERRORS{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_StatusVerbosity HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_STATUSVERBOSITY_WARNINGS{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_StatusVerbosity HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_STATUSVERBOSITY_MESSAGES{ static_cast<int32_t>(0x2) };
