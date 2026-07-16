#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Modes/Gcm/BasicGcmExponentiator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Modes/Gcm/zzzz__BasicGcmExponentiator_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/Gcm/zzzz__IGcmExponentiator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::Init)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x33ee1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator*>(), { "Init", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator.ExponentiateX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::*)(int64_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::ExponentiateX)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x33ee2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator*>(),
                                                                                           { "ExponentiateX", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33ee504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint32_t>& Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::ArrayW<uint32_t> const& Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::__cordl_internal_set_x(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
inline void Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::Init(::ArrayW<uint8_t> x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator*>(), { "Init", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline void Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::ExponentiateX(int64_t pow, ::ArrayW<uint8_t> output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator*>(),
                                                                                         { "ExponentiateX", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pow, output);
}
inline void Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator* Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator"
constexpr Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::operator ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator"
constexpr ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*
Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::i___Org__BouncyCastle__Crypto__Modes__Gcm__IGcmExponentiator() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::BasicGcmExponentiator() {}
