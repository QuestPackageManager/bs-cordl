#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\DesEdeWrapEngine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__DesEdeWrapEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__CbcBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ParametersWithIV_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IWrapper_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::Init)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x33ab8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33abc90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine.Wrap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::Wrap)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x33abcd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine.Unwrap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::Unwrap)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x33ac23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine.CalculateCmsKeyChecksum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::CalculateCmsKeyChecksum)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x33ac00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>(), { "CalculateCmsKeyChecksum", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine.CheckCmsKeyChecksum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::CheckCmsKeyChecksum)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x33ac658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>(),
                                                             { "CheckCmsKeyChecksum", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine.reverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::reverse)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x33ac194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>(), { "reverse", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x33ac774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher*& Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__cordl_internal_get_engine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr ::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher* const& Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__cordl_internal_get_engine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr void Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__cordl_internal_set_engine(::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___engine = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__cordl_internal_get_param() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___param;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* const& Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__cordl_internal_get_param() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___param;
}
constexpr void Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__cordl_internal_set_param(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___param = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV*& Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__cordl_internal_get_paramPlusIV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paramPlusIV;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV* const& Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__cordl_internal_get_paramPlusIV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paramPlusIV;
}
constexpr void Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__cordl_internal_set_paramPlusIV(::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___paramPlusIV = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__cordl_internal_get_iv() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iv;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__cordl_internal_get_iv() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iv;
}
constexpr void Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__cordl_internal_set_iv(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iv = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__cordl_internal_get_forWrapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forWrapping;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__cordl_internal_get_forWrapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forWrapping;
}
constexpr void Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__cordl_internal_set_forWrapping(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forWrapping = value;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__cordl_internal_get_sha1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sha1;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__cordl_internal_get_sha1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sha1;
}
constexpr void Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__cordl_internal_set_sha1(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sha1 = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__cordl_internal_get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__cordl_internal_get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::__cordl_internal_set_digest(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digest = value;
}
inline void Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::setStaticF_IV2(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "IV2", ::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::getStaticF_IV2() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "IV2", ::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>();
}
inline void Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::Init(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forWrapping, parameters);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::Wrap(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, length);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::Unwrap(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, length);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::CalculateCmsKeyChecksum(::ArrayW<uint8_t> key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>(), { "CalculateCmsKeyChecksum", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, key);
}
inline bool Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::CheckCmsKeyChecksum(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> checksum) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>(),
                                                                                         { "CheckCmsKeyChecksum", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, checksum);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::reverse(::ArrayW<uint8_t> bs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>(), { "reverse", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, bs);
}
inline void Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine* Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IWrapper"
constexpr Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::operator ::Org::BouncyCastle::Crypto::IWrapper*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IWrapper*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IWrapper"
constexpr ::Org::BouncyCastle::Crypto::IWrapper* Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::i___Org__BouncyCastle__Crypto__IWrapper() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IWrapper*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine::DesEdeWrapEngine() {}
