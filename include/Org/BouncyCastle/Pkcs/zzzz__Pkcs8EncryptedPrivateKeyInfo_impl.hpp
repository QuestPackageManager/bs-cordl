#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Pkcs\Pkcs8EncryptedPrivateKeyInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs8EncryptedPrivateKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__EncryptedPrivateKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__PrivateKeyInfo_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDecryptorBuilderProvider_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo.parseBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* (*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::parseBytes)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x35ba7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo*>(), { "parseBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::*)(::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*)>(
    &::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35ba940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x35ba948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo.ToAsn1Structure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* (::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::*)()>(
    &::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::ToAsn1Structure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35ba964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo*>(), { "ToAsn1Structure", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo.GetEncryptedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::*)()>(
    &::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::GetEncryptedData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x35ba96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo*>(), { "GetEncryptedData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::*)()>(
    &::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::GetEncoded)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x35ba994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo*>(), { "GetEncoded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo.DecryptPrivateKeyInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* (::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::*)(::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider*)>(
        &::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::DecryptPrivateKeyInfo)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x35ba9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo*>(),
                                                             { "DecryptPrivateKeyInfo", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*& Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::__cordl_internal_get_encryptedPrivateKeyInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptedPrivateKeyInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* const& Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::__cordl_internal_get_encryptedPrivateKeyInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptedPrivateKeyInfo;
}
constexpr void Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::__cordl_internal_set_encryptedPrivateKeyInfo(::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encryptedPrivateKeyInfo = value;
}
inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::parseBytes(::ArrayW<uint8_t> pkcs8Encoding) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo*>(), { "parseBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(nullptr, ___internal_method, pkcs8Encoding);
}
inline void Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::_ctor(::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encryptedPrivateKeyInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encryptedPrivateKeyInfo);
}
inline void Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::_ctor(::ArrayW<uint8_t> encryptedPrivateKeyInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encryptedPrivateKeyInfo);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::ToAsn1Structure() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo*>(), { "ToAsn1Structure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::GetEncryptedData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo*>(), { "GetEncryptedData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::GetEncoded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo*>(), { "GetEncoded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*
Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::DecryptPrivateKeyInfo(::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider* inputDecryptorProvider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo*>(),
                                                           { "DecryptPrivateKeyInfo", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*>(this, ___internal_method, inputDecryptorProvider);
}
inline ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo*
Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::New_ctor(::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encryptedPrivateKeyInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo*>(encryptedPrivateKeyInfo));
}
inline ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo* Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::New_ctor(::ArrayW<uint8_t> encryptedPrivateKeyInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo*>(encryptedPrivateKeyInfo));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo::Pkcs8EncryptedPrivateKeyInfo() {}
