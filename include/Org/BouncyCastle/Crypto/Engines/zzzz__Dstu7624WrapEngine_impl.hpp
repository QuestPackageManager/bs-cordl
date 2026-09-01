#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\Dstu7624WrapEngine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Dstu7624WrapEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Dstu7624Engine_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IWrapper_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x33aef60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33aefe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine*>(), { "get_AlgorithmName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::Init)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x33af024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine*>(),
                                                             { "Init", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine.Wrap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::Wrap)> {
  constexpr static std::size_t size = 0x7a8;
  constexpr static std::size_t addrs = 0x33af14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine*>(),
                                                             { "Wrap", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine.Unwrap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::Unwrap)> {
  constexpr static std::size_t size = 0x878;
  constexpr static std::size_t addrs = 0x33af8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine*>(),
                                                             { "Unwrap", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::__cordl_internal_get_param() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___param;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* const& Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::__cordl_internal_get_param() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___param;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::__cordl_internal_set_param(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___param = value;
}
constexpr ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*& Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::__cordl_internal_get_engine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine* const& Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::__cordl_internal_get_engine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::__cordl_internal_set_engine(::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___engine = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::__cordl_internal_get_forWrapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forWrapping;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::__cordl_internal_get_forWrapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forWrapping;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::__cordl_internal_set_forWrapping(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forWrapping = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::__cordl_internal_get_blockSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockSize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::__cordl_internal_get_blockSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockSize;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::__cordl_internal_set_blockSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockSize = value;
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::_ctor(int32_t blockSizeBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blockSizeBits);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::get_AlgorithmName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine*>(), { "get_AlgorithmName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::Init(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine*>(),
                                                           { "Init", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forWrapping, parameters);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::Wrap(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine*>(),
                                                           { "Wrap", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, length);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::Unwrap(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine*>(),
                                                           { "Unwrap", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, length);
}
inline ::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine* Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::New_ctor(int32_t blockSizeBits) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine*>(blockSizeBits));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IWrapper"
constexpr Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::operator ::Org::BouncyCastle::Crypto::IWrapper*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IWrapper*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IWrapper"
constexpr ::Org::BouncyCastle::Crypto::IWrapper* Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::i___Org__BouncyCastle__Crypto__IWrapper() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IWrapper*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine::Dstu7624WrapEngine() {}
