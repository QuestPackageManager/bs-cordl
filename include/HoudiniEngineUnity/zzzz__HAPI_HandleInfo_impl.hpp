#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_HandleInfo.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_HandleInfo_def.hpp"
// Ctor Parameters [CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "typeNameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "bindingsCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_HandleInfo::HAPI_HandleInfo(int32_t nameSH, int32_t typeNameSH, int32_t bindingsCount) noexcept {
  this->nameSH = nameSH;
  this->typeNameSH = typeNameSH;
  this->bindingsCount = bindingsCount;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_HandleInfo::HAPI_HandleInfo() {}
