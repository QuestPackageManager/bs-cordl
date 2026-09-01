#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\AlertLevel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AlertLevel_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AlertLevel.GetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::AlertLevel::GetName)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3437efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AlertLevel*>(), { "GetName", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AlertLevel.GetText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::AlertLevel::GetText)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x3437fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AlertLevel*>(), { "GetText", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AlertLevel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AlertLevel::*)()>(&::Org::BouncyCastle::Crypto::Tls::AlertLevel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x343812c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AlertLevel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Org::BouncyCastle::Crypto::Tls::AlertLevel::GetName(uint8_t alertDescription) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AlertLevel*>(), { "GetName", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, alertDescription);
}
inline ::StringW Org::BouncyCastle::Crypto::Tls::AlertLevel::GetText(uint8_t alertDescription) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AlertLevel*>(), { "GetText", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, alertDescription);
}
inline void Org::BouncyCastle::Crypto::Tls::AlertLevel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AlertLevel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::AlertLevel* Org::BouncyCastle::Crypto::Tls::AlertLevel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::AlertLevel*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::AlertLevel::AlertLevel() {}
