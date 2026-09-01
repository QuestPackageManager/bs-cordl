#pragma once
// IWYU pragma private; include "Mono\Security\Cryptography\SymmetricTransform.hpp"
#include "System/Security/Cryptography/zzzz__PaddingMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Cryptography/zzzz__SymmetricTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__PaddingMode_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)(::System::Security::Cryptography::SymmetricAlgorithm*, bool, ::ArrayW<uint8_t>)>(
    &::Mono::Security::Cryptography::SymmetricTransform::_ctor)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5ac0520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::SymmetricAlgorithm*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)()>(&::Mono::Security::Cryptography::SymmetricTransform::Finalize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5ac07b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)()>(
    &::Mono::Security::Cryptography::SymmetricTransform::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ac0804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)(bool)>(&::Mono::Security::Cryptography::SymmetricTransform::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ac0874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.get_CanTransformMultipleBlocks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::Cryptography::SymmetricTransform::*)()>(
    &::Mono::Security::Cryptography::SymmetricTransform::get_CanTransformMultipleBlocks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac08cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.get_InputBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Security::Cryptography::SymmetricTransform::*)()>(&::Mono::Security::Cryptography::SymmetricTransform::get_InputBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac08d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.get_OutputBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Security::Cryptography::SymmetricTransform::*)()>(&::Mono::Security::Cryptography::SymmetricTransform::get_OutputBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac08dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.Transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Mono::Security::Cryptography::SymmetricTransform::Transform)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5ac08e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.ECB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Mono::Security::Cryptography::SymmetricTransform::ECB)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.CBC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Mono::Security::Cryptography::SymmetricTransform::CBC)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5ac0ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.CFB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Mono::Security::Cryptography::SymmetricTransform::CFB)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5ac0c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.OFB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Mono::Security::Cryptography::SymmetricTransform::OFB)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5ac0e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.CTS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Mono::Security::Cryptography::SymmetricTransform::CTS)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5ac0e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.CheckInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Mono::Security::Cryptography::SymmetricTransform::CheckInput)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5ac0eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(),
                                                             { "CheckInput", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.TransformBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Mono::Security::Cryptography::SymmetricTransform::TransformBlock)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5ac0fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.get_KeepLastBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::Cryptography::SymmetricTransform::*)()>(&::Mono::Security::Cryptography::SymmetricTransform::get_KeepLastBlock)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ac11e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), { "get_KeepLastBlock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.InternalTransformBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Mono::Security::Cryptography::SymmetricTransform::InternalTransformBlock)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5ac120c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(),
                            { "InternalTransformBlock",
                              {},
                              { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.Random
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Mono::Security::Cryptography::SymmetricTransform::Random)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5ac13c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(),
                                                             { "Random", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.ThrowBadPaddingException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::SymmetricTransform::*)(::System::Security::Cryptography::PaddingMode, int32_t, int32_t)>(
    &::Mono::Security::Cryptography::SymmetricTransform::ThrowBadPaddingException)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5ac1480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(),
                            { "ThrowBadPaddingException", {}, { ::i2c::type_of<::System::Security::Cryptography::PaddingMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.FinalEncrypt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Mono::Security::Cryptography::SymmetricTransform::FinalEncrypt)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5ac1630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.FinalDecrypt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Mono::Security::Cryptography::SymmetricTransform::FinalDecrypt)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5ac18c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::SymmetricTransform.TransformFinalBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Cryptography::SymmetricTransform::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Mono::Security::Cryptography::SymmetricTransform::TransformFinalBlock)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5ac1b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 23 }));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::SymmetricAlgorithm*& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_algo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algo;
}
constexpr ::System::Security::Cryptography::SymmetricAlgorithm* const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_algo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algo;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set_algo(::System::Security::Cryptography::SymmetricAlgorithm* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___algo = value;
}
constexpr bool& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_encrypt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encrypt;
}
constexpr bool const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_encrypt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encrypt;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set_encrypt(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encrypt = value;
}
constexpr int32_t& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_BlockSizeByte() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BlockSizeByte;
}
constexpr int32_t const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_BlockSizeByte() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BlockSizeByte;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set_BlockSizeByte(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BlockSizeByte = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_temp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___temp;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_temp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___temp;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set_temp(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___temp = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_temp2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___temp2;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_temp2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___temp2;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set_temp2(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___temp2 = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_workBuff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workBuff;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_workBuff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workBuff;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set_workBuff(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___workBuff = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_workout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workout;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_workout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workout;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set_workout(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___workout = value;
}
constexpr ::System::Security::Cryptography::PaddingMode& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_padmode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___padmode;
}
constexpr ::System::Security::Cryptography::PaddingMode const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_padmode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___padmode;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set_padmode(::System::Security::Cryptography::PaddingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___padmode = value;
}
constexpr int32_t& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_FeedBackByte() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FeedBackByte;
}
constexpr int32_t const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_FeedBackByte() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FeedBackByte;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set_FeedBackByte(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FeedBackByte = value;
}
constexpr bool& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_m_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr bool const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_m_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set_m_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_disposed = value;
}
constexpr bool& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_lastBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastBlock;
}
constexpr bool const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get_lastBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastBlock;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set_lastBlock(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastBlock = value;
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator*& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get__rng() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rng;
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator* const& Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_get__rng() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rng;
}
constexpr void Mono::Security::Cryptography::SymmetricTransform::__cordl_internal_set__rng(::System::Security::Cryptography::RandomNumberGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rng = value;
}
inline void Mono::Security::Cryptography::SymmetricTransform::_ctor(::System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, bool encryption, ::ArrayW<uint8_t> rgbIV) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::SymmetricAlgorithm*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, symmAlgo, encryption, rgbIV);
}
inline void Mono::Security::Cryptography::SymmetricTransform::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::SymmetricTransform::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::SymmetricTransform::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool Mono::Security::Cryptography::SymmetricTransform::get_CanTransformMultipleBlocks() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Mono::Security::Cryptography::SymmetricTransform::get_InputBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Mono::Security::Cryptography::SymmetricTransform::get_OutputBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::SymmetricTransform::Transform(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, output);
}
inline void Mono::Security::Cryptography::SymmetricTransform::ECB(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, output);
}
inline void Mono::Security::Cryptography::SymmetricTransform::CBC(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, output);
}
inline void Mono::Security::Cryptography::SymmetricTransform::CFB(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, output);
}
inline void Mono::Security::Cryptography::SymmetricTransform::OFB(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, output);
}
inline void Mono::Security::Cryptography::SymmetricTransform::CTS(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, output);
}
inline void Mono::Security::Cryptography::SymmetricTransform::CheckInput(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(),
                                                           { "CheckInput", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputBuffer, inputOffset, inputCount);
}
inline int32_t Mono::Security::Cryptography::SymmetricTransform::TransformBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t> outputBuffer,
                                                                                int32_t outputOffset) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
}
inline bool Mono::Security::Cryptography::SymmetricTransform::get_KeepLastBlock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), { "get_KeepLastBlock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Mono::Security::Cryptography::SymmetricTransform::InternalTransformBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t> outputBuffer,
                                                                                        int32_t outputOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(),
                          { "InternalTransformBlock",
                            {},
                            { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
}
inline void Mono::Security::Cryptography::SymmetricTransform::Random(::ArrayW<uint8_t> buffer, int32_t start, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(),
                                                           { "Random", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, start, length);
}
inline void Mono::Security::Cryptography::SymmetricTransform::ThrowBadPaddingException(::System::Security::Cryptography::PaddingMode padding, int32_t length, int32_t position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(),
                                       { "ThrowBadPaddingException", {}, { ::i2c::type_of<::System::Security::Cryptography::PaddingMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, padding, length, position);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::SymmetricTransform::FinalEncrypt(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, inputBuffer, inputOffset, inputCount);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::SymmetricTransform::FinalDecrypt(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, inputBuffer, inputOffset, inputCount);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::SymmetricTransform::TransformFinalBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::SymmetricTransform*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, inputBuffer, inputOffset, inputCount);
}
inline ::Mono::Security::Cryptography::SymmetricTransform* Mono::Security::Cryptography::SymmetricTransform::New_ctor(::System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, bool encryption,
                                                                                                                      ::ArrayW<uint8_t> rgbIV) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Cryptography::SymmetricTransform*>(symmAlgo, encryption, rgbIV));
}
/// @brief Convert operator to "::System::Security::Cryptography::ICryptoTransform"
constexpr Mono::Security::Cryptography::SymmetricTransform::operator ::System::Security::Cryptography::ICryptoTransform*() noexcept {
  return static_cast<::System::Security::Cryptography::ICryptoTransform*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::Cryptography::ICryptoTransform"
constexpr ::System::Security::Cryptography::ICryptoTransform* Mono::Security::Cryptography::SymmetricTransform::i___System__Security__Cryptography__ICryptoTransform() noexcept {
  return static_cast<::System::Security::Cryptography::ICryptoTransform*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Mono::Security::Cryptography::SymmetricTransform::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Mono::Security::Cryptography::SymmetricTransform::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::SymmetricTransform::SymmetricTransform() {}
