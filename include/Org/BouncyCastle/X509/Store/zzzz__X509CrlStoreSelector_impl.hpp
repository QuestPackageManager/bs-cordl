#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Store/X509CrlStoreSelector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CrlStoreSelector_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Utilities/Date/zzzz__DateTimeObject_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509AttributeCertificate_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(&::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363fb78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x363fb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::Clone)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x363fca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.get_CertificateChecking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_CertificateChecking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363fcfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "get_CertificateChecking", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.set_CertificateChecking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_CertificateChecking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363fd04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(),
                                                                                           { "set_CertificateChecking", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.get_DateAndTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Date::DateTimeObject* (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_DateAndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363fd0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "get_DateAndTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.set_DateAndTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(::Org::BouncyCastle::Utilities::Date::DateTimeObject*)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_DateAndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363fd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(),
                                                                                           { "set_DateAndTime", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.get_Issuers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_Issuers)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x363fbe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "get_Issuers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.set_Issuers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(::System::Collections::ICollection*)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_Issuers)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x363fd1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(),
                                                                                           { "set_Issuers", {}, { ::i2c::type_of<::System::Collections::ICollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.get_MaxCrlNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_MaxCrlNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363fd88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "get_MaxCrlNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.set_MaxCrlNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_MaxCrlNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363fd90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(),
                                                                                           { "set_MaxCrlNumber", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.get_MinCrlNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_MinCrlNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363fd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "get_MinCrlNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.set_MinCrlNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_MinCrlNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363fda0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(),
                                                                                           { "set_MinCrlNumber", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.get_AttrCertChecking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::IX509AttributeCertificate* (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_AttrCertChecking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363fda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "get_AttrCertChecking", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.set_AttrCertChecking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(::Org::BouncyCastle::X509::IX509AttributeCertificate*)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_AttrCertChecking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363fdb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(),
                                                             { "set_AttrCertChecking", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::IX509AttributeCertificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.get_CompleteCrlEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_CompleteCrlEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363fdb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "get_CompleteCrlEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.set_CompleteCrlEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(bool)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_CompleteCrlEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363fdc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "set_CompleteCrlEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.get_DeltaCrlIndicatorEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_DeltaCrlIndicatorEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363fdc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "get_DeltaCrlIndicatorEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.set_DeltaCrlIndicatorEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(bool)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_DeltaCrlIndicatorEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363fdd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "set_DeltaCrlIndicatorEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.get_IssuingDistributionPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_IssuingDistributionPoint)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x363fc44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "get_IssuingDistributionPoint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.set_IssuingDistributionPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_IssuingDistributionPoint)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x363fdd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "set_IssuingDistributionPoint", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.get_IssuingDistributionPointEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_IssuingDistributionPointEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363fe44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "get_IssuingDistributionPointEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.set_IssuingDistributionPointEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(bool)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_IssuingDistributionPointEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363fe4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "set_IssuingDistributionPointEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.get_MaxBaseCrlNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_MaxBaseCrlNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363fe54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "get_MaxBaseCrlNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.set_MaxBaseCrlNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_MaxBaseCrlNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363fe5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(),
                                                                                           { "set_MaxBaseCrlNumber", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector.Match
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::*)(::System::Object*)>(
    &::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::Match)> {
  constexpr static std::size_t size = 0x718;
  constexpr static std::size_t addrs = 0x363fe64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), 7 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::X509::X509Certificate*& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_get_certificateChecking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateChecking;
}
constexpr ::Org::BouncyCastle::X509::X509Certificate* const& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_get_certificateChecking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateChecking;
}
constexpr void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_set_certificateChecking(::Org::BouncyCastle::X509::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certificateChecking = value;
}
constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject*& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_get_dateAndTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dateAndTime;
}
constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject* const& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_get_dateAndTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dateAndTime;
}
constexpr void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_set_dateAndTime(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dateAndTime = value;
}
constexpr ::System::Collections::ICollection*& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_get_issuers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuers;
}
constexpr ::System::Collections::ICollection* const& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_get_issuers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuers;
}
constexpr void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_set_issuers(::System::Collections::ICollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___issuers = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_get_maxCrlNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCrlNumber;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_get_maxCrlNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCrlNumber;
}
constexpr void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_set_maxCrlNumber(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCrlNumber = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_get_minCrlNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minCrlNumber;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_get_minCrlNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minCrlNumber;
}
constexpr void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_set_minCrlNumber(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minCrlNumber = value;
}
constexpr ::Org::BouncyCastle::X509::IX509AttributeCertificate*& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_get_attrCertChecking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrCertChecking;
}
constexpr ::Org::BouncyCastle::X509::IX509AttributeCertificate* const& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_get_attrCertChecking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrCertChecking;
}
constexpr void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_set_attrCertChecking(::Org::BouncyCastle::X509::IX509AttributeCertificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attrCertChecking = value;
}
constexpr bool& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_get_completeCrlEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completeCrlEnabled;
}
constexpr bool const& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_get_completeCrlEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completeCrlEnabled;
}
constexpr void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_set_completeCrlEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___completeCrlEnabled = value;
}
constexpr bool& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_get_deltaCrlIndicatorEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deltaCrlIndicatorEnabled;
}
constexpr bool const& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_get_deltaCrlIndicatorEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deltaCrlIndicatorEnabled;
}
constexpr void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_set_deltaCrlIndicatorEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deltaCrlIndicatorEnabled = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_get_issuingDistributionPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuingDistributionPoint;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_get_issuingDistributionPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuingDistributionPoint;
}
constexpr void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_set_issuingDistributionPoint(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___issuingDistributionPoint = value;
}
constexpr bool& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_get_issuingDistributionPointEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuingDistributionPointEnabled;
}
constexpr bool const& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_get_issuingDistributionPointEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuingDistributionPointEnabled;
}
constexpr void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_set_issuingDistributionPointEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___issuingDistributionPointEnabled = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_get_maxBaseCrlNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxBaseCrlNumber;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_get_maxBaseCrlNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxBaseCrlNumber;
}
constexpr void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::__cordl_internal_set_maxBaseCrlNumber(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxBaseCrlNumber = value;
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::_ctor(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* o) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::System::Object* Org::BouncyCastle::X509::Store::X509CrlStoreSelector::Clone() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_CertificateChecking() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "get_CertificateChecking", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_CertificateChecking(::Org::BouncyCastle::X509::X509Certificate* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(),
                                                                                         { "set_CertificateChecking", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_DateAndTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "get_DateAndTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_DateAndTime(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(),
                                                                                         { "set_DateAndTime", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_Issuers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "get_Issuers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_Issuers(::System::Collections::ICollection* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "set_Issuers", {}, { ::i2c::type_of<::System::Collections::ICollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_MaxCrlNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "get_MaxCrlNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_MaxCrlNumber(::Org::BouncyCastle::Math::BigInteger* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(),
                                                                                         { "set_MaxCrlNumber", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_MinCrlNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "get_MinCrlNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_MinCrlNumber(::Org::BouncyCastle::Math::BigInteger* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(),
                                                                                         { "set_MinCrlNumber", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_AttrCertChecking() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "get_AttrCertChecking", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_AttrCertChecking(::Org::BouncyCastle::X509::IX509AttributeCertificate* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(),
                                                                                         { "set_AttrCertChecking", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::IX509AttributeCertificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_CompleteCrlEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "get_CompleteCrlEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_CompleteCrlEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "set_CompleteCrlEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_DeltaCrlIndicatorEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "get_DeltaCrlIndicatorEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_DeltaCrlIndicatorEnabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "set_DeltaCrlIndicatorEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_IssuingDistributionPoint() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "get_IssuingDistributionPoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_IssuingDistributionPoint(::ArrayW<uint8_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "set_IssuingDistributionPoint", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_IssuingDistributionPointEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "get_IssuingDistributionPointEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_IssuingDistributionPointEnabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "set_IssuingDistributionPointEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::X509::Store::X509CrlStoreSelector::get_MaxBaseCrlNumber() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), { "get_MaxBaseCrlNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CrlStoreSelector::set_MaxBaseCrlNumber(::Org::BouncyCastle::Math::BigInteger* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(),
                                                                                         { "set_MaxBaseCrlNumber", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::X509::Store::X509CrlStoreSelector::Match(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* Org::BouncyCastle::X509::Store::X509CrlStoreSelector::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>());
}
inline ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* Org::BouncyCastle::X509::Store::X509CrlStoreSelector::New_ctor(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(o));
}
/// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509Selector"
constexpr Org::BouncyCastle::X509::Store::X509CrlStoreSelector::operator ::Org::BouncyCastle::X509::Store::IX509Selector*() noexcept {
  return static_cast<::Org::BouncyCastle::X509::Store::IX509Selector*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::X509::Store::IX509Selector"
constexpr ::Org::BouncyCastle::X509::Store::IX509Selector* Org::BouncyCastle::X509::Store::X509CrlStoreSelector::i___Org__BouncyCastle__X509__Store__IX509Selector() noexcept {
  return static_cast<::Org::BouncyCastle::X509::Store::IX509Selector*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr Org::BouncyCastle::X509::Store::X509CrlStoreSelector::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* Org::BouncyCastle::X509::Store::X509CrlStoreSelector::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector::X509CrlStoreSelector() {}
