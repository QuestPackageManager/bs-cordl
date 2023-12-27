#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_PDG_EventInfo_def.hpp"
// Ctor Parameters [CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "workitemId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "dependencyId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currentState", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastState",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eventType", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "msgSH", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventInfo::HAPI_PDG_EventInfo(int32_t nodeId, int32_t workitemId, int32_t dependencyId, int32_t currentState, int32_t lastState, int32_t eventType,
                                                                       int32_t msgSH) noexcept {
  this->nodeId = nodeId;
  this->workitemId = workitemId;
  this->dependencyId = dependencyId;
  this->currentState = currentState;
  this->lastState = lastState;
  this->eventType = eventType;
  this->msgSH = msgSH;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventInfo::HAPI_PDG_EventInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
