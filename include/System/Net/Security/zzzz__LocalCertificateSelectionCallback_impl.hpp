#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Net/Security/zzzz__LocalCertificateSelectionCallback_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Security::LocalCertificateSelectionCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::LocalCertificateSelectionCallback::*)(::System::Object*, void*)>(
    &::System::Net::Security::LocalCertificateSelectionCallback::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x28ff9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::LocalCertificateSelectionCallback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::LocalCertificateSelectionCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (
    ::System::Net::Security::LocalCertificateSelectionCallback::*)(::System::Object*, ::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*,
                                                                   ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::System::Net::Security::LocalCertificateSelectionCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28ffb18;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::LocalCertificateSelectionCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::LocalCertificateSelectionCallback*>::get(), 13));
    return ___internal_method;
  }
};
inline ::System::Net::Security::LocalCertificateSelectionCallback* System::Net::Security::LocalCertificateSelectionCallback::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Security::LocalCertificateSelectionCallback*>(object, method));
}
inline void System::Net::Security::LocalCertificateSelectionCallback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::LocalCertificateSelectionCallback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* System::Net::Security::LocalCertificateSelectionCallback::Invoke(
    ::System::Object* sender, ::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates,
    ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::ArrayW<::StringW, ::Array<::StringW>*> acceptableIssuers) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::LocalCertificateSelectionCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*, false>(this, ___internal_method, sender, targetHost, localCertificates,
                                                                                                                          remoteCertificate, acceptableIssuers);
}
// Ctor Parameters []
constexpr ::System::Net::Security::LocalCertificateSelectionCallback::LocalCertificateSelectionCallback() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
