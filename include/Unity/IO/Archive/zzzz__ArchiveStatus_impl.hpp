#pragma once
// IWYU pragma private; include "Unity/IO/Archive/ArchiveStatus.hpp"
#include "Unity/IO/Archive/zzzz__ArchiveStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::IO::Archive::ArchiveStatus::ArchiveStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::IO::Archive::ArchiveStatus::ArchiveStatus()   {
}
constexpr ::Unity::IO::Archive::ArchiveStatus  Unity::IO::Archive::ArchiveStatus::InProgress{static_cast<int32_t>(0x0)};
constexpr ::Unity::IO::Archive::ArchiveStatus  Unity::IO::Archive::ArchiveStatus::Complete{static_cast<int32_t>(0x1)};
constexpr ::Unity::IO::Archive::ArchiveStatus  Unity::IO::Archive::ArchiveStatus::Failed{static_cast<int32_t>(0x2)};
