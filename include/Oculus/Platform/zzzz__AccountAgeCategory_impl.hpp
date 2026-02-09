#pragma once
// IWYU pragma private; include "Oculus/Platform/AccountAgeCategory.hpp"
#include "Oculus/Platform/zzzz__AccountAgeCategory_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::AccountAgeCategory::AccountAgeCategory(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::AccountAgeCategory::AccountAgeCategory()   {
}
constexpr ::Oculus::Platform::AccountAgeCategory  Oculus::Platform::AccountAgeCategory::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::AccountAgeCategory  Oculus::Platform::AccountAgeCategory::Ch{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::AccountAgeCategory  Oculus::Platform::AccountAgeCategory::Tn{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::AccountAgeCategory  Oculus::Platform::AccountAgeCategory::Ad{static_cast<int32_t>(0x3)};
