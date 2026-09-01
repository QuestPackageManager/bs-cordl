#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Agreement\ECDHBasicAgreement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__ECDHBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::Init)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x36e3ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement.GetFieldSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::GetFieldSize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x36e3fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement.CalculateAgreement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (
    ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(&::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::CalculateAgreement)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x36e4004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::*)()>(&::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36e426c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*& Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::__cordl_internal_get_privKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privKey;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* const& Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::__cordl_internal_get_privKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privKey;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::__cordl_internal_set_privKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___privKey = value;
}
inline void Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::GetFieldSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters* pubKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, pubKey);
}
inline void Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement* Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBasicAgreement"
constexpr Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::operator ::Org::BouncyCastle::Crypto::IBasicAgreement*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBasicAgreement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBasicAgreement"
constexpr ::Org::BouncyCastle::Crypto::IBasicAgreement* Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::i___Org__BouncyCastle__Crypto__IBasicAgreement() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBasicAgreement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::ECDHBasicAgreement() {}
