#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_PDG_WorkitemResultInfo_def.hpp"
// Ctor Parameters [CppParam { name: "resultSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "resultTagSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "resultHash", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo::HAPI_PDG_WorkitemResultInfo(int32_t resultSH, int32_t resultTagSH, int64_t resultHash) noexcept {
  this->resultSH = resultSH;
  this->resultTagSH = resultTagSH;
  this->resultHash = resultHash;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo::HAPI_PDG_WorkitemResultInfo() {}
