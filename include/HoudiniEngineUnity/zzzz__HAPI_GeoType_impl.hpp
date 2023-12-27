#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_GeoType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_GeoType::HAPI_GeoType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_GeoType::HAPI_GeoType() {}
constexpr ::HoudiniEngineUnity::HAPI_GeoType HoudiniEngineUnity::HAPI_GeoType::HAPI_GEOTYPE_INVALID{ static_cast<int32_t>(0xffffffff) };
constexpr ::HoudiniEngineUnity::HAPI_GeoType HoudiniEngineUnity::HAPI_GeoType::HAPI_GEOTYPE_DEFAULT{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_GeoType HoudiniEngineUnity::HAPI_GeoType::HAPI_GEOTYPE_INTERMEDIATE{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_GeoType HoudiniEngineUnity::HAPI_GeoType::HAPI_GEOTYPE_INPUT{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_GeoType HoudiniEngineUnity::HAPI_GeoType::HAPI_GEOTYPE_CURVE{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_GeoType HoudiniEngineUnity::HAPI_GeoType::HAPI_GEOTYPE_MAX{ static_cast<int32_t>(0x4) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
