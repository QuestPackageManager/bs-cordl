#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\V2AttributeCertificateInfoGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__V2AttributeCertificateInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttCertIssuer_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttributeCertificateInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttributeX509_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__Holder_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)()>(
    &::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x36698bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator.SetHolder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)(::Org::BouncyCastle::Asn1::X509::Holder*)>(
    &::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetHolder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x366994c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(),
                                                                                           { "SetHolder", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::Holder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator.AddAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)(::StringW, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(
    &::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::AddAttribute)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3669954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(),
                                                             { "AddAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator.AddAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)(::Org::BouncyCastle::Asn1::X509::AttributeX509*)>(
    &::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::AddAttribute)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3669a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(),
                                                                                           { "AddAttribute", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AttributeX509*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator.SetSerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)(::Org::BouncyCastle::Asn1::DerInteger*)>(
    &::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetSerialNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3669a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(),
                                                                                           { "SetSerialNumber", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator.SetSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(
    &::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetSignature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3669a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(),
                                                                                           { "SetSignature", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator.SetIssuer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)(::Org::BouncyCastle::Asn1::X509::AttCertIssuer*)>(
    &::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetIssuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3669a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(),
                                                                                           { "SetIssuer", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator.SetStartDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)(::Org::BouncyCastle::Asn1::DerGeneralizedTime*)>(
    &::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetStartDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3669a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(),
                                                                                           { "SetStartDate", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator.SetEndDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)(::Org::BouncyCastle::Asn1::DerGeneralizedTime*)>(
    &::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetEndDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3669a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(),
                                                                                           { "SetEndDate", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator.SetIssuerUniqueID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)(::Org::BouncyCastle::Asn1::DerBitString*)>(
    &::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetIssuerUniqueID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3669a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(),
                                                                                           { "SetIssuerUniqueID", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator.SetExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)(::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetExtensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3669a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(),
                                                                                           { "SetExtensions", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator.GenerateAttributeCertificateInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* (::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::*)()>(
    &::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::GenerateAttributeCertificateInfo)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x3669a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(), { "GenerateAttributeCertificateInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::Holder*& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_get_holder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___holder;
}
constexpr ::Org::BouncyCastle::Asn1::X509::Holder* const& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_get_holder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___holder;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_set_holder(::Org::BouncyCastle::Asn1::X509::Holder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___holder = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AttCertIssuer*& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_get_issuer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AttCertIssuer* const& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_get_issuer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_set_issuer(::Org::BouncyCastle::Asn1::X509::AttCertIssuer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___issuer = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_get_signature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signature;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_get_signature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signature;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_set_signature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signature = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_get_serialNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialNumber;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_get_serialNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialNumber;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serialNumber = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector*& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_get_attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector* const& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_get_attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_set_attributes(::Org::BouncyCastle::Asn1::Asn1EncodableVector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributes = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString*& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_get_issuerUniqueID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerUniqueID;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_get_issuerUniqueID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerUniqueID;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_set_issuerUniqueID(::Org::BouncyCastle::Asn1::DerBitString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___issuerUniqueID = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_get_extensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_get_extensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extensions = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_get_startDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startDate;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_get_startDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startDate;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_set_startDate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startDate = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_get_endDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endDate;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_get_endDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endDate;
}
constexpr void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::__cordl_internal_set_endDate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endDate = value;
}
inline void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetHolder(::Org::BouncyCastle::Asn1::X509::Holder* holder) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(),
                                                                                         { "SetHolder", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::Holder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, holder);
}
inline void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::AddAttribute(::StringW oid, ::Org::BouncyCastle::Asn1::Asn1Encodable* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(),
                                                           { "AddAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid, value);
}
inline void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::AddAttribute(::Org::BouncyCastle::Asn1::X509::AttributeX509* attribute) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(),
                                                                                         { "AddAttribute", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AttributeX509*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attribute);
}
inline void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetSerialNumber(::Org::BouncyCastle::Asn1::DerInteger* serialNumber) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(),
                                                                                         { "SetSerialNumber", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serialNumber);
}
inline void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetSignature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(),
                                                                                         { "SetSignature", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signature);
}
inline void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetIssuer(::Org::BouncyCastle::Asn1::X509::AttCertIssuer* issuer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(),
                                                                                         { "SetIssuer", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, issuer);
}
inline void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetStartDate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* startDate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(),
                                                                                         { "SetStartDate", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startDate);
}
inline void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetEndDate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* endDate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(),
                                                                                         { "SetEndDate", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endDate);
}
inline void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetIssuerUniqueID(::Org::BouncyCastle::Asn1::DerBitString* issuerUniqueID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(),
                                                                                         { "SetIssuerUniqueID", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, issuerUniqueID);
}
inline void Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::SetExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(),
                                                                                         { "SetExtensions", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, extensions);
}
inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::GenerateAttributeCertificateInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>(), { "GenerateAttributeCertificateInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator* Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator::V2AttributeCertificateInfoGenerator() {}
