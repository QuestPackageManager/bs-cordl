#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/AesLightEngine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__AesLightEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesLightEngine.Shift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Engines::AesLightEngine::Shift)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33986a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), { "Shift", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesLightEngine.FFmulX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::Org::BouncyCastle::Crypto::Engines::AesLightEngine::FFmulX)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x33986b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), { "FFmulX", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesLightEngine.FFmulX2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::Org::BouncyCastle::Crypto::Engines::AesLightEngine::FFmulX2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x33986d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), { "FFmulX2", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesLightEngine.Mcol
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::Org::BouncyCastle::Crypto::Engines::AesLightEngine::Mcol)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x33986ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), { "Mcol", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesLightEngine.Inv_Mcol
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::Org::BouncyCastle::Crypto::Engines::AesLightEngine::Inv_Mcol)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3398768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), { "Inv_Mcol", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesLightEngine.SubWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::Org::BouncyCastle::Crypto::Engines::AesLightEngine::SubWord)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3398804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), { "SubWord", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesLightEngine.GenerateWorkingKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ArrayW<uint32_t>> (::Org::BouncyCastle::Crypto::Engines::AesLightEngine::*)(::ArrayW<uint8_t>, bool)>(
    &::Org::BouncyCastle::Crypto::Engines::AesLightEngine::GenerateWorkingKey)> {
  constexpr static std::size_t size = 0xb18;
  constexpr static std::size_t addrs = 0x33988cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(),
                                                                                           { "GenerateWorkingKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesLightEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::AesLightEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::AesLightEngine::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33993e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesLightEngine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::AesLightEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::AesLightEngine::Init)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x33993e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesLightEngine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::AesLightEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::AesLightEngine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3399508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesLightEngine.get_IsPartialBlockOkay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Engines::AesLightEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::AesLightEngine::get_IsPartialBlockOkay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x339954c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesLightEngine.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::AesLightEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::AesLightEngine::GetBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3399554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesLightEngine.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::AesLightEngine::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::AesLightEngine::ProcessBlock)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x339955c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesLightEngine.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::AesLightEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::AesLightEngine::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x339ab28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesLightEngine.UnPackBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::AesLightEngine::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::AesLightEngine::UnPackBlock)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3399698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(),
                                                                                           { "UnPackBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesLightEngine.PackBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::AesLightEngine::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::AesLightEngine::PackBlock)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x339aac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(),
                                                                                           { "PackBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesLightEngine.EncryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::AesLightEngine::*)(::ArrayW<::ArrayW<uint32_t>>)>(
    &::Org::BouncyCastle::Crypto::Engines::AesLightEngine::EncryptBlock)> {
  constexpr static std::size_t size = 0xa00;
  constexpr static std::size_t addrs = 0x3399708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), { "EncryptBlock", {}, { ::i2c::type_of<::ArrayW<::ArrayW<uint32_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::AesLightEngine.DecryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::AesLightEngine::*)(::ArrayW<::ArrayW<uint32_t>>)>(
    &::Org::BouncyCastle::Crypto::Engines::AesLightEngine::DecryptBlock)> {
  constexpr static std::size_t size = 0x9bc;
  constexpr static std::size_t addrs = 0x339a108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), { "DecryptBlock", {}, { ::i2c::type_of<::ArrayW<::ArrayW<uint32_t>>>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Engines::AesLightEngine::__cordl_internal_get_ROUNDS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ROUNDS;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Engines::AesLightEngine::__cordl_internal_get_ROUNDS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ROUNDS;
}
constexpr void Org::BouncyCastle::Crypto::Engines::AesLightEngine::__cordl_internal_set_ROUNDS(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ROUNDS = value;
}
constexpr ::ArrayW<::ArrayW<uint32_t>>& Org::BouncyCastle::Crypto::Engines::AesLightEngine::__cordl_internal_get_WorkingKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___WorkingKey;
}
constexpr ::ArrayW<::ArrayW<uint32_t>> const& Org::BouncyCastle::Crypto::Engines::AesLightEngine::__cordl_internal_get_WorkingKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___WorkingKey;
}
constexpr void Org::BouncyCastle::Crypto::Engines::AesLightEngine::__cordl_internal_set_WorkingKey(::ArrayW<::ArrayW<uint32_t>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___WorkingKey = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Engines::AesLightEngine::__cordl_internal_get_C0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C0;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Engines::AesLightEngine::__cordl_internal_get_C0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C0;
}
constexpr void Org::BouncyCastle::Crypto::Engines::AesLightEngine::__cordl_internal_set_C0(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___C0 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Engines::AesLightEngine::__cordl_internal_get_C1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C1;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Engines::AesLightEngine::__cordl_internal_get_C1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C1;
}
constexpr void Org::BouncyCastle::Crypto::Engines::AesLightEngine::__cordl_internal_set_C1(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___C1 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Engines::AesLightEngine::__cordl_internal_get_C2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C2;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Engines::AesLightEngine::__cordl_internal_get_C2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C2;
}
constexpr void Org::BouncyCastle::Crypto::Engines::AesLightEngine::__cordl_internal_set_C2(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___C2 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Engines::AesLightEngine::__cordl_internal_get_C3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C3;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Engines::AesLightEngine::__cordl_internal_get_C3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___C3;
}
constexpr void Org::BouncyCastle::Crypto::Engines::AesLightEngine::__cordl_internal_set_C3(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___C3 = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Engines::AesLightEngine::__cordl_internal_get_forEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::AesLightEngine::__cordl_internal_get_forEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr void Org::BouncyCastle::Crypto::Engines::AesLightEngine::__cordl_internal_set_forEncryption(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forEncryption = value;
}
inline void Org::BouncyCastle::Crypto::Engines::AesLightEngine::setStaticF_S(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "S", ::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::AesLightEngine::getStaticF_S() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "S", ::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::AesLightEngine::setStaticF_Si(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "Si", ::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::AesLightEngine::getStaticF_Si() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "Si", ::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::AesLightEngine::setStaticF_rcon(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "rcon", ::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::AesLightEngine::getStaticF_rcon() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "rcon", ::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>();
}
inline uint32_t Org::BouncyCastle::Crypto::Engines::AesLightEngine::Shift(uint32_t r, int32_t shift) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), { "Shift", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, r, shift);
}
inline uint32_t Org::BouncyCastle::Crypto::Engines::AesLightEngine::FFmulX(uint32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), { "FFmulX", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x);
}
inline uint32_t Org::BouncyCastle::Crypto::Engines::AesLightEngine::FFmulX2(uint32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), { "FFmulX2", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x);
}
inline uint32_t Org::BouncyCastle::Crypto::Engines::AesLightEngine::Mcol(uint32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), { "Mcol", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x);
}
inline uint32_t Org::BouncyCastle::Crypto::Engines::AesLightEngine::Inv_Mcol(uint32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), { "Inv_Mcol", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x);
}
inline uint32_t Org::BouncyCastle::Crypto::Engines::AesLightEngine::SubWord(uint32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), { "SubWord", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x);
}
inline ::ArrayW<::ArrayW<uint32_t>> Org::BouncyCastle::Crypto::Engines::AesLightEngine::GenerateWorkingKey(::ArrayW<uint8_t> key, bool forEncryption) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(),
                                                                                         { "GenerateWorkingKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<uint32_t>>>(this, ___internal_method, key, forEncryption);
}
inline void Org::BouncyCastle::Crypto::Engines::AesLightEngine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::AesLightEngine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::AesLightEngine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Engines::AesLightEngine::get_IsPartialBlockOkay() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::AesLightEngine::GetBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::AesLightEngine::ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, inOff, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::AesLightEngine::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::AesLightEngine::UnPackBlock(::ArrayW<uint8_t> bytes, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(),
                                                                                         { "UnPackBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, off);
}
inline void Org::BouncyCastle::Crypto::Engines::AesLightEngine::PackBlock(::ArrayW<uint8_t> bytes, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(),
                                                                                         { "PackBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, off);
}
inline void Org::BouncyCastle::Crypto::Engines::AesLightEngine::EncryptBlock(::ArrayW<::ArrayW<uint32_t>> KW) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), { "EncryptBlock", {}, { ::i2c::type_of<::ArrayW<::ArrayW<uint32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, KW);
}
inline void Org::BouncyCastle::Crypto::Engines::AesLightEngine::DecryptBlock(::ArrayW<::ArrayW<uint32_t>> KW) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>(), { "DecryptBlock", {}, { ::i2c::type_of<::ArrayW<::ArrayW<uint32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, KW);
}
inline ::Org::BouncyCastle::Crypto::Engines::AesLightEngine* Org::BouncyCastle::Crypto::Engines::AesLightEngine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::AesLightEngine*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr Org::BouncyCastle::Crypto::Engines::AesLightEngine::operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* Org::BouncyCastle::Crypto::Engines::AesLightEngine::i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::AesLightEngine::AesLightEngine() {}
