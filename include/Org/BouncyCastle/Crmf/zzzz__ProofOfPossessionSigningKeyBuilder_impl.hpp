#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crmf/ProofOfPossessionSigningKeyBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__ProofOfPossessionSigningKeyBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__CertRequest_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__PKMacValue_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__PopoSigningKey_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectPublicKeyInfo_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__PKMacBuilder_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::*)(::Org::BouncyCastle::Asn1::Crmf::CertRequest*)>(
    &::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d8018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::*)(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*)>(
    &::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d7580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder.SetSender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder* (
    ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::*)(::Org::BouncyCastle::Asn1::X509::GeneralName*)>(&::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::SetSender)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d7588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>(),
                                                                                           { "SetSender", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder.SetPublicKeyMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder* (
    ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::*)(::Org::BouncyCastle::Crmf::PKMacBuilder*, ::ArrayW<char16_t>)>(
    &::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::SetPublicKeyMac)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x36d7590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>(),
                                                             { "SetPublicKeyMac", {}, { ::i2c::type_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey* (
    ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::*)(::Org::BouncyCastle::Crypto::ISignatureFactory*)>(&::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::Build)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x36d7a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>(),
                                                                                           { "Build", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Crmf::CertRequest*& Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_get__certRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certRequest;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::CertRequest* const& Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_get__certRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certRequest;
}
constexpr void Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_set__certRequest(::Org::BouncyCastle::Asn1::Crmf::CertRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____certRequest = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_get__pubKeyInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pubKeyInfo;
}
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* const& Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_get__pubKeyInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pubKeyInfo;
}
constexpr void Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_set__pubKeyInfo(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pubKeyInfo = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_set__name(::Org::BouncyCastle::Asn1::X509::GeneralName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____name = value;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::PKMacValue*& Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_get__publicKeyMAC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicKeyMAC;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* const& Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_get__publicKeyMAC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicKeyMAC;
}
constexpr void Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::__cordl_internal_set__publicKeyMAC(::Org::BouncyCastle::Asn1::Crmf::PKMacValue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____publicKeyMAC = value;
}
inline void Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::_ctor(::Org::BouncyCastle::Asn1::Crmf::CertRequest* certRequest) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certRequest);
}
inline void Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::_ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* pubKeyInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pubKeyInfo);
}
inline ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder* Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::SetSender(::Org::BouncyCastle::Asn1::X509::GeneralName* name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>(),
                                                                                         { "SetSender", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>(this, ___internal_method, name);
}
inline ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder* Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::SetPublicKeyMac(::Org::BouncyCastle::Crmf::PKMacBuilder* generator,
                                                                                                                                                   ::ArrayW<char16_t> password) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>(),
                                                           { "SetPublicKeyMac", {}, { ::i2c::type_of<::Org::BouncyCastle::Crmf::PKMacBuilder*>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>(this, ___internal_method, generator, password);
}
inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey* Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::Build(::Org::BouncyCastle::Crypto::ISignatureFactory* signer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>(),
                                                                                         { "Build", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey*>(this, ___internal_method, signer);
}
inline ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder* Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::New_ctor(::Org::BouncyCastle::Asn1::Crmf::CertRequest* certRequest) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>(certRequest));
}
inline ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*
Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::New_ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* pubKeyInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*>(pubKeyInfo));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder::ProofOfPossessionSigningKeyBuilder() {}
