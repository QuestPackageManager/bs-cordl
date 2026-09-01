#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Modes\KCcmBlockCipher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__KCcmBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher.setNb
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::setNb)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x33fe154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), { "setNb", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::*)(::Org::BouncyCastle::Crypto::IBlockCipher*)>(
    &::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33fe1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::*)(::Org::BouncyCastle::Crypto::IBlockCipher*, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::_ctor)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x33fe1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::Init)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x33fe680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x33fea94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::GetBlockSize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x33feb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher.GetUnderlyingCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBlockCipher* (::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::GetUnderlyingCipher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33fec04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher.ProcessAadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::ProcessAadByte)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x33fec0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher.ProcessAadBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::ProcessAadBytes)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x33fec2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher.ProcessAAD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::ProcessAAD)> {
  constexpr static std::size_t size = 0x8a4;
  constexpr static std::size_t addrs = 0x33fec4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
                                                { "ProcessAAD", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher.ProcessByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::*)(uint8_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::ProcessByte)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x33ff804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher.ProcessBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::ProcessBytes)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x33ff830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher.ProcessPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::ProcessPacket)> {
  constexpr static std::size_t size = 0xba4;
  constexpr static std::size_t addrs = 0x33ff8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
            { "ProcessPacket", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::ProcessBlock)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x3400708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
            { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher.CalculateMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::CalculateMac)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x3400478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
                                                             { "CalculateMac", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::DoFinal)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3400928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher.GetMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::GetMac)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x34009c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher.GetUpdateOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::GetUpdateOutputSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3400a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher.GetOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::GetOutputSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3400a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::Reset)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x3400a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher.intToBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::intToBytes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x33ff4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
                                                             { "intToBytes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher.getFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::*)(bool, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::getFlag)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x33ff570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), { "getFlag", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_engine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_engine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_set_engine(::Org::BouncyCastle::Crypto::IBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___engine = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_macSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macSize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_macSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macSize;
}
constexpr void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_set_macSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___macSize = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_forEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr bool const& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_forEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_set_forEncryption(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forEncryption = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_initialAssociatedText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialAssociatedText;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_initialAssociatedText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialAssociatedText;
}
constexpr void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_set_initialAssociatedText(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initialAssociatedText = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_mac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_mac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_set_mac(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mac = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_macBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macBlock;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_macBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macBlock;
}
constexpr void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_set_macBlock(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___macBlock = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_nonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nonce;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_nonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nonce;
}
constexpr void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_set_nonce(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nonce = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_G1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___G1;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_G1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___G1;
}
constexpr void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_set_G1(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___G1 = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_set_buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buffer = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_set_s(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_counter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___counter;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_counter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___counter;
}
constexpr void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_set_counter(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___counter = value;
}
constexpr ::System::IO::MemoryStream*& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_associatedText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___associatedText;
}
constexpr ::System::IO::MemoryStream* const& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_associatedText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___associatedText;
}
constexpr void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_set_associatedText(::System::IO::MemoryStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___associatedText = value;
}
constexpr ::System::IO::MemoryStream*& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::System::IO::MemoryStream* const& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_set_data(::System::IO::MemoryStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_Nb_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Nb_;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_get_Nb_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Nb_;
}
constexpr void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::__cordl_internal_set_Nb_(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Nb_ = value;
}
inline void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::setStaticF_BYTES_IN_INT(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "BYTES_IN_INT", ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::getStaticF_BYTES_IN_INT() {
  return ::cordl_internals::getStaticField<int32_t, "BYTES_IN_INT", ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>();
}
inline void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::setStaticF_BITS_IN_BYTE(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "BITS_IN_BYTE", ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::getStaticF_BITS_IN_BYTE() {
  return ::cordl_internals::getStaticField<int32_t, "BITS_IN_BYTE", ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>();
}
inline void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::setStaticF_MAX_MAC_BIT_LENGTH(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MAX_MAC_BIT_LENGTH", ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::getStaticF_MAX_MAC_BIT_LENGTH() {
  return ::cordl_internals::getStaticField<int32_t, "MAX_MAC_BIT_LENGTH", ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>();
}
inline void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::setStaticF_MIN_MAC_BIT_LENGTH(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MIN_MAC_BIT_LENGTH", ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::getStaticF_MIN_MAC_BIT_LENGTH() {
  return ::cordl_internals::getStaticField<int32_t, "MIN_MAC_BIT_LENGTH", ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>();
}
inline void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::setNb(int32_t Nb) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), { "setNb", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Nb);
}
inline void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, engine);
}
inline void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine, int32_t Nb) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, engine, Nb);
}
inline void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline ::StringW Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::GetBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::GetUnderlyingCipher() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBlockCipher*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::ProcessAadByte(uint8_t input) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::ProcessAadBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, len);
}
inline void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::ProcessAAD(::ArrayW<uint8_t> assocText, int32_t assocOff, int32_t assocLen, int32_t dataLen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
                                              { "ProcessAAD", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assocText, assocOff, assocLen, dataLen);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, output, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, inLen, output, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::ProcessPacket(::ArrayW<uint8_t> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t> output, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
          { "ProcessPacket", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, len, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t> output, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
          { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, len, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::CalculateMac(::ArrayW<uint8_t> authText, int32_t authOff, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
                                                           { "CalculateMac", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, authText, authOff, len);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::DoFinal(::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, outOff);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::GetMac() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::GetUpdateOutputSize(int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, len);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::GetOutputSize(int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, len);
}
inline void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::intToBytes(int32_t num, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(),
                                                           { "intToBytes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, num, outBytes, outOff);
}
inline uint8_t Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::getFlag(bool authTextPresents, int32_t macSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(), { "getFlag", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, authTextPresents, macSize);
}
inline ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher* Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(engine));
}
inline ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher* Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine, int32_t Nb) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*>(engine, Nb));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
constexpr Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::operator ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::i___Org__BouncyCastle__Crypto__Modes__IAeadBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
constexpr Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::operator ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadCipher* Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::i___Org__BouncyCastle__Crypto__Modes__IAeadCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher::KCcmBlockCipher() {}
