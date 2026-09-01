#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\CmsSignedGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignerIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformationStore_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformation_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)()>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x36b3a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x36b3aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.GetBaseParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (
    ::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::GetBaseParameters)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x36b3b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.GetAttributeSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::GetAttributeSet)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x36b3dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.AddCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::X509::Store::IX509Store*)>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::AddCertificates)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x36b3e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(),
                                                                                           { "AddCertificates", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.AddCrls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::X509::Store::IX509Store*)>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::AddCrls)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x36b3e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), { "AddCrls", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.AddAttributeCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::X509::Store::IX509Store*)>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::AddAttributeCertificates)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x36b3e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(),
                                                                                           { "AddAttributeCertificates", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.AddSigners
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::Cms::SignerInformationStore*)>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::AddSigners)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x36b4428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(),
                                                                                           { "AddSigners", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::SignerInformationStore*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.GetGeneratedDigests
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::GetGeneratedDigests)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x36b47ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), { "GetGeneratedDigests", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.get_UseDerForCerts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)()>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::get_UseDerForCerts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36b484c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), { "get_UseDerForCerts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.set_UseDerForCerts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(bool)>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::set_UseDerForCerts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36b4854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), { "set_UseDerForCerts", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.get_UseDerForCrls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)()>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::get_UseDerForCrls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36b485c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), { "get_UseDerForCrls", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.set_UseDerForCrls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(bool)>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::set_UseDerForCrls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36b4864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), { "set_UseDerForCrls", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.AddSignerCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::Cms::SignerInformation*)>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::AddSignerCallback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36b486c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.GetSignerIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* (*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::GetSignerIdentifier)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x36b4870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(),
                                                                                           { "GetSignerIdentifier", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.GetSignerIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::GetSignerIdentifier)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x36b4964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), { "GetSignerIdentifier", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cms::CmsSignedGenerator::__cordl_internal_get__certs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certs;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Cms::CmsSignedGenerator::__cordl_internal_get__certs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certs;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedGenerator::__cordl_internal_set__certs(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____certs = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cms::CmsSignedGenerator::__cordl_internal_get__crls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crls;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Cms::CmsSignedGenerator::__cordl_internal_get__crls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crls;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedGenerator::__cordl_internal_set__crls(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____crls = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cms::CmsSignedGenerator::__cordl_internal_get__signers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signers;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Cms::CmsSignedGenerator::__cordl_internal_get__signers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signers;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedGenerator::__cordl_internal_set__signers(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____signers = value;
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Cms::CmsSignedGenerator::__cordl_internal_get__digests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____digests;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Cms::CmsSignedGenerator::__cordl_internal_get__digests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____digests;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedGenerator::__cordl_internal_set__digests(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____digests = value;
}
constexpr bool& Org::BouncyCastle::Cms::CmsSignedGenerator::__cordl_internal_get__useDerForCerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useDerForCerts;
}
constexpr bool const& Org::BouncyCastle::Cms::CmsSignedGenerator::__cordl_internal_get__useDerForCerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useDerForCerts;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedGenerator::__cordl_internal_set__useDerForCerts(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useDerForCerts = value;
}
constexpr bool& Org::BouncyCastle::Cms::CmsSignedGenerator::__cordl_internal_get__useDerForCrls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useDerForCrls;
}
constexpr bool const& Org::BouncyCastle::Cms::CmsSignedGenerator::__cordl_internal_get__useDerForCrls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useDerForCrls;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedGenerator::__cordl_internal_set__useDerForCrls(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useDerForCrls = value;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Cms::CmsSignedGenerator::__cordl_internal_get_rand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rand;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Cms::CmsSignedGenerator::__cordl_internal_get_rand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rand;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedGenerator::__cordl_internal_set_rand(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rand = value;
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_Data(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Data", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_Data() {
  return ::cordl_internals::getStaticField<::StringW, "Data", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_DigestSha1(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DigestSha1", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_DigestSha1() {
  return ::cordl_internals::getStaticField<::StringW, "DigestSha1", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_DigestSha224(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DigestSha224", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_DigestSha224() {
  return ::cordl_internals::getStaticField<::StringW, "DigestSha224", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_DigestSha256(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DigestSha256", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_DigestSha256() {
  return ::cordl_internals::getStaticField<::StringW, "DigestSha256", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_DigestSha384(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DigestSha384", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_DigestSha384() {
  return ::cordl_internals::getStaticField<::StringW, "DigestSha384", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_DigestSha512(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DigestSha512", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_DigestSha512() {
  return ::cordl_internals::getStaticField<::StringW, "DigestSha512", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_DigestMD5(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DigestMD5", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_DigestMD5() {
  return ::cordl_internals::getStaticField<::StringW, "DigestMD5", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_DigestGost3411(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DigestGost3411", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_DigestGost3411() {
  return ::cordl_internals::getStaticField<::StringW, "DigestGost3411", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_DigestRipeMD128(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DigestRipeMD128", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_DigestRipeMD128() {
  return ::cordl_internals::getStaticField<::StringW, "DigestRipeMD128", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_DigestRipeMD160(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DigestRipeMD160", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_DigestRipeMD160() {
  return ::cordl_internals::getStaticField<::StringW, "DigestRipeMD160", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_DigestRipeMD256(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DigestRipeMD256", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_DigestRipeMD256() {
  return ::cordl_internals::getStaticField<::StringW, "DigestRipeMD256", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_EncryptionRsa(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EncryptionRsa", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_EncryptionRsa() {
  return ::cordl_internals::getStaticField<::StringW, "EncryptionRsa", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_EncryptionDsa(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EncryptionDsa", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_EncryptionDsa() {
  return ::cordl_internals::getStaticField<::StringW, "EncryptionDsa", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_EncryptionECDsa(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EncryptionECDsa", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_EncryptionECDsa() {
  return ::cordl_internals::getStaticField<::StringW, "EncryptionECDsa", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_EncryptionRsaPss(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EncryptionRsaPss", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_EncryptionRsaPss() {
  return ::cordl_internals::getStaticField<::StringW, "EncryptionRsaPss", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_EncryptionGost3410(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EncryptionGost3410", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_EncryptionGost3410() {
  return ::cordl_internals::getStaticField<::StringW, "EncryptionGost3410", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_EncryptionECGost3410(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EncryptionECGost3410", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_EncryptionECGost3410() {
  return ::cordl_internals::getStaticField<::StringW, "EncryptionECGost3410", ::Org::BouncyCastle::Cms::CmsSignedGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rand);
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::CmsSignedGenerator::GetBaseParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType,
                                                                                                         ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digAlgId, ::ArrayW<uint8_t> hash) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method, contentType, digAlgId, hash);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Cms::CmsSignedGenerator::GetAttributeSet(::Org::BouncyCastle::Asn1::Cms::AttributeTable* attr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*>(this, ___internal_method, attr);
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::AddCertificates(::Org::BouncyCastle::X509::Store::IX509Store* certStore) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(),
                                                                                         { "AddCertificates", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certStore);
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::AddCrls(::Org::BouncyCastle::X509::Store::IX509Store* crlStore) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), { "AddCrls", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crlStore);
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::AddAttributeCertificates(::Org::BouncyCastle::X509::Store::IX509Store* store) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(),
                                                                                         { "AddAttributeCertificates", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, store);
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::AddSigners(::Org::BouncyCastle::Cms::SignerInformationStore* signerStore) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(),
                                                                                         { "AddSigners", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::SignerInformationStore*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signerStore);
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::CmsSignedGenerator::GetGeneratedDigests() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), { "GetGeneratedDigests", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Cms::CmsSignedGenerator::get_UseDerForCerts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), { "get_UseDerForCerts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::set_UseDerForCerts(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), { "set_UseDerForCerts", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::Cms::CmsSignedGenerator::get_UseDerForCrls() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), { "get_UseDerForCrls", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::set_UseDerForCrls(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), { "set_UseDerForCrls", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::AddSignerCallback(::Org::BouncyCastle::Cms::SignerInformation* si) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, si);
}
inline ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* Org::BouncyCastle::Cms::CmsSignedGenerator::GetSignerIdentifier(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(),
                                                                                         { "GetSignerIdentifier", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(nullptr, ___internal_method, cert);
}
inline ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* Org::BouncyCastle::Cms::CmsSignedGenerator::GetSignerIdentifier(::ArrayW<uint8_t> subjectKeyIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), { "GetSignerIdentifier", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(nullptr, ___internal_method, subjectKeyIdentifier);
}
inline ::Org::BouncyCastle::Cms::CmsSignedGenerator* Org::BouncyCastle::Cms::CmsSignedGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsSignedGenerator*>());
}
inline ::Org::BouncyCastle::Cms::CmsSignedGenerator* Org::BouncyCastle::Cms::CmsSignedGenerator::New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(rand));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsSignedGenerator::CmsSignedGenerator() {}
