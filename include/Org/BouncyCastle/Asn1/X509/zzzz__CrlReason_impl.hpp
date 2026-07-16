#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/CrlReason.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerEnumerated_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__CrlReason_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerEnumerated_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CrlReason._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::CrlReason::*)(int32_t)>(&::Org::BouncyCastle::Asn1::X509::CrlReason::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3657f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CrlReason*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CrlReason._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::CrlReason::*)(::Org::BouncyCastle::Asn1::DerEnumerated*)>(
    &::Org::BouncyCastle::Asn1::X509::CrlReason::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3657fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CrlReason*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerEnumerated*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CrlReason.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::X509::CrlReason::*)()>(&::Org::BouncyCastle::Asn1::X509::CrlReason::ToString)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3658034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CrlReason*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CrlReason*>(), 3 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X509::CrlReason::setStaticF_ReasonString(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "ReasonString", ::Org::BouncyCastle::Asn1::X509::CrlReason*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Org::BouncyCastle::Asn1::X509::CrlReason::getStaticF_ReasonString() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "ReasonString", ::Org::BouncyCastle::Asn1::X509::CrlReason*>();
}
inline void Org::BouncyCastle::Asn1::X509::CrlReason::_ctor(int32_t reason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CrlReason*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline void Org::BouncyCastle::Asn1::X509::CrlReason::_ctor(::Org::BouncyCastle::Asn1::DerEnumerated* reason) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CrlReason*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerEnumerated*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline ::StringW Org::BouncyCastle::Asn1::X509::CrlReason::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CrlReason*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::CrlReason* Org::BouncyCastle::Asn1::X509::CrlReason::New_ctor(int32_t reason) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::CrlReason*>(reason));
}
inline ::Org::BouncyCastle::Asn1::X509::CrlReason* Org::BouncyCastle::Asn1::X509::CrlReason::New_ctor(::Org::BouncyCastle::Asn1::DerEnumerated* reason) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::CrlReason*>(reason));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::CrlReason::CrlReason() {}
