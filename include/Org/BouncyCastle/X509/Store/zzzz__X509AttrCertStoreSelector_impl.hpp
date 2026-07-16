#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Store/X509AttrCertStoreSelector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509AttrCertStoreSelector_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/Utilities/Date/zzzz__DateTimeObject_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__AttributeCertificateHolder_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__AttributeCertificateIssuer_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509AttributeCertificate_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)()>(&::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x363e0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*)>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x363e128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.Match
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::System::Object*)>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::Match)> {
  constexpr static std::size_t size = 0x81c;
  constexpr static std::size_t addrs = 0x363e208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "Match", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::Clone)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x363ea24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.get_AttributeCert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::IX509AttributeCertificate* (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_AttributeCert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363ea80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "get_AttributeCert", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.set_AttributeCert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::Org::BouncyCastle::X509::IX509AttributeCertificate*)>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_AttributeCert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363ea88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                                                           { "set_AttributeCert", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::IX509AttributeCertificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.get_AttribueCertificateValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Date::DateTimeObject* (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_AttribueCertificateValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363ea90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "get_AttribueCertificateValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.set_AttribueCertificateValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::Org::BouncyCastle::Utilities::Date::DateTimeObject*)>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_AttribueCertificateValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363ea98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                             { "set_AttribueCertificateValid", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.get_AttributeCertificateValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Date::DateTimeObject* (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_AttributeCertificateValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363eaa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "get_AttributeCertificateValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.set_AttributeCertificateValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::Org::BouncyCastle::Utilities::Date::DateTimeObject*)>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_AttributeCertificateValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363eaa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                             { "set_AttributeCertificateValid", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.get_Holder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::AttributeCertificateHolder* (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_Holder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363eab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "get_Holder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.set_Holder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::Org::BouncyCastle::X509::AttributeCertificateHolder*)>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_Holder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363eab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                                                           { "set_Holder", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::AttributeCertificateHolder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.get_Issuer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::AttributeCertificateIssuer* (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_Issuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363eac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "get_Issuer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.set_Issuer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::Org::BouncyCastle::X509::AttributeCertificateIssuer*)>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_Issuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363eac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                                                           { "set_Issuer", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.get_SerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_SerialNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363ead0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "get_SerialNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.set_SerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_SerialNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363ead8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                                                           { "set_SerialNumber", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.AddTargetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::Org::BouncyCastle::Asn1::X509::GeneralName*)>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::AddTargetName)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x363eae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                                                           { "AddTargetName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.AddTargetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::AddTargetName)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x363eb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "AddTargetName", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.SetTargetNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::System::Collections::IEnumerable*)>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::SetTargetNames)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x363ebc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                                                           { "SetTargetNames", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.GetTargetNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::GetTargetNames)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x363f054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "GetTargetNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.AddTargetGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::Org::BouncyCastle::Asn1::X509::GeneralName*)>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::AddTargetGroup)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x363f0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                                                           { "AddTargetGroup", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.AddTargetGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::AddTargetGroup)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x363f16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "AddTargetGroup", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.SetTargetGroups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::System::Collections::IEnumerable*)>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::SetTargetGroups)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x363f198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                                                           { "SetTargetGroups", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.GetTargetGroups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::GetTargetGroups)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x363f1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "GetTargetGroups", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector.ExtractGeneralNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::*)(::System::Collections::IEnumerable*)>(&::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::ExtractGeneralNames)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x363ebd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                                                           { "ExtractGeneralNames", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
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
  this->___attributeCert = value;
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
  this->___attributeCertificateValid = value;
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
  this->___holder = value;
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
  this->___issuer = value;
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
  this->___serialNumber = value;
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
  this->___targetNames = value;
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
  this->___targetGroups = value;
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::_ctor(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector* o) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline bool Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::Match(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "Match", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline ::System::Object* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_AttributeCert() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "get_AttributeCert", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_AttributeCert(::Org::BouncyCastle::X509::IX509AttributeCertificate* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                                                         { "set_AttributeCert", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::IX509AttributeCertificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_AttribueCertificateValid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "get_AttribueCertificateValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_AttribueCertificateValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                           { "set_AttribueCertificateValid", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_AttributeCertificateValid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "get_AttributeCertificateValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_AttributeCertificateValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                           { "set_AttributeCertificateValid", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::X509::AttributeCertificateHolder* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_Holder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "get_Holder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::AttributeCertificateHolder*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_Holder(::Org::BouncyCastle::X509::AttributeCertificateHolder* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                                                         { "set_Holder", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::AttributeCertificateHolder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::X509::AttributeCertificateIssuer* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_Issuer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "get_Issuer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_Issuer(::Org::BouncyCastle::X509::AttributeCertificateIssuer* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                                                         { "set_Issuer", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::get_SerialNumber() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "get_SerialNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::set_SerialNumber(::Org::BouncyCastle::Math::BigInteger* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                                                         { "set_SerialNumber", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::AddTargetName(::Org::BouncyCastle::Asn1::X509::GeneralName* name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                                                         { "AddTargetName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::AddTargetName(::ArrayW<uint8_t> name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "AddTargetName", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::SetTargetNames(::System::Collections::IEnumerable* names) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                                                         { "SetTargetNames", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, names);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::GetTargetNames() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "GetTargetNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::AddTargetGroup(::Org::BouncyCastle::Asn1::X509::GeneralName* group) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                                                         { "AddTargetGroup", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::AddTargetGroup(::ArrayW<uint8_t> name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "AddTargetGroup", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::SetTargetGroups(::System::Collections::IEnumerable* names) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                                                         { "SetTargetGroups", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, names);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::GetTargetGroups() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), { "GetTargetGroups", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::ExtractGeneralNames(::System::Collections::IEnumerable* names) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(),
                                                                                         { "ExtractGeneralNames", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method, names);
}
inline ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector* Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>());
}
inline ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*
Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector::New_ctor(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector* o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(o));
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
