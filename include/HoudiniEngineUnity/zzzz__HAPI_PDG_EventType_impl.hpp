#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_PDG_EventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EventType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EventType() {}
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_NULL{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_ADD{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_REMOVE{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_STATE_CHANGE{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_ADD_DEP{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_REMOVE_DEP{ static_cast<int32_t>(0x5) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_ADD_PARENT{ static_cast<int32_t>(0x6) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_REMOVE_PARENT{ static_cast<int32_t>(0x7) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_NODE_CLEAR{ static_cast<int32_t>(0x8) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_COOK_ERROR{ static_cast<int32_t>(0x9) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_COOK_WARNING{ static_cast<int32_t>(0xa) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_COOK_COMPLETE{ static_cast<int32_t>(0xb) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_DIRTY_START{ static_cast<int32_t>(0xc) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_DIRTY_STOP{ static_cast<int32_t>(0xd) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_DIRTY_ALL{ static_cast<int32_t>(0xe) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_UI_SELECT{ static_cast<int32_t>(0xf) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_NODE_CREATE{ static_cast<int32_t>(0x10) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_NODE_REMOVE{ static_cast<int32_t>(0x11) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_NODE_RENAME{ static_cast<int32_t>(0x12) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_NODE_CONNECT{ static_cast<int32_t>(0x13) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_NODE_DISCONNECT{ static_cast<int32_t>(0x14) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_SET_INT{ static_cast<int32_t>(0x15) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_SET_FLOAT{ static_cast<int32_t>(0x16) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_SET_STRING{ static_cast<int32_t>(0x17) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_SET_FILE{ static_cast<int32_t>(0x18) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_SET_PYOBJECT{ static_cast<int32_t>(0x19) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_SET_GEOMETRY{ static_cast<int32_t>(0x1a) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_MERGE{ static_cast<int32_t>(0x1b) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_RESULT{ static_cast<int32_t>(0x1c) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_PRIORITY{ static_cast<int32_t>(0x1d) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_COOK_START{ static_cast<int32_t>(0x1e) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_ADD_STATIC_ANCESTOR{ static_cast<int32_t>(0x1f) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_WORKITEM_REMOVE_STATIC_ANCESTOR{ static_cast<int32_t>(0x20) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_NODE_PROGRESS_UPDATE{ static_cast<int32_t>(0x21) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_BATCH_ITEM_INITIALIZED{ static_cast<int32_t>(0x22) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_ALL{ static_cast<int32_t>(0x23) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_LOG{ static_cast<int32_t>(0x24) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_SCHEDULER_ADDED{ static_cast<int32_t>(0x25) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_SCHEDULER_REMOVED{ static_cast<int32_t>(0x26) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_SET_SCHEDULER{ static_cast<int32_t>(0x27) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_EVENT_SERVICE_MANAGER_ALL{ static_cast<int32_t>(0x28) };
constexpr ::HoudiniEngineUnity::HAPI_PDG_EventType HoudiniEngineUnity::HAPI_PDG_EventType::HAPI_PDG_CONTEXT_EVENTS{ static_cast<int32_t>(0x29) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
