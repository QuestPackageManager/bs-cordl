#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Oculus/OculusPlatformResponseErrorCode.hpp"
#include "OculusStudios/Platform/Oculus/zzzz__OculusPlatformResponseErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode::OculusPlatformResponseErrorCode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode::OculusPlatformResponseErrorCode() {}
constexpr ::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode::UNKNOWN_ERROR{ static_cast<int32_t>(0x1) };
constexpr ::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode::AUTHENTICATION_ERROR{ static_cast<int32_t>(0x2) };
constexpr ::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode::NETWORK_ERROR{ static_cast<int32_t>(0x3) };
constexpr ::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode::STORE_INSTALLATION_ERROR{ static_cast<int32_t>(0x4) };
constexpr ::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode::CALLER_NOT_SIGNED{ static_cast<int32_t>(0x5) };
constexpr ::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode::UNKNOWN_SERVER_ERROR{ static_cast<int32_t>(0x6) };
constexpr ::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode::PERMISSIONS_FAILURE{ static_cast<int32_t>(0x7) };
