#pragma once
// IWYU pragma private; include "TMPro/CaretPosition.hpp"
#include "TMPro/zzzz__CaretPosition_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::CaretPosition::CaretPosition(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::CaretPosition::CaretPosition()   {
}
constexpr ::TMPro::CaretPosition  TMPro::CaretPosition::None{static_cast<int32_t>(0x0)};
constexpr ::TMPro::CaretPosition  TMPro::CaretPosition::Left{static_cast<int32_t>(0x1)};
constexpr ::TMPro::CaretPosition  TMPro::CaretPosition::Right{static_cast<int32_t>(0x2)};
