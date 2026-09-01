#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\OpenPgp\PgpEncryptedDataGenerator.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpEncryptedDataGenerator_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpEncryptedDataGenerator_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__IStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpEncryptedDataGenerator_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__S2k_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Crypto/IO/zzzz__CipherStream_def.hpp"
#include "Org/BouncyCastle/Crypto/IO/zzzz__DigestStream_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBufferedCipher_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod.AddSessionInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod::*)(
    ::ArrayW<uint8_t>, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod::AddSessionInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3581490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod::__cordl_internal_get_sessionInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sessionInfo;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod::__cordl_internal_get_sessionInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sessionInfo;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod::__cordl_internal_set_sessionInfo(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sessionInfo = value;
}
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod::__cordl_internal_get_encAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encAlgorithm;
}
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod::__cordl_internal_get_encAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encAlgorithm;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod::__cordl_internal_set_encAlgorithm(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod::__cordl_internal_set_key(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod::AddSessionInfo(::ArrayW<uint8_t> si, ::Org::BouncyCastle::Security::SecureRandom* random) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, si, random);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod::PgpEncryptedDataGenerator_EncMethod() {}
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod::*)(
    ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::S2k*, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x357ff78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::S2k*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod.GetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod::GetKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3581494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod*>(), { "GetKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod.AddSessionInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod::*)(
    ::ArrayW<uint8_t>, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod::AddSessionInfo)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x358149c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod::Encode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3581748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::S2k*& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod::__cordl_internal_get_s2k() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s2k;
}
constexpr ::Org::BouncyCastle::Bcpg::S2k* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod::__cordl_internal_get_s2k() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s2k;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod::__cordl_internal_set_s2k(::Org::BouncyCastle::Bcpg::S2k* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s2k = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod::_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::S2k* s2k,
                                                                                         ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::S2k*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encAlgorithm, s2k, key);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod::GetKey() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod*>(), { "GetKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod::AddSessionInfo(::ArrayW<uint8_t> si, ::Org::BouncyCastle::Security::SecureRandom* random) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, si, random);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* pOut) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pOut);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod*
Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod::New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::S2k* s2k,
                                                                                ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod*>(encAlgorithm, s2k, key));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod::PgpEncryptedDataGenerator_PbeMethod() {}
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, bool)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3580124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod.AddSessionInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::*)(
    ::ArrayW<uint8_t>, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::AddSessionInfo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x35817cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod.EncryptSessionInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::*)(
    ::ArrayW<uint8_t>, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::EncryptSessionInfo)> {
  constexpr static std::size_t size = 0x968;
  constexpr static std::size_t addrs = 0x35817f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod*>(),
                                                             { "EncryptSessionInfo", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod.ProcessSessionInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ArrayW<uint8_t>> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::ProcessSessionInfo)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x3582158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod*>(),
                                                                                           { "ProcessSessionInfo", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod.ConvertToEncodedMpi
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::ConvertToEncodedMpi)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x3582a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod*>(),
                                                                                           { "ConvertToEncodedMpi", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::Encode)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3582bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::__cordl_internal_get_pubKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pubKey;
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::__cordl_internal_get_pubKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pubKey;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::__cordl_internal_set_pubKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pubKey = value;
}
constexpr bool& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::__cordl_internal_get_sessionKeyObfuscation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sessionKeyObfuscation;
}
constexpr bool const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::__cordl_internal_get_sessionKeyObfuscation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sessionKeyObfuscation;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::__cordl_internal_set_sessionKeyObfuscation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sessionKeyObfuscation = value;
}
constexpr ::ArrayW<::ArrayW<uint8_t>>& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::ArrayW<::ArrayW<uint8_t>> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::__cordl_internal_set_data(::ArrayW<::ArrayW<uint8_t>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey, bool sessionKeyObfuscation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pubKey, sessionKeyObfuscation);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::AddSessionInfo(::ArrayW<uint8_t> sessionInfo, ::Org::BouncyCastle::Security::SecureRandom* random) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sessionInfo, random);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::EncryptSessionInfo(::ArrayW<uint8_t> sessionInfo, ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod*>(),
                                                           { "EncryptSessionInfo", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, sessionInfo, random);
}
inline ::ArrayW<::ArrayW<uint8_t>> Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::ProcessSessionInfo(::ArrayW<uint8_t> encryptedSessionInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod*>(),
                                                                                         { "ProcessSessionInfo", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<uint8_t>>>(this, ___internal_method, encryptedSessionInfo);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::ConvertToEncodedMpi(::ArrayW<uint8_t> encryptedSessionInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod*>(),
                                                                                         { "ConvertToEncodedMpi", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, encryptedSessionInfo);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* pOut) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pOut);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod*
Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey, bool sessionKeyObfuscation) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod*>(pubKey, sessionKeyObfuscation));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod::PgpEncryptedDataGenerator_PubMethod() {}
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x357fab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, bool)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x357fb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(
    ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x357fc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(
    ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, bool, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x357fc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(
    ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Security::SecureRandom*, bool)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x357fd08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.AddMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::ArrayW<char16_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethod)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x357fd94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(), { "AddMethod", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.AddMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::ArrayW<char16_t>, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethod)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x357fdc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                                             { "AddMethod", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.AddMethodUtf8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::ArrayW<char16_t>, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethodUtf8)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x357ff30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                                             { "AddMethodUtf8", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.AddMethodRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethodRaw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x357ff6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                                             { "AddMethodRaw", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.DoAddMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::ArrayW<uint8_t>, bool, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::DoAddMethod)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x357fe00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                         { "DoAddMethod", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.AddMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x357ff84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                                                                           { "AddMethod", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.AddMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, bool)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethod)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x357ff8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                                             { "AddMethod", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.AddCheckSum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddCheckSum)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3580130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(), { "AddCheckSum", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.CreateSessionInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(
    ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::CreateSessionInfo)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x35801c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
            { "CreateSessionInfo", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::System::IO::Stream*, int64_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::Open)> {
  constexpr static std::size_t size = 0xf30;
  constexpr static std::size_t addrs = 0x3580274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                                             { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::System::IO::Stream*, int64_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::Open)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35811a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                                                                           { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)(::System::IO::Stream*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::Open)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x35811ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                                                                           { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::Close)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x35811b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(), { "Close", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream*& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_get_pOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pOut;
}
constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_get_pOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pOut;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_set_pOut(::Org::BouncyCastle::Bcpg::BcpgOutputStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pOut = value;
}
constexpr ::Org::BouncyCastle::Crypto::IO::CipherStream*& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_get_cOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cOut;
}
constexpr ::Org::BouncyCastle::Crypto::IO::CipherStream* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_get_cOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cOut;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_set_cOut(::Org::BouncyCastle::Crypto::IO::CipherStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cOut = value;
}
constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher*& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_set_c(::Org::BouncyCastle::Crypto::IBufferedCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___c = value;
}
constexpr bool& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_get_withIntegrityPacket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___withIntegrityPacket;
}
constexpr bool const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_get_withIntegrityPacket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___withIntegrityPacket;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_set_withIntegrityPacket(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___withIntegrityPacket = value;
}
constexpr bool& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_get_oldFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oldFormat;
}
constexpr bool const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_get_oldFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oldFormat;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_set_oldFormat(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___oldFormat = value;
}
constexpr ::Org::BouncyCastle::Crypto::IO::DigestStream*& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_get_digestOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestOut;
}
constexpr ::Org::BouncyCastle::Crypto::IO::DigestStream* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_get_digestOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestOut;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_set_digestOut(::Org::BouncyCastle::Crypto::IO::DigestStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digestOut = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_get_methods() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methods;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_get_methods() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methods;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_set_methods(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___methods = value;
}
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_get_defAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defAlgorithm;
}
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_get_defAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defAlgorithm;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_set_defAlgorithm(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_get_rand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rand;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_get_rand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rand;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::__cordl_internal_set_rand(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rand = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encAlgorithm);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool withIntegrityPacket) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encAlgorithm, withIntegrityPacket);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encAlgorithm, rand);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool withIntegrityPacket,
                                                                               ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encAlgorithm, withIntegrityPacket, rand);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Security::SecureRandom* rand,
                                                                               bool oldFormat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encAlgorithm, rand, oldFormat);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethod(::ArrayW<char16_t> passPhrase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(), { "AddMethod", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passPhrase);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethod(::ArrayW<char16_t> passPhrase, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag s2kDigest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                                           { "AddMethod", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passPhrase, s2kDigest);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethodUtf8(::ArrayW<char16_t> passPhrase, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag s2kDigest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                                           { "AddMethodUtf8", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passPhrase, s2kDigest);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethodRaw(::ArrayW<uint8_t> rawPassPhrase, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag s2kDigest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                                           { "AddMethodRaw", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawPassPhrase, s2kDigest);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::DoAddMethod(::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag s2kDigest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                              { "DoAddMethod", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawPassPhrase, clearPassPhrase, s2kDigest);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethod(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                                                                         { "AddMethod", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddMethod(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, bool sessionKeyObfuscation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                                           { "AddMethod", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, sessionKeyObfuscation);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::AddCheckSum(::ArrayW<uint8_t> sessionInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(), { "AddCheckSum", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sessionInfo);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::CreateSessionInfo(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm,
                                                                                                        ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
          { "CreateSessionInfo", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, algorithm, key);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::Open(::System::IO::Stream* outStr, int64_t length, ::ArrayW<uint8_t> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                                           { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, outStr, length, buffer);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::Open(::System::IO::Stream* outStr, int64_t length) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                                                                         { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, outStr, length);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::Open(::System::IO::Stream* outStr, ::ArrayW<uint8_t> buffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(),
                                                                                         { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, outStr, buffer);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::Close() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(), { "Close", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*
Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(encAlgorithm));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*
Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool withIntegrityPacket) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(encAlgorithm, withIntegrityPacket));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*
Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(encAlgorithm, rand));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*
Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool withIntegrityPacket,
                                                                      ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(encAlgorithm, withIntegrityPacket, rand));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*
Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Security::SecureRandom* rand,
                                                                      bool oldFormat) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*>(encAlgorithm, rand, oldFormat));
}
/// @brief Convert operator to "::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator"
constexpr Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::operator ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator"
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::i___Org__BouncyCastle__Bcpg__OpenPgp__IStreamGenerator() noexcept {
  return static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator::PgpEncryptedDataGenerator() {}
