#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeTypeInfo_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_AttributeTypeInfo(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_AttributeTypeInfo() {}
constexpr ::HoudiniEngineUnity::HAPI_AttributeTypeInfo HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_INVALID{ static_cast<int32_t>(0xffffffff) };
constexpr ::HoudiniEngineUnity::HAPI_AttributeTypeInfo HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_NONE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_AttributeTypeInfo HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_POINT{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_AttributeTypeInfo HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_HPOINT{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_AttributeTypeInfo HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_VECTOR{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_AttributeTypeInfo HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_NORMAL{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HAPI_AttributeTypeInfo HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_COLOR{ static_cast<int32_t>(0x5) };
constexpr ::HoudiniEngineUnity::HAPI_AttributeTypeInfo HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_QUATERNION{ static_cast<int32_t>(0x6) };
constexpr ::HoudiniEngineUnity::HAPI_AttributeTypeInfo HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_MATRIX3{ static_cast<int32_t>(0x7) };
constexpr ::HoudiniEngineUnity::HAPI_AttributeTypeInfo HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_MATRIX{ static_cast<int32_t>(0x8) };
constexpr ::HoudiniEngineUnity::HAPI_AttributeTypeInfo HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_ST{ static_cast<int32_t>(0x9) };
constexpr ::HoudiniEngineUnity::HAPI_AttributeTypeInfo HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_HIDDEN{ static_cast<int32_t>(0xa) };
constexpr ::HoudiniEngineUnity::HAPI_AttributeTypeInfo HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_BOX2{ static_cast<int32_t>(0xb) };
constexpr ::HoudiniEngineUnity::HAPI_AttributeTypeInfo HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_BOX{ static_cast<int32_t>(0xc) };
constexpr ::HoudiniEngineUnity::HAPI_AttributeTypeInfo HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_TEXTURE{ static_cast<int32_t>(0xd) };
constexpr ::HoudiniEngineUnity::HAPI_AttributeTypeInfo HoudiniEngineUnity::HAPI_AttributeTypeInfo::HAPI_ATTRIBUTE_TYPE_MAX{ static_cast<int32_t>(0xe) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
