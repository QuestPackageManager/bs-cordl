#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\V1TbsCertificateGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__V1TbsCertificateGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectPublicKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__TbsCertificateStructure_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__Time_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerTaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerUtcTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::*)()>(&::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3669458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator.SetSerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::*)(::Org::BouncyCastle::Asn1::DerInteger*)>(
    &::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetSerialNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36694e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>(),
                                                                                           { "SetSerialNumber", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator.SetSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(
    &::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetSignature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36694f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>(),
                                                                                           { "SetSignature", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator.SetIssuer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(
    &::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetIssuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36694f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>(),
                                                                                           { "SetIssuer", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator.SetStartDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::*)(::Org::BouncyCastle::Asn1::X509::Time*)>(
    &::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetStartDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3669500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>(),
                                                                                           { "SetStartDate", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::Time*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator.SetStartDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::*)(::Org::BouncyCastle::Asn1::DerUtcTime*)>(
    &::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetStartDate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3669508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>(),
                                                                                           { "SetStartDate", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerUtcTime*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator.SetEndDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::*)(::Org::BouncyCastle::Asn1::X509::Time*)>(
    &::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetEndDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3669570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>(),
                                                                                           { "SetEndDate", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::Time*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator.SetEndDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::*)(::Org::BouncyCastle::Asn1::DerUtcTime*)>(
    &::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetEndDate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3669578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>(),
                                                                                           { "SetEndDate", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerUtcTime*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator.SetSubject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(
    &::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetSubject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36695e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>(),
                                                                                           { "SetSubject", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator.SetSubjectPublicKeyInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::*)(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*)>(
    &::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetSubjectPublicKeyInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36695e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>(),
                                                             { "SetSubjectPublicKeyInfo", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator.GenerateTbsCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* (::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::*)()>(
    &::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::GenerateTbsCertificate)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x36695f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>(), { "GenerateTbsCertificate", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerTaggedObject*& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::Org::BouncyCastle::Asn1::DerTaggedObject* const& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerTaggedObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_get_serialNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialNumber;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_get_serialNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialNumber;
}
constexpr void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serialNumber = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_get_signature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signature;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_get_signature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signature;
}
constexpr void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_set_signature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signature = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_get_issuer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name* const& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_get_issuer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_set_issuer(::Org::BouncyCastle::Asn1::X509::X509Name* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___issuer = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::Time*& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_get_startDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startDate;
}
constexpr ::Org::BouncyCastle::Asn1::X509::Time* const& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_get_startDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startDate;
}
constexpr void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_set_startDate(::Org::BouncyCastle::Asn1::X509::Time* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startDate = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::Time*& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_get_endDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endDate;
}
constexpr ::Org::BouncyCastle::Asn1::X509::Time* const& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_get_endDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endDate;
}
constexpr void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_set_endDate(::Org::BouncyCastle::Asn1::X509::Time* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endDate = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_get_subject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subject;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name* const& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_get_subject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subject;
}
constexpr void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_set_subject(::Org::BouncyCastle::Asn1::X509::X509Name* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subject = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_get_subjectPublicKeyInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectPublicKeyInfo;
}
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* const& Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_get_subjectPublicKeyInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectPublicKeyInfo;
}
constexpr void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::__cordl_internal_set_subjectPublicKeyInfo(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subjectPublicKeyInfo = value;
}
inline void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetSerialNumber(::Org::BouncyCastle::Asn1::DerInteger* serialNumber) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>(),
                                                                                         { "SetSerialNumber", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serialNumber);
}
inline void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetSignature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>(),
                                                                                         { "SetSignature", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signature);
}
inline void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetIssuer(::Org::BouncyCastle::Asn1::X509::X509Name* issuer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>(),
                                                                                         { "SetIssuer", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, issuer);
}
inline void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetStartDate(::Org::BouncyCastle::Asn1::X509::Time* startDate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>(),
                                                                                         { "SetStartDate", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::Time*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startDate);
}
inline void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetStartDate(::Org::BouncyCastle::Asn1::DerUtcTime* startDate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>(),
                                                                                         { "SetStartDate", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerUtcTime*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startDate);
}
inline void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetEndDate(::Org::BouncyCastle::Asn1::X509::Time* endDate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>(),
                                                                                         { "SetEndDate", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::Time*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endDate);
}
inline void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetEndDate(::Org::BouncyCastle::Asn1::DerUtcTime* endDate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>(),
                                                                                         { "SetEndDate", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerUtcTime*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endDate);
}
inline void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetSubject(::Org::BouncyCastle::Asn1::X509::X509Name* subject) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>(),
                                                                                         { "SetSubject", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subject);
}
inline void Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::SetSubjectPublicKeyInfo(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* pubKeyInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>(),
                                                           { "SetSubjectPublicKeyInfo", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pubKeyInfo);
}
inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::GenerateTbsCertificate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>(), { "GenerateTbsCertificate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator* Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator::V1TbsCertificateGenerator() {}
