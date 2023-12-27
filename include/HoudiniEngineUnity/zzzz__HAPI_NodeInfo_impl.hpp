#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_NodeType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeType_def.hpp"
// Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "parentId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "nameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_NodeType", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "isValid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "totalCookCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uniqueHoudiniNodeId", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "internalNodePathSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "parmCount", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "parmIntValueCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "parmFloatValueCount", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "parmStringValueCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "parmChoiceCount", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "childNodeCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "inputCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "outputCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "createdPostAssetLoad", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "isTimeDependent", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_NodeInfo::HAPI_NodeInfo(int32_t id, int32_t parentId, int32_t nameSH, ::HoudiniEngineUnity::HAPI_NodeType type, bool isValid, int32_t totalCookCount,
                                                             int32_t uniqueHoudiniNodeId, int32_t internalNodePathSH, int32_t parmCount, int32_t parmIntValueCount, int32_t parmFloatValueCount,
                                                             int32_t parmStringValueCount, int32_t parmChoiceCount, int32_t childNodeCount, int32_t inputCount, int32_t outputCount,
                                                             bool createdPostAssetLoad, bool isTimeDependent) noexcept {
  this->id = id;
  this->parentId = parentId;
  this->nameSH = nameSH;
  this->type = type;
  this->isValid = isValid;
  this->totalCookCount = totalCookCount;
  this->uniqueHoudiniNodeId = uniqueHoudiniNodeId;
  this->internalNodePathSH = internalNodePathSH;
  this->parmCount = parmCount;
  this->parmIntValueCount = parmIntValueCount;
  this->parmFloatValueCount = parmFloatValueCount;
  this->parmStringValueCount = parmStringValueCount;
  this->parmChoiceCount = parmChoiceCount;
  this->childNodeCount = childNodeCount;
  this->inputCount = inputCount;
  this->outputCount = outputCount;
  this->createdPostAssetLoad = createdPostAssetLoad;
  this->isTimeDependent = isTimeDependent;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_NodeInfo::HAPI_NodeInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
