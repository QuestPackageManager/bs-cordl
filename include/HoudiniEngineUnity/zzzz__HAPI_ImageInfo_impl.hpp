#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_ImageInfo.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ImageDataFormat_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ImagePacking_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ImageInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ImageDataFormat_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ImagePacking_def.hpp"
// Ctor Parameters [CppParam { name: "imageFileFormatNameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "xRes", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "yRes", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dataFormat", ty: "::HoudiniEngineUnity::HAPI_ImageDataFormat", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "interleaved", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "packing", ty: "::HoudiniEngineUnity::HAPI_ImagePacking", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "gamma", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_ImageInfo::HAPI_ImageInfo(int32_t imageFileFormatNameSH, int32_t xRes, int32_t yRes, ::HoudiniEngineUnity::HAPI_ImageDataFormat dataFormat, bool interleaved,
                                                               ::HoudiniEngineUnity::HAPI_ImagePacking packing, double_t gamma) noexcept {
  this->imageFileFormatNameSH = imageFileFormatNameSH;
  this->xRes = xRes;
  this->yRes = yRes;
  this->dataFormat = dataFormat;
  this->interleaved = interleaved;
  this->packing = packing;
  this->gamma = gamma;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_ImageInfo::HAPI_ImageInfo() {}
