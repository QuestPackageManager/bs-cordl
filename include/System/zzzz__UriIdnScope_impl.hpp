#pragma once
// IWYU pragma private; include "System/UriIdnScope.hpp"
#include "System/zzzz__UriIdnScope_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::UriIdnScope::UriIdnScope(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::UriIdnScope::UriIdnScope()   {
}
constexpr ::System::UriIdnScope  System::UriIdnScope::None{static_cast<int32_t>(0x0)};
constexpr ::System::UriIdnScope  System::UriIdnScope::AllExceptIntranet{static_cast<int32_t>(0x1)};
constexpr ::System::UriIdnScope  System::UriIdnScope::All{static_cast<int32_t>(0x2)};
