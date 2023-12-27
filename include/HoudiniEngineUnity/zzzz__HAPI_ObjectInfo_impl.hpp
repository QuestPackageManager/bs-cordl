#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_ObjectInfo_def.hpp"
// Ctor Parameters [CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "objectInstancePathSH", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "hasTransformChanged", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "haveGeosChanged", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "isVisible", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isInstancer", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isInstanced", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "geoCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "objectToInstanceId", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_ObjectInfo::HAPI_ObjectInfo(int32_t nameSH, int32_t objectInstancePathSH, bool hasTransformChanged, bool haveGeosChanged, bool isVisible, bool isInstancer,
                                                                 bool isInstanced, int32_t geoCount, int32_t nodeId, int32_t objectToInstanceId) noexcept {
  this->nameSH = nameSH;
  this->objectInstancePathSH = objectInstancePathSH;
  this->hasTransformChanged = hasTransformChanged;
  this->haveGeosChanged = haveGeosChanged;
  this->isVisible = isVisible;
  this->isInstancer = isInstancer;
  this->isInstanced = isInstanced;
  this->geoCount = geoCount;
  this->nodeId = nodeId;
  this->objectToInstanceId = objectToInstanceId;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_ObjectInfo::HAPI_ObjectInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
