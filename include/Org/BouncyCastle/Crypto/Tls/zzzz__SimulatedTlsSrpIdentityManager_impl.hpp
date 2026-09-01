#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\SimulatedTlsSrpIdentityManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SimulatedTlsSrpIdentityManager_def.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/Srp/zzzz__Srp6VerifierGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Srp6GroupParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpIdentityManager_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpLoginParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager.GetRfc5054Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager* (*)(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, ::ArrayW<uint8_t>)>(
        &::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::GetRfc5054Default)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x34709c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>(),
                                         { "GetRfc5054Default", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::*)(
    ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*, ::Org::BouncyCastle::Crypto::IMac*)>(
    &::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3470b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager.GetLoginParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* (
    ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::GetLoginParameters)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x3470b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*& Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__cordl_internal_get_mGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mGroup;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* const& Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__cordl_internal_get_mGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mGroup;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__cordl_internal_set_mGroup(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mGroup = value;
}
constexpr ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*& Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__cordl_internal_get_mVerifierGenerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mVerifierGenerator;
}
constexpr ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator* const& Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__cordl_internal_get_mVerifierGenerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mVerifierGenerator;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__cordl_internal_set_mVerifierGenerator(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mVerifierGenerator = value;
}
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__cordl_internal_get_mMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMac;
}
constexpr ::Org::BouncyCastle::Crypto::IMac* const& Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__cordl_internal_get_mMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMac;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::__cordl_internal_set_mMac(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mMac = value;
}
inline void Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::setStaticF_PREFIX_PASSWORD(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "PREFIX_PASSWORD", ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::getStaticF_PREFIX_PASSWORD() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "PREFIX_PASSWORD", ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>();
}
inline void Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::setStaticF_PREFIX_SALT(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "PREFIX_SALT", ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::getStaticF_PREFIX_SALT() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "PREFIX_SALT", ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>();
}
inline ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*
Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::GetRfc5054Default(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group, ::ArrayW<uint8_t> seedKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>(),
                                              { "GetRfc5054Default", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>(nullptr, ___internal_method, group, seedKey);
}
inline void Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::_ctor(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group,
                                                                                  ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator* verifierGenerator,
                                                                                  ::Org::BouncyCastle::Crypto::IMac* mac) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group, verifierGenerator, mac);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::GetLoginParameters(::ArrayW<uint8_t> identity) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>(this, ___internal_method, identity);
}
inline ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*
Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::New_ctor(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group,
                                                                         ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator* verifierGenerator,
                                                                         ::Org::BouncyCastle::Crypto::IMac* mac) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*>(group, verifierGenerator, mac));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager"
constexpr Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::operator ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*
Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::i___Org__BouncyCastle__Crypto__Tls__TlsSrpIdentityManager() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager::SimulatedTlsSrpIdentityManager() {}
