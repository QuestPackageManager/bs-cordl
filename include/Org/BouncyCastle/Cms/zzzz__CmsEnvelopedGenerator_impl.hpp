#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\CmsEnvelopedGenerator.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)()>(&::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x36a4cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x36a4d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.get_UnprotectedAttributeGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)()>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::get_UnprotectedAttributeGenerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a4da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(), { "get_UnprotectedAttributeGenerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.set_UnprotectedAttributeGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::set_UnprotectedAttributeGenerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a4da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(),
                                                             { "set_UnprotectedAttributeGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddKeyTransRecipient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyTransRecipient)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x36a4db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(),
                                                                                           { "AddKeyTransRecipient", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddKeyTransRecipient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyTransRecipient)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x36a4e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(),
                                                { "AddKeyTransRecipient", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddKekRecipient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(::StringW, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKekRecipient)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x36a4fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(),
                         { "AddKekRecipient", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddKekRecipient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(
    ::StringW, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::Org::BouncyCastle::Asn1::Cms::KekIdentifier*)>(&::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKekRecipient)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x36a504c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(),
                                                                                           { "AddKekRecipient",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::KekIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddPasswordRecipient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(::Org::BouncyCastle::Cms::CmsPbeKey*, ::StringW)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddPasswordRecipient)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x36a514c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(),
                                                             { "AddPasswordRecipient", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsPbeKey*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddKeyAgreementRecipient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(
    ::StringW, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::X509::X509Certificate*, ::StringW)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyAgreementRecipient)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x36a5304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(),
                                                                                           { "AddKeyAgreementRecipient",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddKeyAgreementRecipients
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(
    ::StringW, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::System::Collections::ICollection*, ::StringW)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyAgreementRecipients)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x36a542c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(),
                                                                                           { "AddKeyAgreementRecipients",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                                                               ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.AddRecipientInfoGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(::Org::BouncyCastle::Cms::RecipientInfoGenerator*)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddRecipientInfoGenerator)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x36a566c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(),
                                                             { "AddRecipientInfoGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::RecipientInfoGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.GetAlgorithmIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (
    ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(::StringW, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::Org::BouncyCastle::Asn1::Asn1Encodable*,
                                                        ::by_ref<::Org::BouncyCastle::Crypto::ICipherParameters*>)>(&::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::GetAlgorithmIdentifier)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x36a5724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator.GenerateAsn1Parameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::*)(::StringW, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::GenerateAsn1Parameters)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x36a5858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(), 5 }));
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
  this->___recipientInfoGenerators = value;
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
  this->___rand = value;
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
  this->___unprotectedAttributeGenerator = value;
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_rc2Table(::ArrayW<int16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int16_t>, "rc2Table", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(std::forward<::ArrayW<int16_t>>(value));
}
inline ::ArrayW<int16_t> Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_rc2Table() {
  return ::cordl_internals::getStaticField<::ArrayW<int16_t>, "rc2Table", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_DesEde3Cbc(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DesEde3Cbc", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_DesEde3Cbc() {
  return ::cordl_internals::getStaticField<::StringW, "DesEde3Cbc", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_RC2Cbc(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "RC2Cbc", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_RC2Cbc() {
  return ::cordl_internals::getStaticField<::StringW, "RC2Cbc", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Aes128Cbc(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Aes128Cbc", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Aes128Cbc() {
  return ::cordl_internals::getStaticField<::StringW, "Aes128Cbc", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Aes192Cbc(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Aes192Cbc", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Aes192Cbc() {
  return ::cordl_internals::getStaticField<::StringW, "Aes192Cbc", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Aes256Cbc(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Aes256Cbc", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Aes256Cbc() {
  return ::cordl_internals::getStaticField<::StringW, "Aes256Cbc", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Camellia128Cbc(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Camellia128Cbc", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Camellia128Cbc() {
  return ::cordl_internals::getStaticField<::StringW, "Camellia128Cbc", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Camellia192Cbc(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Camellia192Cbc", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Camellia192Cbc() {
  return ::cordl_internals::getStaticField<::StringW, "Camellia192Cbc", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Camellia256Cbc(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Camellia256Cbc", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Camellia256Cbc() {
  return ::cordl_internals::getStaticField<::StringW, "Camellia256Cbc", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_SeedCbc(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "SeedCbc", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_SeedCbc() {
  return ::cordl_internals::getStaticField<::StringW, "SeedCbc", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_DesEde3Wrap(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DesEde3Wrap", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_DesEde3Wrap() {
  return ::cordl_internals::getStaticField<::StringW, "DesEde3Wrap", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Aes128Wrap(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Aes128Wrap", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Aes128Wrap() {
  return ::cordl_internals::getStaticField<::StringW, "Aes128Wrap", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Aes192Wrap(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Aes192Wrap", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Aes192Wrap() {
  return ::cordl_internals::getStaticField<::StringW, "Aes192Wrap", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Aes256Wrap(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Aes256Wrap", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Aes256Wrap() {
  return ::cordl_internals::getStaticField<::StringW, "Aes256Wrap", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Camellia128Wrap(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Camellia128Wrap", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Camellia128Wrap() {
  return ::cordl_internals::getStaticField<::StringW, "Camellia128Wrap", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Camellia192Wrap(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Camellia192Wrap", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Camellia192Wrap() {
  return ::cordl_internals::getStaticField<::StringW, "Camellia192Wrap", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_Camellia256Wrap(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Camellia256Wrap", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_Camellia256Wrap() {
  return ::cordl_internals::getStaticField<::StringW, "Camellia256Wrap", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_SeedWrap(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "SeedWrap", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_SeedWrap() {
  return ::cordl_internals::getStaticField<::StringW, "SeedWrap", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_ECDHSha1Kdf(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ECDHSha1Kdf", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_ECDHSha1Kdf() {
  return ::cordl_internals::getStaticField<::StringW, "ECDHSha1Kdf", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::setStaticF_ECMqvSha1Kdf(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ECMqvSha1Kdf", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedGenerator::getStaticF_ECMqvSha1Kdf() {
  return ::cordl_internals::getStaticField<::StringW, "ECMqvSha1Kdf", ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rand);
}
inline ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* Org::BouncyCastle::Cms::CmsEnvelopedGenerator::get_UnprotectedAttributeGenerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(), { "get_UnprotectedAttributeGenerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::set_UnprotectedAttributeGenerator(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(),
                                                           { "set_UnprotectedAttributeGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyTransRecipient(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(),
                                                                                         { "AddKeyTransRecipient", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cert);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyTransRecipient(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey, ::ArrayW<uint8_t> subKeyId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(),
                                              { "AddKeyTransRecipient", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pubKey, subKeyId);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKekRecipient(::StringW keyAlgorithm, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, ::ArrayW<uint8_t> keyIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(),
                          { "AddKekRecipient", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyAlgorithm, key, keyIdentifier);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKekRecipient(::StringW keyAlgorithm, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key,
                                                                           ::Org::BouncyCastle::Asn1::Cms::KekIdentifier* kekIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(),
                                                                                         { "AddKekRecipient",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::KekIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyAlgorithm, key, kekIdentifier);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddPasswordRecipient(::Org::BouncyCastle::Cms::CmsPbeKey* pbeKey, ::StringW kekAlgorithmOid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(),
                                                           { "AddPasswordRecipient", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsPbeKey*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pbeKey, kekAlgorithmOid);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyAgreementRecipient(::StringW agreementAlgorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* senderPrivateKey,
                                                                                    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* senderPublicKey,
                                                                                    ::Org::BouncyCastle::X509::X509Certificate* recipientCert, ::StringW cekWrapAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(),
                                                                                         { "AddKeyAgreementRecipient",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agreementAlgorithm, senderPrivateKey, senderPublicKey, recipientCert, cekWrapAlgorithm);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddKeyAgreementRecipients(::StringW agreementAlgorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* senderPrivateKey,
                                                                                     ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* senderPublicKey,
                                                                                     ::System::Collections::ICollection* recipientCerts, ::StringW cekWrapAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(),
                                                                                         { "AddKeyAgreementRecipients",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                                                             ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agreementAlgorithm, senderPrivateKey, senderPublicKey, recipientCerts, cekWrapAlgorithm);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedGenerator::AddRecipientInfoGenerator(::Org::BouncyCastle::Cms::RecipientInfoGenerator* recipientInfoGenerator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(),
                                                           { "AddRecipientInfoGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::RecipientInfoGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recipientInfoGenerator);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*
Org::BouncyCastle::Cms::CmsEnvelopedGenerator::GetAlgorithmIdentifier(::StringW encryptionOid, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* encKey,
                                                                      ::Org::BouncyCastle::Asn1::Asn1Encodable* asn1Params,
                                                                      ::by_ref<::Org::BouncyCastle::Crypto::ICipherParameters*> cipherParameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method, encryptionOid, encKey, asn1Params, cipherParameters);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Cms::CmsEnvelopedGenerator::GenerateAsn1Parameters(::StringW encryptionOid, ::ArrayW<uint8_t> encKeyBytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*>(this, ___internal_method, encryptionOid, encKeyBytes);
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator* Org::BouncyCastle::Cms::CmsEnvelopedGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>());
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator* Org::BouncyCastle::Cms::CmsEnvelopedGenerator::New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(rand));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator::CmsEnvelopedGenerator() {}
