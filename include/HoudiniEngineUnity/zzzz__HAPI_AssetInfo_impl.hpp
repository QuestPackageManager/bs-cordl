#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_AssetInfo_def.hpp"
// Ctor Parameters [CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "objectNodeId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "hasEverCooked", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "labelSH", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "filePathSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "versionSH", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "fullOpNameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "helpTextSH", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "helpURLSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "objectCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "handleCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "transformInputCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "geoInputCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "geoOutputCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "haveObjectsChanged", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "haveMaterialsChanged", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_AssetInfo::HAPI_AssetInfo(int32_t nodeId, int32_t objectNodeId, bool hasEverCooked, int32_t nameSH, int32_t labelSH, int32_t filePathSH, int32_t versionSH,
                                                               int32_t fullOpNameSH, int32_t helpTextSH, int32_t helpURLSH, int32_t objectCount, int32_t handleCount, int32_t transformInputCount,
                                                               int32_t geoInputCount, int32_t geoOutputCount, bool haveObjectsChanged, bool haveMaterialsChanged) noexcept {
  this->nodeId = nodeId;
  this->objectNodeId = objectNodeId;
  this->hasEverCooked = hasEverCooked;
  this->nameSH = nameSH;
  this->labelSH = labelSH;
  this->filePathSH = filePathSH;
  this->versionSH = versionSH;
  this->fullOpNameSH = fullOpNameSH;
  this->helpTextSH = helpTextSH;
  this->helpURLSH = helpURLSH;
  this->objectCount = objectCount;
  this->handleCount = handleCount;
  this->transformInputCount = transformInputCount;
  this->geoInputCount = geoInputCount;
  this->geoOutputCount = geoOutputCount;
  this->haveObjectsChanged = haveObjectsChanged;
  this->haveMaterialsChanged = haveMaterialsChanged;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_AssetInfo::HAPI_AssetInfo() {}
