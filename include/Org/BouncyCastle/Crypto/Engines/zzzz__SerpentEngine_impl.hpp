#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\SerpentEngine.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__SerpentEngineBase_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__SerpentEngine_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngine.MakeWorkingKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Crypto::Engines::SerpentEngine::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngine::MakeWorkingKey)> {
  constexpr static std::size_t size = 0x1494;
  constexpr static std::size_t addrs = 0x33c20f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngine*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngine.EncryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngine::EncryptBlock)> {
  constexpr static std::size_t size = 0x146c;
  constexpr static std::size_t addrs = 0x33c3584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngine*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngine.DecryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngine::DecryptBlock)> {
  constexpr static std::size_t size = 0x171c;
  constexpr static std::size_t addrs = 0x33c49f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngine*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::SerpentEngine::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x33c610c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Engines::SerpentEngine::MakeWorkingKey(::ArrayW<uint8_t> key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngine*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, key);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngine::EncryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngine*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngine::DecryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngine*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Engines::SerpentEngine* Org::BouncyCastle::Crypto::Engines::SerpentEngine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::SerpentEngine*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::SerpentEngine::SerpentEngine() {}
