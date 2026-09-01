#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\TlsFatalAlertReceived.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsException_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsFatalAlertReceived_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3487780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived.get_AlertDescription
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::get_AlertDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34877cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived*>(), 12 }));
    return ___internal_method;
  }
};
constexpr uint8_t& Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::__cordl_internal_get_alertDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alertDescription;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::__cordl_internal_get_alertDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alertDescription;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::__cordl_internal_set_alertDescription(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___alertDescription = value;
}
inline void Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::_ctor(uint8_t alertDescription) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alertDescription);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::get_AlertDescription() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived* Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::New_ctor(uint8_t alertDescription) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived*>(alertDescription));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::TlsFatalAlertReceived() {}
