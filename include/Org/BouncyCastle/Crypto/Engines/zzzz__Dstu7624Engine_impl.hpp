#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\Dstu7624Engine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Dstu7624Engine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x33ac7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::Init)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x33ac8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.WorkingKeyExpandKT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::WorkingKeyExpandKT)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x33acba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(),
                                                             { "WorkingKeyExpandKT", {}, { ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.WorkingKeyExpandEven
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::WorkingKeyExpandEven)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x33ace18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(),
                                                             { "WorkingKeyExpandEven", {}, { ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.WorkingKeyExpandOdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::WorkingKeyExpandOdd)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x33ad284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "WorkingKeyExpandOdd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::ProcessBlock)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x33ad520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.EncryptionRound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::EncryptionRound)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x33ad2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "EncryptionRound", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.DecryptionRound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::DecryptionRound)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x33ae064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "DecryptionRound", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.DecryptBlock_128
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::DecryptBlock_128)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x33adc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(),
                            { "DecryptBlock_128", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.EncryptBlock_128
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::EncryptBlock_128)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x33ad770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(),
                            { "EncryptBlock_128", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.SubBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::SubBytes)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x33ae084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "SubBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.InvSubBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::InvSubBytes)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x33ae864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "InvSubBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.ShiftRows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::ShiftRows)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x33ae244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "ShiftRows", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.InvShiftRows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::InvShiftRows)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x33ae614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "InvShiftRows", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.AddRoundKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::AddRoundKey)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x33adb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "AddRoundKey", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.SubRoundKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::SubRoundKey)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x33adfdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "SubRoundKey", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.XorRoundKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::XorRoundKey)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x33adba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "XorRoundKey", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.MixColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t)>(&::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::MixColumn)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x33aeb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "MixColumn", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.MixColumns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::MixColumns)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x33ae494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "MixColumns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.MixColumnInv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t)>(&::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::MixColumnInv)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x33aea24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "MixColumnInv", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.MixColumnsInv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::MixColumnsInv)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x33ae554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "MixColumnsInv", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.MulX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t)>(&::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::MulX)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x33aec3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "MulX", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.MulX2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t)>(&::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::MulX2)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x33aec64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "MulX2", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.Rotate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(int32_t, uint64_t)>(&::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::Rotate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33aec5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "Rotate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.RotateLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)(::ArrayW<uint64_t>, ::ArrayW<uint64_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::RotateLeft)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x33ad318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(),
                                                                                           { "RotateLeft", {}, { ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33aec90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::GetBlockSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33aecd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.get_IsPartialBlockOkay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::get_IsPartialBlockOkay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33aece0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x33aece8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), 15 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint64_t>& Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::__cordl_internal_get_internalState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalState;
}
constexpr ::ArrayW<uint64_t> const& Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::__cordl_internal_get_internalState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalState;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::__cordl_internal_set_internalState(::ArrayW<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___internalState = value;
}
constexpr ::ArrayW<uint64_t>& Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::__cordl_internal_get_workingKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workingKey;
}
constexpr ::ArrayW<uint64_t> const& Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::__cordl_internal_get_workingKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workingKey;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::__cordl_internal_set_workingKey(::ArrayW<uint64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___workingKey = value;
}
constexpr ::ArrayW<::ArrayW<uint64_t>>& Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::__cordl_internal_get_roundKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roundKeys;
}
constexpr ::ArrayW<::ArrayW<uint64_t>> const& Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::__cordl_internal_get_roundKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roundKeys;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::__cordl_internal_set_roundKeys(::ArrayW<::ArrayW<uint64_t>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___roundKeys = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::__cordl_internal_get_wordsInBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wordsInBlock;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::__cordl_internal_get_wordsInBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wordsInBlock;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::__cordl_internal_set_wordsInBlock(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wordsInBlock = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::__cordl_internal_get_wordsInKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wordsInKey;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::__cordl_internal_get_wordsInKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wordsInKey;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::__cordl_internal_set_wordsInKey(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wordsInKey = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::__cordl_internal_get_roundsAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roundsAmount;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::__cordl_internal_get_roundsAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roundsAmount;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::__cordl_internal_set_roundsAmount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___roundsAmount = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::__cordl_internal_get_forEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::__cordl_internal_get_forEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::__cordl_internal_set_forEncryption(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forEncryption = value;
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::setStaticF_S0(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "S0", ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::getStaticF_S0() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "S0", ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::setStaticF_S1(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "S1", ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::getStaticF_S1() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "S1", ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::setStaticF_S2(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "S2", ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::getStaticF_S2() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "S2", ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::setStaticF_S3(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "S3", ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::getStaticF_S3() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "S3", ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::setStaticF_T0(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "T0", ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::getStaticF_T0() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "T0", ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::setStaticF_T1(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "T1", ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::getStaticF_T1() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "T1", ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::setStaticF_T2(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "T2", ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::getStaticF_T2() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "T2", ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::setStaticF_T3(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "T3", ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::getStaticF_T3() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "T3", ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::_ctor(int32_t blockSizeBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blockSizeBits);
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::WorkingKeyExpandKT(::ArrayW<uint64_t> workingKey, ::ArrayW<uint64_t> tempKeys) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(),
                                                           { "WorkingKeyExpandKT", {}, { ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, workingKey, tempKeys);
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::WorkingKeyExpandEven(::ArrayW<uint64_t> workingKey, ::ArrayW<uint64_t> tempKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(),
                                                           { "WorkingKeyExpandEven", {}, { ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, workingKey, tempKey);
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::WorkingKeyExpandOdd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "WorkingKeyExpandOdd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::EncryptionRound() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "EncryptionRound", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::DecryptionRound() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "DecryptionRound", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::DecryptBlock_128(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(),
                          { "DecryptBlock_128", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::EncryptBlock_128(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(),
                          { "EncryptBlock_128", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::SubBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "SubBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::InvSubBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "InvSubBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::ShiftRows() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "ShiftRows", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::InvShiftRows() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "InvShiftRows", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::AddRoundKey(int32_t round) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "AddRoundKey", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, round);
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::SubRoundKey(int32_t round) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "SubRoundKey", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, round);
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::XorRoundKey(int32_t round) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "XorRoundKey", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, round);
}
inline uint64_t Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::MixColumn(uint64_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "MixColumn", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, c);
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::MixColumns() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "MixColumns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint64_t Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::MixColumnInv(uint64_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "MixColumnInv", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, c);
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::MixColumnsInv() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "MixColumnsInv", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint64_t Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::MulX(uint64_t n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "MulX", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, n);
}
inline uint64_t Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::MulX2(uint64_t n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "MulX2", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, n);
}
inline uint64_t Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::Rotate(int32_t n, uint64_t x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), { "Rotate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, n, x);
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::RotateLeft(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(),
                                                                                         { "RotateLeft", {}, { ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, z);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::GetBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::get_IsPartialBlockOkay() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine* Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::New_ctor(int32_t blockSizeBits) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*>(blockSizeBits));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine::Dstu7624Engine() {}
