#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__CertTemplate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__OptionalValidity_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectPublicKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Crmf::CertTemplate::_ctor)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0xe84ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplate.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertTemplate* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Crmf::CertTemplate::GetInstance)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe84824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), "GetInstance",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplate.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_Version)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xe853dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplate.get_SerialNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_SerialNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe85474;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplate.get_SigningAlg
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_SigningAlg)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe8547c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplate.get_Issuer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (::Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_Issuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe85484;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplate.get_Validity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* (::Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_Validity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe8548c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplate.get_Subject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (::Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_Subject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe85494;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplate.get_PublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* (::Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_PublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe8549c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplate.get_IssuerUID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (::Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_IssuerUID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe854a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplate.get_SubjectUID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (::Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_SubjectUID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe854ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplate.get_Extensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_Extensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe854b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertTemplate.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Crmf::CertTemplate::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::CertTemplate::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe854bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_seq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seq;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_seq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seq;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplate::__set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___seq)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplate::__set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_serialNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialNumber;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_serialNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialNumber;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplate::__set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serialNumber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_signingAlg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signingAlg;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_signingAlg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signingAlg;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplate::__set_signingAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signingAlg)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_issuer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_issuer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplate::__set_issuer(::Org::BouncyCastle::Asn1::X509::X509Name* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___issuer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*& Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_validity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validity;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*> const& Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_validity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validity;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplate::__set_validity(::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___validity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_subject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subject;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_subject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subject;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplate::__set_subject(::Org::BouncyCastle::Asn1::X509::X509Name* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_publicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*> const& Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_publicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplate::__set_publicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___publicKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString*& Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_issuerUID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerUID;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_issuerUID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerUID;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplate::__set_issuerUID(::Org::BouncyCastle::Asn1::DerBitString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___issuerUID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString*& Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_subjectUID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectUID;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_subjectUID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectUID;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplate::__set_subjectUID(::Org::BouncyCastle::Asn1::DerBitString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subjectUID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_extensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> const& Org::BouncyCastle::Asn1::Crmf::CertTemplate::__get_extensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertTemplate::__set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___extensions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* Org::BouncyCastle::Asn1::Crmf::CertTemplate::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>(seq));
}
inline void Org::BouncyCastle::Asn1::Crmf::CertTemplate::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* Org::BouncyCastle::Asn1::Crmf::CertTemplate::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), "GetInstance",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*, false>(nullptr, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_Version() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_SerialNumber() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_SigningAlg() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_Issuer() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_Validity() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_Subject() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_PublicKey() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_IssuerUID() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_SubjectUID() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::Crmf::CertTemplate::get_Extensions() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Crmf::CertTemplate::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplate::CertTemplate() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
