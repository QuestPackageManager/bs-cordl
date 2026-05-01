#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/MetadataValue.hpp"
#include "UnityEngine/Rendering/zzzz__MetadataValue_def.hpp"
// Ctor Parameters [CppParam { name: "NameID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Value", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::MetadataValue::MetadataValue(int32_t NameID, uint32_t Value) noexcept {
  this->NameID = NameID;
  this->Value = Value;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::MetadataValue::MetadataValue() {}
