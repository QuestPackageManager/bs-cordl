#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_PrmScriptType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PrmScriptType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PrmScriptType() {}
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_INT{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_FLOAT{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_ANGLE{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_STRING{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_FILE{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_DIRECTORY{ static_cast<int32_t>(0x5) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_IMAGE{ static_cast<int32_t>(0x6) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_GEOMETRY{ static_cast<int32_t>(0x7) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_TOGGLE{ static_cast<int32_t>(0x8) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_BUTTON{ static_cast<int32_t>(0x9) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_VECTOR2{ static_cast<int32_t>(0xa) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_VECTOR3{ static_cast<int32_t>(0xb) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_VECTOR4{ static_cast<int32_t>(0xc) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_INTVECTOR2{ static_cast<int32_t>(0xd) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_INTVECTOR3{ static_cast<int32_t>(0xe) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_INTVECTOR4{ static_cast<int32_t>(0xf) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_UV{ static_cast<int32_t>(0x10) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_UVW{ static_cast<int32_t>(0x11) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_DIR{ static_cast<int32_t>(0x12) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_COLOR{ static_cast<int32_t>(0x13) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_COLOR4{ static_cast<int32_t>(0x14) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_OPPATH{ static_cast<int32_t>(0x15) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_OPLIST{ static_cast<int32_t>(0x16) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_OBJECT{ static_cast<int32_t>(0x17) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_OBJECTLIST{ static_cast<int32_t>(0x18) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_RENDER{ static_cast<int32_t>(0x19) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_SEPARATOR{ static_cast<int32_t>(0x1a) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_GEOMETRY_DATA{ static_cast<int32_t>(0x1b) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_KEY_VALUE_DICT{ static_cast<int32_t>(0x1c) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_LABEL{ static_cast<int32_t>(0x1d) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_RGBAMASK{ static_cast<int32_t>(0x1e) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_ORDINAL{ static_cast<int32_t>(0x1f) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_RAMP_FLT{ static_cast<int32_t>(0x20) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_RAMP_RGB{ static_cast<int32_t>(0x21) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_FLOAT_LOG{ static_cast<int32_t>(0x22) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_INT_LOG{ static_cast<int32_t>(0x23) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_DATA{ static_cast<int32_t>(0x24) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_FLOAT_MINMAX{ static_cast<int32_t>(0x25) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_INT_MINMAX{ static_cast<int32_t>(0x26) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_INT_STARTEND{ static_cast<int32_t>(0x27) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_BUTTONSTRIP{ static_cast<int32_t>(0x28) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_ICONSTRIP{ static_cast<int32_t>(0x29) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_GROUPRADIO{ static_cast<int32_t>(0x3e8) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_GROUPCOLLAPSIBLE{ static_cast<int32_t>(0x3e9) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_GROUPSIMPLE{ static_cast<int32_t>(0x3ea) };
constexpr ::HoudiniEngineUnity::HAPI_PrmScriptType HoudiniEngineUnity::HAPI_PrmScriptType::HAPI_PRM_SCRIPT_TYPE_GROUP{ static_cast<int32_t>(0x3eb) };
