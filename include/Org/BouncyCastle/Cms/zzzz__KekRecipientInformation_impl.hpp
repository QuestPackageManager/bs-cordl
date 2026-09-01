#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\KekRecipientInformation.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__KekRecipientInformation_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__KekRecipientInfo_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSecureReadable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsTypedStream_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KekRecipientInformation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::KekRecipientInformation::*)(
    ::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo*, ::Org::BouncyCastle::Cms::CmsSecureReadable*)>(&::Org::BouncyCastle::Cms::KekRecipientInformation::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x36aee08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KekRecipientInformation*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSecureReadable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KekRecipientInformation.GetContentStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsTypedStream* (
    ::Org::BouncyCastle::Cms::KekRecipientInformation::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(&::Org::BouncyCastle::Cms::KekRecipientInformation::GetContentStream)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x36cd824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KekRecipientInformation*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::KekRecipientInformation*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo*& Org::BouncyCastle::Cms::KekRecipientInformation::__cordl_internal_get_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* const& Org::BouncyCastle::Cms::KekRecipientInformation::__cordl_internal_get_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr void Org::BouncyCastle::Cms::KekRecipientInformation::__cordl_internal_set_info(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___info = value;
}
inline void Org::BouncyCastle::Cms::KekRecipientInformation::_ctor(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* info, ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KekRecipientInformation*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSecureReadable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, secureReadable);
}
inline ::Org::BouncyCastle::Cms::CmsTypedStream* Org::BouncyCastle::Cms::KekRecipientInformation::GetContentStream(::Org::BouncyCastle::Crypto::ICipherParameters* key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::KekRecipientInformation*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsTypedStream*>(this, ___internal_method, key);
}
inline ::Org::BouncyCastle::Cms::KekRecipientInformation* Org::BouncyCastle::Cms::KekRecipientInformation::New_ctor(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* info,
                                                                                                                    ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::KekRecipientInformation*>(info, secureReadable));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::KekRecipientInformation::KekRecipientInformation() {}
