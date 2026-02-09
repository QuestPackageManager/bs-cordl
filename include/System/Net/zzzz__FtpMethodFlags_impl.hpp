#pragma once
// IWYU pragma private; include "System/Net/FtpMethodFlags.hpp"
#include "System/Net/zzzz__FtpMethodFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::FtpMethodFlags::FtpMethodFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::FtpMethodFlags::FtpMethodFlags()   {
}
constexpr ::System::Net::FtpMethodFlags  System::Net::FtpMethodFlags::None{static_cast<int32_t>(0x0)};
constexpr ::System::Net::FtpMethodFlags  System::Net::FtpMethodFlags::IsDownload{static_cast<int32_t>(0x1)};
constexpr ::System::Net::FtpMethodFlags  System::Net::FtpMethodFlags::IsUpload{static_cast<int32_t>(0x2)};
constexpr ::System::Net::FtpMethodFlags  System::Net::FtpMethodFlags::TakesParameter{static_cast<int32_t>(0x4)};
constexpr ::System::Net::FtpMethodFlags  System::Net::FtpMethodFlags::MayTakeParameter{static_cast<int32_t>(0x8)};
constexpr ::System::Net::FtpMethodFlags  System::Net::FtpMethodFlags::DoesNotTakeParameter{static_cast<int32_t>(0x10)};
constexpr ::System::Net::FtpMethodFlags  System::Net::FtpMethodFlags::ParameterIsDirectory{static_cast<int32_t>(0x20)};
constexpr ::System::Net::FtpMethodFlags  System::Net::FtpMethodFlags::ShouldParseForResponseUri{static_cast<int32_t>(0x40)};
constexpr ::System::Net::FtpMethodFlags  System::Net::FtpMethodFlags::HasHttpCommand{static_cast<int32_t>(0x80)};
constexpr ::System::Net::FtpMethodFlags  System::Net::FtpMethodFlags::MustChangeWorkingDirectoryToPath{static_cast<int32_t>(0x100)};
