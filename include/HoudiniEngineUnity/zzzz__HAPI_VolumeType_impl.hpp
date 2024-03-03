#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_VolumeType::HAPI_VolumeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_VolumeType::HAPI_VolumeType() {}
constexpr ::HoudiniEngineUnity::HAPI_VolumeType HoudiniEngineUnity::HAPI_VolumeType::HAPI_VOLUMETYPE_INVALID{ static_cast<int32_t>(0xffffffff) };
constexpr ::HoudiniEngineUnity::HAPI_VolumeType HoudiniEngineUnity::HAPI_VolumeType::HAPI_VOLUMETYPE_HOUDINI{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_VolumeType HoudiniEngineUnity::HAPI_VolumeType::HAPI_VOLUMETYPE_VDB{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_VolumeType HoudiniEngineUnity::HAPI_VolumeType::HAPI_VOLUMETYPE_MAX{ static_cast<int32_t>(0x2) };
