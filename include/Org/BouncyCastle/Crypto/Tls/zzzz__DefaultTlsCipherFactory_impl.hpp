#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\DefaultTlsCipherFactory.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsCipherFactory_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DefaultTlsCipherFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsAeadCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsNullCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsStreamCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCipher_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCipher* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, int32_t, int32_t)>(
        &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateCipher)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x343df88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateAESCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, int32_t, int32_t)>(
        &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateAESCipher)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x343e140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateCamelliaCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, int32_t, int32_t)>(
        &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateCamelliaCipher)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x343e23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateChaCha20Poly1305
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCipher* (
    ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*)>(&::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateChaCha20Poly1305)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x343e338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateCipher_Aes_Ccm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, int32_t, int32_t)>(
        &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateCipher_Aes_Ccm)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x343e394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateCipher_Aes_Gcm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, int32_t, int32_t)>(
        &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateCipher_Aes_Gcm)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x343e454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateCipher_Aes_Ocb
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, int32_t, int32_t)>(
        &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateCipher_Aes_Ocb)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x343e514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateCipher_Camellia_Gcm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, int32_t, int32_t)>(
        &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateCipher_Camellia_Gcm)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x343e5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateDesEdeCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, int32_t)>(
        &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateDesEdeCipher)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x343e698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateNullCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Tls::TlsNullCipher* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, int32_t)>(
        &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateNullCipher)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x343e790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateRC4Cipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, int32_t, int32_t)>(
        &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateRC4Cipher)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x343e844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateSeedCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*, int32_t)>(
        &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateSeedCipher)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x343e94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateAesEngine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBlockCipher* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateAesEngine)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x343ea44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateCamelliaEngine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBlockCipher* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateCamelliaEngine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x343ea88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateAesBlockCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBlockCipher* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateAesBlockCipher)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x343eae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateAeadBlockCipher_Aes_Ccm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateAeadBlockCipher_Aes_Ccm)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x343eb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateAeadBlockCipher_Aes_Gcm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateAeadBlockCipher_Aes_Gcm)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x343ebd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateAeadBlockCipher_Aes_Ocb
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateAeadBlockCipher_Aes_Ocb)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x343ec54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateAeadBlockCipher_Camellia_Gcm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateAeadBlockCipher_Camellia_Gcm)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x343ecec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateCamelliaBlockCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBlockCipher* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateCamelliaBlockCipher)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x343ed68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateDesEdeBlockCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBlockCipher* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateDesEdeBlockCipher)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x343ede4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateRC4StreamCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IStreamCipher* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateRC4StreamCipher)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x343ee6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateSeedBlockCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBlockCipher* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateSeedBlockCipher)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x343eeb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory.CreateHMacDigest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateHMacDigest)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x343ef34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::*)()>(&::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x34353bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::Tls::TlsCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                                          int32_t encryptionAlgorithm, int32_t macAlgorithm) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsCipher*>(this, ___internal_method, context, encryptionAlgorithm, macAlgorithm);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateAESCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                                                  int32_t cipherKeySize, int32_t macAlgorithm) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(this, ___internal_method, context, cipherKeySize, macAlgorithm);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateCamelliaCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                                                       int32_t cipherKeySize, int32_t macAlgorithm) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(this, ___internal_method, context, cipherKeySize, macAlgorithm);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateChaCha20Poly1305(::Org::BouncyCastle::Crypto::Tls::TlsContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsCipher*>(this, ___internal_method, context);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateCipher_Aes_Ccm(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                                                      int32_t cipherKeySize, int32_t macSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*>(this, ___internal_method, context, cipherKeySize, macSize);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateCipher_Aes_Gcm(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                                                      int32_t cipherKeySize, int32_t macSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*>(this, ___internal_method, context, cipherKeySize, macSize);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateCipher_Aes_Ocb(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                                                      int32_t cipherKeySize, int32_t macSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*>(this, ___internal_method, context, cipherKeySize, macSize);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateCipher_Camellia_Gcm(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                                                           int32_t cipherKeySize, int32_t macSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*>(this, ___internal_method, context, cipherKeySize, macSize);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateDesEdeCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                                                     int32_t macAlgorithm) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(this, ___internal_method, context, macAlgorithm);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsNullCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateNullCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                                                  int32_t macAlgorithm) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsNullCipher*>(this, ___internal_method, context, macAlgorithm);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateRC4Cipher(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                                                   int32_t cipherKeySize, int32_t macAlgorithm) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>(this, ___internal_method, context, cipherKeySize, macAlgorithm);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateSeedCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                                                   int32_t macAlgorithm) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(this, ___internal_method, context, macAlgorithm);
}
inline ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateAesEngine() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBlockCipher*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateCamelliaEngine() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBlockCipher*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateAesBlockCipher() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBlockCipher*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateAeadBlockCipher_Aes_Ccm() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateAeadBlockCipher_Aes_Gcm() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateAeadBlockCipher_Aes_Ocb() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateAeadBlockCipher_Camellia_Gcm() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateCamelliaBlockCipher() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBlockCipher*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateDesEdeBlockCipher() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBlockCipher*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IStreamCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateRC4StreamCipher() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IStreamCipher*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateSeedBlockCipher() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBlockCipher*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::CreateHMacDigest(int32_t macAlgorithm) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*>(this, ___internal_method, macAlgorithm);
}
inline void Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory* Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory::DefaultTlsCipherFactory() {}
