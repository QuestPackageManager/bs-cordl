#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/CrlNumber.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__CrlNumber_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CrlNumber._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::CrlNumber::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Asn1::X509::CrlNumber::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3657ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CrlNumber*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CrlNumber.get_Number
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::X509::CrlNumber::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CrlNumber::get_Number)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3657ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CrlNumber*>(), { "get_Number", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CrlNumber.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::X509::CrlNumber::*)()>(&::Org::BouncyCastle::Asn1::X509::CrlNumber::ToString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3657ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CrlNumber*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CrlNumber*>(), 3 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X509::CrlNumber::_ctor(::Org::BouncyCastle::Math::BigInteger* number) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CrlNumber*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, number);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::X509::CrlNumber::get_Number() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CrlNumber*>(), { "get_Number", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Asn1::X509::CrlNumber::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CrlNumber*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::CrlNumber* Org::BouncyCastle::Asn1::X509::CrlNumber::New_ctor(::Org::BouncyCastle::Math::BigInteger* number) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::CrlNumber*>(number));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::CrlNumber::CrlNumber() {}
