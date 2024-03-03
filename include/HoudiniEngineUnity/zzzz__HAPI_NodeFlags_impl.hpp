#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_NodeFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NodeFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NodeFlags() {}
constexpr ::HoudiniEngineUnity::HAPI_NodeFlags HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_ANY{ static_cast<int32_t>(0xffffffff) };
constexpr ::HoudiniEngineUnity::HAPI_NodeFlags HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_NONE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_NodeFlags HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_DISPLAY{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_NodeFlags HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_RENDER{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_NodeFlags HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_TEMPLATED{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HAPI_NodeFlags HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_LOCKED{ static_cast<int32_t>(0x8) };
constexpr ::HoudiniEngineUnity::HAPI_NodeFlags HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_EDITABLE{ static_cast<int32_t>(0x10) };
constexpr ::HoudiniEngineUnity::HAPI_NodeFlags HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_BYPASS{ static_cast<int32_t>(0x20) };
constexpr ::HoudiniEngineUnity::HAPI_NodeFlags HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_NETWORK{ static_cast<int32_t>(0x40) };
constexpr ::HoudiniEngineUnity::HAPI_NodeFlags HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_OBJ_GEOMETRY{ static_cast<int32_t>(0x80) };
constexpr ::HoudiniEngineUnity::HAPI_NodeFlags HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_OBJ_CAMERA{ static_cast<int32_t>(0x100) };
constexpr ::HoudiniEngineUnity::HAPI_NodeFlags HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_OBJ_LIGHT{ static_cast<int32_t>(0x200) };
constexpr ::HoudiniEngineUnity::HAPI_NodeFlags HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_OBJ_SUBNET{ static_cast<int32_t>(0x400) };
constexpr ::HoudiniEngineUnity::HAPI_NodeFlags HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_SOP_CURVE{ static_cast<int32_t>(0x800) };
constexpr ::HoudiniEngineUnity::HAPI_NodeFlags HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_SOP_GUIDE{ static_cast<int32_t>(0x1000) };
constexpr ::HoudiniEngineUnity::HAPI_NodeFlags HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_TOP_NONSCHEDULER{ static_cast<int32_t>(0x2000) };
constexpr ::HoudiniEngineUnity::HAPI_NodeFlags HoudiniEngineUnity::HAPI_NodeFlags::HAPI_NODEFLAGS_NON_BYPASS{ static_cast<int32_t>(0x4000) };
