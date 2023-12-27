#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_PartType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_PartType::HAPI_PartType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_PartType::HAPI_PartType() {}
constexpr ::HoudiniEngineUnity::HAPI_PartType HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_INVALID{ static_cast<int32_t>(0xffffffff) };
constexpr ::HoudiniEngineUnity::HAPI_PartType HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_MESH{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_PartType HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_CURVE{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_PartType HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_VOLUME{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_PartType HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_INSTANCER{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_PartType HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_BOX{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HAPI_PartType HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_SPHERE{ static_cast<int32_t>(0x5) };
constexpr ::HoudiniEngineUnity::HAPI_PartType HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_MAX{ static_cast<int32_t>(0x6) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
