#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\AesEngine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__AesEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesEngine.Shift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Engines::AesEngine::Shift)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33960b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { "Shift", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesEngine.FFmulX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::Org::BouncyCastle::Crypto::Engines::AesEngine::FFmulX)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x33960b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { "FFmulX", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesEngine.FFmulX2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::Org::BouncyCastle::Crypto::Engines::AesEngine::FFmulX2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x33960d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { "FFmulX2", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesEngine.Inv_Mcol
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::Org::BouncyCastle::Crypto::Engines::AesEngine::Inv_Mcol)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x33960f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { "Inv_Mcol", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesEngine.SubWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::Org::BouncyCastle::Crypto::Engines::AesEngine::SubWord)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3396190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { "SubWord", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesEngine.GenerateWorkingKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ArrayW<uint32_t>> (::Org::BouncyCastle::Crypto::Engines::AesEngine::*)(::ArrayW<uint8_t>, bool)>(
    &::Org::BouncyCastle::Crypto::Engines::AesEngine::GenerateWorkingKey)> {
  constexpr static std::size_t size = 0xb18;
  constexpr static std::size_t addrs = 0x3396258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(),
                                                                                           { "GenerateWorkingKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::AesEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::AesEngine::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3396d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesEngine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::AesEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::AesEngine::Init)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x3396d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesEngine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::AesEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::AesEngine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3396f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesEngine.get_IsPartialBlockOkay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Engines::AesEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::AesEngine::get_IsPartialBlockOkay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3396f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesEngine.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::AesEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::AesEngine::GetBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3396f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesEngine.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::AesEngine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::AesEngine::ProcessBlock)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3396f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesEngine.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::AesEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::AesEngine::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3398340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesEngine.UnPackBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::AesEngine::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::AesEngine::UnPackBlock)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x33970b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(),
                                                                                           { "UnPackBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesEngine.PackBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::AesEngine::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::AesEngine::PackBlock)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x33982dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(),
                                                                                           { "PackBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesEngine.EncryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::AesEngine::*)(::ArrayW<::ArrayW<uint32_t>>)>(
    &::Org::BouncyCastle::Crypto::Engines::AesEngine::EncryptBlock)> {
  constexpr static std::size_t size = 0x8f4;
  constexpr static std::size_t addrs = 0x3397120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { "EncryptBlock", {}, { ::i2c::type_of<::ArrayW<::ArrayW<uint32_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesEngine.DecryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::AesEngine::*)(::ArrayW<::ArrayW<uint32_t>>)>(
    &::Org::BouncyCastle::Crypto::Engines::AesEngine::DecryptBlock)> {
  constexpr static std::size_t size = 0x8c8;
  constexpr static std::size_t addrs = 0x3397a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { "DecryptBlock", {}, { ::i2c::type_of<::ArrayW<::ArrayW<uint32_t>>>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_get_ROUNDS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ROUNDS;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_get_ROUNDS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ROUNDS;
}
constexpr void Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_set_ROUNDS(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ROUNDS = value;
}
constexpr ::ArrayW<::ArrayW<uint32_t>>& Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_get_WorkingKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___WorkingKey;
}
constexpr ::ArrayW<::ArrayW<uint32_t>> const& Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_get_WorkingKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___WorkingKey;
}
constexpr void Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_set_WorkingKey(::ArrayW<::ArrayW<uint32_t>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___WorkingKey = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_get_C0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C0;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_get_C0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C0;
}
constexpr void Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_set_C0(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___C0 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_get_C1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C1;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_get_C1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C1;
}
constexpr void Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_set_C1(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___C1 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_get_C2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C2;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_get_C2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C2;
}
constexpr void Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_set_C2(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___C2 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_get_C3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C3;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_get_C3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C3;
}
constexpr void Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_set_C3(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___C3 = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_get_forEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_get_forEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr void Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_set_forEncryption(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forEncryption = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void Org::BouncyCastle::Crypto::Engines::AesEngine::__cordl_internal_set_s(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s = value;
}
inline void Org::BouncyCastle::Crypto::Engines::AesEngine::setStaticF_S(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "S", ::Org::BouncyCastle::Crypto::Engines::AesEngine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::AesEngine::getStaticF_S() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "S", ::Org::BouncyCastle::Crypto::Engines::AesEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::AesEngine::setStaticF_Si(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "Si", ::Org::BouncyCastle::Crypto::Engines::AesEngine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::AesEngine::getStaticF_Si() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "Si", ::Org::BouncyCastle::Crypto::Engines::AesEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::AesEngine::setStaticF_rcon(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "rcon", ::Org::BouncyCastle::Crypto::Engines::AesEngine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::AesEngine::getStaticF_rcon() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "rcon", ::Org::BouncyCastle::Crypto::Engines::AesEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::AesEngine::setStaticF_T0(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "T0", ::Org::BouncyCastle::Crypto::Engines::AesEngine*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Engines::AesEngine::getStaticF_T0() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "T0", ::Org::BouncyCastle::Crypto::Engines::AesEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::AesEngine::setStaticF_Tinv0(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "Tinv0", ::Org::BouncyCastle::Crypto::Engines::AesEngine*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Engines::AesEngine::getStaticF_Tinv0() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "Tinv0", ::Org::BouncyCastle::Crypto::Engines::AesEngine*>();
}
inline uint32_t Org::BouncyCastle::Crypto::Engines::AesEngine::Shift(uint32_t r, int32_t shift) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { "Shift", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, r, shift);
}
inline uint32_t Org::BouncyCastle::Crypto::Engines::AesEngine::FFmulX(uint32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { "FFmulX", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x);
}
inline uint32_t Org::BouncyCastle::Crypto::Engines::AesEngine::FFmulX2(uint32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { "FFmulX2", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x);
}
inline uint32_t Org::BouncyCastle::Crypto::Engines::AesEngine::Inv_Mcol(uint32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { "Inv_Mcol", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x);
}
inline uint32_t Org::BouncyCastle::Crypto::Engines::AesEngine::SubWord(uint32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { "SubWord", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x);
}
inline ::ArrayW<::ArrayW<uint32_t>> Org::BouncyCastle::Crypto::Engines::AesEngine::GenerateWorkingKey(::ArrayW<uint8_t> key, bool forEncryption) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(),
                                                                                         { "GenerateWorkingKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<uint32_t>>>(this, ___internal_method, key, forEncryption);
}
inline void Org::BouncyCastle::Crypto::Engines::AesEngine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::AesEngine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::AesEngine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Engines::AesEngine::get_IsPartialBlockOkay() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::AesEngine::GetBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::AesEngine::ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::AesEngine::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::AesEngine::UnPackBlock(::ArrayW<uint8_t> bytes, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(),
                                                                                         { "UnPackBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, off);
}
inline void Org::BouncyCastle::Crypto::Engines::AesEngine::PackBlock(::ArrayW<uint8_t> bytes, int32_t off) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { "PackBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, off);
}
inline void Org::BouncyCastle::Crypto::Engines::AesEngine::EncryptBlock(::ArrayW<::ArrayW<uint32_t>> KW) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { "EncryptBlock", {}, { ::i2c::type_of<::ArrayW<::ArrayW<uint32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, KW);
}
inline void Org::BouncyCastle::Crypto::Engines::AesEngine::DecryptBlock(::ArrayW<::ArrayW<uint32_t>> KW) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesEngine*>(), { "DecryptBlock", {}, { ::i2c::type_of<::ArrayW<::ArrayW<uint32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, KW);
}
inline ::Org::BouncyCastle::Crypto::Engines::AesEngine* Org::BouncyCastle::Crypto::Engines::AesEngine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::AesEngine*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr Org::BouncyCastle::Crypto::Engines::AesEngine::operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Engines::AesEngine::i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::AesEngine::AesEngine() {}
