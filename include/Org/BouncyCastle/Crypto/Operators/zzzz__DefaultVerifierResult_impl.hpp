#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Operators/DefaultVerifierResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__DefaultVerifierResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::*)(::Org::BouncyCastle::Crypto::ISigner*)>(
    &::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34090b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISigner*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult.IsVerified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::IsVerified)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x34090bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult*>(), { "IsVerified", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult.IsVerified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::IsVerified)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3409174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult*>(),
                                                             { "IsVerified", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::ISigner*& Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::__cordl_internal_get_mSigner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSigner;
}
constexpr ::Org::BouncyCastle::Crypto::ISigner* const& Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::__cordl_internal_get_mSigner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSigner;
}
constexpr void Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::__cordl_internal_set_mSigner(::Org::BouncyCastle::Crypto::ISigner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSigner = value;
}
inline void Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::_ctor(::Org::BouncyCastle::Crypto::ISigner* signer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISigner*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signer);
}
inline bool Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::IsVerified(::ArrayW<uint8_t> signature) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult*>(), { "IsVerified", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, signature);
}
inline bool Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::IsVerified(::ArrayW<uint8_t> sig, int32_t sigOff, int32_t sigLen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult*>(),
                                                           { "IsVerified", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sig, sigOff, sigLen);
}
inline ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult* Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::New_ctor(::Org::BouncyCastle::Crypto::ISigner* signer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult*>(signer));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IVerifier"
constexpr Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::operator ::Org::BouncyCastle::Crypto::IVerifier*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IVerifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IVerifier"
constexpr ::Org::BouncyCastle::Crypto::IVerifier* Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::i___Org__BouncyCastle__Crypto__IVerifier() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IVerifier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::DefaultVerifierResult() {}
