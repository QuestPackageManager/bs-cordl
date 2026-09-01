#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Operators\DefaultVerifierCalculator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__DefaultVerifierCalculator_def.hpp"
#include "Org/BouncyCastle/Crypto/IO/zzzz__SignerSink_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCalculator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::*)(::Org::BouncyCastle::Crypto::ISigner*)>(
    &::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x340a594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISigner*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator.get_Stream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::*)()>(
    &::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::get_Stream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x340b3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator*>(), { "get_Stream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator.GetResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::*)()>(
    &::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::GetResult)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x340b3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator*>(), { "GetResult", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IO::SignerSink*& Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::__cordl_internal_get_mSignerSink() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSignerSink;
}
constexpr ::Org::BouncyCastle::Crypto::IO::SignerSink* const& Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::__cordl_internal_get_mSignerSink() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSignerSink;
}
constexpr void Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::__cordl_internal_set_mSignerSink(::Org::BouncyCastle::Crypto::IO::SignerSink* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSignerSink = value;
}
inline void Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::_ctor(::Org::BouncyCastle::Crypto::ISigner* signer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISigner*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signer);
}
inline ::System::IO::Stream* Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::get_Stream() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator*>(), { "get_Stream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::GetResult() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator*>(), { "GetResult", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator* Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::New_ctor(::Org::BouncyCastle::Crypto::ISigner* signer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator*>(signer));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCalculator"
constexpr Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::operator ::Org::BouncyCastle::Crypto::IStreamCalculator*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IStreamCalculator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IStreamCalculator"
constexpr ::Org::BouncyCastle::Crypto::IStreamCalculator* Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::i___Org__BouncyCastle__Crypto__IStreamCalculator() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IStreamCalculator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::DefaultVerifierCalculator() {}
