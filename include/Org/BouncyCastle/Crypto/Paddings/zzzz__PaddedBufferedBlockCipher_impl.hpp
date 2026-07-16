#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Paddings/PaddedBufferedBlockCipher.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedBlockCipher_impl.hpp"
#include "Org/BouncyCastle/Crypto/Paddings/zzzz__PaddedBufferedBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Paddings/zzzz__IBlockCipherPadding_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::*)(
    ::Org::BouncyCastle::Crypto::IBlockCipher*, ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*)>(&::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3409584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::*)(::Org::BouncyCastle::Crypto::IBlockCipher*)>(
    &::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x340967c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::Init)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x34096e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher.GetOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::GetOutputSize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3409898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher.GetUpdateOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::GetUpdateOutputSize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x34098e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher.ProcessByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::*)(uint8_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::ProcessByte)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3409914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher.ProcessBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::ProcessBytes)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x3409a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::DoFinal)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x3409cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(), 36 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*& Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::__cordl_internal_get_padding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___padding;
}
constexpr ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* const& Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::__cordl_internal_get_padding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___padding;
}
constexpr void Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::__cordl_internal_set_padding(::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___padding = value;
}
inline void Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher,
                                                                                  ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher, padding);
}
inline void Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher);
}
inline void Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::GetOutputSize(int32_t length) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, length);
}
inline int32_t Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::GetUpdateOutputSize(int32_t length) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, length);
}
inline int32_t Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, output, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, length, output, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::DoFinal(::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, outOff);
}
inline ::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*
Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(cipher, padding));
}
inline ::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher* Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher*>(cipher));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher::PaddedBufferedBlockCipher() {}
