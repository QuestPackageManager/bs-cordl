#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_MaterialInfo.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_MaterialInfo_def.hpp"
// Ctor Parameters [CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "exists", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "hasChanged", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_MaterialInfo::HAPI_MaterialInfo(int32_t nodeId, bool exists, bool hasChanged) noexcept {
  this->nodeId = nodeId;
  this->exists = exists;
  this->hasChanged = hasChanged;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_MaterialInfo::HAPI_MaterialInfo() {}
