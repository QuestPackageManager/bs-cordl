#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_EnvIntType.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_EnvIntType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_EnvIntType::HAPI_EnvIntType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_EnvIntType::HAPI_EnvIntType() {}
constexpr ::HoudiniEngineUnity::HAPI_EnvIntType HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_INVALID{ static_cast<int32_t>(0xffffffff) };
constexpr ::HoudiniEngineUnity::HAPI_EnvIntType HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_VERSION_HOUDINI_MAJOR{ static_cast<int32_t>(0x64) };
constexpr ::HoudiniEngineUnity::HAPI_EnvIntType HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_VERSION_HOUDINI_MINOR{ static_cast<int32_t>(0x6e) };
constexpr ::HoudiniEngineUnity::HAPI_EnvIntType HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_VERSION_HOUDINI_BUILD{ static_cast<int32_t>(0x78) };
constexpr ::HoudiniEngineUnity::HAPI_EnvIntType HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_VERSION_HOUDINI_PATCH{ static_cast<int32_t>(0x82) };
constexpr ::HoudiniEngineUnity::HAPI_EnvIntType HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MAJOR{ static_cast<int32_t>(0xc8) };
constexpr ::HoudiniEngineUnity::HAPI_EnvIntType HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MINOR{ static_cast<int32_t>(0xd2) };
constexpr ::HoudiniEngineUnity::HAPI_EnvIntType HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_VERSION_HOUDINI_ENGINE_API{ static_cast<int32_t>(0xdc) };
constexpr ::HoudiniEngineUnity::HAPI_EnvIntType HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_MAX{ static_cast<int32_t>(0xdd) };
