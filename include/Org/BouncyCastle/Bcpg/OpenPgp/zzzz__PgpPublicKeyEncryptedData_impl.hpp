#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpPublicKeyEncryptedData.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpEncryptedData_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKeyEncryptedData_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPrivateKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyEncSessionPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBufferedCipher_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::*)(
    ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*, ::Org::BouncyCastle::Bcpg::InputStreamPacket*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x358be80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::InputStreamPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData.GetKeyCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBufferedCipher* (*)(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::GetKeyCipher)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x358be8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>(),
                                                                                           { "GetKeyCipher", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData.ConfirmCheckSum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::ConfirmCheckSum)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x358c0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>(), { "ConfirmCheckSum", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData.get_KeyId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::get_KeyId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x358c198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>(), { "get_KeyId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData.GetSymmetricAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::*)(
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::GetSymmetricAlgorithm)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x358c1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>(),
                                                                                           { "GetSymmetricAlgorithm", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData.GetDataStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::GetDataStream)> {
  constexpr static std::size_t size = 0x7b8;
  constexpr static std::size_t addrs = 0x358c9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>(),
                                                                                           { "GetDataStream", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData.RecoverSessionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::RecoverSessionData)> {
  constexpr static std::size_t size = 0x7d8;
  constexpr static std::size_t addrs = 0x358c1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>(),
                                                                                           { "RecoverSessionData", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData.ProcessEncodedMpi
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Crypto::IBufferedCipher*, int32_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::ProcessEncodedMpi)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x358d6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>(),
                            { "ProcessEncodedMpi", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBufferedCipher*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::__cordl_internal_get_keyData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyData;
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::__cordl_internal_get_keyData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyData;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::__cordl_internal_set_keyData(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyData = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* keyData, ::Org::BouncyCastle::Bcpg::InputStreamPacket* encData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::InputStreamPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyData, encData);
}
inline ::Org::BouncyCastle::Crypto::IBufferedCipher* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::GetKeyCipher(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>(),
                                                                                         { "GetKeyCipher", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBufferedCipher*>(nullptr, ___internal_method, algorithm);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::ConfirmCheckSum(::ArrayW<uint8_t> sessionInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>(), { "ConfirmCheckSum", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sessionInfo);
}
inline int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::get_KeyId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>(), { "get_KeyId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag
Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::GetSymmetricAlgorithm(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* privKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>(),
                                                                                         { "GetSymmetricAlgorithm", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(this, ___internal_method, privKey);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::GetDataStream(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* privKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>(),
                                                                                         { "GetDataStream", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, privKey);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::RecoverSessionData(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* privKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>(),
                                                                                         { "RecoverSessionData", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, privKey);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::ProcessEncodedMpi(::Org::BouncyCastle::Crypto::IBufferedCipher* cipher, int32_t size, ::ArrayW<uint8_t> mpiEnc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>(),
                          { "ProcessEncodedMpi", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBufferedCipher*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cipher, size, mpiEnc);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*
Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyEncSessionPacket* keyData, ::Org::BouncyCastle::Bcpg::InputStreamPacket* encData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData*>(keyData, encData));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyEncryptedData::PgpPublicKeyEncryptedData() {}
