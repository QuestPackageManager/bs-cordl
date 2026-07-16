#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cmp/RevocationDetails.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__RevocationDetails_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__RevDetails_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::RevocationDetails._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cmp::RevocationDetails::*)(::Org::BouncyCastle::Asn1::Cmp::RevDetails*)>(
    &::Org::BouncyCastle::Cmp::RevocationDetails::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a21a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::RevocationDetails*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::RevocationDetails.get_Subject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (::Org::BouncyCastle::Cmp::RevocationDetails::*)()>(
    &::Org::BouncyCastle::Cmp::RevocationDetails::get_Subject)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x36a21ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::RevocationDetails*>(), { "get_Subject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::RevocationDetails.get_Issuer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (::Org::BouncyCastle::Cmp::RevocationDetails::*)()>(
    &::Org::BouncyCastle::Cmp::RevocationDetails::get_Issuer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x36a21dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::RevocationDetails*>(), { "get_Issuer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::RevocationDetails.get_SerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Cmp::RevocationDetails::*)()>(
    &::Org::BouncyCastle::Cmp::RevocationDetails::get_SerialNumber)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x36a220c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::RevocationDetails*>(), { "get_SerialNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::RevocationDetails.ToASN1Structure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::RevDetails* (::Org::BouncyCastle::Cmp::RevocationDetails::*)()>(
    &::Org::BouncyCastle::Cmp::RevocationDetails::ToASN1Structure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a2248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::RevocationDetails*>(), { "ToASN1Structure", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cmp::RevDetails*& Org::BouncyCastle::Cmp::RevocationDetails::__cordl_internal_get_revDetails() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___revDetails;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::RevDetails* const& Org::BouncyCastle::Cmp::RevocationDetails::__cordl_internal_get_revDetails() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___revDetails;
}
constexpr void Org::BouncyCastle::Cmp::RevocationDetails::__cordl_internal_set_revDetails(::Org::BouncyCastle::Asn1::Cmp::RevDetails* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___revDetails = value;
}
inline void Org::BouncyCastle::Cmp::RevocationDetails::_ctor(::Org::BouncyCastle::Asn1::Cmp::RevDetails* revDetails) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::RevocationDetails*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, revDetails);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Cmp::RevocationDetails::get_Subject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::RevocationDetails*>(), { "get_Subject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Cmp::RevocationDetails::get_Issuer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::RevocationDetails*>(), { "get_Issuer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Cmp::RevocationDetails::get_SerialNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::RevocationDetails*>(), { "get_SerialNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::RevDetails* Org::BouncyCastle::Cmp::RevocationDetails::ToASN1Structure() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::RevocationDetails*>(), { "ToASN1Structure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cmp::RevocationDetails* Org::BouncyCastle::Cmp::RevocationDetails::New_ctor(::Org::BouncyCastle::Asn1::Cmp::RevDetails* revDetails) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cmp::RevocationDetails*>(revDetails));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cmp::RevocationDetails::RevocationDetails() {}
