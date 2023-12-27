#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_License_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_License::HAPI_License(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_License::HAPI_License() {}
constexpr ::HoudiniEngineUnity::HAPI_License HoudiniEngineUnity::HAPI_License::HAPI_LICENSE_NONE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_License HoudiniEngineUnity::HAPI_License::HAPI_LICENSE_HOUDINI_ENGINE{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_License HoudiniEngineUnity::HAPI_License::HAPI_LICENSE_HOUDINI{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_License HoudiniEngineUnity::HAPI_License::HAPI_LICENSE_HOUDINI_FX{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_License HoudiniEngineUnity::HAPI_License::HAPI_LICENSE_HOUDINI_ENGINE_INDIE{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HAPI_License HoudiniEngineUnity::HAPI_License::HAPI_LICENSE_HOUDINI_INDIE{ static_cast<int32_t>(0x5) };
constexpr ::HoudiniEngineUnity::HAPI_License HoudiniEngineUnity::HAPI_License::HAPI_LICENSE_MAX{ static_cast<int32_t>(0x6) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
