#pragma once
// IWYU pragma private; include "Oculus/Platform/UserOrdering.hpp"
#include "Oculus/Platform/zzzz__UserOrdering_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::UserOrdering::UserOrdering(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::UserOrdering::UserOrdering()   {
}
constexpr ::Oculus::Platform::UserOrdering  Oculus::Platform::UserOrdering::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::UserOrdering  Oculus::Platform::UserOrdering::None{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::UserOrdering  Oculus::Platform::UserOrdering::PresenceAlphabetical{static_cast<int32_t>(0x2)};
