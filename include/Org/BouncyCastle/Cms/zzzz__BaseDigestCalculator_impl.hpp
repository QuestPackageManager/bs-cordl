#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\BaseDigestCalculator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__BaseDigestCalculator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__IDigestCalculator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::BaseDigestCalculator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::BaseDigestCalculator::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Cms::BaseDigestCalculator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a47ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::BaseDigestCalculator*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::BaseDigestCalculator.GetDigest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Cms::BaseDigestCalculator::*)()>(&::Org::BouncyCastle::Cms::BaseDigestCalculator::GetDigest)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x36a47f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::BaseDigestCalculator*>(), { "GetDigest", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Cms::BaseDigestCalculator::__cordl_internal_get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Cms::BaseDigestCalculator::__cordl_internal_get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Cms::BaseDigestCalculator::__cordl_internal_set_digest(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digest = value;
}
inline void Org::BouncyCastle::Cms::BaseDigestCalculator::_ctor(::ArrayW<uint8_t> digest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::BaseDigestCalculator*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Cms::BaseDigestCalculator::GetDigest() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::BaseDigestCalculator*>(), { "GetDigest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::BaseDigestCalculator* Org::BouncyCastle::Cms::BaseDigestCalculator::New_ctor(::ArrayW<uint8_t> digest) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::BaseDigestCalculator*>(digest));
}
/// @brief Convert operator to "::Org::BouncyCastle::Cms::IDigestCalculator"
constexpr Org::BouncyCastle::Cms::BaseDigestCalculator::operator ::Org::BouncyCastle::Cms::IDigestCalculator*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::IDigestCalculator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::IDigestCalculator"
constexpr ::Org::BouncyCastle::Cms::IDigestCalculator* Org::BouncyCastle::Cms::BaseDigestCalculator::i___Org__BouncyCastle__Cms__IDigestCalculator() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::IDigestCalculator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::BaseDigestCalculator::BaseDigestCalculator() {}
