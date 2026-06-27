#pragma once
// IWYU pragma private; include "System/DateTimeKind.hpp"
#include "System/zzzz__DateTimeKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DateTimeKind::DateTimeKind(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::DateTimeKind::DateTimeKind()   {
}
constexpr ::System::DateTimeKind  System::DateTimeKind::Unspecified{static_cast<int32_t>(0x0)};
constexpr ::System::DateTimeKind  System::DateTimeKind::Utc{static_cast<int32_t>(0x1)};
constexpr ::System::DateTimeKind  System::DateTimeKind::Local{static_cast<int32_t>(0x2)};
