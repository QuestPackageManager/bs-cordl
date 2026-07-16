#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/SerpentEngineBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__SerpentEngineBase_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)()>(&::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33bf38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Init)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x33bf390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33bf514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.get_IsPartialBlockOkay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::get_IsPartialBlockOkay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33bf558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::GetBlockSize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x33bf560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::ProcessBlock)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x33bf5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                         { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)()>(&::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33bf774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.RotateLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::RotateLeft)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33bf778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), { "RotateLeft", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.RotateRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::RotateRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33bf784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                                                           { "RotateRight", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.Sb0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x33bf78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                             { "Sb0", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.Ib0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33bf7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                             { "Ib0", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.Sb1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x33bf810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                             { "Sb1", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.Ib1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x33bf850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                             { "Ib1", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.Sb2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb2)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x33bf890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                             { "Sb2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.Ib2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib2)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33bf8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                             { "Ib2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.Sb3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb3)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x33bf91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                             { "Sb3", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.Ib3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib3)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x33bf968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                             { "Ib3", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.Sb4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb4)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33bf9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                             { "Sb4", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.Ib4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib4)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33bf9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                             { "Ib4", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.Sb5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb5)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x33bfa38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                             { "Sb5", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.Ib5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib5)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x33bfa80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                             { "Ib5", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.Sb6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb6)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x33bfac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                             { "Sb6", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.Ib6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib6)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33bfb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                             { "Ib6", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.Sb7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb7)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x33bfb4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                             { "Sb7", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.Ib7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib7)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x33bfb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                             { "Ib7", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.LT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)()>(&::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::LT)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x33bfbe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), { "LT", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.InverseLT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)()>(&::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::InverseLT)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x33bfc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), { "InverseLT", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.MakeWorkingKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::MakeWorkingKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.EncryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::EncryptBlock)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase.DecryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::DecryptBlock)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), 17 }));
    return ___internal_method;
  }
};
constexpr bool& Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::__cordl_internal_get_encrypting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encrypting;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::__cordl_internal_get_encrypting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encrypting;
}
constexpr void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::__cordl_internal_set_encrypting(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encrypting = value;
}
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::__cordl_internal_get_wKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wKey;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::__cordl_internal_get_wKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wKey;
}
constexpr void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::__cordl_internal_set_wKey(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wKey = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::__cordl_internal_get_X0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___X0;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::__cordl_internal_get_X0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___X0;
}
constexpr void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::__cordl_internal_set_X0(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___X0 = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::__cordl_internal_get_X1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___X1;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::__cordl_internal_get_X1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___X1;
}
constexpr void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::__cordl_internal_set_X1(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___X1 = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::__cordl_internal_get_X2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___X2;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::__cordl_internal_get_X2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___X2;
}
constexpr void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::__cordl_internal_set_X2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___X2 = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::__cordl_internal_get_X3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___X3;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::__cordl_internal_get_X3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___X3;
}
constexpr void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::__cordl_internal_set_X3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___X3 = value;
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::setStaticF_BlockSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "BlockSize", ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::getStaticF_BlockSize() {
  return ::cordl_internals::getStaticField<int32_t, "BlockSize", ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>();
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Init(bool encrypting, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encrypting, parameters);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::get_IsPartialBlockOkay() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::GetBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                       { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::RotateLeft(int32_t x, int32_t bits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), { "RotateLeft", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, bits);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::RotateRight(int32_t x, int32_t bits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), { "RotateRight", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, bits);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb0(int32_t a, int32_t b, int32_t c, int32_t d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                           { "Sb0", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, c, d);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib0(int32_t a, int32_t b, int32_t c, int32_t d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                           { "Ib0", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, c, d);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb1(int32_t a, int32_t b, int32_t c, int32_t d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                           { "Sb1", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, c, d);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib1(int32_t a, int32_t b, int32_t c, int32_t d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                           { "Ib1", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, c, d);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb2(int32_t a, int32_t b, int32_t c, int32_t d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                           { "Sb2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, c, d);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib2(int32_t a, int32_t b, int32_t c, int32_t d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                           { "Ib2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, c, d);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb3(int32_t a, int32_t b, int32_t c, int32_t d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                           { "Sb3", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, c, d);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib3(int32_t a, int32_t b, int32_t c, int32_t d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                           { "Ib3", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, c, d);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb4(int32_t a, int32_t b, int32_t c, int32_t d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                           { "Sb4", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, c, d);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib4(int32_t a, int32_t b, int32_t c, int32_t d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                           { "Ib4", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, c, d);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb5(int32_t a, int32_t b, int32_t c, int32_t d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                           { "Sb5", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, c, d);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib5(int32_t a, int32_t b, int32_t c, int32_t d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                           { "Ib5", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, c, d);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb6(int32_t a, int32_t b, int32_t c, int32_t d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                           { "Sb6", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, c, d);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib6(int32_t a, int32_t b, int32_t c, int32_t d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                           { "Ib6", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, c, d);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Sb7(int32_t a, int32_t b, int32_t c, int32_t d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                           { "Sb7", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, c, d);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::Ib7(int32_t a, int32_t b, int32_t c, int32_t d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(),
                                                           { "Ib7", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, c, d);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::LT() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), { "LT", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::InverseLT() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), { "InverseLT", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::MakeWorkingKey(::ArrayW<uint8_t> key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, key);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::EncryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::DecryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, output, outOff);
}
inline ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase* Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::SerpentEngineBase() {}
