#pragma once
// IWYU pragma private; include "Org\BouncyCastle\X509\X509Certificate.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__BasicConstraints_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509CertificateStructure_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactoryProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactory_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509Certificate::*)()>(&::Org::BouncyCastle::X509::X509Certificate::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3647188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509Certificate::*)(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*)>(
    &::Org::BouncyCastle::X509::X509Certificate::_ctor)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x36471d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.get_CertificateStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* (::Org::BouncyCastle::X509::X509Certificate::*)()>(
    &::Org::BouncyCastle::X509::X509Certificate::get_CertificateStructure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3647a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.get_IsValidNow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::X509::X509Certificate::*)()>(&::Org::BouncyCastle::X509::X509Certificate::get_IsValidNow)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3647a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::X509::X509Certificate::*)(::System::DateTime)>(&::Org::BouncyCastle::X509::X509Certificate::IsValid)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3647a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.CheckValidity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509Certificate::*)()>(&::Org::BouncyCastle::X509::X509Certificate::CheckValidity)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3647b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.CheckValidity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509Certificate::*)(::System::DateTime)>(&::Org::BouncyCastle::X509::X509Certificate::CheckValidity)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x3647c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::X509::X509Certificate::*)()>(&::Org::BouncyCastle::X509::X509Certificate::get_Version)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3647df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.get_SerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::X509::X509Certificate::*)()>(
    &::Org::BouncyCastle::X509::X509Certificate::get_SerialNumber)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3647e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.get_IssuerDN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (::Org::BouncyCastle::X509::X509Certificate::*)()>(
    &::Org::BouncyCastle::X509::X509Certificate::get_IssuerDN)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3647e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.get_SubjectDN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (::Org::BouncyCastle::X509::X509Certificate::*)()>(
    &::Org::BouncyCastle::X509::X509Certificate::get_SubjectDN)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3647e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.get_NotBefore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Org::BouncyCastle::X509::X509Certificate::*)()>(&::Org::BouncyCastle::X509::X509Certificate::get_NotBefore)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3647e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.get_NotAfter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Org::BouncyCastle::X509::X509Certificate::*)()>(&::Org::BouncyCastle::X509::X509Certificate::get_NotAfter)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3647eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.GetTbsCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::X509::X509Certificate::*)()>(&::Org::BouncyCastle::X509::X509Certificate::GetTbsCertificate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3647edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.GetSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::X509::X509Certificate::*)()>(&::Org::BouncyCastle::X509::X509Certificate::GetSignature)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3647f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.get_SigAlgName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::X509::X509Certificate::*)()>(&::Org::BouncyCastle::X509::X509Certificate::get_SigAlgName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3647f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.get_SigAlgOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::X509::X509Certificate::*)()>(&::Org::BouncyCastle::X509::X509Certificate::get_SigAlgOid)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3647f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.GetSigAlgParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::X509::X509Certificate::*)()>(&::Org::BouncyCastle::X509::X509Certificate::GetSigAlgParams)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3647f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.get_IssuerUniqueID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (::Org::BouncyCastle::X509::X509Certificate::*)()>(
    &::Org::BouncyCastle::X509::X509Certificate::get_IssuerUniqueID)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3647fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.get_SubjectUniqueID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (::Org::BouncyCastle::X509::X509Certificate::*)()>(
    &::Org::BouncyCastle::X509::X509Certificate::get_SubjectUniqueID)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3647fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.GetKeyUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (::Org::BouncyCastle::X509::X509Certificate::*)()>(&::Org::BouncyCastle::X509::X509Certificate::GetKeyUsage)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x364800c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.GetExtendedKeyUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Org::BouncyCastle::X509::X509Certificate::*)()>(
    &::Org::BouncyCastle::X509::X509Certificate::GetExtendedKeyUsage)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x364806c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.GetBasicConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::X509::X509Certificate::*)()>(&::Org::BouncyCastle::X509::X509Certificate::GetBasicConstraints)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3648508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.GetSubjectAlternativeNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::X509::X509Certificate::*)()>(
    &::Org::BouncyCastle::X509::X509Certificate::GetSubjectAlternativeNames)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x364857c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.GetIssuerAlternativeNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::X509::X509Certificate::*)()>(
    &::Org::BouncyCastle::X509::X509Certificate::GetIssuerAlternativeNames)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x36485d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.GetAlternativeNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::X509::X509Certificate::*)(::StringW)>(
    &::Org::BouncyCastle::X509::X509Certificate::GetAlternativeNames)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x364862c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.GetX509Extensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::X509::X509Certificate::*)()>(
    &::Org::BouncyCastle::X509::X509Certificate::GetX509Extensions)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3648908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.GetPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (::Org::BouncyCastle::X509::X509Certificate::*)()>(
    &::Org::BouncyCastle::X509::X509Certificate::GetPublicKey)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3648954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::X509::X509Certificate::*)()>(&::Org::BouncyCastle::X509::X509Certificate::GetEncoded)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x36489dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::X509::X509Certificate::*)(::System::Object*)>(&::Org::BouncyCastle::X509::X509Certificate::Equals)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x36489f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::X509::X509Certificate::*)()>(&::Org::BouncyCastle::X509::X509Certificate::GetHashCode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3648b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::X509::X509Certificate::*)()>(&::Org::BouncyCastle::X509::X509Certificate::ToString)> {
  constexpr static std::size_t size = 0xd88;
  constexpr static std::size_t addrs = 0x3648b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.Verify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509Certificate::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::X509::X509Certificate::Verify)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x36498dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.Verify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509Certificate::*)(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*)>(
    &::Org::BouncyCastle::X509::X509Certificate::Verify)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x364995c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.CheckSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509Certificate::*)(::Org::BouncyCastle::Crypto::IVerifierFactory*)>(
    &::Org::BouncyCastle::X509::X509Certificate::CheckSignature)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x3649a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Certificate.IsAlgIDEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(
    &::Org::BouncyCastle::X509::X509Certificate::IsAlgIDEqual)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x3649e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(),
            { "IsAlgIDEqual", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*& Org::BouncyCastle::X509::X509Certificate::__cordl_internal_get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* const& Org::BouncyCastle::X509::X509Certificate::__cordl_internal_get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr void Org::BouncyCastle::X509::X509Certificate::__cordl_internal_set_c(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___c = value;
}
constexpr ::StringW& Org::BouncyCastle::X509::X509Certificate::__cordl_internal_get_sigAlgName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigAlgName;
}
constexpr ::StringW const& Org::BouncyCastle::X509::X509Certificate::__cordl_internal_get_sigAlgName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigAlgName;
}
constexpr void Org::BouncyCastle::X509::X509Certificate::__cordl_internal_set_sigAlgName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sigAlgName = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::X509::X509Certificate::__cordl_internal_get_sigAlgParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigAlgParams;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::X509::X509Certificate::__cordl_internal_get_sigAlgParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigAlgParams;
}
constexpr void Org::BouncyCastle::X509::X509Certificate::__cordl_internal_set_sigAlgParams(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sigAlgParams = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::BasicConstraints*& Org::BouncyCastle::X509::X509Certificate::__cordl_internal_get_basicConstraints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicConstraints;
}
constexpr ::Org::BouncyCastle::Asn1::X509::BasicConstraints* const& Org::BouncyCastle::X509::X509Certificate::__cordl_internal_get_basicConstraints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basicConstraints;
}
constexpr void Org::BouncyCastle::X509::X509Certificate::__cordl_internal_set_basicConstraints(::Org::BouncyCastle::Asn1::X509::BasicConstraints* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___basicConstraints = value;
}
constexpr ::ArrayW<bool>& Org::BouncyCastle::X509::X509Certificate::__cordl_internal_get_keyUsage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyUsage;
}
constexpr ::ArrayW<bool> const& Org::BouncyCastle::X509::X509Certificate::__cordl_internal_get_keyUsage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyUsage;
}
constexpr void Org::BouncyCastle::X509::X509Certificate::__cordl_internal_set_keyUsage(::ArrayW<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyUsage = value;
}
constexpr ::System::Object*& Org::BouncyCastle::X509::X509Certificate::__cordl_internal_get_cacheLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cacheLock;
}
constexpr ::System::Object* const& Org::BouncyCastle::X509::X509Certificate::__cordl_internal_get_cacheLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cacheLock;
}
constexpr void Org::BouncyCastle::X509::X509Certificate::__cordl_internal_set_cacheLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cacheLock = value;
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& Org::BouncyCastle::X509::X509Certificate::__cordl_internal_get_publicKeyValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKeyValue;
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* const& Org::BouncyCastle::X509::X509Certificate::__cordl_internal_get_publicKeyValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKeyValue;
}
constexpr void Org::BouncyCastle::X509::X509Certificate::__cordl_internal_set_publicKeyValue(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___publicKeyValue = value;
}
constexpr bool& Org::BouncyCastle::X509::X509Certificate::__cordl_internal_get_hashValueSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashValueSet;
}
constexpr bool const& Org::BouncyCastle::X509::X509Certificate::__cordl_internal_get_hashValueSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashValueSet;
}
constexpr void Org::BouncyCastle::X509::X509Certificate::__cordl_internal_set_hashValueSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashValueSet = value;
}
constexpr int32_t& Org::BouncyCastle::X509::X509Certificate::__cordl_internal_get_hashValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashValue;
}
constexpr int32_t const& Org::BouncyCastle::X509::X509Certificate::__cordl_internal_get_hashValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashValue;
}
constexpr void Org::BouncyCastle::X509::X509Certificate::__cordl_internal_set_hashValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashValue = value;
}
inline void Org::BouncyCastle::X509::X509Certificate::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::X509Certificate::_ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* Org::BouncyCastle::X509::X509Certificate::get_CertificateStructure() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::X509::X509Certificate::get_IsValidNow() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::X509::X509Certificate::IsValid(::System::DateTime time) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, time);
}
inline void Org::BouncyCastle::X509::X509Certificate::CheckValidity() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::X509Certificate::CheckValidity(::System::DateTime time) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline int32_t Org::BouncyCastle::X509::X509Certificate::get_Version() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::X509::X509Certificate::get_SerialNumber() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::X509::X509Certificate::get_IssuerDN() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::X509::X509Certificate::get_SubjectDN() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*>(this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::X509::X509Certificate::get_NotBefore() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::X509::X509Certificate::get_NotAfter() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::X509::X509Certificate::GetTbsCertificate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::X509::X509Certificate::GetSignature() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::X509::X509Certificate::get_SigAlgName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::X509::X509Certificate::get_SigAlgOid() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::X509::X509Certificate::GetSigAlgParams() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::X509::X509Certificate::get_IssuerUniqueID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::X509::X509Certificate::get_SubjectUniqueID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString*>(this, ___internal_method);
}
inline ::ArrayW<bool> Org::BouncyCastle::X509::X509Certificate::GetKeyUsage() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(this, ___internal_method);
}
inline ::System::Collections::IList* Org::BouncyCastle::X509::X509Certificate::GetExtendedKeyUsage() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::X509::X509Certificate::GetBasicConstraints() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::X509Certificate::GetSubjectAlternativeNames() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::X509Certificate::GetIssuerAlternativeNames() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::X509Certificate::GetAlternativeNames(::StringW oid) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::X509::X509Certificate::GetX509Extensions() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::X509::X509Certificate::GetPublicKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::X509::X509Certificate::GetEncoded() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool Org::BouncyCastle::X509::X509Certificate::Equals(::System::Object* other) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t Org::BouncyCastle::X509::X509Certificate::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::X509::X509Certificate::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::X509Certificate::Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void Org::BouncyCastle::X509::X509Certificate::Verify(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* verifierProvider) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, verifierProvider);
}
inline void Org::BouncyCastle::X509::X509Certificate::CheckSignature(::Org::BouncyCastle::Crypto::IVerifierFactory* verifier) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, verifier);
}
inline bool Org::BouncyCastle::X509::X509Certificate::IsAlgIDEqual(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* id1, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* id2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::X509::X509Certificate*>(),
                       { "IsAlgIDEqual", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, id1, id2);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509Certificate::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::X509Certificate*>());
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509Certificate::New_ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::X509Certificate*>(c));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::X509Certificate::X509Certificate() {}
