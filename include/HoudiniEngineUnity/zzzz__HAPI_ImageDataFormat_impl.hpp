#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_ImageDataFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_ImageDataFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_ImageDataFormat() {}
constexpr ::HoudiniEngineUnity::HAPI_ImageDataFormat HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_UNKNOWN{ static_cast<int32_t>(0xffffffff) };
constexpr ::HoudiniEngineUnity::HAPI_ImageDataFormat HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_INT8{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_ImageDataFormat HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_INT16{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_ImageDataFormat HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_INT32{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_ImageDataFormat HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_FLOAT16{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_ImageDataFormat HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_FLOAT32{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HAPI_ImageDataFormat HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_MAX{ static_cast<int32_t>(0x5) };
constexpr ::HoudiniEngineUnity::HAPI_ImageDataFormat HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_DEFAULT{ static_cast<int32_t>(0x0) };
