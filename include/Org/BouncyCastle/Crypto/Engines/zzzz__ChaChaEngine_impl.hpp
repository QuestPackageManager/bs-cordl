#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/ChaChaEngine.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Salsa20Engine_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__ChaChaEngine_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ChaChaEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ChaChaEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::ChaChaEngine::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x33a7d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ChaChaEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ChaChaEngine::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Engines::ChaChaEngine::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x33a7d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ChaChaEngine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::ChaChaEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::ChaChaEngine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x33a7dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ChaChaEngine.AdvanceCounter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ChaChaEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::ChaChaEngine::AdvanceCounter)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x33a7e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ChaChaEngine.ResetCounter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ChaChaEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::ChaChaEngine::ResetCounter)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x33a7e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ChaChaEngine.SetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ChaChaEngine::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::ChaChaEngine::SetKey)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x33a7eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ChaChaEngine.GenerateKeyStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::ChaChaEngine::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::ChaChaEngine::GenerateKeyStream)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x33a7fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::ChaChaEngine.ChachaCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Crypto::Engines::ChaChaEngine::ChachaCore)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x33a79bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>(),
                                                             { "ChachaCore", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Engines::ChaChaEngine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::ChaChaEngine::_ctor(int32_t rounds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rounds);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::ChaChaEngine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::ChaChaEngine::AdvanceCounter() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::ChaChaEngine::ResetCounter() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::ChaChaEngine::SetKey(::ArrayW<uint8_t> keyBytes, ::ArrayW<uint8_t> ivBytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyBytes, ivBytes);
}
inline void Org::BouncyCastle::Crypto::Engines::ChaChaEngine::GenerateKeyStream(::ArrayW<uint8_t> output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline void Org::BouncyCastle::Crypto::Engines::ChaChaEngine::ChachaCore(int32_t rounds, ::ArrayW<uint32_t> input, ::ArrayW<uint32_t> x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>(),
                                                           { "ChachaCore", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rounds, input, x);
}
inline ::Org::BouncyCastle::Crypto::Engines::ChaChaEngine* Org::BouncyCastle::Crypto::Engines::ChaChaEngine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>());
}
inline ::Org::BouncyCastle::Crypto::Engines::ChaChaEngine* Org::BouncyCastle::Crypto::Engines::ChaChaEngine::New_ctor(int32_t rounds) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::ChaChaEngine*>(rounds));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::ChaChaEngine::ChaChaEngine() {}
