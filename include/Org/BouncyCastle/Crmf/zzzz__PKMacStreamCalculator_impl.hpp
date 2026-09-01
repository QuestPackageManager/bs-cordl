#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crmf\PKMacStreamCalculator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__PKMacStreamCalculator_def.hpp"
#include "Org/BouncyCastle/Crypto/IO/zzzz__MacSink_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCalculator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacStreamCalculator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crmf::PKMacStreamCalculator::*)(::Org::BouncyCastle::Crypto::IMac*)>(
    &::Org::BouncyCastle::Crmf::PKMacStreamCalculator::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x36dbb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacStreamCalculator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacStreamCalculator.get_Stream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Crmf::PKMacStreamCalculator::*)()>(&::Org::BouncyCastle::Crmf::PKMacStreamCalculator::get_Stream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36dbba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacStreamCalculator*>(), { "get_Stream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacStreamCalculator.GetResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Crmf::PKMacStreamCalculator::*)()>(&::Org::BouncyCastle::Crmf::PKMacStreamCalculator::GetResult)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x36dbbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacStreamCalculator*>(), { "GetResult", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IO::MacSink*& Org::BouncyCastle::Crmf::PKMacStreamCalculator::__cordl_internal_get__stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stream;
}
constexpr ::Org::BouncyCastle::Crypto::IO::MacSink* const& Org::BouncyCastle::Crmf::PKMacStreamCalculator::__cordl_internal_get__stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stream;
}
constexpr void Org::BouncyCastle::Crmf::PKMacStreamCalculator::__cordl_internal_set__stream(::Org::BouncyCastle::Crypto::IO::MacSink* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stream = value;
}
inline void Org::BouncyCastle::Crmf::PKMacStreamCalculator::_ctor(::Org::BouncyCastle::Crypto::IMac* mac) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacStreamCalculator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mac);
}
inline ::System::IO::Stream* Org::BouncyCastle::Crmf::PKMacStreamCalculator::get_Stream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacStreamCalculator*>(), { "get_Stream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Crmf::PKMacStreamCalculator::GetResult() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::PKMacStreamCalculator*>(), { "GetResult", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crmf::PKMacStreamCalculator* Org::BouncyCastle::Crmf::PKMacStreamCalculator::New_ctor(::Org::BouncyCastle::Crypto::IMac* mac) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crmf::PKMacStreamCalculator*>(mac));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCalculator"
constexpr Org::BouncyCastle::Crmf::PKMacStreamCalculator::operator ::Org::BouncyCastle::Crypto::IStreamCalculator*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IStreamCalculator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IStreamCalculator"
constexpr ::Org::BouncyCastle::Crypto::IStreamCalculator* Org::BouncyCastle::Crmf::PKMacStreamCalculator::i___Org__BouncyCastle__Crypto__IStreamCalculator() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IStreamCalculator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crmf::PKMacStreamCalculator::PKMacStreamCalculator() {}
