#pragma once
// IWYU pragma private; include "Oculus/Platform/PlatformInitializeResult.hpp"
#include "Oculus/Platform/zzzz__PlatformInitializeResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::PlatformInitializeResult::PlatformInitializeResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::PlatformInitializeResult::PlatformInitializeResult()   {
}
constexpr ::Oculus::Platform::PlatformInitializeResult  Oculus::Platform::PlatformInitializeResult::Success{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::PlatformInitializeResult  Oculus::Platform::PlatformInitializeResult::Uninitialized{static_cast<int32_t>(0xffffffff)};
constexpr ::Oculus::Platform::PlatformInitializeResult  Oculus::Platform::PlatformInitializeResult::PreLoaded{static_cast<int32_t>(0xfffffffe)};
constexpr ::Oculus::Platform::PlatformInitializeResult  Oculus::Platform::PlatformInitializeResult::FileInvalid{static_cast<int32_t>(0xfffffffd)};
constexpr ::Oculus::Platform::PlatformInitializeResult  Oculus::Platform::PlatformInitializeResult::SignatureInvalid{static_cast<int32_t>(0xfffffffc)};
constexpr ::Oculus::Platform::PlatformInitializeResult  Oculus::Platform::PlatformInitializeResult::UnableToVerify{static_cast<int32_t>(0xfffffffb)};
constexpr ::Oculus::Platform::PlatformInitializeResult  Oculus::Platform::PlatformInitializeResult::VersionMismatch{static_cast<int32_t>(0xfffffffa)};
constexpr ::Oculus::Platform::PlatformInitializeResult  Oculus::Platform::PlatformInitializeResult::Unknown{static_cast<int32_t>(0xfffffff9)};
constexpr ::Oculus::Platform::PlatformInitializeResult  Oculus::Platform::PlatformInitializeResult::InvalidCredentials{static_cast<int32_t>(0xfffffff8)};
constexpr ::Oculus::Platform::PlatformInitializeResult  Oculus::Platform::PlatformInitializeResult::NotEntitled{static_cast<int32_t>(0xfffffff7)};
