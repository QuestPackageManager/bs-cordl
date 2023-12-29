#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Ess/zzzz__SigningCertificate_def.hpp"
#include "Org/BouncyCastle/Asn1/Ess/zzzz__EssCertID_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__PolicyInformation_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::SigningCertificate.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Ess::SigningCertificate* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Ess::SigningCertificate::GetInstance)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xe26780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ess::SigningCertificate*>::get(), "GetInstance",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::SigningCertificate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Ess::SigningCertificate::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Ess::SigningCertificate::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xe26910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ess::SigningCertificate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::SigningCertificate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Ess::SigningCertificate::*)(::Org::BouncyCastle::Asn1::Ess::EssCertID*)>(
    &::Org::BouncyCastle::Asn1::Ess::SigningCertificate::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xe26a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ess::SigningCertificate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ess::EssCertID*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::SigningCertificate.GetCerts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertID*, ::Array<::Org::BouncyCastle::Asn1::Ess::EssCertID*>*> (
    ::Org::BouncyCastle::Asn1::Ess::SigningCertificate::*)()>(&::Org::BouncyCastle::Asn1::Ess::SigningCertificate::GetCerts)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xe26ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ess::SigningCertificate*>::get(),
                                                                               "GetCerts", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::SigningCertificate.GetPolicies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> (::Org::BouncyCastle::Asn1::Ess::SigningCertificate::*)()>(
        &::Org::BouncyCastle::Asn1::Ess::SigningCertificate::GetPolicies)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xe26bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ess::SigningCertificate*>::get(),
                                                                               "GetPolicies", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::SigningCertificate.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Ess::SigningCertificate::*)()>(
    &::Org::BouncyCastle::Asn1::Ess::SigningCertificate::ToAsn1Object)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xe26d08;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ess::SigningCertificate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ess::SigningCertificate*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Ess::SigningCertificate::__get_certs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certs;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& Org::BouncyCastle::Asn1::Ess::SigningCertificate::__get_certs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certs;
}
constexpr void Org::BouncyCastle::Asn1::Ess::SigningCertificate::__set_certs(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Ess::SigningCertificate::__get_policies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policies;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& Org::BouncyCastle::Asn1::Ess::SigningCertificate::__get_policies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policies;
}
constexpr void Org::BouncyCastle::Asn1::Ess::SigningCertificate::__set_policies(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___policies)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::Ess::SigningCertificate* Org::BouncyCastle::Asn1::Ess::SigningCertificate::GetInstance(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ess::SigningCertificate*>::get(), "GetInstance",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ess::SigningCertificate*, false>(nullptr, ___internal_method, o);
}
inline ::Org::BouncyCastle::Asn1::Ess::SigningCertificate* Org::BouncyCastle::Asn1::Ess::SigningCertificate::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Ess::SigningCertificate*>(seq));
}
inline void Org::BouncyCastle::Asn1::Ess::SigningCertificate::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ess::SigningCertificate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Ess::SigningCertificate* Org::BouncyCastle::Asn1::Ess::SigningCertificate::New_ctor(::Org::BouncyCastle::Asn1::Ess::EssCertID* essCertID) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Ess::SigningCertificate*>(essCertID));
}
inline void Org::BouncyCastle::Asn1::Ess::SigningCertificate::_ctor(::Org::BouncyCastle::Asn1::Ess::EssCertID* essCertID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ess::SigningCertificate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ess::EssCertID*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, essCertID);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertID*, ::Array<::Org::BouncyCastle::Asn1::Ess::EssCertID*>*> Org::BouncyCastle::Asn1::Ess::SigningCertificate::GetCerts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ess::SigningCertificate*>::get(),
                                                                             "GetCerts", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Ess::EssCertID*, ::Array<::Org::BouncyCastle::Asn1::Ess::EssCertID*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> Org::BouncyCastle::Asn1::Ess::SigningCertificate::GetPolicies() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ess::SigningCertificate*>::get(),
                                                                             "GetPolicies", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*>, false>(this,
                                                                                                                                                                                  ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Ess::SigningCertificate::ToAsn1Object() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ess::SigningCertificate*>::get(),
                                                                             "ToAsn1Object", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Ess::SigningCertificate::SigningCertificate() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
