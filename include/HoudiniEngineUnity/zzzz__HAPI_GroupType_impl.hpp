#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_GroupType.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_GroupType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_GroupType::HAPI_GroupType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_GroupType::HAPI_GroupType() {}
constexpr ::HoudiniEngineUnity::HAPI_GroupType HoudiniEngineUnity::HAPI_GroupType::HAPI_GROUPTYPE_INVALID{ static_cast<int32_t>(0xffffffff) };
constexpr ::HoudiniEngineUnity::HAPI_GroupType HoudiniEngineUnity::HAPI_GroupType::HAPI_GROUPTYPE_POINT{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_GroupType HoudiniEngineUnity::HAPI_GroupType::HAPI_GROUPTYPE_PRIM{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_GroupType HoudiniEngineUnity::HAPI_GroupType::HAPI_GROUPTYPE_EDGE{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_GroupType HoudiniEngineUnity::HAPI_GroupType::HAPI_GROUPTYPE_MAX{ static_cast<int32_t>(0x3) };
