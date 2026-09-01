#pragma once
// IWYU pragma private; include "Mono\Security\Authenticode\AuthenticodeDeformatter.hpp"
#include "Mono/Security/Authenticode/zzzz__AuthenticodeBase_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "Mono/Security/Authenticode/zzzz__AuthenticodeDeformatter_def.hpp"
#include "Mono/Security/X509/zzzz__X509CertificateCollection_def.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
#include "Mono/Security/X509/zzzz__X509Chain_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
#include "Mono/Security/zzzz__PKCS7_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeDeformatter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Authenticode::AuthenticodeDeformatter::*)()>(&::Mono::Security::Authenticode::AuthenticodeDeformatter::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5aa63d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeDeformatter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeDeformatter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Authenticode::AuthenticodeDeformatter::*)(::ArrayW<uint8_t>)>(
    &::Mono::Security::Authenticode::AuthenticodeDeformatter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5aa6454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeDeformatter*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeDeformatter.set_RawData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Authenticode::AuthenticodeDeformatter::*)(::ArrayW<uint8_t>)>(
    &::Mono::Security::Authenticode::AuthenticodeDeformatter::set_RawData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5aa647c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeDeformatter*>(), { "set_RawData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeDeformatter.get_SigningCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Certificate* (::Mono::Security::Authenticode::AuthenticodeDeformatter::*)()>(
    &::Mono::Security::Authenticode::AuthenticodeDeformatter::get_SigningCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa68f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeDeformatter*>(), { "get_SigningCertificate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeDeformatter.CheckSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::Authenticode::AuthenticodeDeformatter::*)()>(&::Mono::Security::Authenticode::AuthenticodeDeformatter::CheckSignature)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x5aa65f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeDeformatter*>(), { "CheckSignature", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeDeformatter.CompareIssuerSerial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::Authenticode::AuthenticodeDeformatter::*)(::StringW, ::ArrayW<uint8_t>, ::Mono::Security::X509::X509Certificate*)>(
    &::Mono::Security::Authenticode::AuthenticodeDeformatter::CompareIssuerSerial)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5aa72ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeDeformatter*>(),
                            { "CompareIssuerSerial", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Mono::Security::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeDeformatter.VerifySignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::Authenticode::AuthenticodeDeformatter::*)(
    ::Mono::Security::PKCS7_SignedData*, ::ArrayW<uint8_t>, ::System::Security::Cryptography::HashAlgorithm*)>(&::Mono::Security::Authenticode::AuthenticodeDeformatter::VerifySignature)> {
  constexpr static std::size_t size = 0x9b4;
  constexpr static std::size_t addrs = 0x5aa68f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeDeformatter*>(),
                            { "VerifySignature",
                              {},
                              { ::i2c::type_of<::Mono::Security::PKCS7_SignedData*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithm*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeDeformatter.VerifyCounterSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::Authenticode::AuthenticodeDeformatter::*)(::Mono::Security::PKCS7_SignerInfo*, ::ArrayW<uint8_t>)>(
    &::Mono::Security::Authenticode::AuthenticodeDeformatter::VerifyCounterSignature)> {
  constexpr static std::size_t size = 0x97c;
  constexpr static std::size_t addrs = 0x5aa73b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeDeformatter*>(),
                                                             { "VerifyCounterSignature", {}, { ::i2c::type_of<::Mono::Security::PKCS7_SignerInfo*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::AuthenticodeDeformatter.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Authenticode::AuthenticodeDeformatter::*)()>(&::Mono::Security::Authenticode::AuthenticodeDeformatter::Reset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5aa654c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeDeformatter*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_filename() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filename;
}
constexpr ::StringW const& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_filename() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filename;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_set_filename(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___filename = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_rawdata() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rawdata;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_rawdata() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rawdata;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_set_rawdata(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rawdata = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_hash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hash;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_hash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hash;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_set_hash(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hash = value;
}
constexpr ::Mono::Security::X509::X509CertificateCollection*& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_coll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coll;
}
constexpr ::Mono::Security::X509::X509CertificateCollection* const& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_coll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coll;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_set_coll(::Mono::Security::X509::X509CertificateCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___coll = value;
}
constexpr ::Mono::Security::ASN1*& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_signedHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedHash;
}
constexpr ::Mono::Security::ASN1* const& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_signedHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedHash;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_set_signedHash(::Mono::Security::ASN1* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signedHash = value;
}
constexpr ::System::DateTime& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_timestamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timestamp;
}
constexpr ::System::DateTime const& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_timestamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timestamp;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_set_timestamp(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timestamp = value;
}
constexpr ::Mono::Security::X509::X509Certificate*& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_signingCertificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signingCertificate;
}
constexpr ::Mono::Security::X509::X509Certificate* const& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_signingCertificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signingCertificate;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_set_signingCertificate(::Mono::Security::X509::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signingCertificate = value;
}
constexpr int32_t& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_reason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reason;
}
constexpr int32_t const& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_reason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reason;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_set_reason(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reason = value;
}
constexpr bool& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_trustedRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trustedRoot;
}
constexpr bool const& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_trustedRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trustedRoot;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_set_trustedRoot(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trustedRoot = value;
}
constexpr bool& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_trustedTimestampRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trustedTimestampRoot;
}
constexpr bool const& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_trustedTimestampRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trustedTimestampRoot;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_set_trustedTimestampRoot(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trustedTimestampRoot = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_entry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entry;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_entry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entry;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_set_entry(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___entry = value;
}
constexpr ::Mono::Security::X509::X509Chain*& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_signerChain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signerChain;
}
constexpr ::Mono::Security::X509::X509Chain* const& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_signerChain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signerChain;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_set_signerChain(::Mono::Security::X509::X509Chain* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signerChain = value;
}
constexpr ::Mono::Security::X509::X509Chain*& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_timestampChain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timestampChain;
}
constexpr ::Mono::Security::X509::X509Chain* const& Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_get_timestampChain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timestampChain;
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__cordl_internal_set_timestampChain(::Mono::Security::X509::X509Chain* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timestampChain = value;
}
inline void Mono::Security::Authenticode::AuthenticodeDeformatter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeDeformatter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::Authenticode::AuthenticodeDeformatter::_ctor(::ArrayW<uint8_t> rawData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeDeformatter*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawData);
}
inline void Mono::Security::Authenticode::AuthenticodeDeformatter::set_RawData(::ArrayW<uint8_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeDeformatter*>(), { "set_RawData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Mono::Security::X509::X509Certificate* Mono::Security::Authenticode::AuthenticodeDeformatter::get_SigningCertificate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeDeformatter*>(), { "get_SigningCertificate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*>(this, ___internal_method);
}
inline bool Mono::Security::Authenticode::AuthenticodeDeformatter::CheckSignature() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeDeformatter*>(), { "CheckSignature", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mono::Security::Authenticode::AuthenticodeDeformatter::CompareIssuerSerial(::StringW issuer, ::ArrayW<uint8_t> serial, ::Mono::Security::X509::X509Certificate* x509) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeDeformatter*>(),
                          { "CompareIssuerSerial", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Mono::Security::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, issuer, serial, x509);
}
inline bool Mono::Security::Authenticode::AuthenticodeDeformatter::VerifySignature(::Mono::Security::PKCS7_SignedData* sd, ::ArrayW<uint8_t> calculatedMessageDigest,
                                                                                   ::System::Security::Cryptography::HashAlgorithm* ha) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeDeformatter*>(),
                          { "VerifySignature",
                            {},
                            { ::i2c::type_of<::Mono::Security::PKCS7_SignedData*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithm*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sd, calculatedMessageDigest, ha);
}
inline bool Mono::Security::Authenticode::AuthenticodeDeformatter::VerifyCounterSignature(::Mono::Security::PKCS7_SignerInfo* cs, ::ArrayW<uint8_t> signature) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeDeformatter*>(),
                                                           { "VerifyCounterSignature", {}, { ::i2c::type_of<::Mono::Security::PKCS7_SignerInfo*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cs, signature);
}
inline void Mono::Security::Authenticode::AuthenticodeDeformatter::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::AuthenticodeDeformatter*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::Authenticode::AuthenticodeDeformatter* Mono::Security::Authenticode::AuthenticodeDeformatter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Authenticode::AuthenticodeDeformatter*>());
}
inline ::Mono::Security::Authenticode::AuthenticodeDeformatter* Mono::Security::Authenticode::AuthenticodeDeformatter::New_ctor(::ArrayW<uint8_t> rawData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Authenticode::AuthenticodeDeformatter*>(rawData));
}
// Ctor Parameters []
constexpr ::Mono::Security::Authenticode::AuthenticodeDeformatter::AuthenticodeDeformatter() {}
