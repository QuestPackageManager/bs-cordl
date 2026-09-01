#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\CounterSignatureDigestCalculator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CounterSignatureDigestCalculator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__IDigestCalculator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::*)(::StringW, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36cb2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator.GetDigest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::*)()>(
    &::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::GetDigest)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x36cb2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator*>(), { "GetDigest", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::__cordl_internal_get_alg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alg;
}
constexpr ::StringW const& Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::__cordl_internal_get_alg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alg;
}
constexpr void Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::__cordl_internal_set_alg(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___alg = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::__cordl_internal_set_data(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::_ctor(::StringW alg, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alg, data);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::GetDigest() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator*>(), { "GetDigest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator* Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::New_ctor(::StringW alg, ::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator*>(alg, data));
}
/// @brief Convert operator to "::Org::BouncyCastle::Cms::IDigestCalculator"
constexpr Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::operator ::Org::BouncyCastle::Cms::IDigestCalculator*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::IDigestCalculator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::IDigestCalculator"
constexpr ::Org::BouncyCastle::Cms::IDigestCalculator* Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::i___Org__BouncyCastle__Cms__IDigestCalculator() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::IDigestCalculator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator::CounterSignatureDigestCalculator() {}
