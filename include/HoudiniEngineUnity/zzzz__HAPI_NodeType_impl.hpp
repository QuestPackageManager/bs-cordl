#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_NodeType.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_NodeType::HAPI_NodeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_NodeType::HAPI_NodeType() {}
constexpr ::HoudiniEngineUnity::HAPI_NodeType HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_ANY{ static_cast<int32_t>(0xffffffff) };
constexpr ::HoudiniEngineUnity::HAPI_NodeType HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_NONE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_NodeType HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_OBJ{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_NodeType HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_SOP{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_NodeType HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_CHOP{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HAPI_NodeType HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_ROP{ static_cast<int32_t>(0x8) };
constexpr ::HoudiniEngineUnity::HAPI_NodeType HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_SHOP{ static_cast<int32_t>(0x10) };
constexpr ::HoudiniEngineUnity::HAPI_NodeType HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_COP{ static_cast<int32_t>(0x20) };
constexpr ::HoudiniEngineUnity::HAPI_NodeType HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_VOP{ static_cast<int32_t>(0x40) };
constexpr ::HoudiniEngineUnity::HAPI_NodeType HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_DOP{ static_cast<int32_t>(0x80) };
constexpr ::HoudiniEngineUnity::HAPI_NodeType HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_TOP{ static_cast<int32_t>(0x100) };
