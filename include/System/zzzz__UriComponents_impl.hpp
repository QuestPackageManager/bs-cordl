#pragma once
// IWYU pragma private; include "System/UriComponents.hpp"
#include "System/zzzz__UriComponents_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::UriComponents::UriComponents(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::UriComponents::UriComponents()   {
}
constexpr ::System::UriComponents  System::UriComponents::Scheme{static_cast<int32_t>(0x1)};
constexpr ::System::UriComponents  System::UriComponents::UserInfo{static_cast<int32_t>(0x2)};
constexpr ::System::UriComponents  System::UriComponents::Host{static_cast<int32_t>(0x4)};
constexpr ::System::UriComponents  System::UriComponents::Port{static_cast<int32_t>(0x8)};
constexpr ::System::UriComponents  System::UriComponents::Path{static_cast<int32_t>(0x10)};
constexpr ::System::UriComponents  System::UriComponents::Query{static_cast<int32_t>(0x20)};
constexpr ::System::UriComponents  System::UriComponents::Fragment{static_cast<int32_t>(0x40)};
constexpr ::System::UriComponents  System::UriComponents::StrongPort{static_cast<int32_t>(0x80)};
constexpr ::System::UriComponents  System::UriComponents::NormalizedHost{static_cast<int32_t>(0x100)};
constexpr ::System::UriComponents  System::UriComponents::KeepDelimiter{static_cast<int32_t>(0x40000000)};
constexpr ::System::UriComponents  System::UriComponents::SerializationInfoString{static_cast<int32_t>(0x80000000)};
constexpr ::System::UriComponents  System::UriComponents::AbsoluteUri{static_cast<int32_t>(0x7f)};
constexpr ::System::UriComponents  System::UriComponents::HostAndPort{static_cast<int32_t>(0x84)};
constexpr ::System::UriComponents  System::UriComponents::StrongAuthority{static_cast<int32_t>(0x86)};
constexpr ::System::UriComponents  System::UriComponents::SchemeAndServer{static_cast<int32_t>(0xd)};
constexpr ::System::UriComponents  System::UriComponents::HttpRequestUrl{static_cast<int32_t>(0x3d)};
constexpr ::System::UriComponents  System::UriComponents::PathAndQuery{static_cast<int32_t>(0x30)};
