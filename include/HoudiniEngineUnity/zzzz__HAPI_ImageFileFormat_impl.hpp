#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_ImageFileFormat_def.hpp"
// Ctor Parameters [CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "descriptionSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "defaultExtensionSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_ImageFileFormat::HAPI_ImageFileFormat(int32_t nameSH, int32_t descriptionSH, int32_t defaultExtensionSH) noexcept {
  this->nameSH = nameSH;
  this->descriptionSH = descriptionSH;
  this->defaultExtensionSH = defaultExtensionSH;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_ImageFileFormat::HAPI_ImageFileFormat() {}
