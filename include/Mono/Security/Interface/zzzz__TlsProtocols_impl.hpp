#pragma once
// IWYU pragma private; include "Mono/Security/Interface/TlsProtocols.hpp"
#include "Mono/Security/Interface/zzzz__TlsProtocols_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Security::Interface::TlsProtocols::TlsProtocols(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Security::Interface::TlsProtocols::TlsProtocols()   {
}
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::Zero{static_cast<int32_t>(0x0)};
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::Tls10Client{static_cast<int32_t>(0x80)};
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::Tls10Server{static_cast<int32_t>(0x40)};
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::Tls10{static_cast<int32_t>(0xc0)};
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::Tls11Client{static_cast<int32_t>(0x200)};
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::Tls11Server{static_cast<int32_t>(0x100)};
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::Tls11{static_cast<int32_t>(0x300)};
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::Tls12Client{static_cast<int32_t>(0x800)};
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::Tls12Server{static_cast<int32_t>(0x400)};
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::Tls12{static_cast<int32_t>(0xc00)};
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::ClientMask{static_cast<int32_t>(0xa80)};
constexpr ::Mono::Security::Interface::TlsProtocols  Mono::Security::Interface::TlsProtocols::ServerMask{static_cast<int32_t>(0x540)};
