#pragma once
// IWYU pragma private; include "System/UriSyntaxFlags.hpp"
#include "System/zzzz__UriSyntaxFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::UriSyntaxFlags::UriSyntaxFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::UriSyntaxFlags::UriSyntaxFlags()   {
}
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::None{static_cast<int32_t>(0x0)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::MustHaveAuthority{static_cast<int32_t>(0x1)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::OptionalAuthority{static_cast<int32_t>(0x2)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::MayHaveUserInfo{static_cast<int32_t>(0x4)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::MayHavePort{static_cast<int32_t>(0x8)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::MayHavePath{static_cast<int32_t>(0x10)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::MayHaveQuery{static_cast<int32_t>(0x20)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::MayHaveFragment{static_cast<int32_t>(0x40)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::AllowEmptyHost{static_cast<int32_t>(0x80)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::AllowUncHost{static_cast<int32_t>(0x100)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::AllowDnsHost{static_cast<int32_t>(0x200)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::AllowIPv4Host{static_cast<int32_t>(0x400)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::AllowIPv6Host{static_cast<int32_t>(0x800)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::AllowAnInternetHost{static_cast<int32_t>(0xe00)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::AllowAnyOtherHost{static_cast<int32_t>(0x1000)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::FileLikeUri{static_cast<int32_t>(0x2000)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::MailToLikeUri{static_cast<int32_t>(0x4000)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::V1_UnknownUri{static_cast<int32_t>(0x10000)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::SimpleUserSyntax{static_cast<int32_t>(0x20000)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::BuiltInSyntax{static_cast<int32_t>(0x40000)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::ParserSchemeOnly{static_cast<int32_t>(0x80000)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::AllowDOSPath{static_cast<int32_t>(0x100000)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::PathIsRooted{static_cast<int32_t>(0x200000)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::ConvertPathSlashes{static_cast<int32_t>(0x400000)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::CompressPath{static_cast<int32_t>(0x800000)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::CanonicalizeAsFilePath{static_cast<int32_t>(0x1000000)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::UnEscapeDotsAndSlashes{static_cast<int32_t>(0x2000000)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::AllowIdn{static_cast<int32_t>(0x4000000)};
constexpr ::System::UriSyntaxFlags  System::UriSyntaxFlags::AllowIriParsing{static_cast<int32_t>(0x10000000)};
