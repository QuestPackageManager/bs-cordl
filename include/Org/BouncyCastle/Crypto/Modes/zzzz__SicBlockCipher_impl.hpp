#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Modes\SicBlockCipher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__SicBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::SicBlockCipher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::SicBlockCipher::*)(::Org::BouncyCastle::Crypto::IBlockCipher*)>(
    &::Org::BouncyCastle::Crypto::Modes::SicBlockCipher::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3404f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::SicBlockCipher.GetUnderlyingCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBlockCipher* (::Org::BouncyCastle::Crypto::Modes::SicBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::SicBlockCipher::GetUnderlyingCipher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3405034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::SicBlockCipher.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::SicBlockCipher::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Modes::SicBlockCipher::Init)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x340503c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::SicBlockCipher.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Modes::SicBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::SicBlockCipher::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3405340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::SicBlockCipher.get_IsPartialBlockOkay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Modes::SicBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::SicBlockCipher::get_IsPartialBlockOkay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3405408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::SicBlockCipher.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::SicBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::SicBlockCipher::GetBlockSize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3405410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::SicBlockCipher.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::SicBlockCipher::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::SicBlockCipher::ProcessBlock)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x34054b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::SicBlockCipher.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::SicBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::SicBlockCipher::Reset)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3405690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), 16 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& Org::BouncyCastle::Crypto::Modes::SicBlockCipher::__cordl_internal_get_cipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& Org::BouncyCastle::Crypto::Modes::SicBlockCipher::__cordl_internal_get_cipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr void Org::BouncyCastle::Crypto::Modes::SicBlockCipher::__cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cipher = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Modes::SicBlockCipher::__cordl_internal_get_blockSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockSize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Modes::SicBlockCipher::__cordl_internal_get_blockSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockSize;
}
constexpr void Org::BouncyCastle::Crypto::Modes::SicBlockCipher::__cordl_internal_set_blockSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockSize = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::SicBlockCipher::__cordl_internal_get_counter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___counter;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::SicBlockCipher::__cordl_internal_get_counter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___counter;
}
constexpr void Org::BouncyCastle::Crypto::Modes::SicBlockCipher::__cordl_internal_set_counter(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___counter = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::SicBlockCipher::__cordl_internal_get_counterOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___counterOut;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::SicBlockCipher::__cordl_internal_get_counterOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___counterOut;
}
constexpr void Org::BouncyCastle::Crypto::Modes::SicBlockCipher::__cordl_internal_set_counterOut(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___counterOut = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::SicBlockCipher::__cordl_internal_get_IV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IV;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::SicBlockCipher::__cordl_internal_get_IV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IV;
}
constexpr void Org::BouncyCastle::Crypto::Modes::SicBlockCipher::__cordl_internal_set_IV(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IV = value;
}
inline void Org::BouncyCastle::Crypto::Modes::SicBlockCipher::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher);
}
inline ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Modes::SicBlockCipher::GetUnderlyingCipher() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBlockCipher*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::SicBlockCipher::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline ::StringW Org::BouncyCastle::Crypto::Modes::SicBlockCipher::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Modes::SicBlockCipher::get_IsPartialBlockOkay() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::SicBlockCipher::GetBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::SicBlockCipher::ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Modes::SicBlockCipher::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Modes::SicBlockCipher* Org::BouncyCastle::Crypto::Modes::SicBlockCipher::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Modes::SicBlockCipher*>(cipher));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr Org::BouncyCastle::Crypto::Modes::SicBlockCipher::operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Modes::SicBlockCipher::i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Modes::SicBlockCipher::SicBlockCipher() {}
