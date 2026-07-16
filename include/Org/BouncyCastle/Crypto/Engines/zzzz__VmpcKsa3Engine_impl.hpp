#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/VmpcKsa3Engine.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__VmpcEngine_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__VmpcKsa3Engine_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33d0ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine.InitKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::InitKey)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x33d0b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x33d0dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::InitKey(::ArrayW<uint8_t> keyBytes, ::ArrayW<uint8_t> ivBytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyBytes, ivBytes);
}
inline void Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine* Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::VmpcKsa3Engine() {}
