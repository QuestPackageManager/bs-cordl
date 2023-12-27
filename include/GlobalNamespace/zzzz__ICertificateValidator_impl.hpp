#pragma once
#include "GlobalNamespace/zzzz__ICertificateValidator_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "GlobalNamespace/zzzz__DnsEndPoint_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ICertificateValidator.ValidateCertificateChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ICertificateValidator::*)(
    ::GlobalNamespace::DnsEndPoint*, ::System::Security::Cryptography::X509Certificates::X509Certificate2*,
    ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>)>(&::GlobalNamespace::ICertificateValidator::ValidateCertificateChain)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICertificateValidator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICertificateValidator*>::get(), 0));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ICertificateValidator::ValidateCertificateChain(::GlobalNamespace::DnsEndPoint* endPoint,
                                                                             ::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate,
                                                                             ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> certificateChain) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICertificateValidator*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endPoint, certificate, certificateChain);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
