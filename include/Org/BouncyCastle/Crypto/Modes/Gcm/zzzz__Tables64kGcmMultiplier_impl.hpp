#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Modes\Gcm\Tables64kGcmMultiplier.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Modes/Gcm/zzzz__Tables64kGcmMultiplier_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/Gcm/zzzz__IGcmMultiplier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier::Init)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x33f20b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier*>(), { "Init", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier.MultiplyH
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier::MultiplyH)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x33f25a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier*>(), { "MultiplyH", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33f26fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier::__cordl_internal_get_H() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___H;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier::__cordl_internal_get_H() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___H;
}
constexpr void Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier::__cordl_internal_set_H(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___H = value;
}
constexpr ::ArrayW<::ArrayW<::ArrayW<uint32_t>>>& Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier::__cordl_internal_get_M() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___M;
}
constexpr ::ArrayW<::ArrayW<::ArrayW<uint32_t>>> const& Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier::__cordl_internal_get_M() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___M;
}
constexpr void Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier::__cordl_internal_set_M(::ArrayW<::ArrayW<::ArrayW<uint32_t>>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___M = value;
}
inline void Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier::Init(::ArrayW<uint8_t> H) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier*>(), { "Init", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, H);
}
inline void Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier::MultiplyH(::ArrayW<uint8_t> x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier*>(), { "MultiplyH", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline void Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier* Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier"
constexpr Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier::operator ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier"
constexpr ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier* Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier::i___Org__BouncyCastle__Crypto__Modes__Gcm__IGcmMultiplier() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier::Tables64kGcmMultiplier() {}
