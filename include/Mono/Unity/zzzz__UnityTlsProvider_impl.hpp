#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTlsProvider.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsProvider_impl.hpp"
#include "Mono/Unity/zzzz__UnityTlsProvider_def.hpp"
#include "Mono/Net/Security/zzzz__ChainValidationHelper_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Mono::Unity::UnityTlsProvider.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Unity::UnityTlsProvider::*)()>(&::Mono::Unity::UnityTlsProvider::get_Name)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e20908;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsProvider.get_ID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::Mono::Unity::UnityTlsProvider::*)()>(&::Mono::Unity::UnityTlsProvider::get_ID)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e2094c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsProvider.get_SupportsSslStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Unity::UnityTlsProvider::*)()>(&::Mono::Unity::UnityTlsProvider::get_SupportsSslStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e209a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsProvider.get_SupportsMonoExtensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Unity::UnityTlsProvider::*)()>(&::Mono::Unity::UnityTlsProvider::get_SupportsMonoExtensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e209b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsProvider.get_SupportsConnectionInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Unity::UnityTlsProvider::*)()>(&::Mono::Unity::UnityTlsProvider::get_SupportsConnectionInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e209b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsProvider.get_SupportsCleanShutdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Unity::UnityTlsProvider::*)()>(&::Mono::Unity::UnityTlsProvider::get_SupportsCleanShutdown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e209c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsProvider.get_SupportedProtocols
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Authentication::SslProtocols (::Mono::Unity::UnityTlsProvider::*)()>(
    &::Mono::Unity::UnityTlsProvider::get_SupportedProtocols)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e209c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsProvider.CreateSslStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::MobileAuthenticatedStream* (
    ::Mono::Unity::UnityTlsProvider::*)(::System::Net::Security::SslStream*, ::System::IO::Stream*, bool, ::Mono::Security::Interface::MonoTlsSettings*)>(
    &::Mono::Unity::UnityTlsProvider::CreateSslStream)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e209d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsProvider.x509verify_callback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::UnityTls_unitytls_x509verify_result (*)(
    void*, ::Mono::Unity::UnityTls_unitytls_x509_ref, ::Mono::Unity::UnityTls_unitytls_x509verify_result, ::Mono::Unity::UnityTls_unitytls_errorstate*)>(
    &::Mono::Unity::UnityTlsProvider::x509verify_callback)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5e208a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(), "x509verify_callback", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::UnityTls_unitytls_x509_ref>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::UnityTls_unitytls_x509verify_result>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::UnityTls_unitytls_errorstate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsProvider.ValidateCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Unity::UnityTlsProvider::*)(
    ::Mono::Net::Security::ChainValidationHelper*, ::StringW, bool, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, bool,
    ::ByRef<::System::Security::Cryptography::X509Certificates::X509Chain*>, ::ByRef<::System::Net::Security::SslPolicyErrors>, ::ByRef<int32_t>)>(
    &::Mono::Unity::UnityTlsProvider::ValidateCertificate)> {
  constexpr static std::size_t size = 0x890;
  constexpr static std::size_t addrs = 0x5e20af4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsProvider::*)()>(&::Mono::Unity::UnityTlsProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e21434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::StringW Mono::Unity::UnityTlsProvider::get_Name() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Guid Mono::Unity::UnityTlsProvider::get_ID() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline bool Mono::Unity::UnityTlsProvider::get_SupportsSslStream() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Mono::Unity::UnityTlsProvider::get_SupportsMonoExtensions() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Mono::Unity::UnityTlsProvider::get_SupportsConnectionInfo() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Mono::Unity::UnityTlsProvider::get_SupportsCleanShutdown() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Security::Authentication::SslProtocols Mono::Unity::UnityTlsProvider::get_SupportedProtocols() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Authentication::SslProtocols, false>(this, ___internal_method);
}
inline ::Mono::Net::Security::MobileAuthenticatedStream* Mono::Unity::UnityTlsProvider::CreateSslStream(::System::Net::Security::SslStream* sslStream, ::System::IO::Stream* innerStream,
                                                                                                        bool leaveInnerStreamOpen, ::Mono::Security::Interface::MonoTlsSettings* settings) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileAuthenticatedStream*, false>(this, ___internal_method, sslStream, innerStream, leaveInnerStreamOpen, settings);
}
inline ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTlsProvider::x509verify_callback(void* userData, ::Mono::Unity::UnityTls_unitytls_x509_ref cert,
                                                                                                             ::Mono::Unity::UnityTls_unitytls_x509verify_result result,
                                                                                                             ::Mono::Unity::UnityTls_unitytls_errorstate* errorState) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(), "x509verify_callback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::UnityTls_unitytls_x509_ref>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::UnityTls_unitytls_x509verify_result>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::UnityTls_unitytls_errorstate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::UnityTls_unitytls_x509verify_result, false>(nullptr, ___internal_method, userData, cert, result, errorState);
}
inline bool Mono::Unity::UnityTlsProvider::ValidateCertificate(::Mono::Net::Security::ChainValidationHelper* validator, ::StringW targetHost, bool serverMode,
                                                               ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, bool wantsChain,
                                                               ::ByRef<::System::Security::Cryptography::X509Certificates::X509Chain*> chain, ::ByRef<::System::Net::Security::SslPolicyErrors> errors,
                                                               ::ByRef<int32_t> status11) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, validator, targetHost, serverMode, certificates, wantsChain, chain, errors, status11);
}
inline void Mono::Unity::UnityTlsProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsProvider*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Mono::Unity::UnityTlsProvider* Mono::Unity::UnityTlsProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::UnityTlsProvider*>());
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTlsProvider::UnityTlsProvider() {}
