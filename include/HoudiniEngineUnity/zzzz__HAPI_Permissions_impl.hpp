#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_Permissions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_Permissions::HAPI_Permissions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_Permissions::HAPI_Permissions() {}
constexpr ::HoudiniEngineUnity::HAPI_Permissions HoudiniEngineUnity::HAPI_Permissions::HAPI_PERMISSIONS_NON_APPLICABLE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_Permissions HoudiniEngineUnity::HAPI_Permissions::HAPI_PERMISSIONS_READ_WRITE{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_Permissions HoudiniEngineUnity::HAPI_Permissions::HAPI_PERMISSIONS_READ_ONLY{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_Permissions HoudiniEngineUnity::HAPI_Permissions::HAPI_PERMISSIONS_WRITE_ONLY{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_Permissions HoudiniEngineUnity::HAPI_Permissions::HAPI_PERMISSIONS_MAX{ static_cast<int32_t>(0x4) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
