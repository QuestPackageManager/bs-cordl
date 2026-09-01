#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\SkipjackEngine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__SkipjackEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SkipjackEngine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::Init)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x33c6164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SkipjackEngine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33c6478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SkipjackEngine.get_IsPartialBlockOkay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::get_IsPartialBlockOkay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33c64bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SkipjackEngine.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::GetBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33c64c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SkipjackEngine.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::ProcessBlock)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x33c64cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SkipjackEngine.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33c6610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SkipjackEngine.G
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::*)(int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::G)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x33c6614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(), { "G", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SkipjackEngine.EncryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::EncryptBlock)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x33c6774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SkipjackEngine.H
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::*)(int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::H)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x33c69c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(), { "H", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SkipjackEngine.DecryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::DecryptBlock)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x33c6b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SkipjackEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33c6e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Crypto::Engines::SkipjackEngine::__cordl_internal_get_key0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key0;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Crypto::Engines::SkipjackEngine::__cordl_internal_get_key0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key0;
}
constexpr void Org::BouncyCastle::Crypto::Engines::SkipjackEngine::__cordl_internal_set_key0(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key0 = value;
}
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Crypto::Engines::SkipjackEngine::__cordl_internal_get_key1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key1;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Crypto::Engines::SkipjackEngine::__cordl_internal_get_key1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key1;
}
constexpr void Org::BouncyCastle::Crypto::Engines::SkipjackEngine::__cordl_internal_set_key1(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key1 = value;
}
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Crypto::Engines::SkipjackEngine::__cordl_internal_get_key2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key2;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Crypto::Engines::SkipjackEngine::__cordl_internal_get_key2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key2;
}
constexpr void Org::BouncyCastle::Crypto::Engines::SkipjackEngine::__cordl_internal_set_key2(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key2 = value;
}
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Crypto::Engines::SkipjackEngine::__cordl_internal_get_key3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key3;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Crypto::Engines::SkipjackEngine::__cordl_internal_get_key3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key3;
}
constexpr void Org::BouncyCastle::Crypto::Engines::SkipjackEngine::__cordl_internal_set_key3(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key3 = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Engines::SkipjackEngine::__cordl_internal_get_encrypting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encrypting;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::SkipjackEngine::__cordl_internal_get_encrypting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encrypting;
}
constexpr void Org::BouncyCastle::Crypto::Engines::SkipjackEngine::__cordl_internal_set_encrypting(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encrypting = value;
}
inline void Org::BouncyCastle::Crypto::Engines::SkipjackEngine::setStaticF_ftable(::ArrayW<int16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int16_t>, "ftable", ::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(std::forward<::ArrayW<int16_t>>(value));
}
inline ::ArrayW<int16_t> Org::BouncyCastle::Crypto::Engines::SkipjackEngine::getStaticF_ftable() {
  return ::cordl_internals::getStaticField<::ArrayW<int16_t>, "ftable", ::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::SkipjackEngine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::SkipjackEngine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Engines::SkipjackEngine::get_IsPartialBlockOkay() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::SkipjackEngine::GetBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::SkipjackEngine::ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::SkipjackEngine::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::SkipjackEngine::G(int32_t k, int32_t w) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(), { "G", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, k, w);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::SkipjackEngine::EncryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, outBytes, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::SkipjackEngine::H(int32_t k, int32_t w) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(), { "H", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, k, w);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::SkipjackEngine::DecryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, outBytes, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::SkipjackEngine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Engines::SkipjackEngine* Org::BouncyCastle::Crypto::Engines::SkipjackEngine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::SkipjackEngine*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr Org::BouncyCastle::Crypto::Engines::SkipjackEngine::operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Engines::SkipjackEngine::i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::SkipjackEngine::SkipjackEngine() {}
