#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsAuthEnvelopedGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthEnvelopedGenerator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator::*)()>(&::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36a685c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator::setStaticF_Aes128Ccm(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Aes128Ccm", ::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator::getStaticF_Aes128Ccm() {
  return ::cordl_internals::getStaticField<::StringW, "Aes128Ccm", ::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator::setStaticF_Aes192Ccm(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Aes192Ccm", ::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator::getStaticF_Aes192Ccm() {
  return ::cordl_internals::getStaticField<::StringW, "Aes192Ccm", ::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator::setStaticF_Aes256Ccm(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Aes256Ccm", ::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator::getStaticF_Aes256Ccm() {
  return ::cordl_internals::getStaticField<::StringW, "Aes256Ccm", ::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator::setStaticF_Aes128Gcm(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Aes128Gcm", ::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator::getStaticF_Aes128Gcm() {
  return ::cordl_internals::getStaticField<::StringW, "Aes128Gcm", ::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator::setStaticF_Aes192Gcm(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Aes192Gcm", ::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator::getStaticF_Aes192Gcm() {
  return ::cordl_internals::getStaticField<::StringW, "Aes192Gcm", ::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator::setStaticF_Aes256Gcm(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Aes256Gcm", ::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator::getStaticF_Aes256Gcm() {
  return ::cordl_internals::getStaticField<::StringW, "Aes256Gcm", ::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator* Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsAuthEnvelopedGenerator::CmsAuthEnvelopedGenerator() {}
