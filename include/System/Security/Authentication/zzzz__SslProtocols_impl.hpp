#pragma once
// IWYU pragma private; include "System/Security/Authentication/SslProtocols.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Authentication::SslProtocols::SslProtocols(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Authentication::SslProtocols::SslProtocols()   {
}
constexpr ::System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::None{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::Ssl2{static_cast<int32_t>(0xc)};
constexpr ::System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::Ssl3{static_cast<int32_t>(0x30)};
constexpr ::System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::Tls{static_cast<int32_t>(0xc0)};
constexpr ::System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::Tls11{static_cast<int32_t>(0x300)};
constexpr ::System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::Tls12{static_cast<int32_t>(0xc00)};
constexpr ::System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::Tls13{static_cast<int32_t>(0x3000)};
constexpr ::System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::Default{static_cast<int32_t>(0xf0)};
