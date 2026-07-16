#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/SessionParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SessionParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SessionParameters_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::*)()>(&::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x346dcf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::SessionParameters* (::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::Build)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x346dd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(), { "Build", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder.SetCipherSuite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* (::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::SetCipherSuite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346ded0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(), { "SetCipherSuite", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder.SetCompressionAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* (::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::SetCompressionAlgorithm)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x346ded8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(), { "SetCompressionAlgorithm", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder.SetExtendedMasterSecret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* (::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::*)(bool)>(
    &::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::SetExtendedMasterSecret)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346dee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(), { "SetExtendedMasterSecret", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder.SetMasterSecret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* (
    ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::SetMasterSecret)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346deec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(), { "SetMasterSecret", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder.SetPeerCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* (::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::*)(::Org::BouncyCastle::Crypto::Tls::Certificate*)>(
        &::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::SetPeerCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346def4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(),
                                                                                           { "SetPeerCertificate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder.SetPskIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* (
    ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::SetPskIdentity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346defc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(), { "SetPskIdentity", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder.SetSrpIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* (
    ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::SetSrpIdentity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346df04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(), { "SetSrpIdentity", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder.SetServerExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* (
    ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::SetServerExtensions)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x346df0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(),
                                                                                           { "SetServerExtensions", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder.Validate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::*)(bool, ::StringW)>(
    &::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::Validate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x346de50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(),
                                                                                           { "Validate", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_get_mCipherSuite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCipherSuite;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_get_mCipherSuite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCipherSuite;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_set_mCipherSuite(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mCipherSuite = value;
}
constexpr int16_t& Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_get_mCompressionAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCompressionAlgorithm;
}
constexpr int16_t const& Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_get_mCompressionAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCompressionAlgorithm;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_set_mCompressionAlgorithm(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mCompressionAlgorithm = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_get_mMasterSecret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMasterSecret;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_get_mMasterSecret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMasterSecret;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_set_mMasterSecret(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mMasterSecret = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate*& Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_get_mPeerCertificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPeerCertificate;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate* const& Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_get_mPeerCertificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPeerCertificate;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_set_mPeerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPeerCertificate = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_get_mPskIdentity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPskIdentity;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_get_mPskIdentity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPskIdentity;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_set_mPskIdentity(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPskIdentity = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_get_mSrpIdentity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpIdentity;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_get_mSrpIdentity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpIdentity;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_set_mSrpIdentity(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSrpIdentity = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_get_mEncodedServerExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEncodedServerExtensions;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_get_mEncodedServerExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEncodedServerExtensions;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_set_mEncodedServerExtensions(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mEncodedServerExtensions = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_get_mExtendedMasterSecret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mExtendedMasterSecret;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_get_mExtendedMasterSecret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mExtendedMasterSecret;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::__cordl_internal_set_mExtendedMasterSecret(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mExtendedMasterSecret = value;
}
inline void Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::SessionParameters* Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::Build() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(), { "Build", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::SetCipherSuite(int32_t cipherSuite) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(), { "SetCipherSuite", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(this, ___internal_method, cipherSuite);
}
inline ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::SetCompressionAlgorithm(uint8_t compressionAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(), { "SetCompressionAlgorithm", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(this, ___internal_method, compressionAlgorithm);
}
inline ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::SetExtendedMasterSecret(bool extendedMasterSecret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(), { "SetExtendedMasterSecret", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(this, ___internal_method, extendedMasterSecret);
}
inline ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::SetMasterSecret(::ArrayW<uint8_t> masterSecret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(), { "SetMasterSecret", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(this, ___internal_method, masterSecret);
}
inline ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*
Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::SetPeerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* peerCertificate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(),
                                                                                         { "SetPeerCertificate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(this, ___internal_method, peerCertificate);
}
inline ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::SetPskIdentity(::ArrayW<uint8_t> pskIdentity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(), { "SetPskIdentity", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(this, ___internal_method, pskIdentity);
}
inline ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::SetSrpIdentity(::ArrayW<uint8_t> srpIdentity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(), { "SetSrpIdentity", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(this, ___internal_method, srpIdentity);
}
inline ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*
Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::SetServerExtensions(::System::Collections::IDictionary* serverExtensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(),
                                                                                         { "SetServerExtensions", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(this, ___internal_method, serverExtensions);
}
inline void Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::Validate(bool condition, ::StringW parameter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>(), { "Validate", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, condition, parameter);
}
inline ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder* Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters_Builder::SessionParameters_Builder() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SessionParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SessionParameters::*)(
    int32_t, uint8_t, ::ArrayW<uint8_t>, ::Org::BouncyCastle::Crypto::Tls::Certificate*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(
    &::Org::BouncyCastle::Crypto::Tls::SessionParameters::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x346d72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SessionParameters.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SessionParameters::*)()>(&::Org::BouncyCastle::Crypto::Tls::SessionParameters::Clear)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x346d800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SessionParameters.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::SessionParameters* (::Org::BouncyCastle::Crypto::Tls::SessionParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SessionParameters::Copy)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x346d888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(), { "Copy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SessionParameters.get_CipherSuite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::SessionParameters::*)()>(&::Org::BouncyCastle::Crypto::Tls::SessionParameters::get_CipherSuite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346d938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(), { "get_CipherSuite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SessionParameters.get_CompressionAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Tls::SessionParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SessionParameters::get_CompressionAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346d940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(), { "get_CompressionAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SessionParameters.get_IsExtendedMasterSecret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::SessionParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SessionParameters::get_IsExtendedMasterSecret)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346d948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(), { "get_IsExtendedMasterSecret", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SessionParameters.get_MasterSecret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::SessionParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SessionParameters::get_MasterSecret)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346d950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(), { "get_MasterSecret", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SessionParameters.get_PeerCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::Certificate* (::Org::BouncyCastle::Crypto::Tls::SessionParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SessionParameters::get_PeerCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346d958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(), { "get_PeerCertificate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SessionParameters.get_PskIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::SessionParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SessionParameters::get_PskIdentity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346d960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(), { "get_PskIdentity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SessionParameters.get_SrpIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::SessionParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SessionParameters::get_SrpIdentity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346d968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(), { "get_SrpIdentity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SessionParameters.ReadServerExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (::Org::BouncyCastle::Crypto::Tls::SessionParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SessionParameters::ReadServerExtensions)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x346d970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(), { "ReadServerExtensions", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_get_mCipherSuite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCipherSuite;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_get_mCipherSuite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCipherSuite;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_set_mCipherSuite(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mCipherSuite = value;
}
constexpr uint8_t& Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_get_mCompressionAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCompressionAlgorithm;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_get_mCompressionAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCompressionAlgorithm;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_set_mCompressionAlgorithm(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mCompressionAlgorithm = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_get_mMasterSecret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMasterSecret;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_get_mMasterSecret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMasterSecret;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_set_mMasterSecret(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mMasterSecret = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate*& Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_get_mPeerCertificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPeerCertificate;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate* const& Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_get_mPeerCertificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPeerCertificate;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_set_mPeerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPeerCertificate = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_get_mPskIdentity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPskIdentity;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_get_mPskIdentity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPskIdentity;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_set_mPskIdentity(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPskIdentity = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_get_mSrpIdentity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpIdentity;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_get_mSrpIdentity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpIdentity;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_set_mSrpIdentity(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSrpIdentity = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_get_mEncodedServerExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEncodedServerExtensions;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_get_mEncodedServerExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEncodedServerExtensions;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_set_mEncodedServerExtensions(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mEncodedServerExtensions = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_get_mExtendedMasterSecret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mExtendedMasterSecret;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_get_mExtendedMasterSecret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mExtendedMasterSecret;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SessionParameters::__cordl_internal_set_mExtendedMasterSecret(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mExtendedMasterSecret = value;
}
inline void Org::BouncyCastle::Crypto::Tls::SessionParameters::_ctor(int32_t cipherSuite, uint8_t compressionAlgorithm, ::ArrayW<uint8_t> masterSecret,
                                                                     ::Org::BouncyCastle::Crypto::Tls::Certificate* peerCertificate, ::ArrayW<uint8_t> pskIdentity, ::ArrayW<uint8_t> srpIdentity,
                                                                     ::ArrayW<uint8_t> encodedServerExtensions, bool extendedMasterSecret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(),
                                           ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipherSuite, compressionAlgorithm, masterSecret, peerCertificate, pskIdentity, srpIdentity, encodedServerExtensions,
                                                   extendedMasterSecret);
}
inline void Org::BouncyCastle::Crypto::Tls::SessionParameters::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::SessionParameters* Org::BouncyCastle::Crypto::Tls::SessionParameters::Copy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(), { "Copy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::SessionParameters::get_CipherSuite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(), { "get_CipherSuite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::SessionParameters::get_CompressionAlgorithm() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(), { "get_CompressionAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Tls::SessionParameters::get_IsExtendedMasterSecret() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(), { "get_IsExtendedMasterSecret", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::SessionParameters::get_MasterSecret() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(), { "get_MasterSecret", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::Certificate* Org::BouncyCastle::Crypto::Tls::SessionParameters::get_PeerCertificate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(), { "get_PeerCertificate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::Certificate*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::SessionParameters::get_PskIdentity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(), { "get_PskIdentity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::SessionParameters::get_SrpIdentity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(), { "get_SrpIdentity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::Tls::SessionParameters::ReadServerExtensions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(), { "ReadServerExtensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::SessionParameters* Org::BouncyCastle::Crypto::Tls::SessionParameters::New_ctor(int32_t cipherSuite, uint8_t compressionAlgorithm,
                                                                                                                        ::ArrayW<uint8_t> masterSecret,
                                                                                                                        ::Org::BouncyCastle::Crypto::Tls::Certificate* peerCertificate,
                                                                                                                        ::ArrayW<uint8_t> pskIdentity, ::ArrayW<uint8_t> srpIdentity,
                                                                                                                        ::ArrayW<uint8_t> encodedServerExtensions, bool extendedMasterSecret) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(cipherSuite, compressionAlgorithm, masterSecret, peerCertificate, pskIdentity,
                                                                                                                srpIdentity, encodedServerExtensions, extendedMasterSecret));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters::SessionParameters() {}
