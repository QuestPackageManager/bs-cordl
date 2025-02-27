#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsEnvelopedGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__KekIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAttributeTableGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsPbeKey_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)()>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2653710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x265376c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.get_UnprotectedAttributeGenerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)()>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::get_UnprotectedAttributeGenerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26537e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), "get_UnprotectedAttributeGenerator",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.set_UnprotectedAttributeGenerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::set_UnprotectedAttributeGenerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26537f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), "set_UnprotectedAttributeGenerator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddKeyTransRecipient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyTransRecipient)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x26537f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), "AddKeyTransRecipient", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddKeyTransRecipient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyTransRecipient)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x26538e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), "AddKeyTransRecipient", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddKekRecipient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(
    ::StringW, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKekRecipient)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2653a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), "AddKekRecipient", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddKekRecipient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(
    ::StringW, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::Org::BouncyCastle::Asn1::Cms::KekIdentifier*)>(&::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKekRecipient)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2653a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), "AddKekRecipient", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::KekIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddPasswordRecipient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(::Org::BouncyCastle::Cms::CmsPbeKey*, ::StringW)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddPasswordRecipient)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2653b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), "AddPasswordRecipient", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsPbeKey*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddKeyAgreementRecipient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(
    ::StringW, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::X509::X509Certificate*, ::StringW)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyAgreementRecipient)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2653d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), "AddKeyAgreementRecipient", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddKeyAgreementRecipients
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(
    ::StringW, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::System::Collections::ICollection*, ::StringW)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyAgreementRecipients)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2653e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), "AddKeyAgreementRecipients", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddRecipientInfoGenerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(::Org::BouncyCastle::Cms::RecipientInfoGenerator*)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddRecipientInfoGenerator)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x26540b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), "AddRecipientInfoGenerator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::RecipientInfoGenerator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.GetAlgorithmIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (
    ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(::StringW, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::Org::BouncyCastle::Asn1::Asn1Encodable*,
                                                        ::ByRef<::Org::BouncyCastle::Crypto::ICipherParameters*>)>(&::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::GetAlgorithmIdentifier)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x265415c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.GenerateAsn1Parameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (
    ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::GenerateAsn1Parameters)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x2654294;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__cordl_internal_get_recipientInfoGenerators() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientInfoGenerators;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__cordl_internal_get_recipientInfoGenerators() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientInfoGenerators;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__cordl_internal_set_recipientInfoGenerators(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___recipientInfoGenerators)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__cordl_internal_get_rand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rand;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__cordl_internal_get_rand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rand;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__cordl_internal_set_rand(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__cordl_internal_get_unprotectedAttributeGenerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unprotectedAttributeGenerator;
}
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* const& Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__cordl_internal_get_unprotectedAttributeGenerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unprotectedAttributeGenerator;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::__cordl_internal_set_unprotectedAttributeGenerator(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unprotectedAttributeGenerator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_rc2Table(::ArrayW<int16_t, ::Array<int16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int16_t, ::Array<int16_t>*>, "rc2Table", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>(
      std::forward<::ArrayW<int16_t, ::Array<int16_t>*>>(value));
}
inline ::ArrayW<int16_t, ::Array<int16_t>*> Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_rc2Table() {
  return ::cordl_internals::getStaticField<::ArrayW<int16_t, ::Array<int16_t>*>, "rc2Table",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_DesEde3Cbc(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DesEde3Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_DesEde3Cbc() {
  return ::cordl_internals::getStaticField<::StringW, "DesEde3Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_RC2Cbc(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "RC2Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_RC2Cbc() {
  return ::cordl_internals::getStaticField<::StringW, "RC2Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Aes128Cbc(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Aes128Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Aes128Cbc() {
  return ::cordl_internals::getStaticField<::StringW, "Aes128Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Aes192Cbc(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Aes192Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Aes192Cbc() {
  return ::cordl_internals::getStaticField<::StringW, "Aes192Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Aes256Cbc(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Aes256Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Aes256Cbc() {
  return ::cordl_internals::getStaticField<::StringW, "Aes256Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Camellia128Cbc(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Camellia128Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Camellia128Cbc() {
  return ::cordl_internals::getStaticField<::StringW, "Camellia128Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Camellia192Cbc(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Camellia192Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Camellia192Cbc() {
  return ::cordl_internals::getStaticField<::StringW, "Camellia192Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Camellia256Cbc(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Camellia256Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Camellia256Cbc() {
  return ::cordl_internals::getStaticField<::StringW, "Camellia256Cbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_SeedCbc(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "SeedCbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_SeedCbc() {
  return ::cordl_internals::getStaticField<::StringW, "SeedCbc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_DesEde3Wrap(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DesEde3Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_DesEde3Wrap() {
  return ::cordl_internals::getStaticField<::StringW, "DesEde3Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Aes128Wrap(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Aes128Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Aes128Wrap() {
  return ::cordl_internals::getStaticField<::StringW, "Aes128Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Aes192Wrap(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Aes192Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Aes192Wrap() {
  return ::cordl_internals::getStaticField<::StringW, "Aes192Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Aes256Wrap(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Aes256Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Aes256Wrap() {
  return ::cordl_internals::getStaticField<::StringW, "Aes256Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Camellia128Wrap(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Camellia128Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Camellia128Wrap() {
  return ::cordl_internals::getStaticField<::StringW, "Camellia128Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Camellia192Wrap(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Camellia192Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Camellia192Wrap() {
  return ::cordl_internals::getStaticField<::StringW, "Camellia192Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Camellia256Wrap(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Camellia256Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Camellia256Wrap() {
  return ::cordl_internals::getStaticField<::StringW, "Camellia256Wrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_SeedWrap(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "SeedWrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_SeedWrap() {
  return ::cordl_internals::getStaticField<::StringW, "SeedWrap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_ECDHSha1Kdf(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ECDHSha1Kdf", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_ECDHSha1Kdf() {
  return ::cordl_internals::getStaticField<::StringW, "ECDHSha1Kdf", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_ECMqvSha1Kdf(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ECMqvSha1Kdf", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_ECMqvSha1Kdf() {
  return ::cordl_internals::getStaticField<::StringW, "ECMqvSha1Kdf", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rand);
}
inline ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* Org::BouncyCastle::Cms::CmsEnvelopedGenerator::get_UnprotectedAttributeGenerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), "get_UnprotectedAttributeGenerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::set_UnprotectedAttributeGenerator(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), "set_UnprotectedAttributeGenerator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyTransRecipient(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), "AddKeyTransRecipient", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cert);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyTransRecipient(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subKeyId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), "AddKeyTransRecipient", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pubKey, subKeyId);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKekRecipient(::StringW keyAlgorithm, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key,
                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> keyIdentifier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), "AddKekRecipient", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyAlgorithm, key, keyIdentifier);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKekRecipient(::StringW keyAlgorithm, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key,
                                                                           ::Org::BouncyCastle::Asn1::Cms::KekIdentifier* kekIdentifier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), "AddKekRecipient", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::KekIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyAlgorithm, key, kekIdentifier);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddPasswordRecipient(::Org::BouncyCastle::Cms::CmsPbeKey* pbeKey, ::StringW kekAlgorithmOid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), "AddPasswordRecipient", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsPbeKey*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pbeKey, kekAlgorithmOid);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyAgreementRecipient(::StringW agreementAlgorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* senderPrivateKey,
                                                                                    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* senderPublicKey,
                                                                                    ::Org::BouncyCastle::X509::X509Certificate* recipientCert, ::StringW cekWrapAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), "AddKeyAgreementRecipient", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, agreementAlgorithm, senderPrivateKey, senderPublicKey, recipientCert, cekWrapAlgorithm);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyAgreementRecipients(::StringW agreementAlgorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* senderPrivateKey,
                                                                                     ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* senderPublicKey,
                                                                                     ::System::Collections::ICollection* recipientCerts, ::StringW cekWrapAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), "AddKeyAgreementRecipients", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, agreementAlgorithm, senderPrivateKey, senderPublicKey, recipientCerts, cekWrapAlgorithm);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddRecipientInfoGenerator(::Org::BouncyCastle::Cms::RecipientInfoGenerator* recipientInfoGenerator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), "AddRecipientInfoGenerator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::RecipientInfoGenerator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recipientInfoGenerator);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*
Org::BouncyCastle::Cms::CmsEnvelopedGenerator::GetAlgorithmIdentifier(::StringW encryptionOid, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* encKey,
                                                                      ::Org::BouncyCastle::Asn1::Asn1Encodable* asn1Params, ::ByRef<::Org::BouncyCastle::Crypto::ICipherParameters*> cipherParameters) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method, encryptionOid, encKey, asn1Params, cipherParameters);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Cms::CmsEnvelopedGenerator::GenerateAsn1Parameters(::StringW encryptionOid, ::ArrayW<uint8_t, ::Array<uint8_t>*> encKeyBytes) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*, false>(this, ___internal_method, encryptionOid, encKeyBytes);
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator* Org::BouncyCastle::Cms::CmsEnvelopedGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>());
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator* Org::BouncyCastle::Cms::CmsEnvelopedGenerator::New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(rand));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::CmsEnvelopedGenerator() {}
