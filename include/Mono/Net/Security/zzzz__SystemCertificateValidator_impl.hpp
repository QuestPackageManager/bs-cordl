#pragma once
// IWYU pragma private; include "Mono/Net/Security/SystemCertificateValidator.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyUsageFlags_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Net/Security/zzzz__SystemCertificateValidator_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::SystemCertificateValidator.NeedsChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Mono::Security::Interface::MonoTlsSettings*)>(
    &::Mono::Net::Security::SystemCertificateValidator::NeedsChain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4117b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::SystemCertificateValidator*>::get(), "NeedsChain", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoTlsSettings*>::get() })));
    return ___internal_method;
  }
};
inline void Mono::Net::Security::SystemCertificateValidator::setStaticF_is_macosx(bool value) {
  ::cordl_internals::setStaticField<bool, "is_macosx", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::SystemCertificateValidator*>::get>(std::forward<bool>(value));
}
inline bool Mono::Net::Security::SystemCertificateValidator::getStaticF_is_macosx() {
  return ::cordl_internals::getStaticField<bool, "is_macosx", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::SystemCertificateValidator*>::get>();
}
inline void Mono::Net::Security::SystemCertificateValidator::setStaticF_s_flags(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value) {
  ::cordl_internals::setStaticField<::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags, "s_flags",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::SystemCertificateValidator*>::get>(
      std::forward<::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags>(value));
}
inline ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags Mono::Net::Security::SystemCertificateValidator::getStaticF_s_flags() {
  return ::cordl_internals::getStaticField<::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags, "s_flags",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::SystemCertificateValidator*>::get>();
}
inline bool Mono::Net::Security::SystemCertificateValidator::NeedsChain(::Mono::Security::Interface::MonoTlsSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::SystemCertificateValidator*>::get(), "NeedsChain", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoTlsSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, settings);
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::SystemCertificateValidator::SystemCertificateValidator() {}
