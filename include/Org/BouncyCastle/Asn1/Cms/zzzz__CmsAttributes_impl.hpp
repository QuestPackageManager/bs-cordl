#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cms\CmsAttributes.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__CmsAttributes_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::CmsAttributes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::CmsAttributes::*)()>(&::Org::BouncyCastle::Asn1::Cms::CmsAttributes::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3357da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::CmsAttributes*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Cms::CmsAttributes::setStaticF_ContentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ContentType", ::Org::BouncyCastle::Asn1::Cms::CmsAttributes*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Cms::CmsAttributes::getStaticF_ContentType() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ContentType", ::Org::BouncyCastle::Asn1::Cms::CmsAttributes*>();
}
inline void Org::BouncyCastle::Asn1::Cms::CmsAttributes::setStaticF_MessageDigest(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "MessageDigest", ::Org::BouncyCastle::Asn1::Cms::CmsAttributes*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Cms::CmsAttributes::getStaticF_MessageDigest() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "MessageDigest", ::Org::BouncyCastle::Asn1::Cms::CmsAttributes*>();
}
inline void Org::BouncyCastle::Asn1::Cms::CmsAttributes::setStaticF_SigningTime(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SigningTime", ::Org::BouncyCastle::Asn1::Cms::CmsAttributes*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Cms::CmsAttributes::getStaticF_SigningTime() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SigningTime", ::Org::BouncyCastle::Asn1::Cms::CmsAttributes*>();
}
inline void Org::BouncyCastle::Asn1::Cms::CmsAttributes::setStaticF_CounterSignature(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CounterSignature", ::Org::BouncyCastle::Asn1::Cms::CmsAttributes*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Cms::CmsAttributes::getStaticF_CounterSignature() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CounterSignature", ::Org::BouncyCastle::Asn1::Cms::CmsAttributes*>();
}
inline void Org::BouncyCastle::Asn1::Cms::CmsAttributes::setStaticF_ContentHint(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ContentHint", ::Org::BouncyCastle::Asn1::Cms::CmsAttributes*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Cms::CmsAttributes::getStaticF_ContentHint() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ContentHint", ::Org::BouncyCastle::Asn1::Cms::CmsAttributes*>();
}
inline void Org::BouncyCastle::Asn1::Cms::CmsAttributes::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::CmsAttributes*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::CmsAttributes* Org::BouncyCastle::Asn1::Cms::CmsAttributes::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::CmsAttributes*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::CmsAttributes::CmsAttributes() {}
