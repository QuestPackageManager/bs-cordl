#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/PkiHeaderBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiHeaderBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__InfoTypeAndValue_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiFreeText_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiHeader_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(
    int32_t, ::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Org::BouncyCastle::Asn1::X509::GeneralName*)>(&::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x334c9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(),
            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(
    ::Org::BouncyCastle::Asn1::DerInteger*, ::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Org::BouncyCastle::Asn1::X509::GeneralName*)>(&::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x334ca54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetMessageTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* (
    ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(::Org::BouncyCastle::Asn1::DerGeneralizedTime*)>(&::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetMessageTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334ca60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetProtectionAlg
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* (
    ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(&::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetProtectionAlg)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334ca68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetSenderKID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* (::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetSenderKID)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x334ca70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetSenderKID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* (
    ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(::Org::BouncyCastle::Asn1::Asn1OctetString*)>(&::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetSenderKID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334caf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetRecipKID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* (::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetRecipKID)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x334cb00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetRecipKID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* (
    ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(::Org::BouncyCastle::Asn1::Asn1OctetString*)>(&::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetRecipKID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334cb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetTransactionID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* (::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetTransactionID)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x334cb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetTransactionID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* (
    ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(::Org::BouncyCastle::Asn1::Asn1OctetString*)>(&::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetTransactionID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334cc18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetSenderNonce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* (::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetSenderNonce)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x334cc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetSenderNonce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* (
    ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(::Org::BouncyCastle::Asn1::Asn1OctetString*)>(&::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetSenderNonce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334ccac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetRecipNonce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* (::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetRecipNonce)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x334ccb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetRecipNonce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* (
    ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(::Org::BouncyCastle::Asn1::Asn1OctetString*)>(&::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetRecipNonce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334cd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetFreeText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* (
    ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*)>(&::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetFreeText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334cd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetGeneralInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* (
    ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*)>(&::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetGeneralInfo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x334cd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetGeneralInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* (
    ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*>)>(&::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetGeneralInfo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x334cdd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetGeneralInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* (
    ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetGeneralInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334cee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.MakeGeneralInfoSeq
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Sequence* (*)(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*)>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::MakeGeneralInfoSeq)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x334cd7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(),
                                                                                           { "MakeGeneralInfoSeq", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.MakeGeneralInfoSeq
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Sequence* (*)(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*>)>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::MakeGeneralInfoSeq)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x334ce04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(),
                                                             { "MakeGeneralInfoSeq", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeader* (::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::Build)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x334ceec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.AddOptional
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(
    ::Org::BouncyCastle::Asn1::Asn1EncodableVector*, int32_t, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::AddOptional)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x334d110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(),
            { "AddOptional", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_pvno() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pvno;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_pvno() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pvno;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_set_pvno(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pvno = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_sender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sender;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_sender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sender;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_set_sender(::Org::BouncyCastle::Asn1::X509::GeneralName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sender = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_recipient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipient;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_recipient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipient;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_set_recipient(::Org::BouncyCastle::Asn1::X509::GeneralName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recipient = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_messageTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageTime;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_messageTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageTime;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_set_messageTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___messageTime = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_protectionAlg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___protectionAlg;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_protectionAlg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___protectionAlg;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_set_protectionAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___protectionAlg = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_senderKID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___senderKID;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_senderKID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___senderKID;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_set_senderKID(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___senderKID = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_recipKID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipKID;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_recipKID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipKID;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_set_recipKID(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recipKID = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_transactionID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transactionID;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_transactionID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transactionID;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_set_transactionID(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___transactionID = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_senderNonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___senderNonce;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_senderNonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___senderNonce;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_set_senderNonce(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___senderNonce = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_recipNonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipNonce;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_recipNonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipNonce;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_set_recipNonce(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recipNonce = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_freeText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freeText;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* const& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_freeText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freeText;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_set_freeText(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___freeText = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_generalInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generalInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_get_generalInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generalInfo;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__cordl_internal_set_generalInfo(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___generalInfo = value;
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::_ctor(int32_t pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pvno, sender, recipient);
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::_ctor(::Org::BouncyCastle::Asn1::DerInteger* pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender,
                                                                  ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pvno, sender, recipient);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetMessageTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime* time) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(this, ___internal_method, time);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetProtectionAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* aid) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(this, ___internal_method, aid);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetSenderKID(::ArrayW<uint8_t> kid) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(this, ___internal_method, kid);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetSenderKID(::Org::BouncyCastle::Asn1::Asn1OctetString* kid) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(this, ___internal_method, kid);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetRecipKID(::ArrayW<uint8_t> kid) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(this, ___internal_method, kid);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetRecipKID(::Org::BouncyCastle::Asn1::Asn1OctetString* kid) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(this, ___internal_method, kid);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetTransactionID(::ArrayW<uint8_t> tid) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(this, ___internal_method, tid);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetTransactionID(::Org::BouncyCastle::Asn1::Asn1OctetString* tid) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(this, ___internal_method, tid);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetSenderNonce(::ArrayW<uint8_t> nonce) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(this, ___internal_method, nonce);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetSenderNonce(::Org::BouncyCastle::Asn1::Asn1OctetString* nonce) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(this, ___internal_method, nonce);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetRecipNonce(::ArrayW<uint8_t> nonce) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(this, ___internal_method, nonce);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetRecipNonce(::Org::BouncyCastle::Asn1::Asn1OctetString* nonce) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(this, ___internal_method, nonce);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetFreeText(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* text) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(this, ___internal_method, text);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetGeneralInfo(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue* genInfo) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(this, ___internal_method, genInfo);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetGeneralInfo(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*> genInfos) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(this, ___internal_method, genInfos);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetGeneralInfo(::Org::BouncyCastle::Asn1::Asn1Sequence* seqOfInfoTypeAndValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(this, ___internal_method, seqOfInfoTypeAndValue);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::MakeGeneralInfoSeq(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue* generalInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(),
                                                                                         { "MakeGeneralInfoSeq", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Sequence*>(nullptr, ___internal_method, generalInfo);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::MakeGeneralInfoSeq(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*> generalInfos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(),
                                                           { "MakeGeneralInfoSeq", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Sequence*>(nullptr, ___internal_method, generalInfos);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::Build() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::AddOptional(::Org::BouncyCastle::Asn1::Asn1EncodableVector* v, int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(),
          { "AddOptional", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v, tagNo, obj);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::New_ctor(int32_t pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender,
                                                                                                                  ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(pvno, sender, recipient));
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::New_ctor(::Org::BouncyCastle::Asn1::DerInteger* pvno,
                                                                                                                  ::Org::BouncyCastle::Asn1::X509::GeneralName* sender,
                                                                                                                  ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*>(pvno, sender, recipient));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::PkiHeaderBuilder() {}
