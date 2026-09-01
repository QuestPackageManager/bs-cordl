#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cmp\ProtectedPkiMessageBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__ProtectedPkiMessageBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__InfoTypeAndValue_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiBody_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiFreeText_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiHeaderBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiHeader_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__ProtectedPkiMessage_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMacFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCalculator_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(
    ::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Org::BouncyCastle::Asn1::X509::GeneralName*)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x36a321c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(
    int32_t, ::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Org::BouncyCastle::Asn1::X509::GeneralName*)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x36a3298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(),
            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetTransactionId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* (::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetTransactionId)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36a3360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(), { "SetTransactionId", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetFreeText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* (
    ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetFreeText)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x36a338c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(),
                                                                                           { "SetFreeText", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.AddGeneralInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* (
    ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::AddGeneralInfo)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x36a33bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(),
                                                                                           { "AddGeneralInfo", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetMessageTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* (
    ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::Org::BouncyCastle::Asn1::DerGeneralizedTime*)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetMessageTime)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36a347c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(),
                                                                                           { "SetMessageTime", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetRecipKID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* (::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetRecipKID)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36a34a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(), { "SetRecipKID", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetRecipNonce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* (::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetRecipNonce)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x36a34d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(), { "SetRecipNonce", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetSenderKID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* (::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetSenderKID)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36a3504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(), { "SetSenderKID", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetSenderNonce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* (::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetSenderNonce)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36a3530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(), { "SetSenderNonce", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetBody
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* (
    ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::Org::BouncyCastle::Asn1::Cmp::PkiBody*)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetBody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a355c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(), { "SetBody", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiBody*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.AddCmpCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* (
    ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::Org::BouncyCastle::X509::X509Certificate*)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::AddCmpCertificate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x36a3564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(),
                                                                                           { "AddCmpCertificate", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessage* (
    ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::Org::BouncyCastle::Crypto::ISignatureFactory*)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::Build)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x36a3624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(),
                                                                                           { "Build", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessage* (
    ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::Org::BouncyCastle::Crypto::IMacFactory*)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::Build)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x36a42fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(), { "Build", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMacFactory*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.FinalizeHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::FinalizeHeader)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x36a3910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(),
                                                                                           { "FinalizeHeader", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.FinalizeMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessage* (
    ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::Org::BouncyCastle::Asn1::Cmp::PkiHeader*, ::Org::BouncyCastle::Asn1::DerBitString*)>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::FinalizeMessage)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x36a3f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(),
                                         { "FinalizeMessage", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.CalculateSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(
    ::Org::BouncyCastle::Crypto::IStreamCalculator*, ::Org::BouncyCastle::Asn1::Cmp::PkiHeader*, ::Org::BouncyCastle::Asn1::Cmp::PkiBody*)>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::CalculateSignature)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x36a3c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(),
                                                             { "CalculateSignature",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::IStreamCalculator*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiBody*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*& Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_get_hdrBuilBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdrBuilBuilder;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* const& Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_get_hdrBuilBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdrBuilBuilder;
}
constexpr void Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_set_hdrBuilBuilder(::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hdrBuilBuilder = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiBody*& Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_get_body() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___body;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiBody* const& Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_get_body() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___body;
}
constexpr void Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_set_body(::Org::BouncyCastle::Asn1::Cmp::PkiBody* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___body = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_get_generalInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generalInfos;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_get_generalInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generalInfos;
}
constexpr void Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_set_generalInfos(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___generalInfos = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_get_extraCerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraCerts;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_get_extraCerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraCerts;
}
constexpr void Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_set_extraCerts(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extraCerts = value;
}
inline void Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, recipient);
}
inline void Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::_ctor(int32_t pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pvno, sender, recipient);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetTransactionId(::ArrayW<uint8_t> tid) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(), { "SetTransactionId", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(this, ___internal_method, tid);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetFreeText(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* freeText) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(),
                                                                                         { "SetFreeText", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(this, ___internal_method, freeText);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::AddGeneralInfo(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue* genInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(),
                                                                                         { "AddGeneralInfo", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(this, ___internal_method, genInfo);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetMessageTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime* generalizedTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(),
                                                                                         { "SetMessageTime", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(this, ___internal_method, generalizedTime);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetRecipKID(::ArrayW<uint8_t> id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(), { "SetRecipKID", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(this, ___internal_method, id);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetRecipNonce(::ArrayW<uint8_t> nonce) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(), { "SetRecipNonce", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(this, ___internal_method, nonce);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetSenderKID(::ArrayW<uint8_t> id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(), { "SetSenderKID", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(this, ___internal_method, id);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetSenderNonce(::ArrayW<uint8_t> nonce) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(), { "SetSenderNonce", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(this, ___internal_method, nonce);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetBody(::Org::BouncyCastle::Asn1::Cmp::PkiBody* body) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(), { "SetBody", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiBody*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(this, ___internal_method, body);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::AddCmpCertificate(::Org::BouncyCastle::X509::X509Certificate* certificate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(),
                                                                                         { "AddCmpCertificate", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(this, ___internal_method, certificate);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessage* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::Build(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureFactory) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(),
                                                                                         { "Build", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(this, ___internal_method, signatureFactory);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessage* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::Build(::Org::BouncyCastle::Crypto::IMacFactory* factory) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(), { "Build", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMacFactory*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(this, ___internal_method, factory);
}
inline void Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::FinalizeHeader(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithmIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(),
                                                                                         { "FinalizeHeader", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithmIdentifier);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessage* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::FinalizeMessage(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header,
                                                                                                                          ::Org::BouncyCastle::Asn1::DerBitString* protection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(),
                                       { "FinalizeMessage", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*>(this, ___internal_method, header, protection);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::CalculateSignature(::Org::BouncyCastle::Crypto::IStreamCalculator* signer,
                                                                                                ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(),
                                                           { "CalculateSignature",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::IStreamCalculator*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiBody*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, signer, header, body);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* sender,
                                                                                                                          ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(sender, recipient));
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::New_ctor(int32_t pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender,
                                                                                                                          ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(pvno, sender, recipient));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::ProtectedPkiMessageBuilder() {}
