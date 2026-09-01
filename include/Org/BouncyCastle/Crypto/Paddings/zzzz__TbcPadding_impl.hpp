#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Paddings\TbcPadding.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Paddings/zzzz__TbcPadding_def.hpp"
#include "Org/BouncyCastle/Crypto/Paddings/zzzz__IBlockCipherPadding_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Paddings::TbcPadding.get_PaddingName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Paddings::TbcPadding::*)()>(&::Org::BouncyCastle::Crypto::Paddings::TbcPadding::get_PaddingName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x340c6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::TbcPadding*>(), { "get_PaddingName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Paddings::TbcPadding.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Paddings::TbcPadding::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Paddings::TbcPadding::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x340c6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::TbcPadding*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::TbcPadding*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Paddings::TbcPadding.AddPadding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Paddings::TbcPadding::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Paddings::TbcPadding::AddPadding)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x340c6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::TbcPadding*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::TbcPadding*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Paddings::TbcPadding.PadCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Paddings::TbcPadding::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Paddings::TbcPadding::PadCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x340c770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::TbcPadding*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::TbcPadding*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Paddings::TbcPadding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Paddings::TbcPadding::*)()>(&::Org::BouncyCastle::Crypto::Paddings::TbcPadding::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x340c7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::TbcPadding*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Org::BouncyCastle::Crypto::Paddings::TbcPadding::get_PaddingName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::TbcPadding*>(), { "get_PaddingName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Paddings::TbcPadding::Init(::Org::BouncyCastle::Security::SecureRandom* random) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::TbcPadding*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, random);
}
inline int32_t Org::BouncyCastle::Crypto::Paddings::TbcPadding::AddPadding(::ArrayW<uint8_t> input, int32_t inOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::TbcPadding*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff);
}
inline int32_t Org::BouncyCastle::Crypto::Paddings::TbcPadding::PadCount(::ArrayW<uint8_t> input) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::TbcPadding*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Paddings::TbcPadding::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Paddings::TbcPadding*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Paddings::TbcPadding* Org::BouncyCastle::Crypto::Paddings::TbcPadding::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Paddings::TbcPadding*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding"
constexpr Org::BouncyCastle::Crypto::Paddings::TbcPadding::operator ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding"
constexpr ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* Org::BouncyCastle::Crypto::Paddings::TbcPadding::i___Org__BouncyCastle__Crypto__Paddings__IBlockCipherPadding() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Paddings::TbcPadding::TbcPadding() {}
