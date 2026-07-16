#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/Gost3411Digest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Digests/zzzz__Gost3411Digest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__IMemoable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest.MakeC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ArrayW<uint8_t>> (*)()>(&::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::MakeC)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x36e90e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "MakeC", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)()>(&::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::_ctor)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x36e918c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::_ctor)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x36e95ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*)>(
    &::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::_ctor)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x36e986c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x36e9d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "get_AlgorithmName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest.GetDigestSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)()>(&::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::GetDigestSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36e9d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "GetDigestSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x36e9d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "Update", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest.BlockUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::BlockUpdate)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x36ea180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(),
                                                             { "BlockUpdate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest.P
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::P)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x36ea2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "P", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest.A
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::A)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x36ea3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "A", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest.E
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::E)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x36ea47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(),
            { "E", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest.fw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::fw)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x36ea5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "fw", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest.processBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::processBlock)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x36e9e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(),
                                                                                           { "processBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest.finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)()>(&::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::finish)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x36ea814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "finish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest.DoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::DoFinal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x36ea884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(),
                                                                                           { "DoFinal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)()>(&::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::Reset)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x36e9448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest.sumByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::sumByteArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x36e9de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "sumByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest.cpyBytesToShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<int16_t>)>(&::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::cpyBytesToShort)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x36ea70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(),
                                                                                           { "cpyBytesToShort", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<int16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest.cpyShortToBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int16_t>, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::cpyShortToBytes)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x36ea788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(),
                                                                                           { "cpyShortToBytes", {}, { ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest.GetByteLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)()>(&::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::GetByteLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ea8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "GetByteLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::IMemoable* (::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::Copy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x36ea8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "Copy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)(::Org::BouncyCastle::Utilities::IMemoable*)>(
    &::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::Reset)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x36e9a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "Reset", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IMemoable*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_H() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___H;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_H() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___H;
}
constexpr void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_set_H(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___H = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_L() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___L;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_L() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___L;
}
constexpr void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_set_L(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___L = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_M() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___M;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_M() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___M;
}
constexpr void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_set_M(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___M = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_Sum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Sum;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_Sum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Sum;
}
constexpr void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_set_Sum(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Sum = value;
}
constexpr ::ArrayW<::ArrayW<uint8_t>>& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_C() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C;
}
constexpr ::ArrayW<::ArrayW<uint8_t>> const& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_C() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C;
}
constexpr void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_set_C(::ArrayW<::ArrayW<uint8_t>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___C = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_xBuf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xBuf;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_xBuf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xBuf;
}
constexpr void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_set_xBuf(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xBuf = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_xBufOff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xBufOff;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_xBufOff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xBufOff;
}
constexpr void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_set_xBufOff(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xBufOff = value;
}
constexpr uint64_t& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_byteCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteCount;
}
constexpr uint64_t const& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_byteCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteCount;
}
constexpr void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_set_byteCount(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___byteCount = value;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_cipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_cipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cipher = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_sBox() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sBox;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_sBox() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sBox;
}
constexpr void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_set_sBox(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sBox = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_K() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___K;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_K() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___K;
}
constexpr void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_set_K(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___K = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_a() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_a() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_set_a(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___a = value;
}
constexpr ::ArrayW<int16_t>& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_wS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wS;
}
constexpr ::ArrayW<int16_t> const& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_wS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wS;
}
constexpr void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_set_wS(::ArrayW<int16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wS = value;
}
constexpr ::ArrayW<int16_t>& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_w_S() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w_S;
}
constexpr ::ArrayW<int16_t> const& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_w_S() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w_S;
}
constexpr void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_set_w_S(::ArrayW<int16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___w_S = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_S() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_S() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S;
}
constexpr void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_set_S(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___S = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_U() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___U;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_U() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___U;
}
constexpr void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_set_U(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___U = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_V() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___V;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_V() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___V;
}
constexpr void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_set_V(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___V = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_W() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___W;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_get_W() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___W;
}
constexpr void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::__cordl_internal_set_W(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___W = value;
}
inline void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::setStaticF_C2(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "C2", ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Digests::Gost3411Digest::getStaticF_C2() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "C2", ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>();
}
inline ::ArrayW<::ArrayW<uint8_t>> Org::BouncyCastle::Crypto::Digests::Gost3411Digest::MakeC() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "MakeC", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<uint8_t>>>(nullptr, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::_ctor(::ArrayW<uint8_t> sBoxParam) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sBoxParam);
}
inline void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::_ctor(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest* t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::StringW Org::BouncyCastle::Crypto::Digests::Gost3411Digest::get_AlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "get_AlgorithmName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::Gost3411Digest::GetDigestSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "GetDigestSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::Update(uint8_t input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "Update", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(),
                                                           { "BlockUpdate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, length);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Digests::Gost3411Digest::P(::ArrayW<uint8_t> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "P", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Digests::Gost3411Digest::A(::ArrayW<uint8_t> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "A", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::E(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> s, int32_t sOff, ::ArrayW<uint8_t> input, int32_t inOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(),
          { "E", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, s, sOff, input, inOff);
}
inline void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::fw(::ArrayW<uint8_t> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "fw", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::processBlock(::ArrayW<uint8_t> input, int32_t inOff) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(),
                                                                                         { "processBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff);
}
inline void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::finish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "finish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::Gost3411Digest::DoFinal(::ArrayW<uint8_t> output, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(),
                                                                                         { "DoFinal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::sumByteArray(::ArrayW<uint8_t> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "sumByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::cpyBytesToShort(::ArrayW<uint8_t> S, ::ArrayW<int16_t> wS) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(),
                                                                                         { "cpyBytesToShort", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<int16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, S, wS);
}
inline void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::cpyShortToBytes(::ArrayW<int16_t> wS, ::ArrayW<uint8_t> S) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(),
                                                                                         { "cpyShortToBytes", {}, { ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, wS, S);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::Gost3411Digest::GetByteLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "GetByteLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::IMemoable* Org::BouncyCastle::Crypto::Digests::Gost3411Digest::Copy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "Copy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::IMemoable*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::Gost3411Digest::Reset(::Org::BouncyCastle::Utilities::IMemoable* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(), { "Reset", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::IMemoable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest* Org::BouncyCastle::Crypto::Digests::Gost3411Digest::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>());
}
inline ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest* Org::BouncyCastle::Crypto::Digests::Gost3411Digest::New_ctor(::ArrayW<uint8_t> sBoxParam) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(sBoxParam));
}
inline ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest* Org::BouncyCastle::Crypto::Digests::Gost3411Digest::New_ctor(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest* t) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*>(t));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
constexpr Org::BouncyCastle::Crypto::Digests::Gost3411Digest::operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDigest*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
constexpr ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crypto::Digests::Gost3411Digest::i___Org__BouncyCastle__Crypto__IDigest() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDigest*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
constexpr Org::BouncyCastle::Crypto::Digests::Gost3411Digest::operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept {
  return static_cast<::Org::BouncyCastle::Utilities::IMemoable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Utilities::IMemoable"
constexpr ::Org::BouncyCastle::Utilities::IMemoable* Org::BouncyCastle::Crypto::Digests::Gost3411Digest::i___Org__BouncyCastle__Utilities__IMemoable() noexcept {
  return static_cast<::Org::BouncyCastle::Utilities::IMemoable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest::Gost3411Digest() {}
