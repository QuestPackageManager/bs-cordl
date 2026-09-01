#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Modes\CtsBlockCipher.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedBlockCipher_impl.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__CtsBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::*)(::Org::BouncyCastle::Crypto::IBlockCipher*)>(
    &::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x33f9404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher.GetUpdateOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::GetUpdateOutputSize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x33f95c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher.GetOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::GetOutputSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33f95f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher.ProcessByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::*)(uint8_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::ProcessByte)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x33f9600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher.ProcessBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::ProcessBytes)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x33f9750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::DoFinal)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0x33f9a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*>(), 36 }));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::__cordl_internal_get_blockSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockSize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::__cordl_internal_get_blockSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockSize;
}
constexpr void Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::__cordl_internal_set_blockSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockSize = value;
}
inline void Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::GetUpdateOutputSize(int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, length);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::GetOutputSize(int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, length);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, output, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, length, output, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::DoFinal(::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, outOff);
}
inline ::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher* Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*>(cipher));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Modes::CtsBlockCipher::CtsBlockCipher() {}
