#pragma once
// IWYU pragma private; include "Mono\Security\Protocol\Ntlm\NtlmSettings.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmAuthLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmSettings_def.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmAuthLevel_def.hpp"
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::NtlmSettings.get_DefaultAuthLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Protocol::Ntlm::NtlmAuthLevel (*)()>(&::Mono::Security::Protocol::Ntlm::NtlmSettings::get_DefaultAuthLevel)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a9c8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::NtlmSettings*>(), { "get_DefaultAuthLevel", {}, {} })));
    return ___internal_method;
  }
};
inline void Mono::Security::Protocol::Ntlm::NtlmSettings::setStaticF_defaultAuthLevel(::Mono::Security::Protocol::Ntlm::NtlmAuthLevel value) {
  ::cordl_internals::setStaticField<::Mono::Security::Protocol::Ntlm::NtlmAuthLevel, "defaultAuthLevel", ::Mono::Security::Protocol::Ntlm::NtlmSettings*>(
      std::forward<::Mono::Security::Protocol::Ntlm::NtlmAuthLevel>(value));
}
inline ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel Mono::Security::Protocol::Ntlm::NtlmSettings::getStaticF_defaultAuthLevel() {
  return ::cordl_internals::getStaticField<::Mono::Security::Protocol::Ntlm::NtlmAuthLevel, "defaultAuthLevel", ::Mono::Security::Protocol::Ntlm::NtlmSettings*>();
}
inline ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel Mono::Security::Protocol::Ntlm::NtlmSettings::get_DefaultAuthLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Protocol::Ntlm::NtlmSettings*>(), { "get_DefaultAuthLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Protocol::Ntlm::NtlmAuthLevel>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Security::Protocol::Ntlm::NtlmSettings::NtlmSettings() {}
