#pragma once
// IWYU pragma private; include "GlobalNamespace/ICertificateValidator.hpp"
#include "GlobalNamespace/zzzz__ICertificateValidator_def.hpp"
#include "GlobalNamespace/zzzz__DnsEndPoint_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
inline void GlobalNamespace::ICertificateValidator::ValidateCertificateChain(::GlobalNamespace::DnsEndPoint* endPoint,
                                                                             ::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate,
                                                                             ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> certificateChain) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICertificateValidator*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endPoint, certificate, certificateChain);
}
