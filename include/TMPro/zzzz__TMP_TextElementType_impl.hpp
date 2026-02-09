#pragma once
// IWYU pragma private; include "TMPro/TMP_TextElementType.hpp"
#include "TMPro/zzzz__TMP_TextElementType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TMP_TextElementType::TMP_TextElementType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::TMP_TextElementType::TMP_TextElementType()   {
}
constexpr ::TMPro::TMP_TextElementType  TMPro::TMP_TextElementType::Character{static_cast<int32_t>(0x0)};
constexpr ::TMPro::TMP_TextElementType  TMPro::TMP_TextElementType::Sprite{static_cast<int32_t>(0x1)};
