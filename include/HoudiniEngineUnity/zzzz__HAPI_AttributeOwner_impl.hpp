#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_AttributeOwner.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeOwner_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner::HAPI_AttributeOwner(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner::HAPI_AttributeOwner() {}
constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner HoudiniEngineUnity::HAPI_AttributeOwner::HAPI_ATTROWNER_INVALID{ static_cast<int32_t>(0xffffffff) };
constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner HoudiniEngineUnity::HAPI_AttributeOwner::HAPI_ATTROWNER_VERTEX{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner HoudiniEngineUnity::HAPI_AttributeOwner::HAPI_ATTROWNER_POINT{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner HoudiniEngineUnity::HAPI_AttributeOwner::HAPI_ATTROWNER_PRIM{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner HoudiniEngineUnity::HAPI_AttributeOwner::HAPI_ATTROWNER_DETAIL{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner HoudiniEngineUnity::HAPI_AttributeOwner::HAPI_ATTROWNER_MAX{ static_cast<int32_t>(0x4) };
