#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\NamedCurve.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__NamedCurve_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::NamedCurve.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::NamedCurve::IsValid)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x346beb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::NamedCurve*>(), { "IsValid", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::NamedCurve.RefersToASpecificNamedCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::NamedCurve::RefersToASpecificNamedCurve)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x346bed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::NamedCurve*>(), { "RefersToASpecificNamedCurve", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::NamedCurve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::NamedCurve::*)()>(&::Org::BouncyCastle::Crypto::Tls::NamedCurve::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x346bee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::NamedCurve*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool Org::BouncyCastle::Crypto::Tls::NamedCurve::IsValid(int32_t namedCurve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::NamedCurve*>(), { "IsValid", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, namedCurve);
}
inline bool Org::BouncyCastle::Crypto::Tls::NamedCurve::RefersToASpecificNamedCurve(int32_t namedCurve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::NamedCurve*>(), { "RefersToASpecificNamedCurve", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, namedCurve);
}
inline void Org::BouncyCastle::Crypto::Tls::NamedCurve::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::NamedCurve*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::NamedCurve* Org::BouncyCastle::Crypto::Tls::NamedCurve::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::NamedCurve*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::NamedCurve::NamedCurve() {}
