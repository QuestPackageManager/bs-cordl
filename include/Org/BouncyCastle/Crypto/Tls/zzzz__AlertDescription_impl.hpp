#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\AlertDescription.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AlertDescription_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AlertDescription.GetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::AlertDescription::GetName)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x3437860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AlertDescription*>(), { "GetName", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AlertDescription.GetText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::AlertDescription::GetText)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x3437d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AlertDescription*>(), { "GetText", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AlertDescription._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AlertDescription::*)()>(&::Org::BouncyCastle::Crypto::Tls::AlertDescription::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3437ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AlertDescription*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Org::BouncyCastle::Crypto::Tls::AlertDescription::GetName(uint8_t alertDescription) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AlertDescription*>(), { "GetName", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, alertDescription);
}
inline ::StringW Org::BouncyCastle::Crypto::Tls::AlertDescription::GetText(uint8_t alertDescription) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AlertDescription*>(), { "GetText", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, alertDescription);
}
inline void Org::BouncyCastle::Crypto::Tls::AlertDescription::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AlertDescription*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::AlertDescription* Org::BouncyCastle::Crypto::Tls::AlertDescription::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::AlertDescription*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::AlertDescription::AlertDescription() {}
