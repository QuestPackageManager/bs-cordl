#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Store/X509CertStoreSelector.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(&::Org::BouncyCastle::X509::Store::X509CertStoreSelector::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x36ce280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::Org::BouncyCastle::X509::Store::X509CertStoreSelector*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x36ce28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::Clone)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x36ce404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_AuthorityKeyIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_AuthorityKeyIdentifier)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x36ce32c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_AuthorityKeyIdentifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_AuthorityKeyIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_AuthorityKeyIdentifier)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x36ce460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "set_AuthorityKeyIdentifier", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_BasicConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_BasicConstraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ce4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_BasicConstraints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_BasicConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(int32_t)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_BasicConstraints)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x36ce4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "set_BasicConstraints", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_Certificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_Certificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ce54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_Certificate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_Certificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_Certificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ce554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                           { "set_Certificate", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_CertificateValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Date::DateTimeObject* (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_CertificateValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ce55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_CertificateValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_CertificateValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::Org::BouncyCastle::Utilities::Date::DateTimeObject*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_CertificateValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ce564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                             { "set_CertificateValid", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_ExtendedKeyUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_ExtendedKeyUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ce38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_ExtendedKeyUsage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_ExtendedKeyUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_ExtendedKeyUsage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x36ce5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                           { "set_ExtendedKeyUsage", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_IgnoreX509NameOrdering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_IgnoreX509NameOrdering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ce5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_IgnoreX509NameOrdering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_IgnoreX509NameOrdering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(bool)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_IgnoreX509NameOrdering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ce5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "set_IgnoreX509NameOrdering", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_Issuer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_Issuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ce604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_Issuer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_Issuer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_Issuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ce60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                           { "set_Issuer", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_IssuerAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_IssuerAsString)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x36ce614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_IssuerAsString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_KeyUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_KeyUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ce394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_KeyUsage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_KeyUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::ArrayW<bool>)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_KeyUsage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x36ce6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "set_KeyUsage", {}, { ::i2c::type_of<::ArrayW<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_Policy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_Policy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ce39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_Policy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_Policy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_Policy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x36ce6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                           { "set_Policy", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_PrivateKeyValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Date::DateTimeObject* (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_PrivateKeyValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ce6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_PrivateKeyValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_PrivateKeyValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::Org::BouncyCastle::Utilities::Date::DateTimeObject*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_PrivateKeyValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ce6e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                             { "set_PrivateKeyValid", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_SerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_SerialNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ce6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_SerialNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_SerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_SerialNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ce6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                           { "set_SerialNumber", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_Subject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_Subject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ce6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_Subject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_Subject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_Subject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ce704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                           { "set_Subject", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_SubjectAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_SubjectAsString)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x36ce70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_SubjectAsString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_SubjectKeyIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_SubjectKeyIdentifier)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x36ce3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_SubjectKeyIdentifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_SubjectKeyIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_SubjectKeyIdentifier)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x36ccb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "set_SubjectKeyIdentifier", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_SubjectPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_SubjectPublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ce724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_SubjectPublicKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_SubjectPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_SubjectPublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ce72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                             { "set_SubjectPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.get_SubjectPublicKeyAlgID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_SubjectPublicKeyAlgID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ce734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_SubjectPublicKeyAlgID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.set_SubjectPublicKeyAlgID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_SubjectPublicKeyAlgID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ce73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                             { "set_SubjectPublicKeyAlgID", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.Match
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::X509::Store::X509CertStoreSelector::*)(::System::Object*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::Match)> {
  constexpr static std::size_t size = 0xacc;
  constexpr static std::size_t addrs = 0x36ce744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.IssuersMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Asn1::X509::X509Name*, ::Org::BouncyCastle::Asn1::X509::X509Name*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::IssuersMatch)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x36cf2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                         { "IssuersMatch", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.CopyBoolArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (*)(::ArrayW<bool>)>(&::Org::BouncyCastle::X509::Store::X509CertStoreSelector::CopyBoolArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x36ce62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "CopyBoolArray", {}, { ::i2c::type_of<::ArrayW<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.CopySet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (*)(::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::CopySet)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x36ce56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                           { "CopySet", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.GetSubjectPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* (*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::GetSubjectPublicKey)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x36cf2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                           { "GetSubjectPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertStoreSelector.MatchExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::X509::Store::X509CertStoreSelector::MatchExtension)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x36cf210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                           { "MatchExtension",
                                                                                             {},
                                                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_authorityKeyIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authorityKeyIdentifier;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_authorityKeyIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authorityKeyIdentifier;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_authorityKeyIdentifier(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___authorityKeyIdentifier = value;
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
constexpr ::Org::BouncyCastle::X509::X509Certificate* const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_certificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificate;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_certificate(::Org::BouncyCastle::X509::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certificate = value;
}
constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject*& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_certificateValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateValid;
}
constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject* const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_certificateValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateValid;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_certificateValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certificateValid = value;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_extendedKeyUsage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extendedKeyUsage;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_extendedKeyUsage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extendedKeyUsage;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_extendedKeyUsage(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extendedKeyUsage = value;
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
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name* const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_issuer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_issuer(::Org::BouncyCastle::Asn1::X509::X509Name* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___issuer = value;
}
constexpr ::ArrayW<bool>& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_keyUsage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyUsage;
}
constexpr ::ArrayW<bool> const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_keyUsage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyUsage;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_keyUsage(::ArrayW<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyUsage = value;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_policy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policy;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_policy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policy;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_policy(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___policy = value;
}
constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject*& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_privateKeyValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKeyValid;
}
constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject* const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_privateKeyValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKeyValid;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_privateKeyValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___privateKeyValid = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_serialNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialNumber;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_serialNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialNumber;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_serialNumber(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serialNumber = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_subject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subject;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name* const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_subject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subject;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_subject(::Org::BouncyCastle::Asn1::X509::X509Name* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subject = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_subjectKeyIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectKeyIdentifier;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_subjectKeyIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectKeyIdentifier;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_subjectKeyIdentifier(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subjectKeyIdentifier = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_subjectPublicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectPublicKey;
}
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_subjectPublicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectPublicKey;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_subjectPublicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subjectPublicKey = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_subjectPublicKeyAlgID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectPublicKeyAlgID;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_get_subjectPublicKeyAlgID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectPublicKeyAlgID;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertStoreSelector::__cordl_internal_set_subjectPublicKeyAlgID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subjectPublicKeyAlgID = value;
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::_ctor(::Org::BouncyCastle::X509::Store::X509CertStoreSelector* o) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::System::Object* Org::BouncyCastle::X509::Store::X509CertStoreSelector::Clone() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_AuthorityKeyIdentifier() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_AuthorityKeyIdentifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_AuthorityKeyIdentifier(::ArrayW<uint8_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "set_AuthorityKeyIdentifier", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_BasicConstraints() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_BasicConstraints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_BasicConstraints(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "set_BasicConstraints", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_Certificate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_Certificate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_Certificate(::Org::BouncyCastle::X509::X509Certificate* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                         { "set_Certificate", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_CertificateValid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_CertificateValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_CertificateValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                         { "set_CertificateValid", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_ExtendedKeyUsage() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_ExtendedKeyUsage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_ExtendedKeyUsage(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                         { "set_ExtendedKeyUsage", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_IgnoreX509NameOrdering() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_IgnoreX509NameOrdering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_IgnoreX509NameOrdering(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "set_IgnoreX509NameOrdering", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_Issuer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_Issuer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_Issuer(::Org::BouncyCastle::Asn1::X509::X509Name* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                         { "set_Issuer", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_IssuerAsString() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_IssuerAsString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<bool> Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_KeyUsage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_KeyUsage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_KeyUsage(::ArrayW<bool> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "set_KeyUsage", {}, { ::i2c::type_of<::ArrayW<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_Policy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_Policy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_Policy(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                         { "set_Policy", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_PrivateKeyValid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_PrivateKeyValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_PrivateKeyValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                         { "set_PrivateKeyValid", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_SerialNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_SerialNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_SerialNumber(::Org::BouncyCastle::Math::BigInteger* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                         { "set_SerialNumber", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_Subject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_Subject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_Subject(::Org::BouncyCastle::Asn1::X509::X509Name* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                         { "set_Subject", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_SubjectAsString() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_SubjectAsString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_SubjectKeyIdentifier() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_SubjectKeyIdentifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_SubjectKeyIdentifier(::ArrayW<uint8_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "set_SubjectKeyIdentifier", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_SubjectPublicKey() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_SubjectPublicKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_SubjectPublicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                           { "set_SubjectPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::X509::Store::X509CertStoreSelector::get_SubjectPublicKeyAlgID() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "get_SubjectPublicKeyAlgID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertStoreSelector::set_SubjectPublicKeyAlgID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                         { "set_SubjectPublicKeyAlgID", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::X509::Store::X509CertStoreSelector::Match(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool Org::BouncyCastle::X509::Store::X509CertStoreSelector::IssuersMatch(::Org::BouncyCastle::Asn1::X509::X509Name* a, ::Org::BouncyCastle::Asn1::X509::X509Name* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                              { "IssuersMatch", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::ArrayW<bool> Org::BouncyCastle::X509::Store::X509CertStoreSelector::CopyBoolArray(::ArrayW<bool> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), { "CopyBoolArray", {}, { ::i2c::type_of<::ArrayW<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(nullptr, ___internal_method, b);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::X509::Store::X509CertStoreSelector::CopySet(::Org::BouncyCastle::Utilities::Collections::ISet* s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                         { "CopySet", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(nullptr, ___internal_method, s);
}
inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* Org::BouncyCastle::X509::Store::X509CertStoreSelector::GetSubjectPublicKey(::Org::BouncyCastle::X509::X509Certificate* c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                         { "GetSubjectPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*>(nullptr, ___internal_method, c);
}
inline bool Org::BouncyCastle::X509::Store::X509CertStoreSelector::MatchExtension(::ArrayW<uint8_t> b, ::Org::BouncyCastle::X509::X509Certificate* c,
                                                                                  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(),
                                                                                         { "MatchExtension",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, b, c, oid);
}
inline ::Org::BouncyCastle::X509::Store::X509CertStoreSelector* Org::BouncyCastle::X509::Store::X509CertStoreSelector::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>());
}
inline ::Org::BouncyCastle::X509::Store::X509CertStoreSelector* Org::BouncyCastle::X509::Store::X509CertStoreSelector::New_ctor(::Org::BouncyCastle::X509::Store::X509CertStoreSelector* o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(o));
}
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
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::Store::X509CertStoreSelector::X509CertStoreSelector() {}
