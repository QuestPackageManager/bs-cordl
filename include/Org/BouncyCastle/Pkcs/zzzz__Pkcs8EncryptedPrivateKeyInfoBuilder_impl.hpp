#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Pkcs\Pkcs8EncryptedPrivateKeyInfoBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs8EncryptedPrivateKeyInfoBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__PrivateKeyInfo_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilder_def.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs8EncryptedPrivateKeyInfo_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x35bae14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::*)(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*)>(
    &::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35bae34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo* (
    ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::*)(::Org::BouncyCastle::Crypto::ICipherBuilder*)>(&::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::Build)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x35bae3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder*>(),
                                                                                           { "Build", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherBuilder*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*& Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::__cordl_internal_get_privateKeyInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKeyInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* const& Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::__cordl_internal_get_privateKeyInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKeyInfo;
}
constexpr void Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::__cordl_internal_set_privateKeyInfo(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___privateKeyInfo = value;
}
inline void Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::_ctor(::ArrayW<uint8_t> privateKeyInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privateKeyInfo);
}
inline void Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::_ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privateKeyInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privateKeyInfo);
}
inline ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo* Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::Build(::Org::BouncyCastle::Crypto::ICipherBuilder* encryptor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder*>(),
                                                                                         { "Build", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo*>(this, ___internal_method, encryptor);
}
inline ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder* Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::New_ctor(::ArrayW<uint8_t> privateKeyInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder*>(privateKeyInfo));
}
inline ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder*
Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::New_ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privateKeyInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder*>(privateKeyInfo));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder::Pkcs8EncryptedPrivateKeyInfoBuilder() {}
