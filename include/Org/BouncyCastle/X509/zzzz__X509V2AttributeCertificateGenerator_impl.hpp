#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/X509V2AttributeCertificateGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509V2AttributeCertificateGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__V2AttributeCertificateInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509ExtensionsGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__AttributeCertificateHolder_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__AttributeCertificateIssuer_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509AttributeCertificate_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Attribute_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)()>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x36522c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)()>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Reset)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x365234c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.SetHolder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::Org::BouncyCastle::X509::AttributeCertificateHolder*)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetHolder)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x36523b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(),
                                                                                           { "SetHolder", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::AttributeCertificateHolder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.SetIssuer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::Org::BouncyCastle::X509::AttributeCertificateIssuer*)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetIssuer)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36523dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(),
                                                                                           { "SetIssuer", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.SetSerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetSerialNumber)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3652408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(),
                                                                                           { "SetSerialNumber", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.SetNotBefore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::System::DateTime)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetNotBefore)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3652480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(), { "SetNotBefore", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.SetNotAfter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::System::DateTime)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetNotAfter)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x36524f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(), { "SetNotAfter", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.SetSignatureAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::StringW)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetSignatureAlgorithm)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3652570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(), { "SetSignatureAlgorithm", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.AddAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::Org::BouncyCastle::X509::X509Attribute*)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::AddAttribute)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x36526d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(),
                                                                                           { "AddAttribute", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Attribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.SetIssuerUniqueId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::ArrayW<bool>)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetIssuerUniqueId)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3652718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(), { "SetIssuerUniqueId", {}, { ::i2c::type_of<::ArrayW<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.AddExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::StringW, bool, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::AddExtension)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x365275c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(),
                                                { "AddExtension", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.AddExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::StringW, bool, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::AddExtension)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x36527f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(),
                                                             { "AddExtension", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::X509::IX509AttributeCertificate* (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
        &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Generate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x365288c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(),
                                                                                           { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::IX509AttributeCertificate* (
    ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Generate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3652894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(),
                            { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::IX509AttributeCertificate* (
    ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::Org::BouncyCastle::Crypto::ISignatureFactory*)>(&::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Generate)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x3652914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(),
                                                                                           { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.get_SignatureAlgNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)()>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::get_SignatureAlgNames)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3652e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(), { "get_SignatureAlgNames", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator*& Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_get_extGenerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extGenerator;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* const& Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_get_extGenerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extGenerator;
}
constexpr void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_set_extGenerator(::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extGenerator = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*& Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_get_acInfoGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acInfoGen;
}
constexpr ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator* const& Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_get_acInfoGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acInfoGen;
}
constexpr void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_set_acInfoGen(::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___acInfoGen = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_get_sigOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigOID;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_get_sigOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigOID;
}
constexpr void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_set_sigOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sigOID = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_get_sigAlgId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigAlgId;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_get_sigAlgId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigAlgId;
}
constexpr void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_set_sigAlgId(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sigAlgId = value;
}
constexpr ::StringW& Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_get_signatureAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureAlgorithm;
}
constexpr ::StringW const& Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_get_signatureAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureAlgorithm;
}
constexpr void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__cordl_internal_set_signatureAlgorithm(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signatureAlgorithm = value;
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetHolder(::Org::BouncyCastle::X509::AttributeCertificateHolder* holder) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(),
                                                                                         { "SetHolder", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::AttributeCertificateHolder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, holder);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetIssuer(::Org::BouncyCastle::X509::AttributeCertificateIssuer* issuer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(),
                                                                                         { "SetIssuer", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, issuer);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetSerialNumber(::Org::BouncyCastle::Math::BigInteger* serialNumber) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(),
                                                                                         { "SetSerialNumber", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serialNumber);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetNotBefore(::System::DateTime date) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(), { "SetNotBefore", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, date);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetNotAfter(::System::DateTime date) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(), { "SetNotAfter", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, date);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetSignatureAlgorithm(::StringW signatureAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(), { "SetSignatureAlgorithm", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signatureAlgorithm);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::AddAttribute(::Org::BouncyCastle::X509::X509Attribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(),
                                                                                         { "AddAttribute", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Attribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attribute);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetIssuerUniqueId(::ArrayW<bool> iui) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(), { "SetIssuerUniqueId", {}, { ::i2c::type_of<::ArrayW<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, iui);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::AddExtension(::StringW oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable* extensionValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(),
                                              { "AddExtension", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid, critical, extensionValue);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::AddExtension(::StringW oid, bool critical, ::ArrayW<uint8_t> extensionValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(),
                                                           { "AddExtension", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid, critical, extensionValue);
}
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(),
                                                                                         { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(this, ___internal_method, privateKey);
}
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                                                                                    ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(),
                          { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(this, ___internal_method, privateKey, random);
}
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate*
Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Generate(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureCalculatorFactory) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(),
                                                                                         { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(this, ___internal_method, signatureCalculatorFactory);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::get_SignatureAlgNames() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>(), { "get_SignatureAlgNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator* Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::X509V2AttributeCertificateGenerator() {}
