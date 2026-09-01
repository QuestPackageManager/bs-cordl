#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\StreamBlockCipher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__StreamBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCipher_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::StreamBlockCipher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::StreamBlockCipher::*)(::Org::BouncyCastle::Crypto::IBlockCipher*)>(
    &::Org::BouncyCastle::Crypto::StreamBlockCipher::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x349f7ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::StreamBlockCipher*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::StreamBlockCipher.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::StreamBlockCipher::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::StreamBlockCipher::Init)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x349f920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::StreamBlockCipher*>(),
                                                             { "Init", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::StreamBlockCipher.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::StreamBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::StreamBlockCipher::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x349f9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::StreamBlockCipher*>(), { "get_AlgorithmName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::StreamBlockCipher.ReturnByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::StreamBlockCipher::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::StreamBlockCipher::ReturnByte)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x349fa84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::StreamBlockCipher*>(), { "ReturnByte", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::StreamBlockCipher.ProcessBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::StreamBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::StreamBlockCipher::ProcessBytes)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x349fb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::StreamBlockCipher*>(),
            { "ProcessBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::StreamBlockCipher.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::StreamBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::StreamBlockCipher::Reset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x349fcd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::StreamBlockCipher*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& Org::BouncyCastle::Crypto::StreamBlockCipher::__cordl_internal_get_cipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& Org::BouncyCastle::Crypto::StreamBlockCipher::__cordl_internal_get_cipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr void Org::BouncyCastle::Crypto::StreamBlockCipher::__cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cipher = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::StreamBlockCipher::__cordl_internal_get_oneByte() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oneByte;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::StreamBlockCipher::__cordl_internal_get_oneByte() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oneByte;
}
constexpr void Org::BouncyCastle::Crypto::StreamBlockCipher::__cordl_internal_set_oneByte(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___oneByte = value;
}
inline void Org::BouncyCastle::Crypto::StreamBlockCipher::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::StreamBlockCipher*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher);
}
inline void Org::BouncyCastle::Crypto::StreamBlockCipher::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::StreamBlockCipher*>(),
                                                           { "Init", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline ::StringW Org::BouncyCastle::Crypto::StreamBlockCipher::get_AlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::StreamBlockCipher*>(), { "get_AlgorithmName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline uint8_t Org::BouncyCastle::Crypto::StreamBlockCipher::ReturnByte(uint8_t input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::StreamBlockCipher*>(), { "ReturnByte", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::StreamBlockCipher::ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> output, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::StreamBlockCipher*>(),
          { "ProcessBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, length, output, outOff);
}
inline void Org::BouncyCastle::Crypto::StreamBlockCipher::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::StreamBlockCipher*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::StreamBlockCipher* Org::BouncyCastle::Crypto::StreamBlockCipher::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::StreamBlockCipher*>(cipher));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCipher"
constexpr Org::BouncyCastle::Crypto::StreamBlockCipher::operator ::Org::BouncyCastle::Crypto::IStreamCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IStreamCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IStreamCipher"
constexpr ::Org::BouncyCastle::Crypto::IStreamCipher* Org::BouncyCastle::Crypto::StreamBlockCipher::i___Org__BouncyCastle__Crypto__IStreamCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IStreamCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::StreamBlockCipher::StreamBlockCipher() {}
