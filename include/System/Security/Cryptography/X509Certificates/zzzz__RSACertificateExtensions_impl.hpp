#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/RSACertificateExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__RSACertificateExtensions_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::RSACertificateExtensions.GetRSAPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA* (*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(
    &::System::Security::Cryptography::X509Certificates::RSACertificateExtensions::GetRSAPublicKey)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x4090bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::RSACertificateExtensions*>::get(), "GetRSAPublicKey",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Security::Cryptography::RSA*
System::Security::Cryptography::X509Certificates::RSACertificateExtensions::GetRSAPublicKey(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::RSACertificateExtensions*>::get(), "GetRSAPublicKey",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*, false>(nullptr, ___internal_method, certificate);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::RSACertificateExtensions::RSACertificateExtensions() {}
