#pragma once
// IWYU pragma private; include "Oculus/Platform/AppAgeCategory.hpp"
#include "Oculus/Platform/zzzz__AppAgeCategory_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::AppAgeCategory::AppAgeCategory(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::AppAgeCategory::AppAgeCategory()   {
}
constexpr ::Oculus::Platform::AppAgeCategory  Oculus::Platform::AppAgeCategory::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::AppAgeCategory  Oculus::Platform::AppAgeCategory::Ch{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::AppAgeCategory  Oculus::Platform::AppAgeCategory::Nch{static_cast<int32_t>(0x2)};
