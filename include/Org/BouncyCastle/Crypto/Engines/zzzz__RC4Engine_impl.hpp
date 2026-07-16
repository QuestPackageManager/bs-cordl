#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/RC4Engine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__RC4Engine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCipher_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC4Engine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::RC4Engine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::RC4Engine::Init)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x33b8028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC4Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC4Engine*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC4Engine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::RC4Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::RC4Engine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33b82e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC4Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC4Engine*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC4Engine.ReturnByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Engines::RC4Engine::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Engines::RC4Engine::ReturnByte)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x33b832c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC4Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC4Engine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC4Engine.ProcessBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::RC4Engine::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::RC4Engine::ProcessBytes)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x33b83fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC4Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC4Engine*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC4Engine.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::RC4Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::RC4Engine::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33b85e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC4Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC4Engine*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC4Engine.SetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::RC4Engine::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Engines::RC4Engine::SetKey)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x33b8134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC4Engine*>(), { "SetKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RC4Engine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::RC4Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::RC4Engine::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33b8638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC4Engine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Engines::RC4Engine::__cordl_internal_get_engineState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engineState;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Engines::RC4Engine::__cordl_internal_get_engineState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engineState;
}
constexpr void Org::BouncyCastle::Crypto::Engines::RC4Engine::__cordl_internal_set_engineState(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___engineState = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Engines::RC4Engine::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Engines::RC4Engine::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Org::BouncyCastle::Crypto::Engines::RC4Engine::__cordl_internal_set_x(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Engines::RC4Engine::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Engines::RC4Engine::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void Org::BouncyCastle::Crypto::Engines::RC4Engine::__cordl_internal_set_y(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Engines::RC4Engine::__cordl_internal_get_workingKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workingKey;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Engines::RC4Engine::__cordl_internal_get_workingKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workingKey;
}
constexpr void Org::BouncyCastle::Crypto::Engines::RC4Engine::__cordl_internal_set_workingKey(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___workingKey = value;
}
inline void Org::BouncyCastle::Crypto::Engines::RC4Engine::setStaticF_STATE_LENGTH(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "STATE_LENGTH", ::Org::BouncyCastle::Crypto::Engines::RC4Engine*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Engines::RC4Engine::getStaticF_STATE_LENGTH() {
  return ::cordl_internals::getStaticField<int32_t, "STATE_LENGTH", ::Org::BouncyCastle::Crypto::Engines::RC4Engine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::RC4Engine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC4Engine*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::RC4Engine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC4Engine*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline uint8_t Org::BouncyCastle::Crypto::Engines::RC4Engine::ReturnByte(uint8_t input) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC4Engine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Engines::RC4Engine::ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC4Engine*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, length, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Engines::RC4Engine::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC4Engine*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::RC4Engine::SetKey(::ArrayW<uint8_t> keyBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC4Engine*>(), { "SetKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyBytes);
}
inline void Org::BouncyCastle::Crypto::Engines::RC4Engine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RC4Engine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Engines::RC4Engine* Org::BouncyCastle::Crypto::Engines::RC4Engine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::RC4Engine*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCipher"
constexpr Org::BouncyCastle::Crypto::Engines::RC4Engine::operator ::Org::BouncyCastle::Crypto::IStreamCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IStreamCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IStreamCipher"
constexpr ::Org::BouncyCastle::Crypto::IStreamCipher* Org::BouncyCastle::Crypto::Engines::RC4Engine::i___Org__BouncyCastle__Crypto__IStreamCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IStreamCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::RC4Engine::RC4Engine() {}
