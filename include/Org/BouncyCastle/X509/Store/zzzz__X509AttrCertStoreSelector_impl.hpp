#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Store/X509AttrCertStoreSelector.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_impl.hpp"
#include "System/zzzz__ICloneable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509AttrCertStoreSelector_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/Utilities/Date/zzzz__DateTimeObject_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__AttributeCertificateHolder_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__AttributeCertificateIssuer_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509AttributeCertificate_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x25ee754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(
    ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*)>(&::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x25ee7cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.Match
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::System::Object*)>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::Match)> {
  constexpr static std::size_t size = 0x818;
  constexpr static std::size_t addrs = 0x25ee8c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "Match",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::Clone)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25ef0dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "Clone",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.get_AttributeCert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::IX509AttributeCertificate* (
    ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)()>(&::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_AttributeCert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ef134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "get_AttributeCert",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.set_AttributeCert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(
    ::Org::BouncyCastle::X509::IX509AttributeCertificate*)>(&::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_AttributeCert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ef13c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "set_AttributeCert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::IX509AttributeCertificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.get_AttribueCertificateValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Date::DateTimeObject* (
    ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)()>(&::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_AttribueCertificateValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ef144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(),
                                                 "get_AttribueCertificateValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.set_AttribueCertificateValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(
    ::Org::BouncyCastle::Utilities::Date::DateTimeObject*)>(&::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_AttribueCertificateValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ef14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "set_AttribueCertificateValid",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.get_AttributeCertificateValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Date::DateTimeObject* (
    ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)()>(&::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_AttributeCertificateValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ef154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(),
                                                 "get_AttributeCertificateValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.set_AttributeCertificateValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(
    ::Org::BouncyCastle::Utilities::Date::DateTimeObject*)>(&::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_AttributeCertificateValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ef15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "set_AttributeCertificateValid",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.get_Holder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::AttributeCertificateHolder* (
    ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)()>(&::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_Holder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ef164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "get_Holder",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.set_Holder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(
    ::Org::BouncyCastle::X509::AttributeCertificateHolder*)>(&::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_Holder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ef16c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "set_Holder", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::AttributeCertificateHolder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.get_Issuer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::AttributeCertificateIssuer* (
    ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)()>(&::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_Issuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ef174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "get_Issuer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.set_Issuer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(
    ::Org::BouncyCastle::X509::AttributeCertificateIssuer*)>(&::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_Issuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ef17c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "set_Issuer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.get_SerialNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_SerialNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ef184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "get_SerialNumber",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.set_SerialNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_SerialNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ef18c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "set_SerialNumber", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.AddTargetName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::Org::BouncyCastle::Asn1::X509::GeneralName*)>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::AddTargetName)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x25ef194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "AddTargetName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.AddTargetName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::AddTargetName)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25ef23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "AddTargetName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.SetTargetNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::System::Collections::IEnumerable*)>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::SetTargetNames)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x25ef268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "SetTargetNames", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.GetTargetNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::GetTargetNames)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x25ef710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "GetTargetNames",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.AddTargetGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::Org::BouncyCastle::Asn1::X509::GeneralName*)>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::AddTargetGroup)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x25ef770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "AddTargetGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.AddTargetGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::AddTargetGroup)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25ef818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "AddTargetGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.SetTargetGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::System::Collections::IEnumerable*)>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::SetTargetGroups)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x25ef844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "SetTargetGroups", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.GetTargetGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::GetTargetGroups)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x25ef85c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "GetTargetGroups",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.ExtractGeneralNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::System::Collections::IEnumerable*)>(&::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::ExtractGeneralNames)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x25ef280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "ExtractGeneralNames", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::X509::IX509AttributeCertificate*& Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::__cordl_internal_get_attributeCert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCert;
}
constexpr ::Org::BouncyCastle::X509::IX509AttributeCertificate* const& Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::__cordl_internal_get_attributeCert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCert;
}
constexpr void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::__cordl_internal_set_attributeCert(::Org::BouncyCastle::X509::IX509AttributeCertificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributeCert)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject*& Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::__cordl_internal_get_attributeCertificateValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCertificateValid;
}
constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject* const& Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::__cordl_internal_get_attributeCertificateValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCertificateValid;
}
constexpr void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::__cordl_internal_set_attributeCertificateValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributeCertificateValid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::X509::AttributeCertificateHolder*& Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::__cordl_internal_get_holder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___holder;
}
constexpr ::Org::BouncyCastle::X509::AttributeCertificateHolder* const& Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::__cordl_internal_get_holder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___holder;
}
constexpr void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::__cordl_internal_set_holder(::Org::BouncyCastle::X509::AttributeCertificateHolder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___holder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::X509::AttributeCertificateIssuer*& Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::__cordl_internal_get_issuer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr ::Org::BouncyCastle::X509::AttributeCertificateIssuer* const& Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::__cordl_internal_get_issuer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::__cordl_internal_set_issuer(::Org::BouncyCastle::X509::AttributeCertificateIssuer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___issuer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::__cordl_internal_get_serialNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialNumber;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::__cordl_internal_get_serialNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialNumber;
}
constexpr void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::__cordl_internal_set_serialNumber(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serialNumber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::__cordl_internal_get_targetNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetNames;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::__cordl_internal_get_targetNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetNames;
}
constexpr void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::__cordl_internal_set_targetNames(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___targetNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::__cordl_internal_get_targetGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetGroups;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::__cordl_internal_get_targetGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetGroups;
}
constexpr void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::__cordl_internal_set_targetGroups(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___targetGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::_ctor(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector* o) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline bool Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::Match(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "Match",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline ::System::Object* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::Clone() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "Clone",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_AttributeCert() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "get_AttributeCert",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::IX509AttributeCertificate*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_AttributeCert(::Org::BouncyCastle::X509::IX509AttributeCertificate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "set_AttributeCert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::IX509AttributeCertificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_AttribueCertificateValid() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(),
                                               "get_AttribueCertificateValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Date::DateTimeObject*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_AttribueCertificateValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "set_AttribueCertificateValid",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_AttributeCertificateValid() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(),
                                               "get_AttributeCertificateValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Date::DateTimeObject*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_AttributeCertificateValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "set_AttributeCertificateValid",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::X509::AttributeCertificateHolder* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_Holder() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "get_Holder",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::AttributeCertificateHolder*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_Holder(::Org::BouncyCastle::X509::AttributeCertificateHolder* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "set_Holder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::AttributeCertificateHolder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::X509::AttributeCertificateIssuer* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_Issuer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "get_Issuer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::AttributeCertificateIssuer*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_Issuer(::Org::BouncyCastle::X509::AttributeCertificateIssuer* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "set_Issuer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_SerialNumber() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "get_SerialNumber",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_SerialNumber(::Org::BouncyCastle::Math::BigInteger* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "set_SerialNumber", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::AddTargetName(::Org::BouncyCastle::Asn1::X509::GeneralName* name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "AddTargetName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::AddTargetName(::ArrayW<uint8_t, ::Array<uint8_t>*> name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "AddTargetName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::SetTargetNames(::System::Collections::IEnumerable* names) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "SetTargetNames", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, names);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::GetTargetNames() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "GetTargetNames",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::AddTargetGroup(::Org::BouncyCastle::Asn1::X509::GeneralName* group) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "AddTargetGroup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, group);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::AddTargetGroup(::ArrayW<uint8_t, ::Array<uint8_t>*> name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "AddTargetGroup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::SetTargetGroups(::System::Collections::IEnumerable* names) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "SetTargetGroups", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, names);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::GetTargetGroups() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "GetTargetGroups",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::ExtractGeneralNames(::System::Collections::IEnumerable* names) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>::get(), "ExtractGeneralNames", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(this, ___internal_method, names);
}
inline ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>());
}
inline ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*
Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::New_ctor(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(o));
}
/// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509Selector"
constexpr Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::operator ::Org::BouncyCastle::X509::Store::IX509Selector*() noexcept {
  return static_cast<::Org::BouncyCastle::X509::Store::IX509Selector*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::X509::Store::IX509Selector"
constexpr ::Org::BouncyCastle::X509::Store::IX509Selector* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::i___Org__BouncyCastle__X509__Store__IX509Selector() noexcept {
  return static_cast<::Org::BouncyCastle::X509::Store::IX509Selector*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::X509AttrCertStoreSelector() {}
