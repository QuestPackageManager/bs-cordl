#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\HeartbeatMode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__HeartbeatMode_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HeartbeatMode.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::HeartbeatMode::IsValid)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x346b76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatMode*>(), { "IsValid", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HeartbeatMode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::HeartbeatMode::*)()>(&::Org::BouncyCastle::Crypto::Tls::HeartbeatMode::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x346be94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatMode*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool Org::BouncyCastle::Crypto::Tls::HeartbeatMode::IsValid(uint8_t heartbeatMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatMode*>(), { "IsValid", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, heartbeatMode);
}
inline void Org::BouncyCastle::Crypto::Tls::HeartbeatMode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatMode*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatMode* Org::BouncyCastle::Crypto::Tls::HeartbeatMode::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::HeartbeatMode*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::HeartbeatMode::HeartbeatMode() {}
