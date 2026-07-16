#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/X25519Agreement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__X25519Agreement_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__X25519PrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IRawAgreement_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::X25519Agreement.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::X25519Agreement::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Agreement::X25519Agreement::Init)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x36e4878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::X25519Agreement*>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::X25519Agreement.get_AgreementSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Agreement::X25519Agreement::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::X25519Agreement::get_AgreementSize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x36e48f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::X25519Agreement*>(), { "get_AgreementSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::X25519Agreement.CalculateAgreement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::X25519Agreement::*)(::Org::BouncyCastle::Crypto::ICipherParameters*, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Agreement::X25519Agreement::CalculateAgreement)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x36e4954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::X25519Agreement*>(),
                            { "CalculateAgreement", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::X25519Agreement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::X25519Agreement::*)()>(&::Org::BouncyCastle::Crypto::Agreement::X25519Agreement::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36e49ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::X25519Agreement*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters*& Org::BouncyCastle::Crypto::Agreement::X25519Agreement::__cordl_internal_get_privateKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKey;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters* const& Org::BouncyCastle::Crypto::Agreement::X25519Agreement::__cordl_internal_get_privateKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKey;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::X25519Agreement::__cordl_internal_set_privateKey(::Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___privateKey = value;
}
inline void Org::BouncyCastle::Crypto::Agreement::X25519Agreement::Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::X25519Agreement*>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::X25519Agreement::get_AgreementSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::X25519Agreement*>(), { "get_AgreementSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Agreement::X25519Agreement::CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters* publicKey, ::ArrayW<uint8_t> buf, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::X25519Agreement*>(),
                          { "CalculateAgreement", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, publicKey, buf, off);
}
inline void Org::BouncyCastle::Crypto::Agreement::X25519Agreement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::X25519Agreement*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Agreement::X25519Agreement* Org::BouncyCastle::Crypto::Agreement::X25519Agreement::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Agreement::X25519Agreement*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IRawAgreement"
constexpr Org::BouncyCastle::Crypto::Agreement::X25519Agreement::operator ::Org::BouncyCastle::Crypto::IRawAgreement*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IRawAgreement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IRawAgreement"
constexpr ::Org::BouncyCastle::Crypto::IRawAgreement* Org::BouncyCastle::Crypto::Agreement::X25519Agreement::i___Org__BouncyCastle__Crypto__IRawAgreement() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IRawAgreement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::X25519Agreement::X25519Agreement() {}
