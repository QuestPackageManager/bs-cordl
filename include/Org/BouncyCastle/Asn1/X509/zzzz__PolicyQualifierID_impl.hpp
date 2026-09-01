#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\PolicyQualifierID.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__PolicyQualifierID_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::PolicyQualifierID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::PolicyQualifierID::*)(::StringW)>(&::Org::BouncyCastle::Asn1::X509::PolicyQualifierID::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x36638ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::X509::PolicyQualifierID::setStaticF_IdQtCps(::Org::BouncyCastle::Asn1::X509::PolicyQualifierID* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*, "IdQtCps", ::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*>(
      std::forward<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*>(value));
}
inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierID* Org::BouncyCastle::Asn1::X509::PolicyQualifierID::getStaticF_IdQtCps() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*, "IdQtCps", ::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*>();
}
inline void Org::BouncyCastle::Asn1::X509::PolicyQualifierID::setStaticF_IdQtUnotice(::Org::BouncyCastle::Asn1::X509::PolicyQualifierID* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*, "IdQtUnotice", ::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*>(
      std::forward<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*>(value));
}
inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierID* Org::BouncyCastle::Asn1::X509::PolicyQualifierID::getStaticF_IdQtUnotice() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*, "IdQtUnotice", ::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*>();
}
inline void Org::BouncyCastle::Asn1::X509::PolicyQualifierID::_ctor(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierID* Org::BouncyCastle::Asn1::X509::PolicyQualifierID::New_ctor(::StringW id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::PolicyQualifierID*>(id));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::PolicyQualifierID::PolicyQualifierID() {}
