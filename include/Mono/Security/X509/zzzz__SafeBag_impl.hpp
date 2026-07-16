#pragma once
// IWYU pragma private; include "Mono/Security/X509/SafeBag.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__SafeBag_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::SafeBag._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::SafeBag::*)(::StringW, ::Mono::Security::ASN1*)>(&::Mono::Security::X509::SafeBag::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a89fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::SafeBag*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mono::Security::ASN1*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::SafeBag.get_BagOID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::SafeBag::*)()>(&::Mono::Security::X509::SafeBag::get_BagOID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a89fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::SafeBag*>(), { "get_BagOID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::SafeBag.get_ASN1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::ASN1* (::Mono::Security::X509::SafeBag::*)()>(&::Mono::Security::X509::SafeBag::get_ASN1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a89fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::SafeBag*>(), { "get_ASN1", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Mono::Security::X509::SafeBag::__cordl_internal_get__bagOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bagOID;
}
constexpr ::StringW const& Mono::Security::X509::SafeBag::__cordl_internal_get__bagOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bagOID;
}
constexpr void Mono::Security::X509::SafeBag::__cordl_internal_set__bagOID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bagOID = value;
}
constexpr ::Mono::Security::ASN1*& Mono::Security::X509::SafeBag::__cordl_internal_get__asn1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asn1;
}
constexpr ::Mono::Security::ASN1* const& Mono::Security::X509::SafeBag::__cordl_internal_get__asn1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asn1;
}
constexpr void Mono::Security::X509::SafeBag::__cordl_internal_set__asn1(::Mono::Security::ASN1* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____asn1 = value;
}
inline void Mono::Security::X509::SafeBag::_ctor(::StringW bagOID, ::Mono::Security::ASN1* asn1) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::SafeBag*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mono::Security::ASN1*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bagOID, asn1);
}
inline ::StringW Mono::Security::X509::SafeBag::get_BagOID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::SafeBag*>(), { "get_BagOID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Mono::Security::ASN1* Mono::Security::X509::SafeBag::get_ASN1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::SafeBag*>(), { "get_ASN1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*>(this, ___internal_method);
}
inline ::Mono::Security::X509::SafeBag* Mono::Security::X509::SafeBag::New_ctor(::StringW bagOID, ::Mono::Security::ASN1* asn1) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::SafeBag*>(bagOID, asn1));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::SafeBag::SafeBag() {}
