#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_GenerateOptions.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GenerateOptions_def.hpp"
// Ctor Parameters [CppParam { name: "_generateUVs", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_generateTangents", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_generateNormals", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_useLODGroups", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_splitPoints", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HEU_GenerateOptions::HEU_GenerateOptions(bool _generateUVs, bool _generateTangents, bool _generateNormals, bool _useLODGroups, bool _splitPoints) noexcept {
  this->_generateUVs = _generateUVs;
  this->_generateTangents = _generateTangents;
  this->_generateNormals = _generateNormals;
  this->_useLODGroups = _useLODGroups;
  this->_splitPoints = _splitPoints;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_GenerateOptions::HEU_GenerateOptions() {}
