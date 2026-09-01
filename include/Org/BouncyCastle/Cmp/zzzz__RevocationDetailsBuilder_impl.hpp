#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cmp\RevocationDetailsBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__RevocationDetailsBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__CertTemplateBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectPublicKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__RevocationDetails_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder.SetPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder* (
    ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder::*)(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*)>(&::Org::BouncyCastle::Cmp::RevocationDetailsBuilder::SetPublicKey)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x36a45d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder*>(),
                                                                                           { "SetPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder.SetIssuer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder* (
    ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(&::Org::BouncyCastle::Cmp::RevocationDetailsBuilder::SetIssuer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x36a4608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder*>(),
                                                                                           { "SetIssuer", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder.SetSerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder* (
    ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder::*)(::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Cmp::RevocationDetailsBuilder::SetSerialNumber)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x36a4638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder*>(),
                                                                                           { "SetSerialNumber", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder.SetSubject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder* (
    ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(&::Org::BouncyCastle::Cmp::RevocationDetailsBuilder::SetSubject)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x36a46d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder*>(),
                                                                                           { "SetSubject", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cmp::RevocationDetails* (::Org::BouncyCastle::Cmp::RevocationDetailsBuilder::*)()>(
    &::Org::BouncyCastle::Cmp::RevocationDetailsBuilder::Build)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x36a4700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder*>(), { "Build", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cmp::RevocationDetailsBuilder::*)()>(&::Org::BouncyCastle::Cmp::RevocationDetailsBuilder::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x36a479c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*& Org::BouncyCastle::Cmp::RevocationDetailsBuilder::__cordl_internal_get__templateBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____templateBuilder;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* const& Org::BouncyCastle::Cmp::RevocationDetailsBuilder::__cordl_internal_get__templateBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____templateBuilder;
}
constexpr void Org::BouncyCastle::Cmp::RevocationDetailsBuilder::__cordl_internal_set__templateBuilder(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____templateBuilder = value;
}
inline ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder* Org::BouncyCastle::Cmp::RevocationDetailsBuilder::SetPublicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* publicKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder*>(),
                                                                                         { "SetPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder*>(this, ___internal_method, publicKey);
}
inline ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder* Org::BouncyCastle::Cmp::RevocationDetailsBuilder::SetIssuer(::Org::BouncyCastle::Asn1::X509::X509Name* issuer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder*>(), { "SetIssuer", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder*>(this, ___internal_method, issuer);
}
inline ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder* Org::BouncyCastle::Cmp::RevocationDetailsBuilder::SetSerialNumber(::Org::BouncyCastle::Math::BigInteger* serialNumber) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder*>(),
                                                                                         { "SetSerialNumber", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder*>(this, ___internal_method, serialNumber);
}
inline ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder* Org::BouncyCastle::Cmp::RevocationDetailsBuilder::SetSubject(::Org::BouncyCastle::Asn1::X509::X509Name* subject) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder*>(),
                                                                                         { "SetSubject", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder*>(this, ___internal_method, subject);
}
inline ::Org::BouncyCastle::Cmp::RevocationDetails* Org::BouncyCastle::Cmp::RevocationDetailsBuilder::Build() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder*>(), { "Build", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::RevocationDetails*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cmp::RevocationDetailsBuilder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder* Org::BouncyCastle::Cmp::RevocationDetailsBuilder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder::RevocationDetailsBuilder() {}
