#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_PDG_WorkitemInfo_def.hpp"
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "numResults", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "nameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemInfo::HAPI_PDG_WorkitemInfo(int32_t index, int32_t numResults, int32_t nameSH) noexcept {
  this->index = index;
  this->numResults = numResults;
  this->nameSH = nameSH;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemInfo::HAPI_PDG_WorkitemInfo() {}
