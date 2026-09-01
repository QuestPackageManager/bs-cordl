#pragma once
// IWYU pragma private; include "Org\BouncyCastle\X509\X509V1CertificateGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509V1CertificateGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__TbsCertificateStructure_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__V1TbsCertificateGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V1CertificateGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V1CertificateGenerator::*)()>(&::Org::BouncyCastle::X509::X509V1CertificateGenerator::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x365255c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V1CertificateGenerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V1CertificateGenerator::*)()>(&::Org::BouncyCastle::X509::X509V1CertificateGenerator::Reset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x36525b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V1CertificateGenerator.SetSerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V1CertificateGenerator::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::X509::X509V1CertificateGenerator::SetSerialNumber)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3652614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(),
                                                                                           { "SetSerialNumber", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V1CertificateGenerator.SetIssuerDN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V1CertificateGenerator::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(
    &::Org::BouncyCastle::X509::X509V1CertificateGenerator::SetIssuerDN)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3652700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(),
                                                                                           { "SetIssuerDN", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V1CertificateGenerator.SetNotBefore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V1CertificateGenerator::*)(::System::DateTime)>(
    &::Org::BouncyCastle::X509::X509V1CertificateGenerator::SetNotBefore)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3652718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(), { "SetNotBefore", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V1CertificateGenerator.SetNotAfter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V1CertificateGenerator::*)(::System::DateTime)>(
    &::Org::BouncyCastle::X509::X509V1CertificateGenerator::SetNotAfter)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3652790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(), { "SetNotAfter", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V1CertificateGenerator.SetSubjectDN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V1CertificateGenerator::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(
    &::Org::BouncyCastle::X509::X509V1CertificateGenerator::SetSubjectDN)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3652808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(),
                                                                                           { "SetSubjectDN", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V1CertificateGenerator.SetPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V1CertificateGenerator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::X509::X509V1CertificateGenerator::SetPublicKey)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3652820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(),
                                                                                           { "SetPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V1CertificateGenerator.SetSignatureAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V1CertificateGenerator::*)(::StringW)>(
    &::Org::BouncyCastle::X509::X509V1CertificateGenerator::SetSignatureAlgorithm)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x3652930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(), { "SetSignatureAlgorithm", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V1CertificateGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (
    ::Org::BouncyCastle::X509::X509V1CertificateGenerator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::X509::X509V1CertificateGenerator::Generate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3652aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(),
                                                                                           { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V1CertificateGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (
    ::Org::BouncyCastle::X509::X509V1CertificateGenerator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::X509::X509V1CertificateGenerator::Generate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3652aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(),
                            { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V1CertificateGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (
    ::Org::BouncyCastle::X509::X509V1CertificateGenerator::*)(::Org::BouncyCastle::Crypto::ISignatureFactory*)>(&::Org::BouncyCastle::X509::X509V1CertificateGenerator::Generate)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x3652b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(),
                                                                                           { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V1CertificateGenerator.GenerateJcaObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (
    ::Org::BouncyCastle::X509::X509V1CertificateGenerator::*)(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::X509::X509V1CertificateGenerator::GenerateJcaObject)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3652fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(),
                                                             { "GenerateJcaObject",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V1CertificateGenerator.get_SignatureAlgNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::X509::X509V1CertificateGenerator::*)()>(
    &::Org::BouncyCastle::X509::X509V1CertificateGenerator::get_SignatureAlgNames)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3653088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(), { "get_SignatureAlgNames", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*& Org::BouncyCastle::X509::X509V1CertificateGenerator::__cordl_internal_get_tbsGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tbsGen;
}
constexpr ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator* const& Org::BouncyCastle::X509::X509V1CertificateGenerator::__cordl_internal_get_tbsGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tbsGen;
}
constexpr void Org::BouncyCastle::X509::X509V1CertificateGenerator::__cordl_internal_set_tbsGen(::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tbsGen = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::X509::X509V1CertificateGenerator::__cordl_internal_get_sigOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigOID;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::X509::X509V1CertificateGenerator::__cordl_internal_get_sigOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigOID;
}
constexpr void Org::BouncyCastle::X509::X509V1CertificateGenerator::__cordl_internal_set_sigOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sigOID = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::X509::X509V1CertificateGenerator::__cordl_internal_get_sigAlgId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigAlgId;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::X509::X509V1CertificateGenerator::__cordl_internal_get_sigAlgId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigAlgId;
}
constexpr void Org::BouncyCastle::X509::X509V1CertificateGenerator::__cordl_internal_set_sigAlgId(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sigAlgId = value;
}
constexpr ::StringW& Org::BouncyCastle::X509::X509V1CertificateGenerator::__cordl_internal_get_signatureAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureAlgorithm;
}
constexpr ::StringW const& Org::BouncyCastle::X509::X509V1CertificateGenerator::__cordl_internal_get_signatureAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureAlgorithm;
}
constexpr void Org::BouncyCastle::X509::X509V1CertificateGenerator::__cordl_internal_set_signatureAlgorithm(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signatureAlgorithm = value;
}
inline void Org::BouncyCastle::X509::X509V1CertificateGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::X509V1CertificateGenerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::X509V1CertificateGenerator::SetSerialNumber(::Org::BouncyCastle::Math::BigInteger* serialNumber) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(),
                                                                                         { "SetSerialNumber", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serialNumber);
}
inline void Org::BouncyCastle::X509::X509V1CertificateGenerator::SetIssuerDN(::Org::BouncyCastle::Asn1::X509::X509Name* issuer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(),
                                                                                         { "SetIssuerDN", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, issuer);
}
inline void Org::BouncyCastle::X509::X509V1CertificateGenerator::SetNotBefore(::System::DateTime date) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(), { "SetNotBefore", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, date);
}
inline void Org::BouncyCastle::X509::X509V1CertificateGenerator::SetNotAfter(::System::DateTime date) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(), { "SetNotAfter", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, date);
}
inline void Org::BouncyCastle::X509::X509V1CertificateGenerator::SetSubjectDN(::Org::BouncyCastle::Asn1::X509::X509Name* subject) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(),
                                                                                         { "SetSubjectDN", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subject);
}
inline void Org::BouncyCastle::X509::X509V1CertificateGenerator::SetPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(),
                                                                                         { "SetPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, publicKey);
}
inline void Org::BouncyCastle::X509::X509V1CertificateGenerator::SetSignatureAlgorithm(::StringW signatureAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(), { "SetSignatureAlgorithm", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signatureAlgorithm);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509V1CertificateGenerator::Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(),
                                                                                         { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*>(this, ___internal_method, privateKey);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509V1CertificateGenerator::Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                                                                 ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(),
                          { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*>(this, ___internal_method, privateKey, random);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509V1CertificateGenerator::Generate(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureCalculatorFactory) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(),
                                                                                         { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*>(this, ___internal_method, signatureCalculatorFactory);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509V1CertificateGenerator::GenerateJcaObject(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* tbsCert,
                                                                                                                          ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlg,
                                                                                                                          ::ArrayW<uint8_t> signature) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(),
                                                           { "GenerateJcaObject",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*>(this, ___internal_method, tbsCert, sigAlg, signature);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::X509::X509V1CertificateGenerator::get_SignatureAlgNames() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>(), { "get_SignatureAlgNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509V1CertificateGenerator* Org::BouncyCastle::X509::X509V1CertificateGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::X509V1CertificateGenerator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::X509V1CertificateGenerator::X509V1CertificateGenerator() {}
