#pragma once
// IWYU pragma private; include "Org\BouncyCastle\X509\X509V2AttributeCertificate.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509V2AttributeCertificate_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttributeCertificate_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactoryProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactory_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__AttributeCertificateHolder_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__AttributeCertificateIssuer_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509AttributeCertificate_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509Extension_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Attribute_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.GetObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AttributeCertificate* (*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificate::GetObject)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x36530d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), { "GetObject", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificate::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3653200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificate::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3653220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)(::Org::BouncyCastle::Asn1::X509::AttributeCertificate*)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificate::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x36466e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(&::Org::BouncyCastle::X509::X509V2AttributeCertificate::get_Version)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x365329c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.get_SerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificate::get_SerialNumber)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36532d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.get_Holder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::AttributeCertificateHolder* (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificate::get_Holder)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x36532fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.get_Issuer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::AttributeCertificateIssuer* (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificate::get_Issuer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x36533e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.get_NotBefore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificate::get_NotBefore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3653454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.get_NotAfter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificate::get_NotAfter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x365345c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.GetIssuerUniqueID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificate::GetIssuerUniqueID)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3653464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.get_IsValidNow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(&::Org::BouncyCastle::X509::X509V2AttributeCertificate::get_IsValidNow)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3653568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)(::System::DateTime)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificate::IsValid)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x36535d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.CheckValidity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(&::Org::BouncyCastle::X509::X509V2AttributeCertificate::CheckValidity)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x36536dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.CheckValidity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)(::System::DateTime)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificate::CheckValidity)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x365374c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.get_SignatureAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificate::get_SignatureAlgorithm)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3653938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.GetSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificate::GetSignature)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3653950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.Verify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificate::Verify)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3653978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.Verify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificate::Verify)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x36539f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.CheckSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)(::Org::BouncyCastle::Crypto::IVerifierFactory*)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificate::CheckSignature)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x3653acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificate::GetEncoded)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3653f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.GetX509Extensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificate::GetX509Extensions)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3653fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.GetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::X509::X509Attribute*> (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificate::GetAttributes)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x3653fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.GetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::X509::X509Attribute*> (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)(::StringW)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificate::GetAttributes)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x365413c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)(::System::Object*)>(
    &::Org::BouncyCastle::X509::X509V2AttributeCertificate::Equals)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3654578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V2AttributeCertificate.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(&::Org::BouncyCastle::X509::X509V2AttributeCertificate::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3654630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::AttributeCertificate*& Org::BouncyCastle::X509::X509V2AttributeCertificate::__cordl_internal_get_cert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cert;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* const& Org::BouncyCastle::X509::X509V2AttributeCertificate::__cordl_internal_get_cert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cert;
}
constexpr void Org::BouncyCastle::X509::X509V2AttributeCertificate::__cordl_internal_set_cert(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cert = value;
}
constexpr ::System::DateTime& Org::BouncyCastle::X509::X509V2AttributeCertificate::__cordl_internal_get_notBefore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notBefore;
}
constexpr ::System::DateTime const& Org::BouncyCastle::X509::X509V2AttributeCertificate::__cordl_internal_get_notBefore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notBefore;
}
constexpr void Org::BouncyCastle::X509::X509V2AttributeCertificate::__cordl_internal_set_notBefore(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___notBefore = value;
}
constexpr ::System::DateTime& Org::BouncyCastle::X509::X509V2AttributeCertificate::__cordl_internal_get_notAfter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notAfter;
}
constexpr ::System::DateTime const& Org::BouncyCastle::X509::X509V2AttributeCertificate::__cordl_internal_get_notAfter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notAfter;
}
constexpr void Org::BouncyCastle::X509::X509V2AttributeCertificate::__cordl_internal_set_notAfter(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___notAfter = value;
}
inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* Org::BouncyCastle::X509::X509V2AttributeCertificate::GetObject(::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), { "GetObject", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(nullptr, ___internal_method, input);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificate::_ctor(::System::IO::Stream* encIn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encIn);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificate::_ctor(::ArrayW<uint8_t> encoded) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoded);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificate::_ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* cert) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cert);
}
inline int32_t Org::BouncyCastle::X509::X509V2AttributeCertificate::get_Version() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::X509::X509V2AttributeCertificate::get_SerialNumber() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::AttributeCertificateHolder* Org::BouncyCastle::X509::X509V2AttributeCertificate::get_Holder() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::AttributeCertificateHolder*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::AttributeCertificateIssuer* Org::BouncyCastle::X509::X509V2AttributeCertificate::get_Issuer() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>(this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::X509::X509V2AttributeCertificate::get_NotBefore() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::X509::X509V2AttributeCertificate::get_NotAfter() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::ArrayW<bool> Org::BouncyCastle::X509::X509V2AttributeCertificate::GetIssuerUniqueID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(this, ___internal_method);
}
inline bool Org::BouncyCastle::X509::X509V2AttributeCertificate::get_IsValidNow() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::X509::X509V2AttributeCertificate::IsValid(::System::DateTime date) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, date);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificate::CheckValidity() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificate::CheckValidity(::System::DateTime date) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, date);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::X509::X509V2AttributeCertificate::get_SignatureAlgorithm() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::X509::X509V2AttributeCertificate::GetSignature() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificate::Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificate::Verify(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* verifierProvider) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, verifierProvider);
}
inline void Org::BouncyCastle::X509::X509V2AttributeCertificate::CheckSignature(::Org::BouncyCastle::Crypto::IVerifierFactory* verifier) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, verifier);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::X509::X509V2AttributeCertificate::GetEncoded() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::X509::X509V2AttributeCertificate::GetX509Extensions() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::X509::X509Attribute*> Org::BouncyCastle::X509::X509V2AttributeCertificate::GetAttributes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::X509::X509Attribute*>>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::X509::X509Attribute*> Org::BouncyCastle::X509::X509V2AttributeCertificate::GetAttributes(::StringW oid) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::X509::X509Attribute*>>(this, ___internal_method, oid);
}
inline bool Org::BouncyCastle::X509::X509V2AttributeCertificate::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::X509::X509V2AttributeCertificate::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509V2AttributeCertificate* Org::BouncyCastle::X509::X509V2AttributeCertificate::New_ctor(::System::IO::Stream* encIn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(encIn));
}
inline ::Org::BouncyCastle::X509::X509V2AttributeCertificate* Org::BouncyCastle::X509::X509V2AttributeCertificate::New_ctor(::ArrayW<uint8_t> encoded) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(encoded));
}
inline ::Org::BouncyCastle::X509::X509V2AttributeCertificate* Org::BouncyCastle::X509::X509V2AttributeCertificate::New_ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* cert) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::X509V2AttributeCertificate*>(cert));
}
/// @brief Convert operator to "::Org::BouncyCastle::X509::IX509AttributeCertificate"
constexpr Org::BouncyCastle::X509::X509V2AttributeCertificate::operator ::Org::BouncyCastle::X509::IX509AttributeCertificate*() noexcept {
  return static_cast<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::X509::IX509AttributeCertificate"
constexpr ::Org::BouncyCastle::X509::IX509AttributeCertificate* Org::BouncyCastle::X509::X509V2AttributeCertificate::i___Org__BouncyCastle__X509__IX509AttributeCertificate() noexcept {
  return static_cast<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::X509::IX509Extension"
constexpr Org::BouncyCastle::X509::X509V2AttributeCertificate::operator ::Org::BouncyCastle::X509::IX509Extension*() noexcept {
  return static_cast<::Org::BouncyCastle::X509::IX509Extension*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::X509::IX509Extension"
constexpr ::Org::BouncyCastle::X509::IX509Extension* Org::BouncyCastle::X509::X509V2AttributeCertificate::i___Org__BouncyCastle__X509__IX509Extension() noexcept {
  return static_cast<::Org::BouncyCastle::X509::IX509Extension*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::X509V2AttributeCertificate::X509V2AttributeCertificate() {}
