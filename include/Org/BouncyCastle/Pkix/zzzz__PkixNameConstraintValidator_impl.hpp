#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixNameConstraintValidator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__OtherName_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralSubtree_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)()>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x10f6c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.WithinDNSubtree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Org::BouncyCastle::Asn1::Asn1Sequence*, ::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::WithinDNSubtree)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x1105f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "WithinDNSubtree", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckPermittedDN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedDN)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x11062ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckPermittedDN", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckExcludedDN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedDN)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x110641c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckExcludedDN", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectDN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectDN)> {
  constexpr static std::size_t size = 0x7d4;
  constexpr static std::size_t addrs = 0x1106488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectDN", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionDN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionDN)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x1106c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "UnionDN", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectOtherName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectOtherName)> {
  constexpr static std::size_t size = 0x698;
  constexpr static std::size_t addrs = 0x1107240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectOtherName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectOtherName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Asn1::X509::OtherName*, ::Org::BouncyCastle::Asn1::X509::OtherName*, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectOtherName)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x11078d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectOtherName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::OtherName*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::OtherName*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionOtherName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Asn1::X509::OtherName*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionOtherName)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x11079b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "UnionOtherName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::OtherName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectEmail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectEmail)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0x1107aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectEmail", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionEmail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionEmail)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x1108708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "UnionEmail", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectIP
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectIP)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x1109480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectIP", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionIP
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionIP)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x1109e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "UnionIP", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionIPRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionIPRange)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x110a2e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "UnionIPRange", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectIPRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectIPRange)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1109c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectIPRange", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IpWithSubnetMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IpWithSubnetMask)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x110ab8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IpWithSubnetMask", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.ExtractIPsAndSubnetMasks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ExtractIPsAndSubnetMasks)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x110a45c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "ExtractIPsAndSubnetMasks", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.MinMaxIPs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::MinMaxIPs)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x110a658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "MinMaxIPs", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsOtherNameConstrained
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Asn1::X509::OtherName*, ::Org::BouncyCastle::Asn1::X509::OtherName*)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsOtherNameConstrained)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x110ac30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IsOtherNameConstrained", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::OtherName*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::OtherName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsOtherNameConstrained
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Asn1::X509::OtherName*)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsOtherNameConstrained)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x110ac4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IsOtherNameConstrained", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::OtherName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckPermittedOtherName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Asn1::X509::OtherName*)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedOtherName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x110af70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckPermittedOtherName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::OtherName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckExcludedOtherName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Asn1::X509::OtherName*)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedOtherName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x110b038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckExcludedOtherName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::OtherName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsEmailConstrained
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::StringW, ::StringW)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsEmailConstrained)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x110b094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IsEmailConstrained", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsEmailConstrained
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsEmailConstrained)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x110b3ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IsEmailConstrained", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckPermittedEmail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedEmail)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x110b740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckPermittedEmail", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckExcludedEmail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedEmail)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x110b860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckExcludedEmail", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsDnsConstrained
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::StringW, ::StringW)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsDnsConstrained)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x110b8bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IsDnsConstrained", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsDnsConstrained
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsDnsConstrained)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x110b93c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IsDnsConstrained", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckPermittedDns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedDns)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x110bc78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckPermittedDns", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckExcludedDns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedDns)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x110bd88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckExcludedDns", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsDirectoryConstrained
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsDirectoryConstrained)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x110bde4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IsDirectoryConstrained", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckPermittedDirectory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedDirectory)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x11062fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckPermittedDirectory", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckExcludedDirectory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedDirectory)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x110642c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckExcludedDirectory", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsUriConstrained
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::StringW, ::StringW)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsUriConstrained)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x110c130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IsUriConstrained", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsUriConstrained
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsUriConstrained)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x110c3b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IsUriConstrained", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckPermittedUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedUri)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x110c6f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckPermittedUri", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckExcludedUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedUri)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x110c804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckExcludedUri", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsIPConstrained
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsIPConstrained)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x110c860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IsIPConstrained", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsIPConstrained
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsIPConstrained)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x110ca18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IsIPConstrained", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckPermittedIP
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedIP)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x110cd74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckPermittedIP", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckExcludedIP
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedIP)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x110ce84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckExcludedIP", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.WithinDomain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::StringW, ::StringW)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::WithinDomain)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x110b1f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "WithinDomain", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionEmail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::StringW, ::StringW, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionEmail)> {
  constexpr static std::size_t size = 0x940;
  constexpr static std::size_t addrs = 0x1108b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "UnionEmail", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.unionURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::StringW, ::StringW, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::unionURI)> {
  constexpr static std::size_t size = 0x940;
  constexpr static std::size_t addrs = 0x110cee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "unionURI", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectDns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectDns)> {
  constexpr static std::size_t size = 0x7b8;
  constexpr static std::size_t addrs = 0x110d820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectDns", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionDns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionDns)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x110dfd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "UnionDns", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectEmail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::StringW, ::StringW, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectEmail)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x1108184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectEmail", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectUri)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x110e5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectUri", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionUri)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x110f1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "UnionUri", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::StringW, ::StringW, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectUri)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x110ec44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectUri", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.ExtractHostFromURL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ExtractHostFromURL)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x110c21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "ExtractHostFromURL",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.checkPermitted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Asn1::X509::GeneralName*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::checkPermitted)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x110f5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "checkPermitted", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.checkExcluded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Asn1::X509::GeneralName*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::checkExcluded)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x110f718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "checkExcluded", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectPermittedSubtree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectPermittedSubtree)> {
  constexpr static std::size_t size = 0xaa4;
  constexpr static std::size_t addrs = 0x110f840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectPermittedSubtree", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.ExtractNameAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Asn1::X509::GeneralName*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ExtractNameAsString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1108158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "ExtractNameAsString", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectEmptyPermittedSubtree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(int32_t)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectEmptyPermittedSubtree)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x11102e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectEmptyPermittedSubtree",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.AddExcludedSubtree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Asn1::X509::GeneralSubtree*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::AddExcludedSubtree)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x111040c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "AddExcludedSubtree", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.Max
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Max)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x110a980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "Max", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.Min
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Min)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x110a914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "Min", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CompareTo)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x110a9ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CompareTo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.Or
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Or)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x110aac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "Or", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.HashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)()>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::HashCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1110594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(),
                                                                               "HashCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)()>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::GetHashCode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x11105a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.HashCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::System::Collections::ICollection*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::HashCollection)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x1110690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "HashCollection", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::System::Object*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Equals)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1110a2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CollectionsAreEqual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::System::Collections::ICollection*, ::System::Collections::ICollection*)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CollectionsAreEqual)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x1110b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CollectionsAreEqual", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.SpecialEquals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::System::Object*, ::System::Object*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::SpecialEquals)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x111123c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(),
                                                                               "SpecialEquals", std::vector<Il2CppClass*>{},
                                                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.StringifyIP
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::StringifyIP)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x1111364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "StringifyIP", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.StringifyIPCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::StringifyIPCollection)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x1111518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "StringifyIPCollection", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.StringifyOtherNameCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::StringifyOtherNameCollection)> {
  constexpr static std::size_t size = 0x594;
  constexpr static std::size_t addrs = 0x1111908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "StringifyOtherNameCollection", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)()>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ToString)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x1111e9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_excludedSubtreesDN() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesDN;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_excludedSubtreesDN() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesDN;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_excludedSubtreesDN(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___excludedSubtreesDN)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_excludedSubtreesDNS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesDNS;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_excludedSubtreesDNS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesDNS;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_excludedSubtreesDNS(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___excludedSubtreesDNS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_excludedSubtreesEmail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesEmail;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_excludedSubtreesEmail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesEmail;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_excludedSubtreesEmail(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___excludedSubtreesEmail)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_excludedSubtreesURI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesURI;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_excludedSubtreesURI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesURI;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_excludedSubtreesURI(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___excludedSubtreesURI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_excludedSubtreesIP() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesIP;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_excludedSubtreesIP() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesIP;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_excludedSubtreesIP(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___excludedSubtreesIP)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_excludedSubtreesOtherName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesOtherName;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_excludedSubtreesOtherName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesOtherName;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_excludedSubtreesOtherName(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___excludedSubtreesOtherName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_permittedSubtreesDN() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesDN;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_permittedSubtreesDN() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesDN;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_permittedSubtreesDN(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___permittedSubtreesDN)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_permittedSubtreesDNS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesDNS;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_permittedSubtreesDNS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesDNS;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_permittedSubtreesDNS(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___permittedSubtreesDNS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_permittedSubtreesEmail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesEmail;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_permittedSubtreesEmail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesEmail;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_permittedSubtreesEmail(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___permittedSubtreesEmail)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_permittedSubtreesURI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesURI;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_permittedSubtreesURI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesURI;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_permittedSubtreesURI(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___permittedSubtreesURI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_permittedSubtreesIP() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesIP;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_permittedSubtreesIP() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesIP;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_permittedSubtreesIP(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___permittedSubtreesIP)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_permittedSubtreesOtherName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesOtherName;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const&
Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__get_permittedSubtreesOtherName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesOtherName;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__set_permittedSubtreesOtherName(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___permittedSubtreesOtherName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::setStaticF_SerialNumberOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SerialNumberOid",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::getStaticF_SerialNumberOid() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SerialNumberOid",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get>();
}
inline ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>());
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::WithinDNSubtree(::Org::BouncyCastle::Asn1::Asn1Sequence* dns, ::Org::BouncyCastle::Asn1::Asn1Sequence* subtree) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "WithinDNSubtree", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, dns, subtree);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedDN(::Org::BouncyCastle::Asn1::Asn1Sequence* dn) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckPermittedDN", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dn);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedDN(::Org::BouncyCastle::Asn1::Asn1Sequence* dn) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckExcludedDN", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dn);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectDN(::Org::BouncyCastle::Utilities::Collections::ISet* permitted,
                                                                                                                            ::Org::BouncyCastle::Utilities::Collections::ISet* dns) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectDN", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(this, ___internal_method, permitted, dns);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionDN(::Org::BouncyCastle::Utilities::Collections::ISet* excluded,
                                                                                                                        ::Org::BouncyCastle::Asn1::Asn1Sequence* dn) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "UnionDN", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(this, ___internal_method, excluded, dn);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectOtherName(::Org::BouncyCastle::Utilities::Collections::ISet* permitted,
                                                                                                                                   ::Org::BouncyCastle::Utilities::Collections::ISet* otherNames) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectOtherName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(this, ___internal_method, permitted, otherNames);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectOtherName(::Org::BouncyCastle::Asn1::X509::OtherName* otherName1, ::Org::BouncyCastle::Asn1::X509::OtherName* otherName2,
                                                                                     ::Org::BouncyCastle::Utilities::Collections::ISet* intersect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectOtherName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::OtherName*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::OtherName*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, otherName1, otherName2, intersect);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionOtherName(::Org::BouncyCastle::Utilities::Collections::ISet* permitted,
                                                                                                                               ::Org::BouncyCastle::Asn1::X509::OtherName* otherName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "UnionOtherName", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::OtherName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(this, ___internal_method, permitted, otherName);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectEmail(::Org::BouncyCastle::Utilities::Collections::ISet* permitted,
                                                                                                                               ::Org::BouncyCastle::Utilities::Collections::ISet* emails) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectEmail", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(this, ___internal_method, permitted, emails);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionEmail(::Org::BouncyCastle::Utilities::Collections::ISet* excluded,
                                                                                                                           ::StringW email) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "UnionEmail", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(this, ___internal_method, excluded, email);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectIP(::Org::BouncyCastle::Utilities::Collections::ISet* permitted,
                                                                                                                            ::Org::BouncyCastle::Utilities::Collections::ISet* ips) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectIP", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(this, ___internal_method, permitted, ips);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionIP(::Org::BouncyCastle::Utilities::Collections::ISet* excluded,
                                                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> ip) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "UnionIP", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(this, ___internal_method, excluded, ip);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionIPRange(::ArrayW<uint8_t, ::Array<uint8_t>*> ipWithSubmask1,
                                                                                                                             ::ArrayW<uint8_t, ::Array<uint8_t>*> ipWithSubmask2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "UnionIPRange", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(this, ___internal_method, ipWithSubmask1, ipWithSubmask2);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectIPRange(::ArrayW<uint8_t, ::Array<uint8_t>*> ipWithSubmask1,
                                                                                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> ipWithSubmask2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectIPRange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(this, ___internal_method, ipWithSubmask1, ipWithSubmask2);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IpWithSubnetMask(::ArrayW<uint8_t, ::Array<uint8_t>*> ip,
                                                                                                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> subnetMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IpWithSubnetMask", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, ip, subnetMask);
}
inline ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>
Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ExtractIPsAndSubnetMasks(::ArrayW<uint8_t, ::Array<uint8_t>*> ipWithSubmask1, ::ArrayW<uint8_t, ::Array<uint8_t>*> ipWithSubmask2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "ExtractIPsAndSubnetMasks", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>, false>(this, ___internal_method, ipWithSubmask1,
                                                                                                                                                    ipWithSubmask2);
}
inline ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>
Org::BouncyCastle::Pkix::PkixNameConstraintValidator::MinMaxIPs(::ArrayW<uint8_t, ::Array<uint8_t>*> ip1, ::ArrayW<uint8_t, ::Array<uint8_t>*> subnetmask1, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip2,
                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> subnetmask2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "MinMaxIPs", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>, false>(this, ___internal_method, ip1, subnetmask1, ip2,
                                                                                                                                                    subnetmask2);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsOtherNameConstrained(::Org::BouncyCastle::Asn1::X509::OtherName* constraint,
                                                                                         ::Org::BouncyCastle::Asn1::X509::OtherName* otherName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IsOtherNameConstrained", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::OtherName*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::OtherName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, constraint, otherName);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsOtherNameConstrained(::Org::BouncyCastle::Utilities::Collections::ISet* constraints,
                                                                                         ::Org::BouncyCastle::Asn1::X509::OtherName* otherName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IsOtherNameConstrained", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::OtherName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, constraints, otherName);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedOtherName(::Org::BouncyCastle::Utilities::Collections::ISet* permitted,
                                                                                          ::Org::BouncyCastle::Asn1::X509::OtherName* name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckPermittedOtherName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::OtherName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, permitted, name);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedOtherName(::Org::BouncyCastle::Utilities::Collections::ISet* excluded,
                                                                                         ::Org::BouncyCastle::Asn1::X509::OtherName* name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckExcludedOtherName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::OtherName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, excluded, name);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsEmailConstrained(::StringW constraint, ::StringW email) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IsEmailConstrained", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, constraint, email);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsEmailConstrained(::Org::BouncyCastle::Utilities::Collections::ISet* constraints, ::StringW email) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IsEmailConstrained", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, constraints, email);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedEmail(::Org::BouncyCastle::Utilities::Collections::ISet* permitted, ::StringW email) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckPermittedEmail", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, permitted, email);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedEmail(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::StringW email) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckExcludedEmail", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, excluded, email);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsDnsConstrained(::StringW constraint, ::StringW dns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IsDnsConstrained", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, constraint, dns);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsDnsConstrained(::Org::BouncyCastle::Utilities::Collections::ISet* constraints, ::StringW dns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IsDnsConstrained", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, constraints, dns);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedDns(::Org::BouncyCastle::Utilities::Collections::ISet* permitted, ::StringW dns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckPermittedDns", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, permitted, dns);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedDns(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::StringW dns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckExcludedDns", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, excluded, dns);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsDirectoryConstrained(::Org::BouncyCastle::Utilities::Collections::ISet* constraints,
                                                                                         ::Org::BouncyCastle::Asn1::Asn1Sequence* directory) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IsDirectoryConstrained", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, constraints, directory);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedDirectory(::Org::BouncyCastle::Utilities::Collections::ISet* permitted,
                                                                                          ::Org::BouncyCastle::Asn1::Asn1Sequence* directory) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckPermittedDirectory", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, permitted, directory);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedDirectory(::Org::BouncyCastle::Utilities::Collections::ISet* excluded,
                                                                                         ::Org::BouncyCastle::Asn1::Asn1Sequence* directory) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckExcludedDirectory", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, excluded, directory);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsUriConstrained(::StringW constraint, ::StringW uri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IsUriConstrained", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, constraint, uri);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsUriConstrained(::Org::BouncyCastle::Utilities::Collections::ISet* constraints, ::StringW uri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IsUriConstrained", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, constraints, uri);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedUri(::Org::BouncyCastle::Utilities::Collections::ISet* permitted, ::StringW uri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckPermittedUri", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, permitted, uri);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedUri(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::StringW uri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckExcludedUri", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, excluded, uri);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsIPConstrained(::ArrayW<uint8_t, ::Array<uint8_t>*> constraint, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IsIPConstrained", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, constraint, ip);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsIPConstrained(::Org::BouncyCastle::Utilities::Collections::ISet* constraints, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IsIPConstrained", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, constraints, ip);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedIP(::Org::BouncyCastle::Utilities::Collections::ISet* permitted, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckPermittedIP", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, permitted, ip);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedIP(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CheckExcludedIP", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, excluded, ip);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::WithinDomain(::StringW testDomain, ::StringW domain) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "WithinDomain", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, testDomain, domain);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionEmail(::StringW email1, ::StringW email2, ::Org::BouncyCastle::Utilities::Collections::ISet* _cordl_union) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "UnionEmail", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, email1, email2, _cordl_union);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::unionURI(::StringW email1, ::StringW email2, ::Org::BouncyCastle::Utilities::Collections::ISet* _cordl_union) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "unionURI", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, email1, email2, _cordl_union);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectDns(::Org::BouncyCastle::Utilities::Collections::ISet* permitted,
                                                                                                                             ::Org::BouncyCastle::Utilities::Collections::ISet* dnss) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectDns", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(this, ___internal_method, permitted, dnss);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionDns(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::StringW dns) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "UnionDns", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(this, ___internal_method, excluded, dns);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectEmail(::StringW email1, ::StringW email2, ::Org::BouncyCastle::Utilities::Collections::ISet* intersect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectEmail", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, email1, email2, intersect);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectUri(::Org::BouncyCastle::Utilities::Collections::ISet* permitted,
                                                                                                                             ::Org::BouncyCastle::Utilities::Collections::ISet* uris) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectUri", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(this, ___internal_method, permitted, uris);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionUri(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::StringW uri) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "UnionUri", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(this, ___internal_method, excluded, uri);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectUri(::StringW email1, ::StringW email2, ::Org::BouncyCastle::Utilities::Collections::ISet* intersect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectUri", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, email1, email2, intersect);
}
inline ::StringW Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ExtractHostFromURL(::StringW url) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "ExtractHostFromURL",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, url);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::checkPermitted(::Org::BouncyCastle::Asn1::X509::GeneralName* name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "checkPermitted", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::checkExcluded(::Org::BouncyCastle::Asn1::X509::GeneralName* name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "checkExcluded", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectPermittedSubtree(::Org::BouncyCastle::Asn1::Asn1Sequence* permitted) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectPermittedSubtree", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, permitted);
}
inline ::StringW Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ExtractNameAsString(::Org::BouncyCastle::Asn1::X509::GeneralName* name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "ExtractNameAsString", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectEmptyPermittedSubtree(int32_t nameType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "IntersectEmptyPermittedSubtree",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameType);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::AddExcludedSubtree(::Org::BouncyCastle::Asn1::X509::GeneralSubtree* subtree) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "AddExcludedSubtree", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subtree);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Max(::ArrayW<uint8_t, ::Array<uint8_t>*> ip1, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "Max", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, ip1, ip2);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Min(::ArrayW<uint8_t, ::Array<uint8_t>*> ip1, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "Min", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, ip1, ip2);
}
inline int32_t Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CompareTo(::ArrayW<uint8_t, ::Array<uint8_t>*> ip1, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CompareTo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, ip1, ip2);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Or(::ArrayW<uint8_t, ::Array<uint8_t>*> ip1, ::ArrayW<uint8_t, ::Array<uint8_t>*> ip2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "Or", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, ip1, ip2);
}
inline int32_t Org::BouncyCastle::Pkix::PkixNameConstraintValidator::HashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(),
                                                                             "HashCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Pkix::PkixNameConstraintValidator::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Pkix::PkixNameConstraintValidator::HashCollection(::System::Collections::ICollection* c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "HashCollection", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, c);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Equals(::System::Object* o) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, o);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CollectionsAreEqual(::System::Collections::ICollection* coll1, ::System::Collections::ICollection* coll2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "CollectionsAreEqual", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, coll1, coll2);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::SpecialEquals(::System::Object* o1, ::System::Object* o2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "SpecialEquals", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, o1, o2);
}
inline ::StringW Org::BouncyCastle::Pkix::PkixNameConstraintValidator::StringifyIP(::ArrayW<uint8_t, ::Array<uint8_t>*> ip) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "StringifyIP", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, ip);
}
inline ::StringW Org::BouncyCastle::Pkix::PkixNameConstraintValidator::StringifyIPCollection(::Org::BouncyCastle::Utilities::Collections::ISet* ips) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "StringifyIPCollection", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, ips);
}
inline ::StringW Org::BouncyCastle::Pkix::PkixNameConstraintValidator::StringifyOtherNameCollection(::Org::BouncyCastle::Utilities::Collections::ISet* otherNames) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), "StringifyOtherNameCollection", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, otherNames);
}
inline ::StringW Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::PkixNameConstraintValidator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
