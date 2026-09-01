#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\XSalsa20Engine.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Salsa20Engine_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__XSalsa20Engine_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33d3154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine.get_NonceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::get_NonceSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33d3198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine.SetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::SetKey)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x33d31a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x33d3404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::get_NonceSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::SetKey(::ArrayW<uint8_t> keyBytes, ::ArrayW<uint8_t> ivBytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyBytes, ivBytes);
}
inline void Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine* Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::XSalsa20Engine() {}
