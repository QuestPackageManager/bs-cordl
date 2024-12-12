#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_CookOptions.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PackedPrimInstancingMode_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_CookOptions_def.hpp"
// Ctor Parameters [CppParam { name: "splitGeosByGroup", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "splitGeosByAttribute", ty: "bool", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "splitAttrSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxVerticesPerPrimitive", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "refineCurveToLinear", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "curveRefineLOD", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "clearErrorsAndWarnings", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "cookTemplatedGeos", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "splitPointsByVertexAttributes", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "packedPrimInstancingMode", ty: "::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "handleBoxPartTypes", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "handleSpherePartTypes", ty: "bool", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "checkPartChanges", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "cacheMeshTopology", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "extraFlags", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_CookOptions::HAPI_CookOptions(bool splitGeosByGroup, bool splitGeosByAttribute, int32_t splitAttrSH, int32_t maxVerticesPerPrimitive, bool refineCurveToLinear,
                                                                   float_t curveRefineLOD, bool clearErrorsAndWarnings, bool cookTemplatedGeos, bool splitPointsByVertexAttributes,
                                                                   ::HoudiniEngineUnity::HAPI_PackedPrimInstancingMode packedPrimInstancingMode, bool handleBoxPartTypes, bool handleSpherePartTypes,
                                                                   bool checkPartChanges, bool cacheMeshTopology, int32_t extraFlags) noexcept {
  this->splitGeosByGroup = splitGeosByGroup;
  this->splitGeosByAttribute = splitGeosByAttribute;
  this->splitAttrSH = splitAttrSH;
  this->maxVerticesPerPrimitive = maxVerticesPerPrimitive;
  this->refineCurveToLinear = refineCurveToLinear;
  this->curveRefineLOD = curveRefineLOD;
  this->clearErrorsAndWarnings = clearErrorsAndWarnings;
  this->cookTemplatedGeos = cookTemplatedGeos;
  this->splitPointsByVertexAttributes = splitPointsByVertexAttributes;
  this->packedPrimInstancingMode = packedPrimInstancingMode;
  this->handleBoxPartTypes = handleBoxPartTypes;
  this->handleSpherePartTypes = handleSpherePartTypes;
  this->checkPartChanges = checkPartChanges;
  this->cacheMeshTopology = cacheMeshTopology;
  this->extraFlags = extraFlags;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_CookOptions::HAPI_CookOptions() {}
