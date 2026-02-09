#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TagValueType.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TagValueType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::TagValueType::TagValueType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TagValueType::TagValueType()   {
}
constexpr ::UnityEngine::TextCore::Text::TagValueType  UnityEngine::TextCore::Text::TagValueType::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TextCore::Text::TagValueType  UnityEngine::TextCore::Text::TagValueType::NumericalValue{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TextCore::Text::TagValueType  UnityEngine::TextCore::Text::TagValueType::StringValue{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TextCore::Text::TagValueType  UnityEngine::TextCore::Text::TagValueType::ColorValue{static_cast<int32_t>(0x4)};
