#pragma once
// IWYU pragma private; include "Oculus/Platform/SdkAccountType.hpp"
#include "Oculus/Platform/zzzz__SdkAccountType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::SdkAccountType::SdkAccountType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::SdkAccountType::SdkAccountType()   {
}
constexpr ::Oculus::Platform::SdkAccountType  Oculus::Platform::SdkAccountType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::SdkAccountType  Oculus::Platform::SdkAccountType::Oculus{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::SdkAccountType  Oculus::Platform::SdkAccountType::FacebookGameroom{static_cast<int32_t>(0x2)};
