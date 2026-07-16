#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/ECMqvBasicAgreement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__ECMqvBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECDomainParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__MqvPrivateParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::Init)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x36e2570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement.GetFieldSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::GetFieldSize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x36e2670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement.CalculateAgreement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(
        &::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::CalculateAgreement)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x36e26c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement.CalculateMqvAgreement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*,
                                                            ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*, ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*,
                                                            ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*, ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*)>(
        &::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::CalculateMqvAgreement)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x36e28cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>(),
            { "CalculateMqvAgreement",
              {},
              { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(),
                ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(),
                ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::*)()>(&::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36e2b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters*& Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::__cordl_internal_get_privParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privParams;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters* const& Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::__cordl_internal_get_privParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privParams;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::__cordl_internal_set_privParams(::Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___privParams = value;
}
inline void Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::GetFieldSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters* pubKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, pubKey);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::CalculateMqvAgreement(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters,
                                                                                                                                ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* d1U,
                                                                                                                                ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* d2U,
                                                                                                                                ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* Q2U,
                                                                                                                                ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* Q1V,
                                                                                                                                ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* Q2V) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>(),
                       { "CalculateMqvAgreement",
                         {},
                         { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(),
                           ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(),
                           ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, parameters, d1U, d2U, Q2U, Q1V, Q2V);
}
inline void Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement* Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBasicAgreement"
constexpr Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::operator ::Org::BouncyCastle::Crypto::IBasicAgreement*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBasicAgreement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBasicAgreement"
constexpr ::Org::BouncyCastle::Crypto::IBasicAgreement* Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::i___Org__BouncyCastle__Crypto__IBasicAgreement() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBasicAgreement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::ECMqvBasicAgreement() {}
