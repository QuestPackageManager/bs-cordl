#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509ChainStatusFlags.hpp"
#include "Mono/Security/X509/zzzz__X509ChainStatusFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Security::X509::X509ChainStatusFlags::X509ChainStatusFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509ChainStatusFlags::X509ChainStatusFlags()   {
}
constexpr ::Mono::Security::X509::X509ChainStatusFlags  Mono::Security::X509::X509ChainStatusFlags::InvalidBasicConstraints{static_cast<int32_t>(0x400)};
constexpr ::Mono::Security::X509::X509ChainStatusFlags  Mono::Security::X509::X509ChainStatusFlags::NoError{static_cast<int32_t>(0x0)};
constexpr ::Mono::Security::X509::X509ChainStatusFlags  Mono::Security::X509::X509ChainStatusFlags::NotSignatureValid{static_cast<int32_t>(0x8)};
constexpr ::Mono::Security::X509::X509ChainStatusFlags  Mono::Security::X509::X509ChainStatusFlags::NotTimeNested{static_cast<int32_t>(0x2)};
constexpr ::Mono::Security::X509::X509ChainStatusFlags  Mono::Security::X509::X509ChainStatusFlags::NotTimeValid{static_cast<int32_t>(0x1)};
constexpr ::Mono::Security::X509::X509ChainStatusFlags  Mono::Security::X509::X509ChainStatusFlags::PartialChain{static_cast<int32_t>(0x10000)};
constexpr ::Mono::Security::X509::X509ChainStatusFlags  Mono::Security::X509::X509ChainStatusFlags::UntrustedRoot{static_cast<int32_t>(0x20)};
