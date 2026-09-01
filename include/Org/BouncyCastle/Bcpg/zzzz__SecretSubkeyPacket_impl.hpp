#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\SecretSubkeyPacket.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SecretKeyPacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SecretSubkeyPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__S2k_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SecretSubkeyPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::SecretSubkeyPacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::SecretSubkeyPacket::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x369b71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretSubkeyPacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SecretSubkeyPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::SecretSubkeyPacket::*)(
    ::Org::BouncyCastle::Bcpg::PublicKeyPacket*, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::S2k*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::SecretSubkeyPacket::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36a0244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretSubkeyPacket*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Bcpg::S2k*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SecretSubkeyPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::SecretSubkeyPacket::*)(
    ::Org::BouncyCastle::Bcpg::PublicKeyPacket*, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, int32_t, ::Org::BouncyCastle::Bcpg::S2k*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::SecretSubkeyPacket::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36a0248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretSubkeyPacket*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<::Org::BouncyCastle::Bcpg::S2k*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SecretSubkeyPacket.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::SecretSubkeyPacket::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::SecretSubkeyPacket::Encode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36a024c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretSubkeyPacket*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretSubkeyPacket*>(), 4 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Bcpg::SecretSubkeyPacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretSubkeyPacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgIn);
}
inline void Org::BouncyCastle::Bcpg::SecretSubkeyPacket::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyPacket, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                               ::Org::BouncyCastle::Bcpg::S2k* s2k, ::ArrayW<uint8_t> iv, ::ArrayW<uint8_t> secKeyData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretSubkeyPacket*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Bcpg::S2k*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pubKeyPacket, encAlgorithm, s2k, iv, secKeyData);
}
inline void Org::BouncyCastle::Bcpg::SecretSubkeyPacket::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyPacket, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                               int32_t s2kUsage, ::Org::BouncyCastle::Bcpg::S2k* s2k, ::ArrayW<uint8_t> iv, ::ArrayW<uint8_t> secKeyData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretSubkeyPacket*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<::Org::BouncyCastle::Bcpg::S2k*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pubKeyPacket, encAlgorithm, s2kUsage, s2k, iv, secKeyData);
}
inline void Org::BouncyCastle::Bcpg::SecretSubkeyPacket::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretSubkeyPacket*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgOut);
}
inline ::Org::BouncyCastle::Bcpg::SecretSubkeyPacket* Org::BouncyCastle::Bcpg::SecretSubkeyPacket::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::SecretSubkeyPacket*>(bcpgIn));
}
inline ::Org::BouncyCastle::Bcpg::SecretSubkeyPacket* Org::BouncyCastle::Bcpg::SecretSubkeyPacket::New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyPacket,
                                                                                                            ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                                            ::Org::BouncyCastle::Bcpg::S2k* s2k, ::ArrayW<uint8_t> iv, ::ArrayW<uint8_t> secKeyData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::SecretSubkeyPacket*>(pubKeyPacket, encAlgorithm, s2k, iv, secKeyData));
}
inline ::Org::BouncyCastle::Bcpg::SecretSubkeyPacket* Org::BouncyCastle::Bcpg::SecretSubkeyPacket::New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyPacket,
                                                                                                            ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, int32_t s2kUsage,
                                                                                                            ::Org::BouncyCastle::Bcpg::S2k* s2k, ::ArrayW<uint8_t> iv, ::ArrayW<uint8_t> secKeyData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::SecretSubkeyPacket*>(pubKeyPacket, encAlgorithm, s2kUsage, s2k, iv, secKeyData));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::SecretSubkeyPacket::SecretSubkeyPacket() {}
