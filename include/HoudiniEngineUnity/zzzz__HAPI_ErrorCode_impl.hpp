#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_ErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_ErrorCode::HAPI_ErrorCode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_ErrorCode::HAPI_ErrorCode() {}
constexpr ::HoudiniEngineUnity::HAPI_ErrorCode HoudiniEngineUnity::HAPI_ErrorCode::HAPI_ERRORCODE_ASSET_DEF_NOT_FOUND{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_ErrorCode HoudiniEngineUnity::HAPI_ErrorCode::HAPI_ERRORCODE_PYTHON_NODE_ERROR{ static_cast<int32_t>(0x2) };
