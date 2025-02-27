#pragma once
// IWYU pragma private; include "Mono/Security/Interface/MonoRemoteCertificateValidationCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Mono/Security/Interface/zzzz__MonoRemoteCertificateValidationCallback_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoSslPolicyErrors_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoRemoteCertificateValidationCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::Mono::Security::Interface::MonoRemoteCertificateValidationCallback::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3c53880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Interface::MonoRemoteCertificateValidationCallback::*)(
    ::StringW, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::Mono::Security::Interface::MonoSslPolicyErrors)>(
    &::Mono::Security::Interface::MonoRemoteCertificateValidationCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3c53920;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Security::Interface::MonoRemoteCertificateValidationCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool Mono::Security::Interface::MonoRemoteCertificateValidationCallback::Invoke(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate,
                                                                                       ::System::Security::Cryptography::X509Certificates::X509Chain* chain,
                                                                                       ::Mono::Security::Interface::MonoSslPolicyErrors sslPolicyErrors) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, targetHost, certificate, chain, sslPolicyErrors);
}
inline ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* Mono::Security::Interface::MonoRemoteCertificateValidationCallback::New_ctor(::System::Object* object,
                                                                                                                                                          ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback::MonoRemoteCertificateValidationCallback() {}
