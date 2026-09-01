#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\IsaacEngine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__IsaacEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCipher_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IsaacEngine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::IsaacEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::IsaacEngine::Init)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x33b552c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IsaacEngine.ReturnByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Engines::IsaacEngine::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Engines::IsaacEngine::ReturnByte)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x33b5a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IsaacEngine.ProcessBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::IsaacEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::IsaacEngine::ProcessBytes)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x33b5c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IsaacEngine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::IsaacEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::IsaacEngine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33b5e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IsaacEngine.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::IsaacEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::IsaacEngine::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33b5e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IsaacEngine.setKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::IsaacEngine::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Engines::IsaacEngine::setKey)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x33b5648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), { "setKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IsaacEngine.isaac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::IsaacEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::IsaacEngine::isaac)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x33b5ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), { "isaac", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IsaacEngine.mix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::IsaacEngine::*)(::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Crypto::Engines::IsaacEngine::mix)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x33b5e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), { "mix", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IsaacEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::IsaacEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::IsaacEngine::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x33b5fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint32_t>& Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_get_engineState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engineState;
}
constexpr ::ArrayW<uint32_t> const& Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_get_engineState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engineState;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_set_engineState(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___engineState = value;
}
constexpr ::ArrayW<uint32_t>& Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_get_results() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___results;
}
constexpr ::ArrayW<uint32_t> const& Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_get_results() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___results;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_set_results(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___results = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_get_a() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_get_a() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_set_a(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___a = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_set_b(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
constexpr uint32_t& Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr uint32_t const& Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_set_c(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___c = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_get_keyStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyStream;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_get_keyStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyStream;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_set_keyStream(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyStream = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_get_workingKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workingKey;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_get_workingKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___workingKey;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_set_workingKey(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___workingKey = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_get_initialised() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialised;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_get_initialised() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialised;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IsaacEngine::__cordl_internal_set_initialised(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initialised = value;
}
inline void Org::BouncyCastle::Crypto::Engines::IsaacEngine::setStaticF_sizeL(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "sizeL", ::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Engines::IsaacEngine::getStaticF_sizeL() {
  return ::cordl_internals::getStaticField<int32_t, "sizeL", ::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::IsaacEngine::setStaticF_stateArraySize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "stateArraySize", ::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Engines::IsaacEngine::getStaticF_stateArraySize() {
  return ::cordl_internals::getStaticField<int32_t, "stateArraySize", ::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::IsaacEngine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline uint8_t Org::BouncyCastle::Crypto::Engines::IsaacEngine::ReturnByte(uint8_t input) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Engines::IsaacEngine::ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t> output, int32_t outOff) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, len, output, outOff);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::IsaacEngine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::IsaacEngine::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::IsaacEngine::setKey(::ArrayW<uint8_t> keyBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), { "setKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyBytes);
}
inline void Org::BouncyCastle::Crypto::Engines::IsaacEngine::isaac() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), { "isaac", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::IsaacEngine::mix(::ArrayW<uint32_t> x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), { "mix", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline void Org::BouncyCastle::Crypto::Engines::IsaacEngine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Engines::IsaacEngine* Org::BouncyCastle::Crypto::Engines::IsaacEngine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::IsaacEngine*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCipher"
constexpr Org::BouncyCastle::Crypto::Engines::IsaacEngine::operator ::Org::BouncyCastle::Crypto::IStreamCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IStreamCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IStreamCipher"
constexpr ::Org::BouncyCastle::Crypto::IStreamCipher* Org::BouncyCastle::Crypto::Engines::IsaacEngine::i___Org__BouncyCastle__Crypto__IStreamCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IStreamCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::IsaacEngine::IsaacEngine() {}
