#pragma once
#include "BGLib/Polyglot/zzzz__GoogleDriveDownloadFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::Polyglot::GoogleDriveDownloadFormat::GoogleDriveDownloadFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::GoogleDriveDownloadFormat::GoogleDriveDownloadFormat() {}
constexpr ::BGLib::Polyglot::GoogleDriveDownloadFormat BGLib::Polyglot::GoogleDriveDownloadFormat::CSV{ static_cast<int32_t>(0x0) };
constexpr ::BGLib::Polyglot::GoogleDriveDownloadFormat BGLib::Polyglot::GoogleDriveDownloadFormat::TSV{ static_cast<int32_t>(0x1) };
