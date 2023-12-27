#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_CurveType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_CurveType::HAPI_CurveType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_CurveType::HAPI_CurveType() {}
constexpr ::HoudiniEngineUnity::HAPI_CurveType HoudiniEngineUnity::HAPI_CurveType::HAPI_CURVETYPE_INVALID{ static_cast<int32_t>(0xffffffff) };
constexpr ::HoudiniEngineUnity::HAPI_CurveType HoudiniEngineUnity::HAPI_CurveType::HAPI_CURVETYPE_LINEAR{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_CurveType HoudiniEngineUnity::HAPI_CurveType::HAPI_CURVETYPE_NURBS{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_CurveType HoudiniEngineUnity::HAPI_CurveType::HAPI_CURVETYPE_BEZIER{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_CurveType HoudiniEngineUnity::HAPI_CurveType::HAPI_CURVETYPE_MAX{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
