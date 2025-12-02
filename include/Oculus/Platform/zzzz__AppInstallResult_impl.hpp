#pragma once
// IWYU pragma private; include "Oculus/Platform/AppInstallResult.hpp"
#include "Oculus/Platform/zzzz__AppInstallResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::AppInstallResult::AppInstallResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::AppInstallResult::AppInstallResult() {}
constexpr ::Oculus::Platform::AppInstallResult Oculus::Platform::AppInstallResult::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::Oculus::Platform::AppInstallResult Oculus::Platform::AppInstallResult::LowStorage{ static_cast<int32_t>(0x1) };
constexpr ::Oculus::Platform::AppInstallResult Oculus::Platform::AppInstallResult::NetworkError{ static_cast<int32_t>(0x2) };
constexpr ::Oculus::Platform::AppInstallResult Oculus::Platform::AppInstallResult::DuplicateRequest{ static_cast<int32_t>(0x3) };
constexpr ::Oculus::Platform::AppInstallResult Oculus::Platform::AppInstallResult::InstallerError{ static_cast<int32_t>(0x4) };
constexpr ::Oculus::Platform::AppInstallResult Oculus::Platform::AppInstallResult::UserCancelled{ static_cast<int32_t>(0x5) };
constexpr ::Oculus::Platform::AppInstallResult Oculus::Platform::AppInstallResult::AuthorizationError{ static_cast<int32_t>(0x6) };
constexpr ::Oculus::Platform::AppInstallResult Oculus::Platform::AppInstallResult::Success{ static_cast<int32_t>(0x7) };
