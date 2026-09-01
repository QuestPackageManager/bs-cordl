#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Ess\SigningCertificateV2.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Ess/zzzz__SigningCertificateV2_def.hpp"
#include "Org/BouncyCastle/Asn1/Ess/zzzz__EssCertIDv2_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__PolicyInformation_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::GetInstance)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x337c674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x337c7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::*)(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*)>(
    &::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x337c96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::*)(::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>)>(
    &::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x337c9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::*)(
    ::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>, ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>)>(&::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x337ca3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*>(),
            { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2.GetCerts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*> (::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::*)()>(
    &::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::GetCerts)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x337cac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*>(), { "GetCerts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2.GetPolicies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*> (::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::*)()>(
    &::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::GetPolicies)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x337cc0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*>(), { "GetPolicies", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::*)()>(
    &::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::ToAsn1Object)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x337cd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::__cordl_internal_get_certs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certs;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::__cordl_internal_get_certs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certs;
}
constexpr void Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::__cordl_internal_set_certs(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certs = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::__cordl_internal_get_policies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policies;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::__cordl_internal_get_policies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policies;
}
constexpr void Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::__cordl_internal_set_policies(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___policies = value;
}
inline ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2* Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::GetInstance(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*>(nullptr, ___internal_method, o);
}
inline void Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::_ctor(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* cert) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cert);
}
inline void Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*> certs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certs);
}
inline void Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*> certs,
                                                                      ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*> policies) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*>(),
          { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certs, policies);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*> Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::GetCerts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*>(), { "GetCerts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*> Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::GetPolicies() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*>(), { "GetPolicies", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2* Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2* Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::New_ctor(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* cert) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*>(cert));
}
inline ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2* Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*> certs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*>(certs));
}
inline ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2* Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*> certs,
                                                                                                                          ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*> policies) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*>(certs, policies));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::SigningCertificateV2() {}
