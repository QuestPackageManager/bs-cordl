#pragma once
// IWYU pragma private; include "System/Net/ICertificatePolicy.hpp"
#include "System/Net/zzzz__ICertificatePolicy_def.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
inline bool System::Net::ICertificatePolicy::CheckValidationResult(::System::Net::ServicePoint* srvPoint, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate,
                                                                   ::System::Net::WebRequest* request, int32_t certificateProblem) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ICertificatePolicy*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, srvPoint, certificate, request, certificateProblem);
}
