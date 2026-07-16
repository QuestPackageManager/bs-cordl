#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Macs/Poly1305.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Macs/zzzz__Poly1305_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Poly1305._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Poly1305::*)()>(&::Org::BouncyCastle::Crypto::Macs::Poly1305::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x33ebca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Poly1305._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Poly1305::*)(::Org::BouncyCastle::Crypto::IBlockCipher*)>(
    &::Org::BouncyCastle::Crypto::Macs::Poly1305::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x33ebd10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Poly1305.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Poly1305::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Macs::Poly1305::Init)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x33ebe58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(), { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Poly1305.SetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Poly1305::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Macs::Poly1305::SetKey)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x33ebffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(),
                                                                                           { "SetKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Poly1305.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Macs::Poly1305::*)()>(&::Org::BouncyCastle::Crypto::Macs::Poly1305::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x33ec340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(), { "get_AlgorithmName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Poly1305.GetMacSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Macs::Poly1305::*)()>(&::Org::BouncyCastle::Crypto::Macs::Poly1305::GetMacSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33ec434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(), { "GetMacSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Poly1305.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Poly1305::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Macs::Poly1305::Update)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x33ec43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(), { "Update", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Poly1305.BlockUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Poly1305::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Macs::Poly1305::BlockUpdate)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x33ec470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(),
                                                             { "BlockUpdate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Poly1305.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Poly1305::*)()>(&::Org::BouncyCastle::Crypto::Macs::Poly1305::ProcessBlock)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x33ec55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(), { "ProcessBlock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Poly1305.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Macs::Poly1305::*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Macs::Poly1305::DoFinal)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x33ec764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(), { "DoFinal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Poly1305.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Poly1305::*)()>(&::Org::BouncyCastle::Crypto::Macs::Poly1305::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33ec334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Poly1305.mul32x32_64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint32_t, uint32_t)>(&::Org::BouncyCastle::Crypto::Macs::Poly1305::mul32x32_64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33ec75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(), { "mul32x32_64", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_cipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_cipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cipher = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_singleByte() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleByte;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_singleByte() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleByte;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_set_singleByte(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___singleByte = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_r0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r0;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_r0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r0;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_set_r0(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r0 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_r1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r1;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_r1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r1;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_set_r1(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r1 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_r2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r2;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_r2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r2;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_set_r2(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r2 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_r3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r3;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_r3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r3;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_set_r3(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r3 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_r4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r4;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_r4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r4;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_set_r4(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r4 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_s1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s1;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_s1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s1;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_set_s1(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s1 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_s2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s2;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_s2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s2;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_set_s2(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s2 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_s3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s3;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_s3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s3;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_set_s3(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s3 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_s4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s4;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_s4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s4;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_set_s4(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s4 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_k0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k0;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_k0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k0;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_set_k0(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___k0 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_k1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k1;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_k1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k1;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_set_k1(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___k1 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_k2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k2;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_k2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k2;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_set_k2(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___k2 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_k3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k3;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_k3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k3;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_set_k3(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___k3 = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_currentBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentBlock;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_currentBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentBlock;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_set_currentBlock(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentBlock = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_currentBlockOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentBlockOffset;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_currentBlockOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentBlockOffset;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_set_currentBlockOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentBlockOffset = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_h0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___h0;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_h0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___h0;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_set_h0(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___h0 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_h1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___h1;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_h1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___h1;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_set_h1(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___h1 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_h2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___h2;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_h2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___h2;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_set_h2(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___h2 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_h3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___h3;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_h3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___h3;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_set_h3(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___h3 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_h4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___h4;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_get_h4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___h4;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Poly1305::__cordl_internal_set_h4(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___h4 = value;
}
inline void Org::BouncyCastle::Crypto::Macs::Poly1305::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Macs::Poly1305::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher);
}
inline void Org::BouncyCastle::Crypto::Macs::Poly1305::Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(), { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void Org::BouncyCastle::Crypto::Macs::Poly1305::SetKey(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> nonce) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(),
                                                                                         { "SetKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, nonce);
}
inline ::StringW Org::BouncyCastle::Crypto::Macs::Poly1305::get_AlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(), { "get_AlgorithmName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Macs::Poly1305::GetMacSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(), { "GetMacSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Macs::Poly1305::Update(uint8_t input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(), { "Update", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Macs::Poly1305::BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(),
                                                           { "BlockUpdate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, len);
}
inline void Org::BouncyCastle::Crypto::Macs::Poly1305::ProcessBlock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(), { "ProcessBlock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Macs::Poly1305::DoFinal(::ArrayW<uint8_t> output, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(), { "DoFinal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Macs::Poly1305::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint64_t Org::BouncyCastle::Crypto::Macs::Poly1305::mul32x32_64(uint32_t i1, uint32_t i2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(), { "mul32x32_64", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, i1, i2);
}
inline ::Org::BouncyCastle::Crypto::Macs::Poly1305* Org::BouncyCastle::Crypto::Macs::Poly1305::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Macs::Poly1305*>());
}
inline ::Org::BouncyCastle::Crypto::Macs::Poly1305* Org::BouncyCastle::Crypto::Macs::Poly1305::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Macs::Poly1305*>(cipher));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
constexpr Org::BouncyCastle::Crypto::Macs::Poly1305::operator ::Org::BouncyCastle::Crypto::IMac*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMac*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IMac"
constexpr ::Org::BouncyCastle::Crypto::IMac* Org::BouncyCastle::Crypto::Macs::Poly1305::i___Org__BouncyCastle__Crypto__IMac() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMac*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Macs::Poly1305::Poly1305() {}
