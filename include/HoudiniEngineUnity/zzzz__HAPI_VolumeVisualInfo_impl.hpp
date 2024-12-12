#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_VolumeVisualInfo.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeVisualType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeVisualInfo_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_VolumeVisualType", modifiers: "", def_value: Some("{}") }, CppParam { name: "iso", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "density", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualInfo::HAPI_VolumeVisualInfo(::HoudiniEngineUnity::HAPI_VolumeVisualType type, float_t iso, float_t density) noexcept {
  this->type = type;
  this->iso = iso;
  this->density = density;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualInfo::HAPI_VolumeVisualInfo() {}
