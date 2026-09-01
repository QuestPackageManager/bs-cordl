#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Modes\GOfbBlockCipher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__GOfbBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::*)(::Org::BouncyCastle::Crypto::IBlockCipher*)>(
    &::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::_ctor)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x33fd718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher.GetUnderlyingCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBlockCipher* (::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::GetUnderlyingCipher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33fd994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*>(), { "GetUnderlyingCipher", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::Init)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x33fd99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*>(),
                                                             { "Init", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x33fdc44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*>(), { "get_AlgorithmName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher.get_IsPartialBlockOkay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::get_IsPartialBlockOkay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33fdd0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*>(), { "get_IsPartialBlockOkay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::GetBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33fdd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*>(), { "GetBlockSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::ProcessBlock)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x33fdd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*>(),
                                         { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::Reset)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x33fdb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher.bytesToint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::bytesToint)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x33fe060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*>(),
                                                                                           { "bytesToint", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher.intTobytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::intTobytes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x33fe0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*>(),
                                                             { "intTobytes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_get_IV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IV;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_get_IV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IV;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_set_IV(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IV = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_get_ofbV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ofbV;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_get_ofbV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ofbV;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_set_ofbV(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ofbV = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_get_ofbOutV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ofbOutV;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_get_ofbOutV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ofbOutV;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_set_ofbOutV(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ofbOutV = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_get_blockSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockSize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_get_blockSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockSize;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_set_blockSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockSize = value;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_get_cipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_get_cipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cipher = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_get_firstStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstStep;
}
constexpr bool const& Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_get_firstStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstStep;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_set_firstStep(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstStep = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_get_N3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___N3;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_get_N3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___N3;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_set_N3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___N3 = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_get_N4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___N4;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_get_N4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___N4;
}
constexpr void Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::__cordl_internal_set_N4(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___N4 = value;
}
inline void Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher);
}
inline ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::GetUnderlyingCipher() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*>(), { "GetUnderlyingCipher", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBlockCipher*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*>(),
                                                           { "Init", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline ::StringW Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::get_AlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*>(), { "get_AlgorithmName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::get_IsPartialBlockOkay() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*>(), { "get_IsPartialBlockOkay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::GetBlockSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*>(), { "GetBlockSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*>(),
                                       { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::bytesToint(::ArrayW<uint8_t> inBytes, int32_t inOff) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*>(),
                                                                                         { "bytesToint", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inBytes, inOff);
}
inline void Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::intTobytes(int32_t num, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*>(),
                                                           { "intTobytes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, num, outBytes, outOff);
}
inline ::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher* Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*>(cipher));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::GOfbBlockCipher() {}
