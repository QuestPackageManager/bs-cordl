#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_HandleBindingInfo_def.hpp"
// Ctor Parameters [CppParam { name: "handleParmNameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "assetParmNameSH", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "assetParmId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "assetParmIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_HandleBindingInfo::HAPI_HandleBindingInfo(int32_t handleParmNameSH, int32_t assetParmNameSH, int32_t assetParmId, int32_t assetParmIndex) noexcept {
  this->handleParmNameSH = handleParmNameSH;
  this->assetParmNameSH = assetParmNameSH;
  this->assetParmId = assetParmId;
  this->assetParmIndex = assetParmIndex;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_HandleBindingInfo::HAPI_HandleBindingInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
