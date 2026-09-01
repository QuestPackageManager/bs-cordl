#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Signers\DsaSigner.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__DsaSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DsaKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__IDsaKCalculator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDsaExt_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDsa_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::DsaSigner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::DsaSigner::*)()>(&::Org::BouncyCastle::Crypto::Signers::DsaSigner::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3422ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::DsaSigner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::DsaSigner::*)(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*)>(
    &::Org::BouncyCastle::Crypto::Signers::DsaSigner::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3422f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::DsaSigner.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Signers::DsaSigner::*)()>(&::Org::BouncyCastle::Crypto::Signers::DsaSigner::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3422f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::DsaSigner.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::DsaSigner::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Signers::DsaSigner::Init)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x3422f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::DsaSigner.get_Order
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Signers::DsaSigner::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::DsaSigner::get_Order)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3423220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::DsaSigner.GenerateSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*> (::Org::BouncyCastle::Crypto::Signers::DsaSigner::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Signers::DsaSigner::GenerateSignature)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x3423244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::DsaSigner.VerifySignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::DsaSigner::*)(
    ::ArrayW<uint8_t>, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Crypto::Signers::DsaSigner::VerifySignature)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x3423608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::DsaSigner.CalculateE
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (
    ::Org::BouncyCastle::Crypto::Signers::DsaSigner::*)(::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Signers::DsaSigner::CalculateE)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3423828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::DsaSigner.InitSecureRandom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Security::SecureRandom* (
    ::Org::BouncyCastle::Crypto::Signers::DsaSigner::*)(bool, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Signers::DsaSigner::InitSecureRandom)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3423904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), 15 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*& Org::BouncyCastle::Crypto::Signers::DsaSigner::__cordl_internal_get_kCalculator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kCalculator;
}
constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* const& Org::BouncyCastle::Crypto::Signers::DsaSigner::__cordl_internal_get_kCalculator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kCalculator;
}
constexpr void Org::BouncyCastle::Crypto::Signers::DsaSigner::__cordl_internal_set_kCalculator(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kCalculator = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*& Org::BouncyCastle::Crypto::Signers::DsaSigner::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters* const& Org::BouncyCastle::Crypto::Signers::DsaSigner::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void Org::BouncyCastle::Crypto::Signers::DsaSigner::__cordl_internal_set_key(::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Signers::DsaSigner::__cordl_internal_get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Crypto::Signers::DsaSigner::__cordl_internal_get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void Org::BouncyCastle::Crypto::Signers::DsaSigner::__cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___random = value;
}
inline void Org::BouncyCastle::Crypto::Signers::DsaSigner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::DsaSigner::_ctor(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* kCalculator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kCalculator);
}
inline ::StringW Org::BouncyCastle::Crypto::Signers::DsaSigner::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::DsaSigner::Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forSigning, parameters);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Signers::DsaSigner::get_Order() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> Org::BouncyCastle::Crypto::Signers::DsaSigner::GenerateSignature(::ArrayW<uint8_t> message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(this, ___internal_method, message);
}
inline bool Org::BouncyCastle::Crypto::Signers::DsaSigner::VerifySignature(::ArrayW<uint8_t> message, ::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::BigInteger* s) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message, r, s);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Signers::DsaSigner::CalculateE(::Org::BouncyCastle::Math::BigInteger* n, ::ArrayW<uint8_t> message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, n, message);
}
inline ::Org::BouncyCastle::Security::SecureRandom* Org::BouncyCastle::Crypto::Signers::DsaSigner::InitSecureRandom(bool needed, ::Org::BouncyCastle::Security::SecureRandom* provided) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Security::SecureRandom*>(this, ___internal_method, needed, provided);
}
inline ::Org::BouncyCastle::Crypto::Signers::DsaSigner* Org::BouncyCastle::Crypto::Signers::DsaSigner::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>());
}
inline ::Org::BouncyCastle::Crypto::Signers::DsaSigner* Org::BouncyCastle::Crypto::Signers::DsaSigner::New_ctor(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* kCalculator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::DsaSigner*>(kCalculator));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDsaExt"
constexpr Org::BouncyCastle::Crypto::Signers::DsaSigner::operator ::Org::BouncyCastle::Crypto::IDsaExt*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDsaExt*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IDsaExt"
constexpr ::Org::BouncyCastle::Crypto::IDsaExt* Org::BouncyCastle::Crypto::Signers::DsaSigner::i___Org__BouncyCastle__Crypto__IDsaExt() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDsaExt*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDsa"
constexpr Org::BouncyCastle::Crypto::Signers::DsaSigner::operator ::Org::BouncyCastle::Crypto::IDsa*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDsa*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IDsa"
constexpr ::Org::BouncyCastle::Crypto::IDsa* Org::BouncyCastle::Crypto::Signers::DsaSigner::i___Org__BouncyCastle__Crypto__IDsa() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDsa*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Signers::DsaSigner::DsaSigner() {}
