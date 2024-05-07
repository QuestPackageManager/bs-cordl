#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cmp/CertificateStatus.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__CertificateStatus_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__CertStatus_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatusInfo_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultDigestAlgorithmIdentifierFinder_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultSignatureAlgorithmIdentifierFinder_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateStatus._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cmp::CertificateStatus::*)(
    ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*, ::Org::BouncyCastle::Asn1::Cmp::CertStatus*)>(&::Org::BouncyCastle::Cmp::CertificateStatus::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1438d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::CertStatus*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateStatus.get_PkiStatusInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* (::Org::BouncyCastle::Cmp::CertificateStatus::*)()>(
    &::Org::BouncyCastle::Cmp::CertificateStatus::get_PkiStatusInfo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x14394a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateStatus*>::get(),
                                                                               "get_PkiStatusInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateStatus.get_CertRequestId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Cmp::CertificateStatus::*)()>(
    &::Org::BouncyCastle::Cmp::CertificateStatus::get_CertRequestId)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x14394c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateStatus*>::get(),
                                                                               "get_CertRequestId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateStatus.IsVerified
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cmp::CertificateStatus::*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Cmp::CertificateStatus::IsVerified)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x14394f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateStatus*>::get(), "IsVerified", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*& Org::BouncyCastle::Cmp::CertificateStatus::__cordl_internal_get_digestAlgFinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgFinder;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*> const&
Org::BouncyCastle::Cmp::CertificateStatus::__cordl_internal_get_digestAlgFinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgFinder;
}
constexpr void Org::BouncyCastle::Cmp::CertificateStatus::__cordl_internal_set_digestAlgFinder(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___digestAlgFinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::CertStatus*& Org::BouncyCastle::Cmp::CertificateStatus::__cordl_internal_get_certStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certStatus;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::CertStatus*> const& Org::BouncyCastle::Cmp::CertificateStatus::__cordl_internal_get_certStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certStatus;
}
constexpr void Org::BouncyCastle::Cmp::CertificateStatus::__cordl_internal_set_certStatus(::Org::BouncyCastle::Asn1::Cmp::CertStatus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certStatus)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Cmp::CertificateStatus::setStaticF_sigAlgFinder(::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*, "sigAlgFinder",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateStatus*>::get>(
      std::forward<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(value));
}
inline ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* Org::BouncyCastle::Cmp::CertificateStatus::getStaticF_sigAlgFinder() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*, "sigAlgFinder",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateStatus*>::get>();
}
inline ::Org::BouncyCastle::Cmp::CertificateStatus* Org::BouncyCastle::Cmp::CertificateStatus::New_ctor(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder,
                                                                                                        ::Org::BouncyCastle::Asn1::Cmp::CertStatus* certStatus) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cmp::CertificateStatus*>(digestAlgFinder, certStatus));
}
inline void Org::BouncyCastle::Cmp::CertificateStatus::_ctor(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder,
                                                             ::Org::BouncyCastle::Asn1::Cmp::CertStatus* certStatus) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::CertStatus*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digestAlgFinder, certStatus);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* Org::BouncyCastle::Cmp::CertificateStatus::get_PkiStatusInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateStatus*>::get(),
                                                                             "get_PkiStatusInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Cmp::CertificateStatus::get_CertRequestId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateStatus*>::get(),
                                                                             "get_CertRequestId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Cmp::CertificateStatus::IsVerified(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateStatus*>::get(), "IsVerified", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cert);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cmp::CertificateStatus::CertificateStatus() {}
