#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Tsp/TimeStampToken.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampToken_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Ess/zzzz__EssCertID_def.hpp"
#include "Org/BouncyCastle/Asn1/Ess/zzzz__EssCertIDv2_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__IssuerSerial_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedData_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerID_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformation_def.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampTokenInfo_def.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampToken_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken_CertID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampToken_CertID::*)(::Org::BouncyCastle::Asn1::Ess::EssCertID*)>(
    &::Org::BouncyCastle::Tsp::TimeStampToken_CertID::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36209c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ess::EssCertID*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken_CertID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampToken_CertID::*)(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*)>(
    &::Org::BouncyCastle::Tsp::TimeStampToken_CertID::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36209c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken_CertID.GetHashAlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Tsp::TimeStampToken_CertID::*)()>(&::Org::BouncyCastle::Tsp::TimeStampToken_CertID::GetHashAlgorithmName)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x36210a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>(), { "GetHashAlgorithmName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken_CertID.GetHashAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Tsp::TimeStampToken_CertID::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampToken_CertID::GetHashAlgorithm)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x362161c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>(), { "GetHashAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken_CertID.GetCertHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Tsp::TimeStampToken_CertID::*)()>(&::Org::BouncyCastle::Tsp::TimeStampToken_CertID::GetCertHash)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x36211b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>(), { "GetCertHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken_CertID.get_IssuerSerial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::IssuerSerial* (::Org::BouncyCastle::Tsp::TimeStampToken_CertID::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampToken_CertID::get_IssuerSerial)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36211ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>(), { "get_IssuerSerial", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Ess::EssCertID*& Org::BouncyCastle::Tsp::TimeStampToken_CertID::__cordl_internal_get_certID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certID;
}
constexpr ::Org::BouncyCastle::Asn1::Ess::EssCertID* const& Org::BouncyCastle::Tsp::TimeStampToken_CertID::__cordl_internal_get_certID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certID;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampToken_CertID::__cordl_internal_set_certID(::Org::BouncyCastle::Asn1::Ess::EssCertID* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certID = value;
}
constexpr ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*& Org::BouncyCastle::Tsp::TimeStampToken_CertID::__cordl_internal_get_certIDv2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certIDv2;
}
constexpr ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* const& Org::BouncyCastle::Tsp::TimeStampToken_CertID::__cordl_internal_get_certIDv2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certIDv2;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampToken_CertID::__cordl_internal_set_certIDv2(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certIDv2 = value;
}
inline void Org::BouncyCastle::Tsp::TimeStampToken_CertID::_ctor(::Org::BouncyCastle::Asn1::Ess::EssCertID* certID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ess::EssCertID*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certID);
}
inline void Org::BouncyCastle::Tsp::TimeStampToken_CertID::_ctor(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* certID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certID);
}
inline ::StringW Org::BouncyCastle::Tsp::TimeStampToken_CertID::GetHashAlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>(), { "GetHashAlgorithmName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Tsp::TimeStampToken_CertID::GetHashAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>(), { "GetHashAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Tsp::TimeStampToken_CertID::GetCertHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>(), { "GetCertHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* Org::BouncyCastle::Tsp::TimeStampToken_CertID::get_IssuerSerial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>(), { "get_IssuerSerial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Tsp::TimeStampToken_CertID* Org::BouncyCastle::Tsp::TimeStampToken_CertID::New_ctor(::Org::BouncyCastle::Asn1::Ess::EssCertID* certID) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>(certID));
}
inline ::Org::BouncyCastle::Tsp::TimeStampToken_CertID* Org::BouncyCastle::Tsp::TimeStampToken_CertID::New_ctor(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* certID) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>(certID));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Tsp::TimeStampToken_CertID::TimeStampToken_CertID() {}
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampToken::*)(::Org::BouncyCastle::Asn1::Cms::ContentInfo*)>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x361e6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampToken::*)(::Org::BouncyCastle::Cms::CmsSignedData*)>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::_ctor)> {
  constexpr static std::size_t size = 0x870;
  constexpr static std::size_t addrs = 0x362002c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSignedData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken.get_TimeStampInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Tsp::TimeStampTokenInfo* (::Org::BouncyCastle::Tsp::TimeStampToken::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::get_TimeStampInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36209d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { "get_TimeStampInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken.get_SignerID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::SignerID* (::Org::BouncyCastle::Tsp::TimeStampToken::*)()>(&::Org::BouncyCastle::Tsp::TimeStampToken::get_SignerID)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x36209d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { "get_SignerID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken.get_SignedAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::AttributeTable* (::Org::BouncyCastle::Tsp::TimeStampToken::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::get_SignedAttributes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x361ef48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { "get_SignedAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken.get_UnsignedAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::AttributeTable* (::Org::BouncyCastle::Tsp::TimeStampToken::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::get_UnsignedAttributes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x36209f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { "get_UnsignedAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken.GetCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Tsp::TimeStampToken::*)(::StringW)>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::GetCertificates)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3620a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { "GetCertificates", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken.GetCrls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Tsp::TimeStampToken::*)(::StringW)>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::GetCrls)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3620a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { "GetCrls", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken.GetAttributeCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Tsp::TimeStampToken::*)(::StringW)>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::GetAttributeCertificates)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3620a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { "GetAttributeCertificates", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken.Validate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampToken::*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::Validate)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x3620a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { "Validate", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken.ToCmsSignedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsSignedData* (::Org::BouncyCastle::Tsp::TimeStampToken::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::ToCmsSignedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3621590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { "ToCmsSignedData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Tsp::TimeStampToken::*)()>(&::Org::BouncyCastle::Tsp::TimeStampToken::GetEncoded)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3621598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { "GetEncoded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Tsp::TimeStampToken::*)(::StringW)>(&::Org::BouncyCastle::Tsp::TimeStampToken::GetEncoded)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x36215f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { "GetEncoded", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::CmsSignedData*& Org::BouncyCastle::Tsp::TimeStampToken::__cordl_internal_get_tsToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tsToken;
}
constexpr ::Org::BouncyCastle::Cms::CmsSignedData* const& Org::BouncyCastle::Tsp::TimeStampToken::__cordl_internal_get_tsToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tsToken;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampToken::__cordl_internal_set_tsToken(::Org::BouncyCastle::Cms::CmsSignedData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tsToken = value;
}
constexpr ::Org::BouncyCastle::Cms::SignerInformation*& Org::BouncyCastle::Tsp::TimeStampToken::__cordl_internal_get_tsaSignerInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tsaSignerInfo;
}
constexpr ::Org::BouncyCastle::Cms::SignerInformation* const& Org::BouncyCastle::Tsp::TimeStampToken::__cordl_internal_get_tsaSignerInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tsaSignerInfo;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampToken::__cordl_internal_set_tsaSignerInfo(::Org::BouncyCastle::Cms::SignerInformation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tsaSignerInfo = value;
}
constexpr ::Org::BouncyCastle::Tsp::TimeStampTokenInfo*& Org::BouncyCastle::Tsp::TimeStampToken::__cordl_internal_get_tstInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tstInfo;
}
constexpr ::Org::BouncyCastle::Tsp::TimeStampTokenInfo* const& Org::BouncyCastle::Tsp::TimeStampToken::__cordl_internal_get_tstInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tstInfo;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampToken::__cordl_internal_set_tstInfo(::Org::BouncyCastle::Tsp::TimeStampTokenInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tstInfo = value;
}
constexpr ::Org::BouncyCastle::Tsp::TimeStampToken_CertID*& Org::BouncyCastle::Tsp::TimeStampToken::__cordl_internal_get_certID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certID;
}
constexpr ::Org::BouncyCastle::Tsp::TimeStampToken_CertID* const& Org::BouncyCastle::Tsp::TimeStampToken::__cordl_internal_get_certID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certID;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampToken::__cordl_internal_set_certID(::Org::BouncyCastle::Tsp::TimeStampToken_CertID* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certID = value;
}
inline void Org::BouncyCastle::Tsp::TimeStampToken::_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contentInfo);
}
inline void Org::BouncyCastle::Tsp::TimeStampToken::_ctor(::Org::BouncyCastle::Cms::CmsSignedData* signedData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSignedData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signedData);
}
inline ::Org::BouncyCastle::Tsp::TimeStampTokenInfo* Org::BouncyCastle::Tsp::TimeStampToken::get_TimeStampInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { "get_TimeStampInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::SignerID* Org::BouncyCastle::Tsp::TimeStampToken::get_SignerID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { "get_SignerID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerID*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Tsp::TimeStampToken::get_SignedAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { "get_SignedAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Tsp::TimeStampToken::get_UnsignedAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { "get_UnsignedAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Tsp::TimeStampToken::GetCertificates(::StringW type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { "GetCertificates", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*>(this, ___internal_method, type);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Tsp::TimeStampToken::GetCrls(::StringW type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { "GetCrls", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*>(this, ___internal_method, type);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Tsp::TimeStampToken::GetAttributeCertificates(::StringW type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { "GetAttributeCertificates", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*>(this, ___internal_method, type);
}
inline void Org::BouncyCastle::Tsp::TimeStampToken::Validate(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { "Validate", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cert);
}
inline ::Org::BouncyCastle::Cms::CmsSignedData* Org::BouncyCastle::Tsp::TimeStampToken::ToCmsSignedData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { "ToCmsSignedData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsSignedData*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Tsp::TimeStampToken::GetEncoded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { "GetEncoded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Tsp::TimeStampToken::GetEncoded(::StringW encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampToken*>(), { "GetEncoded", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, encoding);
}
inline ::Org::BouncyCastle::Tsp::TimeStampToken* Org::BouncyCastle::Tsp::TimeStampToken::New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::TimeStampToken*>(contentInfo));
}
inline ::Org::BouncyCastle::Tsp::TimeStampToken* Org::BouncyCastle::Tsp::TimeStampToken::New_ctor(::Org::BouncyCastle::Cms::CmsSignedData* signedData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::TimeStampToken*>(signedData));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Tsp::TimeStampToken::TimeStampToken() {}
