#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedGenerator_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignerIdentifier_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformationStore_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformation_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)()>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x11e8814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x11e8878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.GetBaseParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (
    ::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::GetBaseParameters)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x11e8918;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.GetAttributeSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (
    ::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(&::Org::BouncyCastle::Cms::CmsSignedGenerator::GetAttributeSet)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x11e8b54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.AddCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::X509::Store::IX509Store*)>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::AddCertificates)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x11e8bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), "AddCertificates", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.AddCrls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::X509::Store::IX509Store*)>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::AddCrls)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x11e8bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), "AddCrls", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.AddAttributeCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::X509::Store::IX509Store*)>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::AddAttributeCertificates)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x11e8c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), "AddAttributeCertificates", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.AddSigners
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::Cms::SignerInformationStore*)>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::AddSigners)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x11e91e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), "AddSigners", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformationStore*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.GetGeneratedDigests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::GetGeneratedDigests)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x11e95c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(),
                                                                               "GetGeneratedDigests", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.get_UseDerForCerts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::get_UseDerForCerts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11e9624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(),
                                                                               "get_UseDerForCerts", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.set_UseDerForCerts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(bool)>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::set_UseDerForCerts)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11e962c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), "set_UseDerForCerts",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.get_UseDerForCrls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::get_UseDerForCrls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11e9638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(),
                                                                               "get_UseDerForCrls", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.set_UseDerForCrls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(bool)>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::set_UseDerForCrls)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11e9640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), "set_UseDerForCrls",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.AddSignerCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedGenerator::*)(::Org::BouncyCastle::Cms::SignerInformation*)>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::AddSignerCallback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x11e964c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.GetSignerIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* (*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::GetSignerIdentifier)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x11e9650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), "GetSignerIdentifier", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedGenerator.GetSignerIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Cms::CmsSignedGenerator::GetSignerIdentifier)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x11e9758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), "GetSignerIdentifier", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cms::CmsSignedGenerator::__get__certs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& Org::BouncyCastle::Cms::CmsSignedGenerator::__get__certs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certs;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedGenerator::__set__certs(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____certs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cms::CmsSignedGenerator::__get__crls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crls;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& Org::BouncyCastle::Cms::CmsSignedGenerator::__get__crls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crls;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedGenerator::__set__crls(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____crls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cms::CmsSignedGenerator::__get__signers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& Org::BouncyCastle::Cms::CmsSignedGenerator::__get__signers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signers;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedGenerator::__set__signers(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Cms::CmsSignedGenerator::__get__digests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____digests;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& Org::BouncyCastle::Cms::CmsSignedGenerator::__get__digests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____digests;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedGenerator::__set__digests(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____digests)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Cms::CmsSignedGenerator::__get__useDerForCerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useDerForCerts;
}
constexpr bool const& Org::BouncyCastle::Cms::CmsSignedGenerator::__get__useDerForCerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useDerForCerts;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedGenerator::__set__useDerForCerts(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useDerForCerts = value;
}
constexpr bool& Org::BouncyCastle::Cms::CmsSignedGenerator::__get__useDerForCrls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useDerForCrls;
}
constexpr bool const& Org::BouncyCastle::Cms::CmsSignedGenerator::__get__useDerForCrls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useDerForCrls;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedGenerator::__set__useDerForCrls(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useDerForCrls = value;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Cms::CmsSignedGenerator::__get_rand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rand;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& Org::BouncyCastle::Cms::CmsSignedGenerator::__get_rand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rand;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedGenerator::__set_rand(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_Data(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Data", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_Data() {
  return ::cordl_internals::getStaticField<::StringW, "Data", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_DigestSha1(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DigestSha1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_DigestSha1() {
  return ::cordl_internals::getStaticField<::StringW, "DigestSha1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_DigestSha224(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DigestSha224", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_DigestSha224() {
  return ::cordl_internals::getStaticField<::StringW, "DigestSha224", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_DigestSha256(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DigestSha256", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_DigestSha256() {
  return ::cordl_internals::getStaticField<::StringW, "DigestSha256", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_DigestSha384(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DigestSha384", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_DigestSha384() {
  return ::cordl_internals::getStaticField<::StringW, "DigestSha384", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_DigestSha512(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DigestSha512", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_DigestSha512() {
  return ::cordl_internals::getStaticField<::StringW, "DigestSha512", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_DigestMD5(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DigestMD5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_DigestMD5() {
  return ::cordl_internals::getStaticField<::StringW, "DigestMD5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_DigestGost3411(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DigestGost3411", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_DigestGost3411() {
  return ::cordl_internals::getStaticField<::StringW, "DigestGost3411", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_DigestRipeMD128(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DigestRipeMD128", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_DigestRipeMD128() {
  return ::cordl_internals::getStaticField<::StringW, "DigestRipeMD128", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_DigestRipeMD160(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DigestRipeMD160", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_DigestRipeMD160() {
  return ::cordl_internals::getStaticField<::StringW, "DigestRipeMD160", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_DigestRipeMD256(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DigestRipeMD256", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_DigestRipeMD256() {
  return ::cordl_internals::getStaticField<::StringW, "DigestRipeMD256", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_EncryptionRsa(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EncryptionRsa", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_EncryptionRsa() {
  return ::cordl_internals::getStaticField<::StringW, "EncryptionRsa", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_EncryptionDsa(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EncryptionDsa", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_EncryptionDsa() {
  return ::cordl_internals::getStaticField<::StringW, "EncryptionDsa", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_EncryptionECDsa(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EncryptionECDsa", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_EncryptionECDsa() {
  return ::cordl_internals::getStaticField<::StringW, "EncryptionECDsa", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_EncryptionRsaPss(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EncryptionRsaPss", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_EncryptionRsaPss() {
  return ::cordl_internals::getStaticField<::StringW, "EncryptionRsaPss", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_EncryptionGost3410(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EncryptionGost3410", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_EncryptionGost3410() {
  return ::cordl_internals::getStaticField<::StringW, "EncryptionGost3410", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::setStaticF_EncryptionECGost3410(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EncryptionECGost3410", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedGenerator::getStaticF_EncryptionECGost3410() {
  return ::cordl_internals::getStaticField<::StringW, "EncryptionECGost3410", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get>();
}
inline ::Org::BouncyCastle::Cms::CmsSignedGenerator* Org::BouncyCastle::Cms::CmsSignedGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsSignedGenerator*>());
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsSignedGenerator* Org::BouncyCastle::Cms::CmsSignedGenerator::New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(rand));
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rand);
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::CmsSignedGenerator::GetBaseParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType,
                                                                                                         ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digAlgId,
                                                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> hash) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), "GetBaseParameters", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*, false>(this, ___internal_method, contentType, digAlgId, hash);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Cms::CmsSignedGenerator::GetAttributeSet(::Org::BouncyCastle::Asn1::Cms::AttributeTable* attr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), "GetAttributeSet", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*, false>(this, ___internal_method, attr);
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::AddCertificates(::Org::BouncyCastle::X509::Store::IX509Store* certStore) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), "AddCertificates", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certStore);
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::AddCrls(::Org::BouncyCastle::X509::Store::IX509Store* crlStore) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), "AddCrls", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, crlStore);
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::AddAttributeCertificates(::Org::BouncyCastle::X509::Store::IX509Store* store) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), "AddAttributeCertificates", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, store);
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::AddSigners(::Org::BouncyCastle::Cms::SignerInformationStore* signerStore) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), "AddSigners", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformationStore*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signerStore);
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::CmsSignedGenerator::GetGeneratedDigests() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(),
                                                                             "GetGeneratedDigests", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Cms::CmsSignedGenerator::get_UseDerForCerts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(),
                                                                             "get_UseDerForCerts", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::set_UseDerForCerts(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), "set_UseDerForCerts",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::Cms::CmsSignedGenerator::get_UseDerForCrls() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(),
                                                                             "get_UseDerForCrls", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::set_UseDerForCrls(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), "set_UseDerForCrls",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Cms::CmsSignedGenerator::AddSignerCallback(::Org::BouncyCastle::Cms::SignerInformation* si) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), "AddSignerCallback", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, si);
}
inline ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* Org::BouncyCastle::Cms::CmsSignedGenerator::GetSignerIdentifier(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), "GetSignerIdentifier", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*, false>(nullptr, ___internal_method, cert);
}
inline ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* Org::BouncyCastle::Cms::CmsSignedGenerator::GetSignerIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedGenerator*>::get(), "GetSignerIdentifier", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*, false>(nullptr, ___internal_method, subjectKeyIdentifier);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsSignedGenerator::CmsSignedGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
