#pragma once
// IWYU pragma private; include "System/Text/NormalizationCheck.hpp"
#include "System/Text/zzzz__NormalizationCheck_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Text::NormalizationCheck::NormalizationCheck(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Text::NormalizationCheck::NormalizationCheck()   {
}
constexpr ::System::Text::NormalizationCheck  System::Text::NormalizationCheck::Yes{static_cast<int32_t>(0x0)};
constexpr ::System::Text::NormalizationCheck  System::Text::NormalizationCheck::No{static_cast<int32_t>(0x1)};
constexpr ::System::Text::NormalizationCheck  System::Text::NormalizationCheck::Maybe{static_cast<int32_t>(0x2)};
