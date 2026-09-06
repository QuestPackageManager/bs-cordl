#pragma once
// IWYU pragma private; include "System/Net/ICertificatePolicy.hpp"
#include "System/Net/zzzz__ICertificatePolicy_def.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::System::Net::ICertificatePolicy.CheckValidationResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ICertificatePolicy::*)(::System::Net::ServicePoint*, ::System::Security::Cryptography::X509Certificates::X509Certificate*,
                                                                                                   ::System::Net::WebRequest*, int32_t)>(&::System::Net::ICertificatePolicy::CheckValidationResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::ICertificatePolicy*>(), { ::i2c::class_of<::System::Net::ICertificatePolicy*>(), 0 }));
    return ___internal_method;
  }
};
inline bool System::Net::ICertificatePolicy::CheckValidationResult(::System::Net::ServicePoint* srvPoint, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate,
                                                                   ::System::Net::WebRequest* request, int32_t certificateProblem) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::ICertificatePolicy*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, srvPoint, certificate, request, certificateProblem);
}
