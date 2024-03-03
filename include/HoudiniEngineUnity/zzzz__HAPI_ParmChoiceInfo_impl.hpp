#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_ParmChoiceInfo_def.hpp"
// Ctor Parameters [CppParam { name: "parentParmId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "labelSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "valueSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_ParmChoiceInfo::HAPI_ParmChoiceInfo(int32_t parentParmId, int32_t labelSH, int32_t valueSH) noexcept {
  this->parentParmId = parentParmId;
  this->labelSH = labelSH;
  this->valueSH = valueSH;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_ParmChoiceInfo::HAPI_ParmChoiceInfo() {}
