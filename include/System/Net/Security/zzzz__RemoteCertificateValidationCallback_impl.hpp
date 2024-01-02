#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Net/Security/zzzz__RemoteCertificateValidationCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
//  Writing Method size for method: ::System::Net::Security::RemoteCertificateValidationCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::RemoteCertificateValidationCallback::*)(::System::Object*, void*)>(
    &::System::Net::Security::RemoteCertificateValidationCallback::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x28ffb2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::RemoteCertificateValidationCallback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::RemoteCertificateValidationCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Security::RemoteCertificateValidationCallback::*)(
    ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors)>(
    &::System::Net::Security::RemoteCertificateValidationCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28ffc5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::RemoteCertificateValidationCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::RemoteCertificateValidationCallback*>::get(), 13));
    return ___internal_method;
  }
};
inline ::System::Net::Security::RemoteCertificateValidationCallback* System::Net::Security::RemoteCertificateValidationCallback::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Security::RemoteCertificateValidationCallback*>(object, method));
}
inline void System::Net::Security::RemoteCertificateValidationCallback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::RemoteCertificateValidationCallback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool System::Net::Security::RemoteCertificateValidationCallback::Invoke(::System::Object* sender, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate,
                                                                               ::System::Security::Cryptography::X509Certificates::X509Chain* chain,
                                                                               ::System::Net::Security::SslPolicyErrors sslPolicyErrors) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::RemoteCertificateValidationCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sender, certificate, chain, sslPolicyErrors);
}
// Ctor Parameters []
constexpr ::System::Net::Security::RemoteCertificateValidationCallback::RemoteCertificateValidationCallback() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
