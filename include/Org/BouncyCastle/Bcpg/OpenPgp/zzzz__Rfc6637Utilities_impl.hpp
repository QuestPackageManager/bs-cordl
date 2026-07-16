#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/Rfc6637Utilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__Rfc6637Utilities_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35a2750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities.GetAgreementAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Org::BouncyCastle::Bcpg::PublicKeyPacket*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities::GetAgreementAlgorithm)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x35a2754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities*>(),
                                                                                           { "GetAgreementAlgorithm", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities.GetKeyEncryptionOID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities::GetKeyEncryptionOID)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x35a28d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities*>(),
                                                                                           { "GetKeyEncryptionOID", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities.GetKeyLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities::GetKeyLength)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x35a2a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities*>(),
                                                                                           { "GetKeyLength", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities.CreateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Bcpg::PublicKeyPacket*, ::Org::BouncyCastle::Math::EC::ECPoint*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities::CreateKey)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x358d4bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities*>(),
                                                { "CreateKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities.CreateUserKeyingMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Bcpg::PublicKeyPacket*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities::CreateUserKeyingMaterial)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x35a2aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities*>(),
                                                                                           { "CreateUserKeyingMaterial", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities.Kdf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Bcpg::HashAlgorithmTag, ::Org::BouncyCastle::Math::EC::ECPoint*, int32_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities::Kdf)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x35a2d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities*>(),
                                                             { "Kdf",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities::setStaticF_ANONYMOUS_SENDER(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "ANONYMOUS_SENDER", ::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities::getStaticF_ANONYMOUS_SENDER() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "ANONYMOUS_SENDER", ::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities*>();
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities::GetAgreementAlgorithm(::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities*>(),
                                                                                         { "GetAgreementAlgorithm", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pubKeyData);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities::GetKeyEncryptionOID(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities*>(),
                                                                                         { "GetKeyEncryptionOID", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(nullptr, ___internal_method, algID);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities::GetKeyLength(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities*>(),
                                                                                         { "GetKeyLength", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, algID);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities::CreateKey(::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyData, ::Org::BouncyCastle::Math::EC::ECPoint* s) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities*>(),
                                              { "CreateKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, pubKeyData, s);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities::CreateUserKeyingMaterial(::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities*>(),
                                                                                         { "CreateUserKeyingMaterial", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, pubKeyData);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities::Kdf(::Org::BouncyCastle::Bcpg::HashAlgorithmTag digestAlg, ::Org::BouncyCastle::Math::EC::ECPoint* s, int32_t keyLen,
                                                                                 ::ArrayW<uint8_t> parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities*>(),
                                                           { "Kdf",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, digestAlg, s, keyLen, parameters);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities* Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities::Rfc6637Utilities() {}
