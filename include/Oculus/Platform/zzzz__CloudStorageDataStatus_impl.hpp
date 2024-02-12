#pragma once
#include "Oculus/Platform/zzzz__CloudStorageDataStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::CloudStorageDataStatus::CloudStorageDataStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::CloudStorageDataStatus::CloudStorageDataStatus() {}
constexpr ::Oculus::Platform::CloudStorageDataStatus Oculus::Platform::CloudStorageDataStatus::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::Oculus::Platform::CloudStorageDataStatus Oculus::Platform::CloudStorageDataStatus::InSync{ static_cast<int32_t>(0x1) };
constexpr ::Oculus::Platform::CloudStorageDataStatus Oculus::Platform::CloudStorageDataStatus::NeedsDownload{ static_cast<int32_t>(0x2) };
constexpr ::Oculus::Platform::CloudStorageDataStatus Oculus::Platform::CloudStorageDataStatus::RemoteDownloading{ static_cast<int32_t>(0x3) };
constexpr ::Oculus::Platform::CloudStorageDataStatus Oculus::Platform::CloudStorageDataStatus::NeedsUpload{ static_cast<int32_t>(0x4) };
constexpr ::Oculus::Platform::CloudStorageDataStatus Oculus::Platform::CloudStorageDataStatus::LocalUploading{ static_cast<int32_t>(0x5) };
constexpr ::Oculus::Platform::CloudStorageDataStatus Oculus::Platform::CloudStorageDataStatus::InConflict{ static_cast<int32_t>(0x6) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
