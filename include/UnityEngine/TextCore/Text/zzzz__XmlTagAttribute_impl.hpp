#pragma once
#include "UnityEngine/TextCore/Text/zzzz__TagValueType_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__XmlTagAttribute_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TagValueType_def.hpp"
// Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueType", ty: "::UnityEngine::TextCore::Text::TagValueType", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "valueStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueLength", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "valueHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::XmlTagAttribute::XmlTagAttribute(int32_t nameHashCode, ::UnityEngine::TextCore::Text::TagValueType valueType, int32_t valueStartIndex, int32_t valueLength,
                                                                          int32_t valueHashCode) noexcept {
  this->nameHashCode = nameHashCode;
  this->valueType = valueType;
  this->valueStartIndex = valueStartIndex;
  this->valueLength = valueLength;
  this->valueHashCode = valueHashCode;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::XmlTagAttribute::XmlTagAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
