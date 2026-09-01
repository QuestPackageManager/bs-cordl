#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\TnepresEngine.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__SerpentEngineBase_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__TnepresEngine_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::TnepresEngine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::TnepresEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::TnepresEngine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33ccbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::TnepresEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::TnepresEngine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::TnepresEngine.MakeWorkingKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Crypto::Engines::TnepresEngine::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::TnepresEngine::MakeWorkingKey)> {
  constexpr static std::size_t size = 0x14d0;
  constexpr static std::size_t addrs = 0x33ccbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::TnepresEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::TnepresEngine*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::TnepresEngine.EncryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::TnepresEngine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::TnepresEngine::EncryptBlock)> {
  constexpr static std::size_t size = 0x146c;
  constexpr static std::size_t addrs = 0x33ce0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::TnepresEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::TnepresEngine*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::TnepresEngine.DecryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::TnepresEngine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::TnepresEngine::DecryptBlock)> {
  constexpr static std::size_t size = 0x171c;
  constexpr static std::size_t addrs = 0x33cf530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::TnepresEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::TnepresEngine*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::TnepresEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::TnepresEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::TnepresEngine::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x33d0c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::TnepresEngine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Org::BouncyCastle::Crypto::Engines::TnepresEngine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::TnepresEngine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Engines::TnepresEngine::MakeWorkingKey(::ArrayW<uint8_t> key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::TnepresEngine*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, key);
}
inline void Org::BouncyCastle::Crypto::Engines::TnepresEngine::EncryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::TnepresEngine*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::TnepresEngine::DecryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::TnepresEngine*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::TnepresEngine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::TnepresEngine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Engines::TnepresEngine* Org::BouncyCastle::Crypto::Engines::TnepresEngine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::TnepresEngine*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::TnepresEngine::TnepresEngine() {}
