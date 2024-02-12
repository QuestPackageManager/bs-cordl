#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateStatus_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::CertificateStatus._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Ocsp::CertificateStatus::*)()>(&::Org::BouncyCastle::Ocsp::CertificateStatus::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10cc40c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateStatus*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Ocsp::CertificateStatus::setStaticF_Good(::Org::BouncyCastle::Ocsp::CertificateStatus* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Ocsp::CertificateStatus*, "Good", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateStatus*>::get>(
      std::forward<::Org::BouncyCastle::Ocsp::CertificateStatus*>(value));
}
inline ::Org::BouncyCastle::Ocsp::CertificateStatus* Org::BouncyCastle::Ocsp::CertificateStatus::getStaticF_Good() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Ocsp::CertificateStatus*, "Good",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateStatus*>::get>();
}
inline ::Org::BouncyCastle::Ocsp::CertificateStatus* Org::BouncyCastle::Ocsp::CertificateStatus::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Ocsp::CertificateStatus*>());
}
inline void Org::BouncyCastle::Ocsp::CertificateStatus::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateStatus*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::CertificateStatus::CertificateStatus() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
