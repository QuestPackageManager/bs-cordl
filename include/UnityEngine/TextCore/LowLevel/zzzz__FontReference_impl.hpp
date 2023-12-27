#pragma once
#include "UnityEngine/TextCore/LowLevel/zzzz__FontReference_def.hpp"
// Ctor Parameters [CppParam { name: "familyName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "styleName", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "faceIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::TextCore::LowLevel::FontReference::FontReference(::StringW familyName, ::StringW styleName, int32_t faceIndex, ::StringW filePath) noexcept {
  this->familyName = familyName;
  this->styleName = styleName;
  this->faceIndex = faceIndex;
  this->filePath = filePath;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::LowLevel::FontReference::FontReference() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
