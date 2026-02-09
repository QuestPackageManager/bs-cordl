#pragma once
// IWYU pragma private; include "Mono/Security/Protocol/Ntlm/NtlmFlags.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags::NtlmFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags::NtlmFlags()   {
}
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::NegotiateUnicode{static_cast<int32_t>(0x1)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::NegotiateOem{static_cast<int32_t>(0x2)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::RequestTarget{static_cast<int32_t>(0x4)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::NegotiateNtlm{static_cast<int32_t>(0x200)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::NegotiateDomainSupplied{static_cast<int32_t>(0x1000)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::NegotiateWorkstationSupplied{static_cast<int32_t>(0x2000)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::NegotiateAlwaysSign{static_cast<int32_t>(0x8000)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::NegotiateNtlm2Key{static_cast<int32_t>(0x80000)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::Negotiate128{static_cast<int32_t>(0x20000000)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::Negotiate56{static_cast<int32_t>(0x80000000)};
