#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Tsp/TimeStampTokenGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampTokenGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampRequest_def.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampToken_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::X509::X509Certificate*, ::StringW, ::StringW)>(&::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x36216bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::X509::X509Certificate*, ::StringW, ::StringW, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*,
    ::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(&::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::_ctor)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x36216c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.SetCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(::Org::BouncyCastle::X509::Store::IX509Store*)>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetCertificates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3621af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(),
                                                                                           { "SetCertificates", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.SetCrls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(::Org::BouncyCastle::X509::Store::IX509Store*)>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetCrls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3621afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(),
                                                                                           { "SetCrls", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.SetAccuracySeconds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(int32_t)>(&::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetAccuracySeconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3621b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(), { "SetAccuracySeconds", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.SetAccuracyMillis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(int32_t)>(&::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetAccuracyMillis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3621b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(), { "SetAccuracyMillis", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.SetAccuracyMicros
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(int32_t)>(&::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetAccuracyMicros)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3621b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(), { "SetAccuracyMicros", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.SetOrdering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(bool)>(&::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetOrdering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3621b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(), { "SetOrdering", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.SetTsa
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(::Org::BouncyCastle::Asn1::X509::GeneralName*)>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetTsa)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3621b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(),
                                                                                           { "SetTsa", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Tsp::TimeStampToken* (
    ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(::Org::BouncyCastle::Tsp::TimeStampRequest*, ::Org::BouncyCastle::Math::BigInteger*, ::System::DateTime)>(
    &::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::Generate)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x361f800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(),
            { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_accuracySeconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accuracySeconds;
}
constexpr int32_t const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_accuracySeconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accuracySeconds;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_accuracySeconds(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___accuracySeconds = value;
}
constexpr int32_t& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_accuracyMillis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accuracyMillis;
}
constexpr int32_t const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_accuracyMillis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accuracyMillis;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_accuracyMillis(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___accuracyMillis = value;
}
constexpr int32_t& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_accuracyMicros() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accuracyMicros;
}
constexpr int32_t const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_accuracyMicros() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accuracyMicros;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_accuracyMicros(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___accuracyMicros = value;
}
constexpr bool& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_ordering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ordering;
}
constexpr bool const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_ordering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ordering;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_ordering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ordering = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_tsa() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tsa;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_tsa() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tsa;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_tsa(::Org::BouncyCastle::Asn1::X509::GeneralName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tsa = value;
}
constexpr ::StringW& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_tsaPolicyOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tsaPolicyOID;
}
constexpr ::StringW const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_tsaPolicyOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tsaPolicyOID;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_tsaPolicyOID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tsaPolicyOID = value;
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_key(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
constexpr ::Org::BouncyCastle::X509::X509Certificate*& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_cert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cert;
}
constexpr ::Org::BouncyCastle::X509::X509Certificate* const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_cert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cert;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_cert(::Org::BouncyCastle::X509::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cert = value;
}
constexpr ::StringW& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_digestOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestOID;
}
constexpr ::StringW const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_digestOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestOID;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_digestOID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digestOID = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_signedAttr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedAttr;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_signedAttr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedAttr;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_signedAttr(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signedAttr = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_unsignedAttr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsignedAttr;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_unsignedAttr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsignedAttr;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_unsignedAttr(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unsignedAttr = value;
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_x509Certs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x509Certs;
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store* const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_x509Certs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x509Certs;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_x509Certs(::Org::BouncyCastle::X509::Store::IX509Store* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x509Certs = value;
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_x509Crls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x509Crls;
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store* const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_get_x509Crls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x509Crls;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__cordl_internal_set_x509Crls(::Org::BouncyCastle::X509::Store::IX509Store* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x509Crls = value;
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW digestOID,
                                                                   ::StringW tsaPolicyOID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, cert, digestOID, tsaPolicyOID);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW digestOID,
                                                                   ::StringW tsaPolicyOID, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr,
                                                                   ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::StringW>(),
                              ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, cert, digestOID, tsaPolicyOID, signedAttr, unsignedAttr);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetCertificates(::Org::BouncyCastle::X509::Store::IX509Store* certificates) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(),
                                                                                         { "SetCertificates", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificates);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetCrls(::Org::BouncyCastle::X509::Store::IX509Store* crls) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(), { "SetCrls", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crls);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetAccuracySeconds(int32_t accuracySeconds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(), { "SetAccuracySeconds", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accuracySeconds);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetAccuracyMillis(int32_t accuracyMillis) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(), { "SetAccuracyMillis", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accuracyMillis);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetAccuracyMicros(int32_t accuracyMicros) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(), { "SetAccuracyMicros", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accuracyMicros);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetOrdering(bool ordering) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(), { "SetOrdering", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ordering);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetTsa(::Org::BouncyCastle::Asn1::X509::GeneralName* tsa) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(), { "SetTsa", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tsa);
}
inline ::Org::BouncyCastle::Tsp::TimeStampToken* Org::BouncyCastle::Tsp::TimeStampTokenGenerator::Generate(::Org::BouncyCastle::Tsp::TimeStampRequest* request,
                                                                                                           ::Org::BouncyCastle::Math::BigInteger* serialNumber, ::System::DateTime genTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(),
          { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Tsp::TimeStampToken*>(this, ___internal_method, request, serialNumber, genTime);
}
inline ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* Org::BouncyCastle::Tsp::TimeStampTokenGenerator::New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key,
                                                                                                                    ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW digestOID,
                                                                                                                    ::StringW tsaPolicyOID) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(key, cert, digestOID, tsaPolicyOID));
}
inline ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* Org::BouncyCastle::Tsp::TimeStampTokenGenerator::New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key,
                                                                                                                    ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW digestOID,
                                                                                                                    ::StringW tsaPolicyOID, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr,
                                                                                                                    ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(key, cert, digestOID, tsaPolicyOID, signedAttr, unsignedAttr));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::TimeStampTokenGenerator() {}
