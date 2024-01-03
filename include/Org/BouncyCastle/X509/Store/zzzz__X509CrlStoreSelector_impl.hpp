#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CrlStoreSelector_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509AttributeCertificate_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "Org/BouncyCastle/Utilities/Date/zzzz__DateTimeObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1171d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(
    ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*)>(&::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1171d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::Clone)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1171e5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.get_CertificateChecking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_CertificateChecking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1171ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                               "get_CertificateChecking", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.set_CertificateChecking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_CertificateChecking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1171ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), "set_CertificateChecking", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.get_DateAndTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Date::DateTimeObject* (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_DateAndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1171ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                               "get_DateAndTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.set_DateAndTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(
    ::Org::BouncyCastle::Utilities::Date::DateTimeObject*)>(&::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_DateAndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1171ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), "set_DateAndTime", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.get_Issuers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_Issuers)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1171dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                               "get_Issuers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.set_Issuers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(::System::Collections::ICollection*)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_Issuers)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1171edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), "set_Issuers", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.get_MaxCrlNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_MaxCrlNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1171f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                               "get_MaxCrlNumber", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.set_MaxCrlNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_MaxCrlNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1171f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), "set_MaxCrlNumber", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.get_MinCrlNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_MinCrlNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1171f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                               "get_MinCrlNumber", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.set_MinCrlNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_MinCrlNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1171f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), "set_MinCrlNumber", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.get_AttrCertChecking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::IX509AttributeCertificate* (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_AttrCertChecking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1171f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                               "get_AttrCertChecking", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.set_AttrCertChecking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(
    ::Org::BouncyCastle::X509::IX509AttributeCertificate*)>(&::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_AttrCertChecking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1171f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), "set_AttrCertChecking", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::IX509AttributeCertificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.get_CompleteCrlEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_CompleteCrlEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1171f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                               "get_CompleteCrlEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.set_CompleteCrlEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(bool)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_CompleteCrlEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1171f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), "set_CompleteCrlEnabled",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.get_DeltaCrlIndicatorEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_DeltaCrlIndicatorEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1171f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                               "get_DeltaCrlIndicatorEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.set_DeltaCrlIndicatorEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(bool)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_DeltaCrlIndicatorEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1171f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), "set_DeltaCrlIndicatorEnabled",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.get_IssuingDistributionPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_IssuingDistributionPoint)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1171e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                               "get_IssuingDistributionPoint", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.set_IssuingDistributionPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_IssuingDistributionPoint)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1171f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), "set_IssuingDistributionPoint", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.get_IssuingDistributionPointEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_IssuingDistributionPointEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1172004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                               "get_IssuingDistributionPointEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.set_IssuingDistributionPointEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(bool)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_IssuingDistributionPointEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x117200c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), "set_IssuingDistributionPointEnabled",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.get_MaxBaseCrlNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_MaxBaseCrlNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1172018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                               "get_MaxBaseCrlNumber", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.set_MaxBaseCrlNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_MaxBaseCrlNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1172020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), "set_MaxBaseCrlNumber", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.Match
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(::System::Object*)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::Match)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x1172028;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), 7));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509Selector"
constexpr Org::BouncyCastle::X509::Store::X509CrlStoreSelector::operator ::Org::BouncyCastle::X509::Store::IX509Selector*() noexcept {
  return static_cast<::Org::BouncyCastle::X509::Store::IX509Selector*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr Org::BouncyCastle::X509::Store::X509CrlStoreSelector::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::X509::X509Certificate*& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__get_certificateChecking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateChecking;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::X509Certificate*> const& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__get_certificateChecking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateChecking;
}
constexpr void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__set_certificateChecking(::Org::BouncyCastle::X509::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certificateChecking)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject*& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__get_dateAndTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dateAndTime;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Date::DateTimeObject*> const& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__get_dateAndTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dateAndTime;
}
constexpr void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__set_dateAndTime(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dateAndTime)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ICollection*& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__get_issuers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__get_issuers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuers;
}
constexpr void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__set_issuers(::System::Collections::ICollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___issuers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__get_maxCrlNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCrlNumber;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__get_maxCrlNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCrlNumber;
}
constexpr void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__set_maxCrlNumber(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___maxCrlNumber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__get_minCrlNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minCrlNumber;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__get_minCrlNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minCrlNumber;
}
constexpr void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__set_minCrlNumber(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___minCrlNumber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::X509::IX509AttributeCertificate*& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__get_attrCertChecking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrCertChecking;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::IX509AttributeCertificate*> const& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__get_attrCertChecking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrCertChecking;
}
constexpr void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__set_attrCertChecking(::Org::BouncyCastle::X509::IX509AttributeCertificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attrCertChecking)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__get_completeCrlEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completeCrlEnabled;
}
constexpr bool const& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__get_completeCrlEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completeCrlEnabled;
}
constexpr void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__set_completeCrlEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___completeCrlEnabled = value;
}
constexpr bool& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__get_deltaCrlIndicatorEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deltaCrlIndicatorEnabled;
}
constexpr bool const& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__get_deltaCrlIndicatorEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deltaCrlIndicatorEnabled;
}
constexpr void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__set_deltaCrlIndicatorEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deltaCrlIndicatorEnabled = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__get_issuingDistributionPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuingDistributionPoint;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__get_issuingDistributionPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuingDistributionPoint;
}
constexpr void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__set_issuingDistributionPoint(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___issuingDistributionPoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__get_issuingDistributionPointEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuingDistributionPointEnabled;
}
constexpr bool const& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__get_issuingDistributionPointEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuingDistributionPointEnabled;
}
constexpr void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__set_issuingDistributionPointEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___issuingDistributionPointEnabled = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__get_maxBaseCrlNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxBaseCrlNumber;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__get_maxBaseCrlNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxBaseCrlNumber;
}
constexpr void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__set_maxBaseCrlNumber(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___maxBaseCrlNumber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* Org::BouncyCastle::X509::Store::X509CrlStoreSelector::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>());
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* Org::BouncyCastle::X509::Store::X509CrlStoreSelector::New_ctor(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(o));
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::_ctor(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::System::Object* Org::BouncyCastle::X509::Store::X509CrlStoreSelector::Clone() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_CertificateChecking() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                             "get_CertificateChecking", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_CertificateChecking(::Org::BouncyCastle::X509::X509Certificate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), "set_CertificateChecking", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_DateAndTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                             "get_DateAndTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Date::DateTimeObject*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_DateAndTime(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), "set_DateAndTime", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_Issuers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                             "get_Issuers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_Issuers(::System::Collections::ICollection* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), "set_Issuers", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_MaxCrlNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                             "get_MaxCrlNumber", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_MaxCrlNumber(::Org::BouncyCastle::Math::BigInteger* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), "set_MaxCrlNumber", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_MinCrlNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                             "get_MinCrlNumber", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_MinCrlNumber(::Org::BouncyCastle::Math::BigInteger* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), "set_MinCrlNumber", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_AttrCertChecking() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                             "get_AttrCertChecking", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::IX509AttributeCertificate*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_AttrCertChecking(::Org::BouncyCastle::X509::IX509AttributeCertificate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), "set_AttrCertChecking", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::IX509AttributeCertificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_CompleteCrlEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                             "get_CompleteCrlEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_CompleteCrlEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), "set_CompleteCrlEnabled",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_DeltaCrlIndicatorEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                             "get_DeltaCrlIndicatorEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_DeltaCrlIndicatorEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), "set_DeltaCrlIndicatorEnabled",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_IssuingDistributionPoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                             "get_IssuingDistributionPoint", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_IssuingDistributionPoint(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), "set_IssuingDistributionPoint",
                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_IssuingDistributionPointEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                             "get_IssuingDistributionPointEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_IssuingDistributionPointEnabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), "set_IssuingDistributionPointEnabled",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_MaxBaseCrlNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                             "get_MaxBaseCrlNumber", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_MaxBaseCrlNumber(::Org::BouncyCastle::Math::BigInteger* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), "set_MaxBaseCrlNumber", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::X509::Store::X509CrlStoreSelector::Match(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::X509CrlStoreSelector() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
