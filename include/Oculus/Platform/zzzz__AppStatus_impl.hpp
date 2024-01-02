#pragma once
#include "Oculus/Platform/zzzz__AppStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::AppStatus::AppStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::AppStatus::AppStatus() {}
constexpr ::Oculus::Platform::AppStatus Oculus::Platform::AppStatus::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::Oculus::Platform::AppStatus Oculus::Platform::AppStatus::Entitled{ static_cast<int32_t>(0x1) };
constexpr ::Oculus::Platform::AppStatus Oculus::Platform::AppStatus::DownloadQueued{ static_cast<int32_t>(0x2) };
constexpr ::Oculus::Platform::AppStatus Oculus::Platform::AppStatus::Downloading{ static_cast<int32_t>(0x3) };
constexpr ::Oculus::Platform::AppStatus Oculus::Platform::AppStatus::Installing{ static_cast<int32_t>(0x4) };
constexpr ::Oculus::Platform::AppStatus Oculus::Platform::AppStatus::Installed{ static_cast<int32_t>(0x5) };
constexpr ::Oculus::Platform::AppStatus Oculus::Platform::AppStatus::Uninstalling{ static_cast<int32_t>(0x6) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
