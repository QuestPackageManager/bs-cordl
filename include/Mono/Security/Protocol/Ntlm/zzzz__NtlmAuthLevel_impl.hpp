#pragma once
// IWYU pragma private; include "Mono/Security/Protocol/Ntlm/NtlmAuthLevel.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmAuthLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel::NtlmAuthLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel::NtlmAuthLevel()   {
}
constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel  Mono::Security::Protocol::Ntlm::NtlmAuthLevel::LM_and_NTLM{static_cast<int32_t>(0x0)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel  Mono::Security::Protocol::Ntlm::NtlmAuthLevel::LM_and_NTLM_and_try_NTLMv2_Session{static_cast<int32_t>(0x1)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel  Mono::Security::Protocol::Ntlm::NtlmAuthLevel::NTLM_only{static_cast<int32_t>(0x2)};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel  Mono::Security::Protocol::Ntlm::NtlmAuthLevel::NTLMv2_only{static_cast<int32_t>(0x3)};
