#pragma once
// IWYU pragma private; include "System/UriHostNameType.hpp"
#include "System/zzzz__UriHostNameType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::UriHostNameType::UriHostNameType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::UriHostNameType::UriHostNameType()   {
}
constexpr ::System::UriHostNameType  System::UriHostNameType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::System::UriHostNameType  System::UriHostNameType::Basic{static_cast<int32_t>(0x1)};
constexpr ::System::UriHostNameType  System::UriHostNameType::Dns{static_cast<int32_t>(0x2)};
constexpr ::System::UriHostNameType  System::UriHostNameType::IPv4{static_cast<int32_t>(0x3)};
constexpr ::System::UriHostNameType  System::UriHostNameType::IPv6{static_cast<int32_t>(0x4)};
