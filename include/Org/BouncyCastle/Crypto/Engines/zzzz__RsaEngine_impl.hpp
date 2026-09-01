#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\RsaEngine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__RsaEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IRsa_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RsaEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::RsaEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::RsaEngine::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x33c09d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaEngine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RsaEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::RsaEngine::*)(::Org::BouncyCastle::Crypto::IRsa*)>(
    &::Org::BouncyCastle::Crypto::Engines::RsaEngine::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33c0a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaEngine*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IRsa*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RsaEngine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::RsaEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::RsaEngine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33c0a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaEngine*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RsaEngine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::RsaEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::RsaEngine::Init)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x33c0a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaEngine*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RsaEngine.GetInputBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::RsaEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::RsaEngine::GetInputBlockSize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x33c0b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaEngine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RsaEngine.GetOutputBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::RsaEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::RsaEngine::GetOutputBlockSize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x33c0bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaEngine*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RsaEngine.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Engines::RsaEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::RsaEngine::ProcessBlock)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x33c0c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaEngine*>(), 13 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IRsa*& Org::BouncyCastle::Crypto::Engines::RsaEngine::__cordl_internal_get_core() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___core;
}
constexpr ::Org::BouncyCastle::Crypto::IRsa* const& Org::BouncyCastle::Crypto::Engines::RsaEngine::__cordl_internal_get_core() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___core;
}
constexpr void Org::BouncyCastle::Crypto::Engines::RsaEngine::__cordl_internal_set_core(::Org::BouncyCastle::Crypto::IRsa* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___core = value;
}
inline void Org::BouncyCastle::Crypto::Engines::RsaEngine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaEngine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::RsaEngine::_ctor(::Org::BouncyCastle::Crypto::IRsa* rsa) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaEngine*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IRsa*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rsa);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::RsaEngine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaEngine*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::RsaEngine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaEngine*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::RsaEngine::GetInputBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaEngine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::RsaEngine::GetOutputBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaEngine*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::RsaEngine::ProcessBlock(::ArrayW<uint8_t> inBuf, int32_t inOff, int32_t inLen) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaEngine*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, inBuf, inOff, inLen);
}
inline ::Org::BouncyCastle::Crypto::Engines::RsaEngine* Org::BouncyCastle::Crypto::Engines::RsaEngine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::RsaEngine*>());
}
inline ::Org::BouncyCastle::Crypto::Engines::RsaEngine* Org::BouncyCastle::Crypto::Engines::RsaEngine::New_ctor(::Org::BouncyCastle::Crypto::IRsa* rsa) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::RsaEngine*>(rsa));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
constexpr Org::BouncyCastle::Crypto::Engines::RsaEngine::operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* Org::BouncyCastle::Crypto::Engines::RsaEngine::i___Org__BouncyCastle__Crypto__IAsymmetricBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::RsaEngine::RsaEngine() {}
