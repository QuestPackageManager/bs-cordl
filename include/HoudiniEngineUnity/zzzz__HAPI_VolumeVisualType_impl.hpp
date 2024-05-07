#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_VolumeVisualType.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeVisualType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualType::HAPI_VolumeVisualType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualType::HAPI_VolumeVisualType() {}
constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualType HoudiniEngineUnity::HAPI_VolumeVisualType::HAPI_VOLUMEVISTYPE_INVALID{ static_cast<int32_t>(0xffffffff) };
constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualType HoudiniEngineUnity::HAPI_VolumeVisualType::HAPI_VOLUMEVISTYPE_SMOKE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualType HoudiniEngineUnity::HAPI_VolumeVisualType::HAPI_VOLUMEVISTYPE_RAINBOW{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualType HoudiniEngineUnity::HAPI_VolumeVisualType::HAPI_VOLUMEVISTYPE_ISO{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualType HoudiniEngineUnity::HAPI_VolumeVisualType::HAPI_VOLUMEVISTYPE_INVISIBLE{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualType HoudiniEngineUnity::HAPI_VolumeVisualType::HAPI_VOLUMEVISTYPE_HEIGHTFIELD{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualType HoudiniEngineUnity::HAPI_VolumeVisualType::HAPI_VOLUMEVISTYPE_MAX{ static_cast<int32_t>(0x5) };
