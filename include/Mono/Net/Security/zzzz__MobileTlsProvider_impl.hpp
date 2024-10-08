#pragma once
// IWYU pragma private; include "Mono/Net/Security/MobileTlsProvider.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsProvider_impl.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "Mono/Net/Security/zzzz__ChainValidationHelper_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsProvider.CreateSslStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::MobileAuthenticatedStream* (
    ::Mono::Net::Security::MobileTlsProvider::*)(::System::Net::Security::SslStream*, ::System::IO::Stream*, bool, ::Mono::Security::Interface::MonoTlsSettings*)>(
    &::Mono::Net::Security::MobileTlsProvider::CreateSslStream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsProvider*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsProvider.ValidateCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MobileTlsProvider::*)(
    ::Mono::Net::Security::ChainValidationHelper*, ::StringW, bool, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, bool,
    ByRef<::System::Security::Cryptography::X509Certificates::X509Chain*>, ByRef<::System::Net::Security::SslPolicyErrors>, ByRef<int32_t>)>(
    &::Mono::Net::Security::MobileTlsProvider::ValidateCertificate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsProvider*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileTlsProvider::*)()>(&::Mono::Net::Security::MobileTlsProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4098bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsProvider*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Mono::Net::Security::MobileAuthenticatedStream* Mono::Net::Security::MobileTlsProvider::CreateSslStream(::System::Net::Security::SslStream* sslStream, ::System::IO::Stream* innerStream,
                                                                                                                 bool leaveInnerStreamOpen, ::Mono::Security::Interface::MonoTlsSettings* settings) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsProvider*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileAuthenticatedStream*, false>(this, ___internal_method, sslStream, innerStream, leaveInnerStreamOpen, settings);
}
inline bool Mono::Net::Security::MobileTlsProvider::ValidateCertificate(::Mono::Net::Security::ChainValidationHelper* validator, ::StringW targetHost, bool serverMode,
                                                                        ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, bool wantsChain,
                                                                        ByRef<::System::Security::Cryptography::X509Certificates::X509Chain*> chain,
                                                                        ByRef<::System::Net::Security::SslPolicyErrors> errors, ByRef<int32_t> status11) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsProvider*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, validator, targetHost, serverMode, certificates, wantsChain, chain, errors, status11);
}
inline ::Mono::Net::Security::MobileTlsProvider* Mono::Net::Security::MobileTlsProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Net::Security::MobileTlsProvider*>());
}
inline void Mono::Net::Security::MobileTlsProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsProvider*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::MobileTlsProvider::MobileTlsProvider() {}
