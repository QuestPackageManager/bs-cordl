#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/PasswordRecipientInformation.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__PasswordRecipientInformation_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__PasswordRecipientInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSecureReadable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsTypedStream_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::PasswordRecipientInformation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::PasswordRecipientInformation::*)(
    ::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo*, ::Org::BouncyCastle::Cms::CmsSecureReadable*)>(&::Org::BouncyCastle::Cms::PasswordRecipientInformation::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x36ad05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::PasswordRecipientInformation*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSecureReadable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::PasswordRecipientInformation.get_KeyDerivationAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::PasswordRecipientInformation::*)()>(
    &::Org::BouncyCastle::Cms::PasswordRecipientInformation::get_KeyDerivationAlgorithm)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x36d0658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::PasswordRecipientInformation*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Cms::PasswordRecipientInformation*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::PasswordRecipientInformation.GetContentStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsTypedStream* (
    ::Org::BouncyCastle::Cms::PasswordRecipientInformation::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(&::Org::BouncyCastle::Cms::PasswordRecipientInformation::GetContentStream)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x36d0670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::PasswordRecipientInformation*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Cms::PasswordRecipientInformation*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo*& Org::BouncyCastle::Cms::PasswordRecipientInformation::__cordl_internal_get_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* const& Org::BouncyCastle::Cms::PasswordRecipientInformation::__cordl_internal_get_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr void Org::BouncyCastle::Cms::PasswordRecipientInformation::__cordl_internal_set_info(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___info = value;
}
inline void Org::BouncyCastle::Cms::PasswordRecipientInformation::_ctor(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* info, ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::PasswordRecipientInformation*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSecureReadable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, secureReadable);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::PasswordRecipientInformation::get_KeyDerivationAlgorithm() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::PasswordRecipientInformation*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsTypedStream* Org::BouncyCastle::Cms::PasswordRecipientInformation::GetContentStream(::Org::BouncyCastle::Crypto::ICipherParameters* key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::PasswordRecipientInformation*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsTypedStream*>(this, ___internal_method, key);
}
inline ::Org::BouncyCastle::Cms::PasswordRecipientInformation* Org::BouncyCastle::Cms::PasswordRecipientInformation::New_ctor(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* info,
                                                                                                                              ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::PasswordRecipientInformation*>(info, secureReadable));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::PasswordRecipientInformation::PasswordRecipientInformation() {}
