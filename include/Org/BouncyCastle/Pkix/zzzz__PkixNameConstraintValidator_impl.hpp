#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Pkix\PkixNameConstraintValidator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixNameConstraintValidator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralSubtree_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__OtherName_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)()>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x35ca6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.WithinDNSubtree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Asn1::Asn1Sequence*, ::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::WithinDNSubtree)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x35d96bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                         { "WithinDNSubtree", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckPermittedDN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedDN)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x35d9a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                           { "CheckPermittedDN", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckExcludedDN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedDN)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x35d9bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                           { "CheckExcludedDN", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectDN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectDN)> {
  constexpr static std::size_t size = 0x78c;
  constexpr static std::size_t addrs = 0x35d9c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                            { "IntersectDN", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionDN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionDN)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x35da3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                         { "UnionDN", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectOtherName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectOtherName)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x35da9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
            { "IntersectOtherName", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectOtherName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Asn1::X509::OtherName*, ::Org::BouncyCastle::Asn1::X509::OtherName*, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectOtherName)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x35daffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                             { "IntersectOtherName",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::OtherName*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::OtherName*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionOtherName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Asn1::X509::OtherName*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionOtherName)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x35db0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                            { "UnionOtherName", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::OtherName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectEmail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectEmail)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x35db1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                            { "IntersectEmail", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionEmail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionEmail)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x35dbd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                             { "UnionEmail", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectIP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectIP)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x35dc998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                            { "IntersectIP", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionIP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::ArrayW<uint8_t>)>(
        &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionIP)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x35dd2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                             { "UnionIP", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionIPRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionIPRange)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x35dd788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                           { "UnionIPRange", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectIPRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectIPRange)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x35dd0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                           { "IntersectIPRange", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IpWithSubnetMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IpWithSubnetMask)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x35ddfbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                           { "IpWithSubnetMask", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.ExtractIPsAndSubnetMasks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ArrayW<uint8_t>> (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ExtractIPsAndSubnetMasks)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x35dd960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                             { "ExtractIPsAndSubnetMasks", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.MinMaxIPs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ArrayW<uint8_t>> (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::MinMaxIPs)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x35ddae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                         { "MinMaxIPs", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsOtherNameConstrained
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Asn1::X509::OtherName*, ::Org::BouncyCastle::Asn1::X509::OtherName*)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsOtherNameConstrained)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x35de064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                            { "IsOtherNameConstrained", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::OtherName*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::OtherName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsOtherNameConstrained
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Asn1::X509::OtherName*)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsOtherNameConstrained)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x35de080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                         { "IsOtherNameConstrained", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::OtherName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckPermittedOtherName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Asn1::X509::OtherName*)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedOtherName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x35de368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                         { "CheckPermittedOtherName", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::OtherName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckExcludedOtherName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Asn1::X509::OtherName*)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedOtherName)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x35de430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                         { "CheckExcludedOtherName", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::OtherName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsEmailConstrained
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::StringW, ::StringW)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsEmailConstrained)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x35de488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                           { "IsEmailConstrained", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsEmailConstrained
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsEmailConstrained)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x35de830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                             { "IsEmailConstrained", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckPermittedEmail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedEmail)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x35deb20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                             { "CheckPermittedEmail", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckExcludedEmail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedEmail)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x35dec38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                             { "CheckExcludedEmail", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsDnsConstrained
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::StringW, ::StringW)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsDnsConstrained)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x35dec90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                           { "IsDnsConstrained", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsDnsConstrained
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsDnsConstrained)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x35ded20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                             { "IsDnsConstrained", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckPermittedDns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedDns)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x35df010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                             { "CheckPermittedDns", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckExcludedDns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedDns)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x35df128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                             { "CheckExcludedDns", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsDirectoryConstrained
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsDirectoryConstrained)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x35df180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                            { "IsDirectoryConstrained", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckPermittedDirectory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedDirectory)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x35d9a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                            { "CheckPermittedDirectory", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckExcludedDirectory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedDirectory)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x35d9bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                            { "CheckExcludedDirectory", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsUriConstrained
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::StringW, ::StringW)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsUriConstrained)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x35df48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                           { "IsUriConstrained", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsUriConstrained
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsUriConstrained)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x35df75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                             { "IsUriConstrained", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckPermittedUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedUri)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x35dfa4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                             { "CheckPermittedUri", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckExcludedUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedUri)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x35dfb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                             { "CheckExcludedUri", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsIPConstrained
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsIPConstrained)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x35dfbbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                           { "IsIPConstrained", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IsIPConstrained
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsIPConstrained)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x35dfd7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                { "IsIPConstrained", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckPermittedIP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedIP)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x35e00a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                { "CheckPermittedIP", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CheckExcludedIP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedIP)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x35e01b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                { "CheckExcludedIP", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.WithinDomain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::StringW, ::StringW)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::WithinDomain)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x35de620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                           { "WithinDomain", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionEmail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::StringW, ::StringW, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionEmail)> {
  constexpr static std::size_t size = 0x834;
  constexpr static std::size_t addrs = 0x35dc164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                         { "UnionEmail", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.unionURI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::StringW, ::StringW, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::unionURI)> {
  constexpr static std::size_t size = 0x834;
  constexpr static std::size_t addrs = 0x35e0210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                         { "unionURI", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectDns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectDns)> {
  constexpr static std::size_t size = 0x754;
  constexpr static std::size_t addrs = 0x35e0a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                            { "IntersectDns", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionDns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionDns)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x35e1198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                             { "UnionDns", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectEmail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::StringW, ::StringW, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectEmail)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x35db84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                            { "IntersectEmail", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectUri)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x35e175c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                            { "IntersectUri", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.UnionUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::StringW)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionUri)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x35e22d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                             { "UnionUri", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::StringW, ::StringW, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectUri)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x35e1dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                         { "IntersectUri", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.ExtractHostFromURL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ExtractHostFromURL)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x35df584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(), { "ExtractHostFromURL", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.checkPermitted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Asn1::X509::GeneralName*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::checkPermitted)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x35e26c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                           { "checkPermitted", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.checkExcluded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Asn1::X509::GeneralName*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::checkExcluded)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x35e27d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                           { "checkExcluded", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectPermittedSubtree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectPermittedSubtree)> {
  constexpr static std::size_t size = 0xa04;
  constexpr static std::size_t addrs = 0x35e28ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                           { "IntersectPermittedSubtree", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.ExtractNameAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Asn1::X509::GeneralName*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ExtractNameAsString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x35db820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                           { "ExtractNameAsString", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.IntersectEmptyPermittedSubtree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(int32_t)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectEmptyPermittedSubtree)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x35e32f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(), { "IntersectEmptyPermittedSubtree", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.AddExcludedSubtree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Asn1::X509::GeneralSubtree*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::AddExcludedSubtree)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x35e342c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                           { "AddExcludedSubtree", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.Max
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Max)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x35ddd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                           { "Max", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.Min
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Min)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x35ddd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                           { "Min", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CompareTo)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x35dde08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                           { "CompareTo", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.Or
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Or)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x35ddeec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                           { "Or", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.HashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)()>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::HashCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x35e35d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(), { "HashCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)()>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::GetHashCode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x35e35dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.HashCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::System::Collections::ICollection*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::HashCollection)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x35e36cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                           { "HashCollection", {}, { ::i2c::type_of<::System::Collections::ICollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::System::Object*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Equals)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x35e3a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.CollectionsAreEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::System::Collections::ICollection*, ::System::Collections::ICollection*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CollectionsAreEqual)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0x35e3b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                { "CollectionsAreEqual", {}, { ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::System::Collections::ICollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.SpecialEquals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::System::Object*, ::System::Object*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::SpecialEquals)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x35e41c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                           { "SpecialEquals", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.StringifyIP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::StringifyIP)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x35e42f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(), { "StringifyIP", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.StringifyIPCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::StringifyIPCollection)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x35e44a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                           { "StringifyIPCollection", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.StringifyOtherNameCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)(::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::StringifyOtherNameCollection)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x35e487c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                             { "StringifyOtherNameCollection", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::*)()>(&::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ToString)> {
  constexpr static std::size_t size = 0x6e8;
  constexpr static std::size_t addrs = 0x35e4df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_excludedSubtreesDN() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesDN;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_excludedSubtreesDN() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesDN;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_set_excludedSubtreesDN(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___excludedSubtreesDN = value;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_excludedSubtreesDNS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesDNS;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_excludedSubtreesDNS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesDNS;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_set_excludedSubtreesDNS(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___excludedSubtreesDNS = value;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_excludedSubtreesEmail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesEmail;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_excludedSubtreesEmail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesEmail;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_set_excludedSubtreesEmail(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___excludedSubtreesEmail = value;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_excludedSubtreesURI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesURI;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_excludedSubtreesURI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesURI;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_set_excludedSubtreesURI(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___excludedSubtreesURI = value;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_excludedSubtreesIP() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesIP;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_excludedSubtreesIP() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesIP;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_set_excludedSubtreesIP(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___excludedSubtreesIP = value;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_excludedSubtreesOtherName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesOtherName;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_excludedSubtreesOtherName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedSubtreesOtherName;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_set_excludedSubtreesOtherName(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___excludedSubtreesOtherName = value;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_permittedSubtreesDN() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesDN;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_permittedSubtreesDN() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesDN;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_set_permittedSubtreesDN(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___permittedSubtreesDN = value;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_permittedSubtreesDNS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesDNS;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_permittedSubtreesDNS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesDNS;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_set_permittedSubtreesDNS(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___permittedSubtreesDNS = value;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_permittedSubtreesEmail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesEmail;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_permittedSubtreesEmail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesEmail;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_set_permittedSubtreesEmail(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___permittedSubtreesEmail = value;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_permittedSubtreesURI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesURI;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_permittedSubtreesURI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesURI;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_set_permittedSubtreesURI(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___permittedSubtreesURI = value;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_permittedSubtreesIP() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesIP;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_permittedSubtreesIP() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesIP;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_set_permittedSubtreesIP(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___permittedSubtreesIP = value;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_permittedSubtreesOtherName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesOtherName;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_get_permittedSubtreesOtherName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permittedSubtreesOtherName;
}
constexpr void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::__cordl_internal_set_permittedSubtreesOtherName(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___permittedSubtreesOtherName = value;
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::setStaticF_SerialNumberOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SerialNumberOid", ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::getStaticF_SerialNumberOid() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SerialNumberOid", ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>();
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::WithinDNSubtree(::Org::BouncyCastle::Asn1::Asn1Sequence* dns, ::Org::BouncyCastle::Asn1::Asn1Sequence* subtree) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                              { "WithinDNSubtree", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dns, subtree);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedDN(::Org::BouncyCastle::Asn1::Asn1Sequence* dn) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                         { "CheckPermittedDN", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dn);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedDN(::Org::BouncyCastle::Asn1::Asn1Sequence* dn) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                         { "CheckExcludedDN", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dn);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectDN(::Org::BouncyCastle::Utilities::Collections::ISet* permitted,
                                                                                                                            ::Org::BouncyCastle::Utilities::Collections::ISet* dns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                          { "IntersectDN", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method, permitted, dns);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionDN(::Org::BouncyCastle::Utilities::Collections::ISet* excluded,
                                                                                                                        ::Org::BouncyCastle::Asn1::Asn1Sequence* dn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                       { "UnionDN", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method, excluded, dn);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectOtherName(::Org::BouncyCastle::Utilities::Collections::ISet* permitted,
                                                                                                                                   ::Org::BouncyCastle::Utilities::Collections::ISet* otherNames) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                       { "IntersectOtherName", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method, permitted, otherNames);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectOtherName(::Org::BouncyCastle::Asn1::X509::OtherName* otherName1, ::Org::BouncyCastle::Asn1::X509::OtherName* otherName2,
                                                                                     ::Org::BouncyCastle::Utilities::Collections::ISet* intersect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                           { "IntersectOtherName",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::OtherName*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::OtherName*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherName1, otherName2, intersect);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionOtherName(::Org::BouncyCastle::Utilities::Collections::ISet* permitted,
                                                                                                                               ::Org::BouncyCastle::Asn1::X509::OtherName* otherName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                          { "UnionOtherName", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::OtherName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method, permitted, otherName);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectEmail(::Org::BouncyCastle::Utilities::Collections::ISet* permitted,
                                                                                                                               ::Org::BouncyCastle::Utilities::Collections::ISet* emails) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                          { "IntersectEmail", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method, permitted, emails);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionEmail(::Org::BouncyCastle::Utilities::Collections::ISet* excluded,
                                                                                                                           ::StringW email) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                           { "UnionEmail", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method, excluded, email);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectIP(::Org::BouncyCastle::Utilities::Collections::ISet* permitted,
                                                                                                                            ::Org::BouncyCastle::Utilities::Collections::ISet* ips) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                          { "IntersectIP", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method, permitted, ips);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionIP(::Org::BouncyCastle::Utilities::Collections::ISet* excluded,
                                                                                                                        ::ArrayW<uint8_t> ip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                           { "UnionIP", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method, excluded, ip);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionIPRange(::ArrayW<uint8_t> ipWithSubmask1, ::ArrayW<uint8_t> ipWithSubmask2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                         { "UnionIPRange", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method, ipWithSubmask1, ipWithSubmask2);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectIPRange(::ArrayW<uint8_t> ipWithSubmask1, ::ArrayW<uint8_t> ipWithSubmask2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                         { "IntersectIPRange", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method, ipWithSubmask1, ipWithSubmask2);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IpWithSubnetMask(::ArrayW<uint8_t> ip, ::ArrayW<uint8_t> subnetMask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                         { "IpWithSubnetMask", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, ip, subnetMask);
}
inline ::ArrayW<::ArrayW<uint8_t>> Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ExtractIPsAndSubnetMasks(::ArrayW<uint8_t> ipWithSubmask1, ::ArrayW<uint8_t> ipWithSubmask2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                           { "ExtractIPsAndSubnetMasks", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<uint8_t>>>(this, ___internal_method, ipWithSubmask1, ipWithSubmask2);
}
inline ::ArrayW<::ArrayW<uint8_t>> Org::BouncyCastle::Pkix::PkixNameConstraintValidator::MinMaxIPs(::ArrayW<uint8_t> ip1, ::ArrayW<uint8_t> subnetmask1, ::ArrayW<uint8_t> ip2,
                                                                                                   ::ArrayW<uint8_t> subnetmask2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                       { "MinMaxIPs", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<uint8_t>>>(this, ___internal_method, ip1, subnetmask1, ip2, subnetmask2);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsOtherNameConstrained(::Org::BouncyCastle::Asn1::X509::OtherName* constraint,
                                                                                         ::Org::BouncyCastle::Asn1::X509::OtherName* otherName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                          { "IsOtherNameConstrained", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::OtherName*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::OtherName*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, constraint, otherName);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsOtherNameConstrained(::Org::BouncyCastle::Utilities::Collections::ISet* constraints,
                                                                                         ::Org::BouncyCastle::Asn1::X509::OtherName* otherName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                          { "IsOtherNameConstrained", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::OtherName*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, constraints, otherName);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedOtherName(::Org::BouncyCastle::Utilities::Collections::ISet* permitted,
                                                                                          ::Org::BouncyCastle::Asn1::X509::OtherName* name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                          { "CheckPermittedOtherName", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::OtherName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permitted, name);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedOtherName(::Org::BouncyCastle::Utilities::Collections::ISet* excluded,
                                                                                         ::Org::BouncyCastle::Asn1::X509::OtherName* name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                          { "CheckExcludedOtherName", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::OtherName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, excluded, name);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsEmailConstrained(::StringW constraint, ::StringW email) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                         { "IsEmailConstrained", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, constraint, email);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsEmailConstrained(::Org::BouncyCastle::Utilities::Collections::ISet* constraints, ::StringW email) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                           { "IsEmailConstrained", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, constraints, email);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedEmail(::Org::BouncyCastle::Utilities::Collections::ISet* permitted, ::StringW email) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                           { "CheckPermittedEmail", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permitted, email);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedEmail(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::StringW email) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                           { "CheckExcludedEmail", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, excluded, email);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsDnsConstrained(::StringW constraint, ::StringW dns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                         { "IsDnsConstrained", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, constraint, dns);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsDnsConstrained(::Org::BouncyCastle::Utilities::Collections::ISet* constraints, ::StringW dns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                           { "IsDnsConstrained", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, constraints, dns);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedDns(::Org::BouncyCastle::Utilities::Collections::ISet* permitted, ::StringW dns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                           { "CheckPermittedDns", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permitted, dns);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedDns(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::StringW dns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                           { "CheckExcludedDns", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, excluded, dns);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsDirectoryConstrained(::Org::BouncyCastle::Utilities::Collections::ISet* constraints,
                                                                                         ::Org::BouncyCastle::Asn1::Asn1Sequence* directory) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                          { "IsDirectoryConstrained", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, constraints, directory);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedDirectory(::Org::BouncyCastle::Utilities::Collections::ISet* permitted,
                                                                                          ::Org::BouncyCastle::Asn1::Asn1Sequence* directory) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                          { "CheckPermittedDirectory", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permitted, directory);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedDirectory(::Org::BouncyCastle::Utilities::Collections::ISet* excluded,
                                                                                         ::Org::BouncyCastle::Asn1::Asn1Sequence* directory) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                          { "CheckExcludedDirectory", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, excluded, directory);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsUriConstrained(::StringW constraint, ::StringW uri) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                         { "IsUriConstrained", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, constraint, uri);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsUriConstrained(::Org::BouncyCastle::Utilities::Collections::ISet* constraints, ::StringW uri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                           { "IsUriConstrained", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, constraints, uri);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedUri(::Org::BouncyCastle::Utilities::Collections::ISet* permitted, ::StringW uri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                           { "CheckPermittedUri", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permitted, uri);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedUri(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::StringW uri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                           { "CheckExcludedUri", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, excluded, uri);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsIPConstrained(::ArrayW<uint8_t> constraint, ::ArrayW<uint8_t> ip) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                         { "IsIPConstrained", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, constraint, ip);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IsIPConstrained(::Org::BouncyCastle::Utilities::Collections::ISet* constraints, ::ArrayW<uint8_t> ip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                           { "IsIPConstrained", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, constraints, ip);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckPermittedIP(::Org::BouncyCastle::Utilities::Collections::ISet* permitted, ::ArrayW<uint8_t> ip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                           { "CheckPermittedIP", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permitted, ip);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CheckExcludedIP(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::ArrayW<uint8_t> ip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                           { "CheckExcludedIP", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, excluded, ip);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::WithinDomain(::StringW testDomain, ::StringW domain) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                         { "WithinDomain", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, testDomain, domain);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionEmail(::StringW email1, ::StringW email2, ::Org::BouncyCastle::Utilities::Collections::ISet* _cordl_union) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                       { "UnionEmail", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, email1, email2, _cordl_union);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::unionURI(::StringW email1, ::StringW email2, ::Org::BouncyCastle::Utilities::Collections::ISet* _cordl_union) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                              { "unionURI", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, email1, email2, _cordl_union);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectDns(::Org::BouncyCastle::Utilities::Collections::ISet* permitted,
                                                                                                                             ::Org::BouncyCastle::Utilities::Collections::ISet* dnss) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                          { "IntersectDns", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method, permitted, dnss);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionDns(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::StringW dns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                           { "UnionDns", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method, excluded, dns);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectEmail(::StringW email1, ::StringW email2, ::Org::BouncyCastle::Utilities::Collections::ISet* intersect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                       { "IntersectEmail", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, email1, email2, intersect);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectUri(::Org::BouncyCastle::Utilities::Collections::ISet* permitted,
                                                                                                                             ::Org::BouncyCastle::Utilities::Collections::ISet* uris) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                          { "IntersectUri", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method, permitted, uris);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::UnionUri(::Org::BouncyCastle::Utilities::Collections::ISet* excluded, ::StringW uri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                           { "UnionUri", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method, excluded, uri);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectUri(::StringW email1, ::StringW email2, ::Org::BouncyCastle::Utilities::Collections::ISet* intersect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                       { "IntersectUri", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, email1, email2, intersect);
}
inline ::StringW Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ExtractHostFromURL(::StringW url) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(), { "ExtractHostFromURL", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, url);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::checkPermitted(::Org::BouncyCastle::Asn1::X509::GeneralName* name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                         { "checkPermitted", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::checkExcluded(::Org::BouncyCastle::Asn1::X509::GeneralName* name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                         { "checkExcluded", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectPermittedSubtree(::Org::BouncyCastle::Asn1::Asn1Sequence* permitted) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                         { "IntersectPermittedSubtree", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permitted);
}
inline ::StringW Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ExtractNameAsString(::Org::BouncyCastle::Asn1::X509::GeneralName* name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                         { "ExtractNameAsString", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::IntersectEmptyPermittedSubtree(int32_t nameType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(), { "IntersectEmptyPermittedSubtree", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameType);
}
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidator::AddExcludedSubtree(::Org::BouncyCastle::Asn1::X509::GeneralSubtree* subtree) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                         { "AddExcludedSubtree", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subtree);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Max(::ArrayW<uint8_t> ip1, ::ArrayW<uint8_t> ip2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                         { "Max", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, ip1, ip2);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Min(::ArrayW<uint8_t> ip1, ::ArrayW<uint8_t> ip2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                         { "Min", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, ip1, ip2);
}
inline int32_t Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CompareTo(::ArrayW<uint8_t> ip1, ::ArrayW<uint8_t> ip2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                         { "CompareTo", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ip1, ip2);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Or(::ArrayW<uint8_t> ip1, ::ArrayW<uint8_t> ip2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                         { "Or", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, ip1, ip2);
}
inline int32_t Org::BouncyCastle::Pkix::PkixNameConstraintValidator::HashCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(), { "HashCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Pkix::PkixNameConstraintValidator::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Pkix::PkixNameConstraintValidator::HashCollection(::System::Collections::ICollection* c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                         { "HashCollection", {}, { ::i2c::type_of<::System::Collections::ICollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, c);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::Equals(::System::Object* o) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::CollectionsAreEqual(::System::Collections::ICollection* coll1, ::System::Collections::ICollection* coll2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                              { "CollectionsAreEqual", {}, { ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::System::Collections::ICollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, coll1, coll2);
}
inline bool Org::BouncyCastle::Pkix::PkixNameConstraintValidator::SpecialEquals(::System::Object* o1, ::System::Object* o2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                         { "SpecialEquals", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o1, o2);
}
inline ::StringW Org::BouncyCastle::Pkix::PkixNameConstraintValidator::StringifyIP(::ArrayW<uint8_t> ip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(), { "StringifyIP", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, ip);
}
inline ::StringW Org::BouncyCastle::Pkix::PkixNameConstraintValidator::StringifyIPCollection(::Org::BouncyCastle::Utilities::Collections::ISet* ips) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                                                         { "StringifyIPCollection", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, ips);
}
inline ::StringW Org::BouncyCastle::Pkix::PkixNameConstraintValidator::StringifyOtherNameCollection(::Org::BouncyCastle::Utilities::Collections::ISet* otherNames) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(),
                                                           { "StringifyOtherNameCollection", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, otherNames);
}
inline ::StringW Org::BouncyCastle::Pkix::PkixNameConstraintValidator::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator* Org::BouncyCastle::Pkix::PkixNameConstraintValidator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator::PkixNameConstraintValidator() {}
