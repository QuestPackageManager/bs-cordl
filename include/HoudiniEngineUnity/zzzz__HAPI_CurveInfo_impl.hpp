#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_CurveInfo.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_CurveType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_CurveInfo_def.hpp"
// Ctor Parameters [CppParam { name: "curveType", ty: "::HoudiniEngineUnity::HAPI_CurveType", modifiers: "", def_value: Some("{}") }, CppParam { name: "curveCount", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "knotCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "isPeriodic", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isRational", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "order", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasKnots", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_CurveInfo::HAPI_CurveInfo(::HoudiniEngineUnity::HAPI_CurveType curveType, int32_t curveCount, int32_t vertexCount, int32_t knotCount, bool isPeriodic,
                                                               bool isRational, int32_t order, bool hasKnots) noexcept {
  this->curveType = curveType;
  this->curveCount = curveCount;
  this->vertexCount = vertexCount;
  this->knotCount = knotCount;
  this->isPeriodic = isPeriodic;
  this->isRational = isRational;
  this->order = order;
  this->hasKnots = hasKnots;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_CurveInfo::HAPI_CurveInfo() {}
