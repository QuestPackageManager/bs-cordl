#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/HeartbeatExtension.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__HeartbeatExtension_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3469368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension.get_Mode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::*)()>(&::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::get_Mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34693f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::Encode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3469400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* (*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::Parse)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3469480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>(), { "Parse", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
constexpr uint8_t& Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::__cordl_internal_get_mMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMode;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::__cordl_internal_get_mMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMode;
}
constexpr void Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::__cordl_internal_set_mMode(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mMode = value;
}
inline void Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::_ctor(uint8_t mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::get_Mode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::Encode(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::Parse(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>(), { "Parse", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>(nullptr, ___internal_method, input);
}
inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::New_ctor(uint8_t mode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*>(mode));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::HeartbeatExtension() {}
