#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Modes\OcbBlockCipher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__OcbBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(
    ::Org::BouncyCastle::Crypto::IBlockCipher*, ::Org::BouncyCastle::Crypto::IBlockCipher*)>(&::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::_ctor)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x34015fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.GetUnderlyingCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBlockCipher* (::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetUnderlyingCipher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34019c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x34019d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Init)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x3401a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.ProcessNonce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessNonce)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x3402210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3402454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.GetMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetMac)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x340245c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.GetOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetOutputSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x34024ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.GetUpdateOutputSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetUpdateOutputSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3402514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.ProcessAadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessAadByte)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3402550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.ProcessAadBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessAadBytes)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x34025b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.ProcessByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(uint8_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessByte)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3402680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.ProcessBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessBytes)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x34026fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::DoFinal)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x34027f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3402cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Clear)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3402cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.GetLSub
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetLSub)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x3402cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.ProcessHashBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)()>(&::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessHashBlock)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3402fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.ProcessMainBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessMainBlock)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x3403074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(bool)>(&::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Reset)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x3403250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.UpdateHASH
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::UpdateHASH)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3403440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.OCB_double
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::OCB_double)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3402178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { "OCB_double", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.OCB_extend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::OCB_extend)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3402c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(),
                                                                                           { "OCB_extend", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.OCB_ntz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int64_t)>(&::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::OCB_ntz)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x340303c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { "OCB_ntz", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.ShiftLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ShiftLeft)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x340352c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(),
                                                                                           { "ShiftLeft", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher.Xor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Xor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3402c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(),
                                                                                           { "Xor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_hashCipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCipher;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_hashCipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCipher;
}
constexpr void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_set_hashCipher(::Org::BouncyCastle::Crypto::IBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashCipher = value;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_mainCipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainCipher;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_mainCipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainCipher;
}
constexpr void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_set_mainCipher(::Org::BouncyCastle::Crypto::IBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainCipher = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_forEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr bool const& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_forEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_set_forEncryption(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forEncryption = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_macSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macSize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_macSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macSize;
}
constexpr void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_set_macSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___macSize = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_initialAssociatedText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialAssociatedText;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_initialAssociatedText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialAssociatedText;
}
constexpr void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_set_initialAssociatedText(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initialAssociatedText = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_L() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___L;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_L() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___L;
}
constexpr void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_set_L(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___L = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_L_Asterisk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___L_Asterisk;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_L_Asterisk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___L_Asterisk;
}
constexpr void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_set_L_Asterisk(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___L_Asterisk = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_L_Dollar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___L_Dollar;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_L_Dollar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___L_Dollar;
}
constexpr void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_set_L_Dollar(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___L_Dollar = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_KtopInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KtopInput;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_KtopInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KtopInput;
}
constexpr void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_set_KtopInput(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___KtopInput = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_Stretch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Stretch;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_Stretch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Stretch;
}
constexpr void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_set_Stretch(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Stretch = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_OffsetMAIN_0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OffsetMAIN_0;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_OffsetMAIN_0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OffsetMAIN_0;
}
constexpr void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_set_OffsetMAIN_0(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OffsetMAIN_0 = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_hashBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashBlock;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_hashBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashBlock;
}
constexpr void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_set_hashBlock(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashBlock = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_mainBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainBlock;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_mainBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainBlock;
}
constexpr void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_set_mainBlock(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainBlock = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_hashBlockPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashBlockPos;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_hashBlockPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashBlockPos;
}
constexpr void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_set_hashBlockPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashBlockPos = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_mainBlockPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainBlockPos;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_mainBlockPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainBlockPos;
}
constexpr void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_set_mainBlockPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainBlockPos = value;
}
constexpr int64_t& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_hashBlockCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashBlockCount;
}
constexpr int64_t const& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_hashBlockCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashBlockCount;
}
constexpr void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_set_hashBlockCount(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashBlockCount = value;
}
constexpr int64_t& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_mainBlockCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainBlockCount;
}
constexpr int64_t const& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_mainBlockCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainBlockCount;
}
constexpr void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_set_mainBlockCount(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainBlockCount = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_OffsetHASH() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OffsetHASH;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_OffsetHASH() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OffsetHASH;
}
constexpr void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_set_OffsetHASH(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OffsetHASH = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_Sum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Sum;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_Sum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Sum;
}
constexpr void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_set_Sum(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Sum = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_OffsetMAIN() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OffsetMAIN;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_OffsetMAIN() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OffsetMAIN;
}
constexpr void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_set_OffsetMAIN(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OffsetMAIN = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_Checksum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Checksum;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_Checksum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Checksum;
}
constexpr void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_set_Checksum(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Checksum = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_macBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macBlock;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_get_macBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macBlock;
}
constexpr void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::__cordl_internal_set_macBlock(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___macBlock = value;
}
inline void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* hashCipher, ::Org::BouncyCastle::Crypto::IBlockCipher* mainCipher) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashCipher, mainCipher);
}
inline ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetUnderlyingCipher() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBlockCipher*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessNonce(::ArrayW<uint8_t> N) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, N);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetMac() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetOutputSize(int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, len);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetUpdateOutputSize(int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, len);
}
inline void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessAadByte(uint8_t input) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessAadBytes(::ArrayW<uint8_t> input, int32_t off, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, off, len);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, output, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, len, output, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::DoFinal(::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Clear(::ArrayW<uint8_t> bs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bs);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetLSub(int32_t n) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, n);
}
inline void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessHashBlock() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessMainBlock(::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Reset(bool clearMac) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clearMac);
}
inline void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::UpdateHASH(::ArrayW<uint8_t> LSub) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, LSub);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::OCB_double(::ArrayW<uint8_t> block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { "OCB_double", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, block);
}
inline void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::OCB_extend(::ArrayW<uint8_t> block, int32_t pos) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(),
                                                                                         { "OCB_extend", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, block, pos);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::OCB_ntz(int64_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(), { "OCB_ntz", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ShiftLeft(::ArrayW<uint8_t> block, ::ArrayW<uint8_t> output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(),
                                                                                         { "ShiftLeft", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, block, output);
}
inline void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Xor(::ArrayW<uint8_t> block, ::ArrayW<uint8_t> val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(),
                                                                                         { "Xor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, block, val);
}
inline ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher* Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* hashCipher,
                                                                                                                      ::Org::BouncyCastle::Crypto::IBlockCipher* mainCipher) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*>(hashCipher, mainCipher));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
constexpr Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::operator ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::i___Org__BouncyCastle__Crypto__Modes__IAeadBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
constexpr Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::operator ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadCipher* Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::i___Org__BouncyCastle__Crypto__Modes__IAeadCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::OcbBlockCipher() {}
