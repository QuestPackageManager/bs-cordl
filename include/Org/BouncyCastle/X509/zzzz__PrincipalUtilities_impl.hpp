#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/PrincipalUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__PrincipalUtilities_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Crl_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::PrincipalUtilities.GetIssuerX509Principal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::X509::PrincipalUtilities::GetIssuerX509Principal)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3642cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::PrincipalUtilities*>(),
                                                                                           { "GetIssuerX509Principal", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::PrincipalUtilities.GetSubjectX509Principal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::X509::PrincipalUtilities::GetSubjectX509Principal)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3642df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::PrincipalUtilities*>(),
                                                                                           { "GetSubjectX509Principal", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::PrincipalUtilities.GetIssuerX509Principal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (*)(::Org::BouncyCastle::X509::X509Crl*)>(
    &::Org::BouncyCastle::X509::PrincipalUtilities::GetIssuerX509Principal)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3642f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::PrincipalUtilities*>(),
                                                                                           { "GetIssuerX509Principal", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::PrincipalUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::PrincipalUtilities::*)()>(&::Org::BouncyCastle::X509::PrincipalUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3643024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::PrincipalUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::X509::PrincipalUtilities::GetIssuerX509Principal(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::PrincipalUtilities*>(),
                                                                                         { "GetIssuerX509Principal", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*>(nullptr, ___internal_method, cert);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::X509::PrincipalUtilities::GetSubjectX509Principal(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::PrincipalUtilities*>(),
                                                                                         { "GetSubjectX509Principal", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*>(nullptr, ___internal_method, cert);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::X509::PrincipalUtilities::GetIssuerX509Principal(::Org::BouncyCastle::X509::X509Crl* crl) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::PrincipalUtilities*>(),
                                                                                         { "GetIssuerX509Principal", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*>(nullptr, ___internal_method, crl);
}
inline void Org::BouncyCastle::X509::PrincipalUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::PrincipalUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::PrincipalUtilities* Org::BouncyCastle::X509::PrincipalUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::PrincipalUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::PrincipalUtilities::PrincipalUtilities() {}
