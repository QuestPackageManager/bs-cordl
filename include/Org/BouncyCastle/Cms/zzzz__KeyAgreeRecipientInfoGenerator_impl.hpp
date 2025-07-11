#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/KeyAgreeRecipientInfoGenerator.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInfoGenerator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__KeyAgreeRecipientInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorPublicKey_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__RecipientInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedHelper_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::*)()>(
    &::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2678228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator.set_KeyAgreementOID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_KeyAgreementOID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2678230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "set_KeyAgreementOID", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator.set_KeyEncryptionOID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_KeyEncryptionOID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2678238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "set_KeyEncryptionOID", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator.set_RecipientCerts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::*)(::System::Collections::ICollection*)>(
    &::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_RecipientCerts)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2678240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "set_RecipientCerts", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator.set_SenderKeyPair
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*)>(&::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_SenderKeyPair)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26782ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "set_SenderKeyPair", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::RecipientInfo* (
    ::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::*)(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::Generate)> {
  constexpr static std::size_t size = 0x114c;
  constexpr static std::size_t addrs = 0x26782b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "Generate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator.CreateOriginatorPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* (*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::CreateOriginatorPublicKey)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2679400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "CreateOriginatorPublicKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__cordl_internal_get_keyAgreementOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyAgreementOID;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__cordl_internal_get_keyAgreementOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyAgreementOID;
}
constexpr void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__cordl_internal_set_keyAgreementOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyAgreementOID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__cordl_internal_get_keyEncryptionOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyEncryptionOID;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__cordl_internal_get_keyEncryptionOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyEncryptionOID;
}
constexpr void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__cordl_internal_set_keyEncryptionOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyEncryptionOID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__cordl_internal_get_recipientCerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientCerts;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__cordl_internal_get_recipientCerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientCerts;
}
constexpr void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__cordl_internal_set_recipientCerts(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___recipientCerts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*& Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__cordl_internal_get_senderKeyPair() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___senderKeyPair;
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* const& Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__cordl_internal_get_senderKeyPair() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___senderKeyPair;
}
constexpr void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::__cordl_internal_set_senderKeyPair(::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* value) {
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
inline void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_KeyAgreementOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "set_KeyAgreementOID", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_KeyEncryptionOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "set_KeyEncryptionOID", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_RecipientCerts(::System::Collections::ICollection* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "set_RecipientCerts", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::set_SenderKeyPair(::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "set_SenderKeyPair", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::Generate(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* contentEncryptionKey,
                                                                                                                       ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "Generate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*, false>(this, ___internal_method, contentEncryptionKey, random);
}
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey*
Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::CreateOriginatorPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>::get(), "CreateOriginatorPublicKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey*, false>(nullptr, ___internal_method, publicKey);
}
inline ::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator* Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Cms::RecipientInfoGenerator"
constexpr Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::operator ::Org::BouncyCastle::Cms::RecipientInfoGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::RecipientInfoGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::RecipientInfoGenerator"
constexpr ::Org::BouncyCastle::Cms::RecipientInfoGenerator* Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::i___Org__BouncyCastle__Cms__RecipientInfoGenerator() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::RecipientInfoGenerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator::KeyAgreeRecipientInfoGenerator() {}
