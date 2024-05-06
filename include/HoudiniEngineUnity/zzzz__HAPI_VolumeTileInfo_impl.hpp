#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_VolumeTileInfo.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeTileInfo_def.hpp"
// Ctor Parameters [CppParam { name: "minX", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minY", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "minZ", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_VolumeTileInfo::HAPI_VolumeTileInfo(int32_t minX, int32_t minY, int32_t minZ, bool isValid) noexcept {
  this->minX = minX;
  this->minY = minY;
  this->minZ = minZ;
  this->isValid = isValid;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_VolumeTileInfo::HAPI_VolumeTileInfo() {}
