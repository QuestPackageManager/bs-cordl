#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__KeyTransRecipientInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedHelper_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__TbsCertificateStructure_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectPublicKeyInfo_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__IssuerAndSerialNumber_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__RecipientInfo_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::*)()>(
    &::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1204a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::*)(
    ::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*)>(&::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1204a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1204a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator.set_RecipientCert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::set_RecipientCert)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1204adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>::get(), "set_RecipientCert", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator.set_RecipientPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::set_RecipientPublicKey)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1204b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>::get(), "set_RecipientPublicKey", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator.set_SubjectKeyIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::*)(::Org::BouncyCastle::Asn1::Asn1OctetString*)>(
    &::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::set_SubjectKeyIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1204c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>::get(), "set_SubjectKeyIdentifier", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1OctetString*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::RecipientInfo* (
    ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::*)(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::Generate)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1204c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator.get_AlgorithmDetails
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (
    ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::*)()>(&::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1204dd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator.GenerateWrappedKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::*)(
    ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)>(&::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::GenerateWrappedKey)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x1204df4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>::get(), 6));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Cms::RecipientInfoGenerator"
constexpr Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::operator ::Org::BouncyCastle::Cms::RecipientInfoGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::RecipientInfoGenerator*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__get_recipientTbsCert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientTbsCert;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*> const& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__get_recipientTbsCert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientTbsCert;
}
constexpr void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__set_recipientTbsCert(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___recipientTbsCert)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__get_recipientPublicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientPublicKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__get_recipientPublicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientPublicKey;
}
constexpr void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__set_recipientPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___recipientPublicKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__get_subjectKeyIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectKeyIdentifier;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__get_subjectKeyIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectKeyIdentifier;
}
constexpr void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__set_subjectKeyIdentifier(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subjectKeyIdentifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__get_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*> const& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__get_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__set_info(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___info)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__get_issuerAndSerialNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerAndSerialNumber;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*> const&
Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__get_issuerAndSerialNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerAndSerialNumber;
}
constexpr void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__set_issuerAndSerialNumber(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___issuerAndSerialNumber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::__set_random(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___random)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::setStaticF_Helper(::Org::BouncyCastle::Cms::CmsEnvelopedHelper* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*, "Helper",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>::get>(
      std::forward<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(value));
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedHelper* Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::getStaticF_Helper() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*, "Helper",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>::get>();
}
inline ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator* Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>());
}
inline void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*
Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::New_ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* issuerAndSerialNumber) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(issuerAndSerialNumber));
}
inline void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::_ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* issuerAndSerialNumber) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, issuerAndSerialNumber);
}
inline ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator* Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyIdentifier) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>(subjectKeyIdentifier));
}
inline void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subjectKeyIdentifier);
}
inline void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::set_RecipientCert(::Org::BouncyCastle::X509::X509Certificate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>::get(), "set_RecipientCert", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::set_RecipientPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>::get(), "set_RecipientPublicKey", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::set_SubjectKeyIdentifier(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>::get(), "set_SubjectKeyIdentifier", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1OctetString*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::Generate(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* contentEncryptionKey,
                                                                                                                       ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*, false>(this, ___internal_method, contentEncryptionKey, random);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::get_AlgorithmDetails() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>::get(),
                                                                             "get_AlgorithmDetails", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::GenerateWrappedKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* contentEncryptionKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator*>::get(), "GenerateWrappedKey", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, contentEncryptionKey);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator::KeyTransRecipientInfoGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
