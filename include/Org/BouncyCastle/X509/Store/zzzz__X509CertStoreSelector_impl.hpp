#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CertStoreSelector_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectPublicKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/Utilities/Date/zzzz__DateTimeObject_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1468dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(
    ::Org::BouncyCastle::X509::Store::X509CertStoreSelector*)>(&::Org::BouncyCastle::X509::Store::X509CertStoreSelector::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1468dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::Clone)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1468f44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_AuthorityKeyIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_AuthorityKeyIdentifier)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1468e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                               "get_AuthorityKeyIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_AuthorityKeyIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_AuthorityKeyIdentifier)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1468fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_AuthorityKeyIdentifier", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_BasicConstraints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_BasicConstraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1469010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                               "get_BasicConstraints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_BasicConstraints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(int32_t)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_BasicConstraints)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1469018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_BasicConstraints",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_Certificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_Certificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1469098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                               "get_Certificate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_Certificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_Certificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14690a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_Certificate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_CertificateValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Date::DateTimeObject* (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_CertificateValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14690a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                               "get_CertificateValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_CertificateValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(
    ::Org::BouncyCastle::Utilities::Date::DateTimeObject*)>(&::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_CertificateValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14690b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_CertificateValid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_ExtendedKeyUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_ExtendedKeyUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1468ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                               "get_ExtendedKeyUsage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_ExtendedKeyUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*)>(&::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_ExtendedKeyUsage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1469128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_ExtendedKeyUsage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_IgnoreX509NameOrdering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_IgnoreX509NameOrdering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1469144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                               "get_IgnoreX509NameOrdering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_IgnoreX509NameOrdering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(bool)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_IgnoreX509NameOrdering)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x146914c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_IgnoreX509NameOrdering",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_Issuer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_Issuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1469158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                               "get_Issuer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_Issuer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_Issuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1469160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_Issuer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_IssuerAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_IssuerAsString)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1469168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                               "get_IssuerAsString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_KeyUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<bool, ::Array<bool>*> (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_KeyUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1468ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                               "get_KeyUsage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_KeyUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::ArrayW<bool, ::Array<bool>*>)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_KeyUsage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x14691f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_KeyUsage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_Policy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_Policy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1468ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                               "get_Policy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_Policy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*)>(&::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_Policy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1469214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_Policy", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_PrivateKeyValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Date::DateTimeObject* (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_PrivateKeyValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1469230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                               "get_PrivateKeyValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_PrivateKeyValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(
    ::Org::BouncyCastle::Utilities::Date::DateTimeObject*)>(&::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_PrivateKeyValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1469238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_PrivateKeyValid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_SerialNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_SerialNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1469240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                               "get_SerialNumber", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_SerialNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_SerialNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1469248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_SerialNumber", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_Subject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_Subject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1469250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                               "get_Subject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_Subject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_Subject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1469258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_Subject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_SubjectAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_SubjectAsString)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1469260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                               "get_SubjectAsString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_SubjectKeyIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_SubjectKeyIdentifier)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1468ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                               "get_SubjectKeyIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_SubjectKeyIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_SubjectKeyIdentifier)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x146769c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_SubjectKeyIdentifier", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_SubjectPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* (
    ::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(&::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_SubjectPublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1469278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                               "get_SubjectPublicKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_SubjectPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(
    ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*)>(&::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_SubjectPublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1469280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_SubjectPublicKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_SubjectPublicKeyAlgID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_SubjectPublicKeyAlgID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1469288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                               "get_SubjectPublicKeyAlgID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_SubjectPublicKeyAlgID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_SubjectPublicKeyAlgID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1469290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_SubjectPublicKeyAlgID", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.Match
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::System::Object*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::Match)> {
  constexpr static std::size_t size = 0xbd0;
  constexpr static std::size_t addrs = 0x1469298;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.IssuersMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Org::BouncyCastle::Asn1::X509::X509Name*, ::Org::BouncyCastle::Asn1::X509::X509Name*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::IssuersMatch)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1469f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "IssuersMatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.CopyBoolArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<bool, ::Array<bool>*> (*)(::ArrayW<bool, ::Array<bool>*>)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::CopyBoolArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1469180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "CopyBoolArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.CopySet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (*)(::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::CopySet)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x14690b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "CopySet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.GetSubjectPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* (*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::GetSubjectPublicKey)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1469f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "GetSubjectPublicKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.MatchExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
        &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::MatchExtension)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1469e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "MatchExtension", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509Selector"
constexpr Org::BouncyCastle::X509::Store::X509CertStoreSelector::operator ::Org::BouncyCastle::X509::Store::IX509Selector*() noexcept {
  return static_cast<::Org::BouncyCastle::X509::Store::IX509Selector*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::X509::Store::IX509Selector"
constexpr ::Org::BouncyCastle::X509::Store::IX509Selector* Org::BouncyCastle::X509::Store::X509CertStoreSelector::i___Org__BouncyCastle__X509__Store__IX509Selector() noexcept {
  return static_cast<::Org::BouncyCastle::X509::Store::IX509Selector*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr Org::BouncyCastle::X509::Store::X509CertStoreSelector::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* Org::BouncyCastle::X509::Store::X509CertStoreSelector::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_authorityKeyIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authorityKeyIdentifier;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_authorityKeyIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authorityKeyIdentifier;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_authorityKeyIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___authorityKeyIdentifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_basicConstraints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicConstraints;
}
constexpr int32_t const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_basicConstraints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicConstraints;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_basicConstraints(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___basicConstraints = value;
}
constexpr ::Org::BouncyCastle::X509::X509Certificate*& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_certificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificate;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::X509Certificate*> const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_certificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificate;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_certificate(::Org::BouncyCastle::X509::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certificate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject*& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_certificateValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateValid;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Date::DateTimeObject*> const&
Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_certificateValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateValid;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_certificateValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certificateValid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_extendedKeyUsage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extendedKeyUsage;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const&
Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_extendedKeyUsage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extendedKeyUsage;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_extendedKeyUsage(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___extendedKeyUsage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_ignoreX509NameOrdering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreX509NameOrdering;
}
constexpr bool const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_ignoreX509NameOrdering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreX509NameOrdering;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_ignoreX509NameOrdering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ignoreX509NameOrdering = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_issuer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_issuer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_issuer(::Org::BouncyCastle::Asn1::X509::X509Name* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___issuer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<bool, ::Array<bool>*>& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_keyUsage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyUsage;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_keyUsage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyUsage;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_keyUsage(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyUsage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_policy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policy;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_policy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policy;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_policy(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___policy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject*& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_privateKeyValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKeyValid;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Date::DateTimeObject*> const&
Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_privateKeyValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKeyValid;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_privateKeyValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___privateKeyValid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_serialNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialNumber;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_serialNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialNumber;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_serialNumber(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serialNumber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_subject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subject;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_subject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subject;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_subject(::Org::BouncyCastle::Asn1::X509::X509Name* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_subjectKeyIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectKeyIdentifier;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_subjectKeyIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectKeyIdentifier;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_subjectKeyIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subjectKeyIdentifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_subjectPublicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectPublicKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*> const&
Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_subjectPublicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectPublicKey;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_subjectPublicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subjectPublicKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_subjectPublicKeyAlgID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectPublicKeyAlgID;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const&
Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_subjectPublicKeyAlgID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectPublicKeyAlgID;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_subjectPublicKeyAlgID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subjectPublicKeyAlgID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::X509::Store::X509CertStoreSelector* Org::BouncyCastle::X509::Store::X509CertStoreSelector::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>());
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::Store::X509CertStoreSelector* Org::BouncyCastle::X509::Store::X509CertStoreSelector::New_ctor(::Org::BouncyCastle::X509::Store::X509CertStoreSelector* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(o));
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::_ctor(::Org::BouncyCastle::X509::Store::X509CertStoreSelector* o) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::System::Object* Org::BouncyCastle::X509::Store::X509CertStoreSelector::Clone() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_AuthorityKeyIdentifier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                             "get_AuthorityKeyIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_AuthorityKeyIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_AuthorityKeyIdentifier", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_BasicConstraints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                             "get_BasicConstraints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_BasicConstraints(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_BasicConstraints",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_Certificate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                             "get_Certificate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_Certificate(::Org::BouncyCastle::X509::X509Certificate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_Certificate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_CertificateValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                             "get_CertificateValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Date::DateTimeObject*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_CertificateValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_CertificateValid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_ExtendedKeyUsage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                             "get_ExtendedKeyUsage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_ExtendedKeyUsage(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_ExtendedKeyUsage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_IgnoreX509NameOrdering() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                             "get_IgnoreX509NameOrdering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_IgnoreX509NameOrdering(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_IgnoreX509NameOrdering",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_Issuer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                             "get_Issuer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_Issuer(::Org::BouncyCastle::Asn1::X509::X509Name* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_Issuer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_IssuerAsString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                             "get_IssuerAsString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<bool, ::Array<bool>*> Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_KeyUsage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                             "get_KeyUsage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool, ::Array<bool>*>, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_KeyUsage(::ArrayW<bool, ::Array<bool>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_KeyUsage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_Policy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                             "get_Policy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_Policy(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_Policy", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_PrivateKeyValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                             "get_PrivateKeyValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Date::DateTimeObject*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_PrivateKeyValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_PrivateKeyValid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_SerialNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                             "get_SerialNumber", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_SerialNumber(::Org::BouncyCastle::Math::BigInteger* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_SerialNumber", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_Subject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                             "get_Subject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_Subject(::Org::BouncyCastle::Asn1::X509::X509Name* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_Subject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_SubjectAsString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                             "get_SubjectAsString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_SubjectKeyIdentifier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                             "get_SubjectKeyIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_SubjectKeyIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_SubjectKeyIdentifier", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_SubjectPublicKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                             "get_SubjectPublicKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_SubjectPublicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_SubjectPublicKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_SubjectPublicKeyAlgID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(),
                                                                             "get_SubjectPublicKeyAlgID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_SubjectPublicKeyAlgID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "set_SubjectPublicKeyAlgID", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::X509::Store::X509CertStoreSelector::Match(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool Org::BouncyCastle::X509::Store::X509CertStoreSelector::IssuersMatch(::Org::BouncyCastle::Asn1::X509::X509Name* a, ::Org::BouncyCastle::Asn1::X509::X509Name* b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "IssuersMatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline ::ArrayW<bool, ::Array<bool>*> Org::BouncyCastle::X509::Store::X509CertStoreSelector::CopyBoolArray(::ArrayW<bool, ::Array<bool>*> b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "CopyBoolArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool, ::Array<bool>*>, false>(nullptr, ___internal_method, b);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::X509::Store::X509CertStoreSelector::CopySet(::Org::BouncyCastle::Utilities::Collections::ISet* s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "CopySet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(nullptr, ___internal_method, s);
}
inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* Org::BouncyCastle::X509::Store::X509CertStoreSelector::GetSubjectPublicKey(::Org::BouncyCastle::X509::X509Certificate* c) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "GetSubjectPublicKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*, false>(nullptr, ___internal_method, c);
}
inline bool Org::BouncyCastle::X509::Store::X509CertStoreSelector::MatchExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> b, ::Org::BouncyCastle::X509::X509Certificate* c,
                                                                                  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>::get(), "MatchExtension", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, b, c, oid);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::Store::X509CertStoreSelector::X509CertStoreSelector() {}
