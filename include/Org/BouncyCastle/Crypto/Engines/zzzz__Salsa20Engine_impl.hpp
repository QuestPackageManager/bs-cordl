#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/Salsa20Engine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Salsa20Engine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCipher_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine.PackTauOrSigma
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)(int32_t, ::ArrayW<uint32_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::PackTauOrSigma)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x33a6580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(),
                                                             { "PackTauOrSigma", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x33a66b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x33a671c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::Init)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x33a681c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine.get_NonceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::get_NonceSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33a6ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x33a6bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine.ReturnByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::ReturnByte)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x33a6c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine.AdvanceCounter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::AdvanceCounter)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x33a6dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine.ProcessBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::ProcessBytes)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x33a6e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::Reset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x33a70dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine.ResetCounter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::ResetCounter)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x33a7104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine.SetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::SetKey)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x33a7130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine.GenerateKeyStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::GenerateKeyStream)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x33a7324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine.SalsaCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::SalsaCore)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x33a73ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(),
                                                             { "SalsaCore", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine.ResetLimitCounter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::ResetLimitCounter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33a70f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), { "ResetLimitCounter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine.LimitExceeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::LimitExceeded)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x33a6d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), { "LimitExceeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine.LimitExceeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::*)(uint32_t)>(&::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::LimitExceeded)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x33a709c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), { "LimitExceeded", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_get_rounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rounds;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_get_rounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rounds;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_set_rounds(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rounds = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
constexpr ::ArrayW<uint32_t>& Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_get_engineState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engineState;
}
constexpr ::ArrayW<uint32_t> const& Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_get_engineState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engineState;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_set_engineState(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___engineState = value;
}
constexpr ::ArrayW<uint32_t>& Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::ArrayW<uint32_t> const& Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_set_x(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_get_keyStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyStream;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_get_keyStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyStream;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_set_keyStream(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyStream = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_get_initialised() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialised;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_get_initialised() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialised;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_set_initialised(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initialised = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_get_cW0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cW0;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_get_cW0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cW0;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_set_cW0(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cW0 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_get_cW1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cW1;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_get_cW1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cW1;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_set_cW1(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cW1 = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_get_cW2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cW2;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_get_cW2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cW2;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::__cordl_internal_set_cW2(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cW2 = value;
}
inline void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::setStaticF_DEFAULT_ROUNDS(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "DEFAULT_ROUNDS", ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Engines::Salsa20Engine::getStaticF_DEFAULT_ROUNDS() {
  return ::cordl_internals::getStaticField<int32_t, "DEFAULT_ROUNDS", ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::setStaticF_TAU_SIGMA(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "TAU_SIGMA", ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Engines::Salsa20Engine::getStaticF_TAU_SIGMA() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "TAU_SIGMA", ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::setStaticF_sigma(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "sigma", ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Salsa20Engine::getStaticF_sigma() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "sigma", ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::setStaticF_tau(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "tau", ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Salsa20Engine::getStaticF_tau() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "tau", ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::PackTauOrSigma(int32_t keyLength, ::ArrayW<uint32_t> state, int32_t stateOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(),
                                                           { "PackTauOrSigma", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyLength, state, stateOffset);
}
inline void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::_ctor(int32_t rounds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rounds);
}
inline void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::Salsa20Engine::get_NonceSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::Salsa20Engine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline uint8_t Org::BouncyCastle::Crypto::Engines::Salsa20Engine::ReturnByte(uint8_t input) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::AdvanceCounter() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::ProcessBytes(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t len, ::ArrayW<uint8_t> outBytes, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inBytes, inOff, len, outBytes, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::ResetCounter() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::SetKey(::ArrayW<uint8_t> keyBytes, ::ArrayW<uint8_t> ivBytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyBytes, ivBytes);
}
inline void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::GenerateKeyStream(::ArrayW<uint8_t> output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::SalsaCore(int32_t rounds, ::ArrayW<uint32_t> input, ::ArrayW<uint32_t> x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(),
                                                           { "SalsaCore", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rounds, input, x);
}
inline void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::ResetLimitCounter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), { "ResetLimitCounter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Engines::Salsa20Engine::LimitExceeded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), { "LimitExceeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Engines::Salsa20Engine::LimitExceeded(uint32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(), { "LimitExceeded", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, len);
}
inline ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine* Org::BouncyCastle::Crypto::Engines::Salsa20Engine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>());
}
inline ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine* Org::BouncyCastle::Crypto::Engines::Salsa20Engine::New_ctor(int32_t rounds) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*>(rounds));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCipher"
constexpr Org::BouncyCastle::Crypto::Engines::Salsa20Engine::operator ::Org::BouncyCastle::Crypto::IStreamCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IStreamCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IStreamCipher"
constexpr ::Org::BouncyCastle::Crypto::IStreamCipher* Org::BouncyCastle::Crypto::Engines::Salsa20Engine::i___Org__BouncyCastle__Crypto__IStreamCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IStreamCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine::Salsa20Engine() {}
