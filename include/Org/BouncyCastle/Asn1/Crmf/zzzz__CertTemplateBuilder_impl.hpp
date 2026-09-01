#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Crmf\CertTemplateBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__CertTemplateBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__CertTemplate_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__OptionalValidity_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectPublicKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder.SetVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* (::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::*)(int32_t)>(
    &::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::SetVersion)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3366664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder.SetSerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* (
    ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::*)(::Org::BouncyCastle::Asn1::DerInteger*)>(&::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::SetSerialNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33666d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder.SetSigningAlg
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* (
    ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(&::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::SetSigningAlg)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33666d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder.SetIssuer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* (
    ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(&::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::SetIssuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33666e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder.SetValidity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* (
    ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::*)(::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*)>(&::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::SetValidity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33666e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder.SetSubject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* (
    ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(&::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::SetSubject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33666f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder.SetPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* (
    ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::*)(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*)>(&::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::SetPublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33666f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder.SetIssuerUID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* (
    ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::*)(::Org::BouncyCastle::Asn1::DerBitString*)>(&::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::SetIssuerUID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder.SetSubjectUID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* (
    ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::*)(::Org::BouncyCastle::Asn1::DerBitString*)>(&::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::SetSubjectUID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder.SetExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* (
    ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::*)(::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(&::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::SetExtensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3366710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertTemplate* (::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::Build)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3366718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder.AddOptional
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::*)(
    ::Org::BouncyCastle::Asn1::Asn1EncodableVector*, int32_t, bool, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::AddOptional)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3366868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(),
                                                                                           { "AddOptional",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::*)()>(&::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3366910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_get_serialNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialNumber;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_get_serialNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialNumber;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serialNumber = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_get_signingAlg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signingAlg;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_get_signingAlg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signingAlg;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_set_signingAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signingAlg = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_get_issuer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name* const& Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_get_issuer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_set_issuer(::Org::BouncyCastle::Asn1::X509::X509Name* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___issuer = value;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*& Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_get_validity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validity;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* const& Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_get_validity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validity;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_set_validity(::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validity = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_get_subject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subject;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name* const& Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_get_subject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subject;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_set_subject(::Org::BouncyCastle::Asn1::X509::X509Name* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subject = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_get_publicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* const& Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_get_publicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_set_publicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___publicKey = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString*& Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_get_issuerUID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerUID;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_get_issuerUID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerUID;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_set_issuerUID(::Org::BouncyCastle::Asn1::DerBitString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___issuerUID = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString*& Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_get_subjectUID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectUID;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_get_subjectUID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectUID;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_set_subjectUID(::Org::BouncyCastle::Asn1::DerBitString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subjectUID = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_get_extensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_get_extensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::__cordl_internal_set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extensions = value;
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::SetVersion(int32_t ver) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(this, ___internal_method, ver);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::SetSerialNumber(::Org::BouncyCastle::Asn1::DerInteger* ser) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(this, ___internal_method, ser);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::SetSigningAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* aid) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(this, ___internal_method, aid);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::SetIssuer(::Org::BouncyCastle::Asn1::X509::X509Name* name) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(this, ___internal_method, name);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::SetValidity(::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* v) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(this, ___internal_method, v);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::SetSubject(::Org::BouncyCastle::Asn1::X509::X509Name* name) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(this, ___internal_method, name);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::SetPublicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(this, ___internal_method, spki);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::SetIssuerUID(::Org::BouncyCastle::Asn1::DerBitString* uid) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(this, ___internal_method, uid);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::SetSubjectUID(::Org::BouncyCastle::Asn1::DerBitString* uid) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(this, ___internal_method, uid);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::SetExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extens) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(this, ___internal_method, extens);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::Build() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::AddOptional(::Org::BouncyCastle::Asn1::Asn1EncodableVector* v, int32_t tagNo, bool isExplicit,
                                                                            ::Org::BouncyCastle::Asn1::Asn1Encodable* obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(),
                                                                                         { "AddOptional",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v, tagNo, isExplicit, obj);
}
inline void Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder::CertTemplateBuilder() {}
