#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\NaccacheSternEngine.hpp"
#include "System/Collections/zzzz__IList_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__NaccacheSternEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__NaccacheSternKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33b6048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(), { "get_AlgorithmName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::Init)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x33b608c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine.set_Debug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::*)(bool)>(
    &::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::set_Debug)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33b660c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine.GetInputBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::GetInputBlockSize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x33b6610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine.GetOutputBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::GetOutputBlockSize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x33b6668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::ProcessBlock)> {
  constexpr static std::size_t size = 0x8b8;
  constexpr static std::size_t addrs = 0x33b66c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine.Encrypt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::Encrypt)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x33b7368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine.AddCryptedBlocks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::AddCryptedBlocks)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x33b7448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine.ProcessData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::ProcessData)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x33b7658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine.chineseRemainder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::System::Collections::IList*, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::chineseRemainder)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x33b6f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(),
                                                             { "chineseRemainder", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33b7864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::__cordl_internal_get_forEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::__cordl_internal_get_forEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr void Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::__cordl_internal_set_forEncryption(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forEncryption = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*& Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters* const& Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::__cordl_internal_set_key(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
constexpr ::ArrayW<::System::Collections::IList*>& Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::__cordl_internal_get_lookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
constexpr ::ArrayW<::System::Collections::IList*> const& Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::__cordl_internal_get_lookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookup;
}
constexpr void Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::__cordl_internal_set_lookup(::ArrayW<::System::Collections::IList*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lookup = value;
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::get_AlgorithmName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(), { "get_AlgorithmName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline void Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::set_Debug(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::GetInputBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::GetOutputBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::ProcessBlock(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, inBytes, inOff, length);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::Encrypt(::Org::BouncyCastle::Math::BigInteger* plain) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, plain);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::AddCryptedBlocks(::ArrayW<uint8_t> block1, ::ArrayW<uint8_t> block2) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, block1, block2);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::ProcessData(::ArrayW<uint8_t> data) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::chineseRemainder(::System::Collections::IList* congruences,
                                                                                                                        ::System::Collections::IList* primes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(),
                                                           { "chineseRemainder", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(nullptr, ___internal_method, congruences, primes);
}
inline void Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine* Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
constexpr Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::i___Org__BouncyCastle__Crypto__IAsymmetricBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::NaccacheSternEngine::NaccacheSternEngine() {}
