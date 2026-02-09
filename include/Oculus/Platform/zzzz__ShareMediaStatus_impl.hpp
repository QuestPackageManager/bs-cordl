#pragma once
// IWYU pragma private; include "Oculus/Platform/ShareMediaStatus.hpp"
#include "Oculus/Platform/zzzz__ShareMediaStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::ShareMediaStatus::ShareMediaStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::ShareMediaStatus::ShareMediaStatus()   {
}
constexpr ::Oculus::Platform::ShareMediaStatus  Oculus::Platform::ShareMediaStatus::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::ShareMediaStatus  Oculus::Platform::ShareMediaStatus::Shared{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::ShareMediaStatus  Oculus::Platform::ShareMediaStatus::Canceled{static_cast<int32_t>(0x2)};
