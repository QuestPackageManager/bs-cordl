#pragma once
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmAuthLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmSettings_def.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmAuthLevel_def.hpp"
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::NtlmSettings.get_DefaultAuthLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Protocol::Ntlm::NtlmAuthLevel (*)()>(
    &::Mono::Security::Protocol::Ntlm::NtlmSettings::get_DefaultAuthLevel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x24211d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::NtlmSettings*>::get(),
                                                                               "get_DefaultAuthLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Mono::Security::Protocol::Ntlm::NtlmSettings::setStaticF_defaultAuthLevel(::Mono::Security::Protocol::Ntlm::NtlmAuthLevel value) {
  ::cordl_internals::setStaticField<::Mono::Security::Protocol::Ntlm::NtlmAuthLevel, "defaultAuthLevel",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::NtlmSettings*>::get>(
      std::forward<::Mono::Security::Protocol::Ntlm::NtlmAuthLevel>(value));
}
inline ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel Mono::Security::Protocol::Ntlm::NtlmSettings::getStaticF_defaultAuthLevel() {
  return ::cordl_internals::getStaticField<::Mono::Security::Protocol::Ntlm::NtlmAuthLevel, "defaultAuthLevel",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::NtlmSettings*>::get>();
}
inline ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel Mono::Security::Protocol::Ntlm::NtlmSettings::get_DefaultAuthLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::NtlmSettings*>::get(),
                                                                             "get_DefaultAuthLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Protocol::Ntlm::NtlmAuthLevel, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Security::Protocol::Ntlm::NtlmSettings::NtlmSettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
