#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_ParmType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_ParmType::HAPI_ParmType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_ParmType::HAPI_ParmType() {}
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_INT{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_MULTIPARMLIST{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_TOGGLE{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_BUTTON{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_FLOAT{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_COLOR{ static_cast<int32_t>(0x5) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_STRING{ static_cast<int32_t>(0x6) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_PATH_FILE{ static_cast<int32_t>(0x7) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_PATH_FILE_GEO{ static_cast<int32_t>(0x8) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_PATH_FILE_IMAGE{ static_cast<int32_t>(0x9) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_NODE{ static_cast<int32_t>(0xa) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_FOLDERLIST{ static_cast<int32_t>(0xb) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_FOLDERLIST_RADIO{ static_cast<int32_t>(0xc) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_FOLDER{ static_cast<int32_t>(0xd) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_LABEL{ static_cast<int32_t>(0xe) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_SEPARATOR{ static_cast<int32_t>(0xf) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_PATH_FILE_DIR{ static_cast<int32_t>(0x10) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_MAX{ static_cast<int32_t>(0x11) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_INT_START{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_INT_END{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_FLOAT_START{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_FLOAT_END{ static_cast<int32_t>(0x5) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_STRING_START{ static_cast<int32_t>(0x6) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_STRING_END{ static_cast<int32_t>(0xa) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_PATH_START{ static_cast<int32_t>(0x7) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_PATH_END{ static_cast<int32_t>(0x9) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_NODE_START{ static_cast<int32_t>(0xa) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_NODE_END{ static_cast<int32_t>(0xa) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_CONTAINER_START{ static_cast<int32_t>(0xb) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_CONTAINER_END{ static_cast<int32_t>(0xc) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_NONVALUE_START{ static_cast<int32_t>(0xd) };
constexpr ::HoudiniEngineUnity::HAPI_ParmType HoudiniEngineUnity::HAPI_ParmType::HAPI_PARMTYPE_NONVALUE_END{ static_cast<int32_t>(0xf) };
