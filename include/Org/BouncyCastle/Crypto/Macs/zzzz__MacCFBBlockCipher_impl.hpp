#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Macs\MacCFBBlockCipher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Macs/zzzz__MacCFBBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::*)(::Org::BouncyCastle::Crypto::IBlockCipher*, int32_t)>(
    &::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::_ctor)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x33e8304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::Init)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x33e84e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*>(),
                                                             { "Init", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x33e86ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*>(), { "get_AlgorithmName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher.get_IsPartialBlockOkay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::get_IsPartialBlockOkay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33e87e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*>(), { "get_IsPartialBlockOkay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::GetBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33e87ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*>(), { "GetBlockSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::ProcessBlock)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x33e87f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*>(),
                                         { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::Reset)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x33e862c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher.GetMacBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::GetMacBlock)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x33e8a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*>(), { "GetMacBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::__cordl_internal_get_IV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IV;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::__cordl_internal_get_IV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IV;
}
constexpr void Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::__cordl_internal_set_IV(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IV = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::__cordl_internal_get_cfbV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cfbV;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::__cordl_internal_get_cfbV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cfbV;
}
constexpr void Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::__cordl_internal_set_cfbV(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cfbV = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::__cordl_internal_get_cfbOutV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cfbOutV;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::__cordl_internal_get_cfbOutV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cfbOutV;
}
constexpr void Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::__cordl_internal_set_cfbOutV(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cfbOutV = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::__cordl_internal_get_blockSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockSize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::__cordl_internal_get_blockSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockSize;
}
constexpr void Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::__cordl_internal_set_blockSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockSize = value;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::__cordl_internal_get_cipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::__cordl_internal_get_cipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr void Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::__cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cipher = value;
}
inline void Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t bitBlockSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher, bitBlockSize);
}
inline void Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*>(),
                                                           { "Init", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline ::StringW Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::get_AlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*>(), { "get_AlgorithmName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::get_IsPartialBlockOkay() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*>(), { "get_IsPartialBlockOkay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::GetBlockSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*>(), { "GetBlockSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*>(),
                                       { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, outBytes, outOff);
}
inline void Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::GetMacBlock(::ArrayW<uint8_t> mac) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*>(), { "GetMacBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mac);
}
inline ::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher* Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t bitBlockSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*>(cipher, bitBlockSize));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::MacCFBBlockCipher() {}
