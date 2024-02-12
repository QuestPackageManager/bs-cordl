#pragma once
#include "Oculus/Platform/zzzz__CloudStorageUpdateStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::CloudStorageUpdateStatus::CloudStorageUpdateStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::CloudStorageUpdateStatus::CloudStorageUpdateStatus() {}
constexpr ::Oculus::Platform::CloudStorageUpdateStatus Oculus::Platform::CloudStorageUpdateStatus::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::Oculus::Platform::CloudStorageUpdateStatus Oculus::Platform::CloudStorageUpdateStatus::Ok{ static_cast<int32_t>(0x1) };
constexpr ::Oculus::Platform::CloudStorageUpdateStatus Oculus::Platform::CloudStorageUpdateStatus::BetterVersionStored{ static_cast<int32_t>(0x2) };
constexpr ::Oculus::Platform::CloudStorageUpdateStatus Oculus::Platform::CloudStorageUpdateStatus::ManualMergeRequired{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
