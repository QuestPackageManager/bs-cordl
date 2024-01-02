#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__KeyAgreeRecipientInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__RecipientInfo_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedHelper_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorPublicKey_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::*)()>(
    &::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1202a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator.set_KeyAgreementOID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_KeyAgreementOID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1202a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "set_KeyAgreementOID", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator.set_KeyEncryptionOID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_KeyEncryptionOID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1202a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "set_KeyEncryptionOID", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator.set_RecipientCerts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::*)(::System::Collections::ICollection*)>(
    &::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_RecipientCerts)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1202a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "set_RecipientCerts", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator.set_SenderKeyPair
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*)>(&::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_SenderKeyPair)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1202af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "set_SenderKeyPair", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::RecipientInfo* (
    ::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::*)(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::Generate)> {
  constexpr static std::size_t size = 0x11f8;
  constexpr static std::size_t addrs = 0x1202b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator.CreateOriginatorPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* (*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::CreateOriginatorPublicKey)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1203cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "CreateOriginatorPublicKey", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Cms::RecipientInfoGenerator"
constexpr Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::operator ::Org::BouncyCastle::Cms::RecipientInfoGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::RecipientInfoGenerator*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__get_keyAgreementOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyAgreementOID;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__get_keyAgreementOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyAgreementOID;
}
constexpr void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__set_keyAgreementOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyAgreementOID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__get_keyEncryptionOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyEncryptionOID;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__get_keyEncryptionOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyEncryptionOID;
}
constexpr void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__set_keyEncryptionOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyEncryptionOID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__get_recipientCerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientCerts;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__get_recipientCerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientCerts;
}
constexpr void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__set_recipientCerts(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___recipientCerts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*& Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__get_senderKeyPair() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___senderKeyPair;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*> const& Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__get_senderKeyPair() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___senderKeyPair;
}
constexpr void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__set_senderKeyPair(::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___senderKeyPair)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::setStaticF_Helper(::Org::BouncyCastle::Cms::CmsEnvelopedHelper* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*, "Helper",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get>(
      std::forward<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(value));
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedHelper* Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::getStaticF_Helper() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*, "Helper",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get>();
}
inline ::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator* Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>());
}
inline void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_KeyAgreementOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "set_KeyAgreementOID", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_KeyEncryptionOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "set_KeyEncryptionOID", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_RecipientCerts(::System::Collections::ICollection* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "set_RecipientCerts",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_SenderKeyPair(::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "set_SenderKeyPair", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::Generate(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* contentEncryptionKey,
                                                                                                                       ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*, false>(this, ___internal_method, contentEncryptionKey, random);
}
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey*
Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::CreateOriginatorPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "CreateOriginatorPublicKey", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey*, false>(nullptr, ___internal_method, publicKey);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::KeyAgreeRecipientInfoGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
