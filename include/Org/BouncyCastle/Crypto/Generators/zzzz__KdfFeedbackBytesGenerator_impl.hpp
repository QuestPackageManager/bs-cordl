#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Generators\KdfFeedbackBytesGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__KdfFeedbackBytesGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationFunction_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMacDerivationFunction_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::*)(::Org::BouncyCastle::Crypto::IMac*)>(
    &::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x33dce74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::*)(::Org::BouncyCastle::Crypto::IDerivationParameters*)>(
    &::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::Init)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x33dcf5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDerivationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator.get_Digest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::get_Digest)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x33dd22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>(), { "get_Digest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator.GenerateBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::GenerateBytes)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x33dd2b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>(),
                                                             { "GenerateBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator.generateNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::generateNext)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x33dd498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>(), { "generateNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator.GetMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IMac* (::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::GetMac)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33dd820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>(), { "GetMac", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_get_prf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prf;
}
constexpr ::Org::BouncyCastle::Crypto::IMac* const& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_get_prf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prf;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_set_prf(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prf = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_get_h() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___h;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_get_h() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___h;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_set_h(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___h = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_get_fixedInputData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixedInputData;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_get_fixedInputData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixedInputData;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_set_fixedInputData(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fixedInputData = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_get_maxSizeExcl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxSizeExcl;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_get_maxSizeExcl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxSizeExcl;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_set_maxSizeExcl(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxSizeExcl = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_get_ios() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ios;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_get_ios() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ios;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_set_ios(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ios = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_get_iv() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iv;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_get_iv() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iv;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_set_iv(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iv = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_get_useCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useCounter;
}
constexpr bool const& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_get_useCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useCounter;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_set_useCounter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useCounter = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_get_generatedBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generatedBytes;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_get_generatedBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generatedBytes;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_set_generatedBytes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___generatedBytes = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_get_k() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_get_k() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__cordl_internal_set_k(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___k = value;
}
inline void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::setStaticF_IntegerMax(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "IntegerMax", ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>(
      std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::getStaticF_IntegerMax() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "IntegerMax", ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>();
}
inline void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::setStaticF_Two(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "Two", ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>(
      std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::getStaticF_Two() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "Two", ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>();
}
inline void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::_ctor(::Org::BouncyCastle::Crypto::IMac* prf) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prf);
}
inline void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::Init(::Org::BouncyCastle::Crypto::IDerivationParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDerivationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::get_Digest() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>(), { "get_Digest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::GenerateBytes(::ArrayW<uint8_t> output, int32_t outOff, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>(),
                                                           { "GenerateBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, outOff, length);
}
inline void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::generateNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>(), { "generateNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IMac* Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::GetMac() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>(), { "GetMac", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IMac*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator* Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::New_ctor(::Org::BouncyCastle::Crypto::IMac* prf) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>(prf));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMacDerivationFunction"
constexpr Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::operator ::Org::BouncyCastle::Crypto::IMacDerivationFunction*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMacDerivationFunction*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IMacDerivationFunction"
constexpr ::Org::BouncyCastle::Crypto::IMacDerivationFunction* Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::i___Org__BouncyCastle__Crypto__IMacDerivationFunction() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMacDerivationFunction*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
constexpr Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::operator ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationFunction*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationFunction"
constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction* Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::i___Org__BouncyCastle__Crypto__IDerivationFunction() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationFunction*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::KdfFeedbackBytesGenerator() {}
