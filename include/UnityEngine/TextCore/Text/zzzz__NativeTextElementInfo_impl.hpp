#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/NativeTextElementInfo.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextCoreVertex_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__NativeTextElementInfo_def.hpp"
// Ctor Parameters [CppParam { name: "glyphID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomLeft", ty: "::UnityEngine::TextCore::Text::TextCoreVertex", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "topLeft", ty: "::UnityEngine::TextCore::Text::TextCoreVertex", modifiers: "", def_value: Some("{}") }, CppParam { name: "topRight", ty:
// "::UnityEngine::TextCore::Text::TextCoreVertex", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomRight", ty: "::UnityEngine::TextCore::Text::TextCoreVertex", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::NativeTextElementInfo::NativeTextElementInfo(int32_t glyphID, ::UnityEngine::TextCore::Text::TextCoreVertex bottomLeft,
                                                                                      ::UnityEngine::TextCore::Text::TextCoreVertex topLeft, ::UnityEngine::TextCore::Text::TextCoreVertex topRight,
                                                                                      ::UnityEngine::TextCore::Text::TextCoreVertex bottomRight) noexcept {
  this->glyphID = glyphID;
  this->bottomLeft = bottomLeft;
  this->topLeft = topLeft;
  this->topRight = topRight;
  this->bottomRight = bottomRight;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::NativeTextElementInfo::NativeTextElementInfo() {}
