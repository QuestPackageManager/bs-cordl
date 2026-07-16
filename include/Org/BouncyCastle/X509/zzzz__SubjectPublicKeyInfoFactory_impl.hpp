#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/SubjectPublicKeyInfoFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__SubjectPublicKeyInfoFactory_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectPublicKeyInfo_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory::*)()>(&::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3643028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory.CreateSubjectPublicKeyInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* (*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory::CreateSubjectPublicKeyInfo)> {
  constexpr static std::size_t size = 0xdf0;
  constexpr static std::size_t addrs = 0x364302c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory*>(),
                                                             { "CreateSubjectPublicKeyInfo", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory.ExtractBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory::ExtractBytes)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3643f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory*>(),
                                                { "ExtractBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory.ExtractBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory::ExtractBytes)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3643e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory*>(),
            { "ExtractBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*
Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory::CreateSubjectPublicKeyInfo(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory*>(),
                                                           { "CreateSubjectPublicKeyInfo", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>(nullptr, ___internal_method, publicKey);
}
inline void Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory::ExtractBytes(::ArrayW<uint8_t> encKey, int32_t offset, ::Org::BouncyCastle::Math::BigInteger* bI) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory*>(),
                                              { "ExtractBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, encKey, offset, bI);
}
inline void Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory::ExtractBytes(::ArrayW<uint8_t> encKey, int32_t size, int32_t offSet, ::Org::BouncyCastle::Math::BigInteger* bI) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory*>(),
          { "ExtractBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, encKey, size, offSet, bI);
}
inline ::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory* Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory::SubjectPublicKeyInfoFactory() {}
