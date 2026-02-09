#pragma once
// IWYU pragma private; include "System/UriKind.hpp"
#include "System/zzzz__UriKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::UriKind::UriKind(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::UriKind::UriKind()   {
}
constexpr ::System::UriKind  System::UriKind::RelativeOrAbsolute{static_cast<int32_t>(0x0)};
constexpr ::System::UriKind  System::UriKind::Absolute{static_cast<int32_t>(0x1)};
constexpr ::System::UriKind  System::UriKind::Relative{static_cast<int32_t>(0x2)};
