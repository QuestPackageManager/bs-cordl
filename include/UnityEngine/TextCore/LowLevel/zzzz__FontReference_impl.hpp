#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/FontReference.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__FontReference_def.hpp"
// Ctor Parameters [CppParam { name: "familyName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "styleName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "faceIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::LowLevel::FontReference::FontReference(::StringW  familyName, ::StringW  styleName, int32_t  faceIndex, ::StringW  filePath) noexcept  {
this->familyName = familyName;
this->styleName = styleName;
this->faceIndex = faceIndex;
this->filePath = filePath;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::LowLevel::FontReference::FontReference()   {
}
