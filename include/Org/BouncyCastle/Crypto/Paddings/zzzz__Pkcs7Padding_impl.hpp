#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Paddings\Pkcs7Padding.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Paddings/zzzz__Pkcs7Padding_def.hpp"
#include "Org/BouncyCastle/Crypto/Paddings/zzzz__IBlockCipherPadding_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x340c560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding*>(), { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding.get_PaddingName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::*)()>(&::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::get_PaddingName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x340c564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding*>(), { "get_PaddingName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding.AddPadding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::AddPadding)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x340c5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding*>(),
                                                                                           { "AddPadding", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding.PadCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::PadCount)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x340c5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding*>(), { "PadCount", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::*)()>(&::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x340ba68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::Init(::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding*>(), { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, random);
}
inline ::StringW Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::get_PaddingName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding*>(), { "get_PaddingName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::AddPadding(::ArrayW<uint8_t> input, int32_t inOff) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding*>(),
                                                                                         { "AddPadding", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff);
}
inline int32_t Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::PadCount(::ArrayW<uint8_t> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding*>(), { "PadCount", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding* Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding"
constexpr Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::operator ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding"
constexpr ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::i___Org__BouncyCastle__Crypto__Paddings__IBlockCipherPadding() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::Pkcs7Padding() {}
