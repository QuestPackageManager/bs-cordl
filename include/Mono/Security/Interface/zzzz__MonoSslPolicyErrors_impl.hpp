#pragma once
// IWYU pragma private; include "Mono/Security/Interface/MonoSslPolicyErrors.hpp"
#include "Mono/Security/Interface/zzzz__MonoSslPolicyErrors_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Security::Interface::MonoSslPolicyErrors::MonoSslPolicyErrors(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Security::Interface::MonoSslPolicyErrors::MonoSslPolicyErrors()   {
}
constexpr ::Mono::Security::Interface::MonoSslPolicyErrors  Mono::Security::Interface::MonoSslPolicyErrors::None{static_cast<int32_t>(0x0)};
constexpr ::Mono::Security::Interface::MonoSslPolicyErrors  Mono::Security::Interface::MonoSslPolicyErrors::RemoteCertificateNotAvailable{static_cast<int32_t>(0x1)};
constexpr ::Mono::Security::Interface::MonoSslPolicyErrors  Mono::Security::Interface::MonoSslPolicyErrors::RemoteCertificateNameMismatch{static_cast<int32_t>(0x2)};
constexpr ::Mono::Security::Interface::MonoSslPolicyErrors  Mono::Security::Interface::MonoSslPolicyErrors::RemoteCertificateChainErrors{static_cast<int32_t>(0x4)};
