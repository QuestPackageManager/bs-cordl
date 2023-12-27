#pragma once
#include "Polyglot/zzzz__GoogleDriveDownloadFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Polyglot::GoogleDriveDownloadFormat::GoogleDriveDownloadFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Polyglot::GoogleDriveDownloadFormat::GoogleDriveDownloadFormat() {}
constexpr ::Polyglot::GoogleDriveDownloadFormat Polyglot::GoogleDriveDownloadFormat::CSV{ static_cast<int32_t>(0x0) };
constexpr ::Polyglot::GoogleDriveDownloadFormat Polyglot::GoogleDriveDownloadFormat::TSV{ static_cast<int32_t>(0x1) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
