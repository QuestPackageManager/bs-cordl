#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Macs\CbcBlockCipherMac.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Macs/zzzz__CbcBlockCipherMac_def.hpp"
#include "Org/BouncyCastle/Crypto/Paddings/zzzz__IBlockCipherPadding_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::*)(::Org::BouncyCastle::Crypto::IBlockCipher*)>(
    &::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x33e7650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::*)(
    ::Org::BouncyCastle::Crypto::IBlockCipher*, ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*)>(&::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x33e7890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::*)(::Org::BouncyCastle::Crypto::IBlockCipher*, int32_t)>(
    &::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33e7958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::*)(
    ::Org::BouncyCastle::Crypto::IBlockCipher*, int32_t, ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*)>(&::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::_ctor)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x33e7714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::*)()>(
    &::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x33e7a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(), { "get_AlgorithmName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::Init)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x33e7b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac.GetMacSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::*)()>(&::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::GetMacSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33e7c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(), { "GetMacSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::Update)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x33e7ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(), { "Update", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac.BlockUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::BlockUpdate)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x33e7dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(),
                                                             { "BlockUpdate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::DoFinal)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x33e804c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(),
                                                                                           { "DoFinal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::*)()>(&::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::Reset)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x33e7bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::__cordl_internal_get_buf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::__cordl_internal_get_buf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf;
}
constexpr void Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::__cordl_internal_set_buf(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buf = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::__cordl_internal_get_bufOff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufOff;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::__cordl_internal_get_bufOff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufOff;
}
constexpr void Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::__cordl_internal_set_bufOff(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufOff = value;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::__cordl_internal_get_cipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::__cordl_internal_get_cipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr void Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::__cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cipher = value;
}
constexpr ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*& Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::__cordl_internal_get_padding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___padding;
}
constexpr ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* const& Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::__cordl_internal_get_padding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___padding;
}
constexpr void Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::__cordl_internal_set_padding(::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___padding = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::__cordl_internal_get_macSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macSize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::__cordl_internal_get_macSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macSize;
}
constexpr void Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::__cordl_internal_set_macSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___macSize = value;
}
inline void Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher);
}
inline void Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher, padding);
}
inline void Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t macSizeInBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher, macSizeInBits);
}
inline void Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t macSizeInBits,
                                                                      ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher, macSizeInBits, padding);
}
inline ::StringW Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::get_AlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(), { "get_AlgorithmName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::GetMacSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(), { "GetMacSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::Update(uint8_t input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(), { "Update", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(),
                                                           { "BlockUpdate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, len);
}
inline int32_t Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::DoFinal(::ArrayW<uint8_t> output, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(),
                                                                                         { "DoFinal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac* Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(cipher));
}
inline ::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac* Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher,
                                                                                                                          ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(cipher, padding));
}
inline ::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac* Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t macSizeInBits) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(cipher, macSizeInBits));
}
inline ::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac* Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t macSizeInBits,
                                                                                                                          ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*>(cipher, macSizeInBits, padding));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
constexpr Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::operator ::Org::BouncyCastle::Crypto::IMac*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMac*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IMac"
constexpr ::Org::BouncyCastle::Crypto::IMac* Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::i___Org__BouncyCastle__Crypto__IMac() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMac*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::CbcBlockCipherMac() {}
