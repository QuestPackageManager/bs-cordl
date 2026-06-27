#pragma once
// IWYU pragma private; include "Oculus/Platform/PermissionType.hpp"
#include "Oculus/Platform/zzzz__PermissionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::PermissionType::PermissionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::PermissionType::PermissionType()   {
}
constexpr ::Oculus::Platform::PermissionType  Oculus::Platform::PermissionType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::PermissionType  Oculus::Platform::PermissionType::Microphone{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::PermissionType  Oculus::Platform::PermissionType::WriteExternalStorage{static_cast<int32_t>(0x2)};
