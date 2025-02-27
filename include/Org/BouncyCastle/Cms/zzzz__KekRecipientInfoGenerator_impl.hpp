#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/KekRecipientInfoGenerator.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInfoGenerator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__KekRecipientInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__KekIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__RecipientInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedHelper_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KekRecipientInfoGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::KekRecipientInfoGenerator::*)()>(
    &::Org::BouncyCastle::Cms::KekRecipientInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267b394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KekRecipientInfoGenerator*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KekRecipientInfoGenerator.set_KekIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::KekRecipientInfoGenerator::*)(::Org::BouncyCastle::Asn1::Cms::KekIdentifier*)>(
    &::Org::BouncyCastle::Cms::KekRecipientInfoGenerator::set_KekIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267b39c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KekRecipientInfoGenerator*>::get(), "set_KekIdentifier", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::KekIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KekRecipientInfoGenerator.set_KeyEncryptionKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::KekRecipientInfoGenerator::*)(
    ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)>(&::Org::BouncyCastle::Cms::KekRecipientInfoGenerator::set_KeyEncryptionKey)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x267b3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KekRecipientInfoGenerator*>::get(), "set_KeyEncryptionKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KekRecipientInfoGenerator.set_KeyEncryptionKeyOID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::KekRecipientInfoGenerator::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::KekRecipientInfoGenerator::set_KeyEncryptionKeyOID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267b8c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KekRecipientInfoGenerator*>::get(), "set_KeyEncryptionKeyOID",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KekRecipientInfoGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::RecipientInfo* (
    ::Org::BouncyCastle::Cms::KekRecipientInfoGenerator::*)(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Cms::KekRecipientInfoGenerator::Generate)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x267b8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KekRecipientInfoGenerator*>::get(), "Generate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KekRecipientInfoGenerator.DetermineKeyEncAlg
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (*)(::StringW, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)>(
        &::Org::BouncyCastle::Cms::KekRecipientInfoGenerator::DetermineKeyEncAlg)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x267b418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KekRecipientInfoGenerator*>::get(), "DetermineKeyEncAlg", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& Org::BouncyCastle::Cms::KekRecipientInfoGenerator::__cordl_internal_get_keyEncryptionKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyEncryptionKey;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* const& Org::BouncyCastle::Cms::KekRecipientInfoGenerator::__cordl_internal_get_keyEncryptionKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyEncryptionKey;
}
constexpr void Org::BouncyCastle::Cms::KekRecipientInfoGenerator::__cordl_internal_set_keyEncryptionKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyEncryptionKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Org::BouncyCastle::Cms::KekRecipientInfoGenerator::__cordl_internal_get_keyEncryptionKeyOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyEncryptionKeyOID;
}
constexpr ::StringW const& Org::BouncyCastle::Cms::KekRecipientInfoGenerator::__cordl_internal_get_keyEncryptionKeyOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyEncryptionKeyOID;
}
constexpr void Org::BouncyCastle::Cms::KekRecipientInfoGenerator::__cordl_internal_set_keyEncryptionKeyOID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyEncryptionKeyOID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::KekIdentifier*& Org::BouncyCastle::Cms::KekRecipientInfoGenerator::__cordl_internal_get_kekIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kekIdentifier;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::KekIdentifier* const& Org::BouncyCastle::Cms::KekRecipientInfoGenerator::__cordl_internal_get_kekIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kekIdentifier;
}
constexpr void Org::BouncyCastle::Cms::KekRecipientInfoGenerator::__cordl_internal_set_kekIdentifier(::Org::BouncyCastle::Asn1::Cms::KekIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___kekIdentifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Cms::KekRecipientInfoGenerator::__cordl_internal_get_keyEncryptionAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyEncryptionAlgorithm;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Cms::KekRecipientInfoGenerator::__cordl_internal_get_keyEncryptionAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyEncryptionAlgorithm;
}
constexpr void Org::BouncyCastle::Cms::KekRecipientInfoGenerator::__cordl_internal_set_keyEncryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyEncryptionAlgorithm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Cms::KekRecipientInfoGenerator::setStaticF_Helper(::Org::BouncyCastle::Cms::CmsEnvelopedHelper* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*, "Helper",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KekRecipientInfoGenerator*>::get>(
      std::forward<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(value));
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedHelper* Org::BouncyCastle::Cms::KekRecipientInfoGenerator::getStaticF_Helper() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*, "Helper",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KekRecipientInfoGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::KekRecipientInfoGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KekRecipientInfoGenerator*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::KekRecipientInfoGenerator::set_KekIdentifier(::Org::BouncyCastle::Asn1::Cms::KekIdentifier* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KekRecipientInfoGenerator*>::get(), "set_KekIdentifier", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::KekIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Cms::KekRecipientInfoGenerator::set_KeyEncryptionKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KekRecipientInfoGenerator*>::get(), "set_KeyEncryptionKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Cms::KekRecipientInfoGenerator::set_KeyEncryptionKeyOID(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KekRecipientInfoGenerator*>::get(), "set_KeyEncryptionKeyOID",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Org::BouncyCastle::Cms::KekRecipientInfoGenerator::Generate(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* contentEncryptionKey,
                                                                                                                  ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KekRecipientInfoGenerator*>::get(), "Generate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*, false>(this, ___internal_method, contentEncryptionKey, random);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::KekRecipientInfoGenerator::DetermineKeyEncAlg(::StringW algorithm,
                                                                                                                                   ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::KekRecipientInfoGenerator*>::get(), "DetermineKeyEncAlg", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(nullptr, ___internal_method, algorithm, key);
}
inline ::Org::BouncyCastle::Cms::KekRecipientInfoGenerator* Org::BouncyCastle::Cms::KekRecipientInfoGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::KekRecipientInfoGenerator*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Cms::RecipientInfoGenerator"
constexpr Org::BouncyCastle::Cms::KekRecipientInfoGenerator::operator ::Org::BouncyCastle::Cms::RecipientInfoGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::RecipientInfoGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::RecipientInfoGenerator"
constexpr ::Org::BouncyCastle::Cms::RecipientInfoGenerator* Org::BouncyCastle::Cms::KekRecipientInfoGenerator::i___Org__BouncyCastle__Cms__RecipientInfoGenerator() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::RecipientInfoGenerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::KekRecipientInfoGenerator::KekRecipientInfoGenerator() {}
