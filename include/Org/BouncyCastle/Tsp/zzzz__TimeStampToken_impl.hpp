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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampToken_CertID::*)(::Org::BouncyCastle::Asn1::Ess::EssCertID*)>(
    &::Org::BouncyCastle::Tsp::TimeStampToken_CertID::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25cd990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ess::EssCertID*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken_CertID._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampToken_CertID::*)(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*)>(
    &::Org::BouncyCastle::Tsp::TimeStampToken_CertID::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25cd9b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken_CertID.GetHashAlgorithmName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Tsp::TimeStampToken_CertID::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampToken_CertID::GetHashAlgorithmName)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x25ce094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>::get(),
                                                                               "GetHashAlgorithmName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken_CertID.GetHashAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Tsp::TimeStampToken_CertID::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampToken_CertID::GetHashAlgorithm)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x25ce5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>::get(),
                                                                               "GetHashAlgorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken_CertID.GetCertHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Tsp::TimeStampToken_CertID::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampToken_CertID::GetCertHash)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x25ce18c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>::get(),
                                                                               "GetCertHash", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken_CertID.get_IssuerSerial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::IssuerSerial* (::Org::BouncyCastle::Tsp::TimeStampToken_CertID::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampToken_CertID::get_IssuerSerial)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x25ce1c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>::get(),
                                                                               "get_IssuerSerial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certIDv2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Tsp::TimeStampToken_CertID::_ctor(::Org::BouncyCastle::Asn1::Ess::EssCertID* certID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ess::EssCertID*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certID);
}
inline void Org::BouncyCastle::Tsp::TimeStampToken_CertID::_ctor(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* certID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certID);
}
inline ::StringW Org::BouncyCastle::Tsp::TimeStampToken_CertID::GetHashAlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>::get(),
                                                                             "GetHashAlgorithmName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Tsp::TimeStampToken_CertID::GetHashAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>::get(),
                                                                             "GetHashAlgorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Tsp::TimeStampToken_CertID::GetCertHash() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>::get(),
                                                                             "GetCertHash", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* Org::BouncyCastle::Tsp::TimeStampToken_CertID::get_IssuerSerial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>::get(),
                                                                             "get_IssuerSerial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::IssuerSerial*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Tsp::TimeStampToken_CertID* Org::BouncyCastle::Tsp::TimeStampToken_CertID::New_ctor(::Org::BouncyCastle::Asn1::Ess::EssCertID* certID) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>(certID));
}
inline ::Org::BouncyCastle::Tsp::TimeStampToken_CertID* Org::BouncyCastle::Tsp::TimeStampToken_CertID::New_ctor(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* certID) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Tsp::TimeStampToken_CertID*>(certID));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Tsp::TimeStampToken_CertID::TimeStampToken_CertID() {}
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampToken::*)(::Org::BouncyCastle::Asn1::Cms::ContentInfo*)>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x25cb734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampToken::*)(::Org::BouncyCastle::Cms::CmsSignedData*)>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::_ctor)> {
  constexpr static std::size_t size = 0x850;
  constexpr static std::size_t addrs = 0x25cd014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsSignedData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken.get_TimeStampInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Tsp::TimeStampTokenInfo* (::Org::BouncyCastle::Tsp::TimeStampToken::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::get_TimeStampInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25cd9e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(),
                                                                               "get_TimeStampInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken.get_SignerID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::SignerID* (::Org::BouncyCastle::Tsp::TimeStampToken::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::get_SignerID)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25cd9e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(), "get_SignerID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken.get_SignedAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::AttributeTable* (::Org::BouncyCastle::Tsp::TimeStampToken::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::get_SignedAttributes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25cbf80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(),
                                                                               "get_SignedAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken.get_UnsignedAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::AttributeTable* (::Org::BouncyCastle::Tsp::TimeStampToken::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::get_UnsignedAttributes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25cda04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(),
                                                                               "get_UnsignedAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken.GetCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Tsp::TimeStampToken::*)(::StringW)>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::GetCertificates)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25cda20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(), "GetCertificates",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken.GetCrls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Tsp::TimeStampToken::*)(::StringW)>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::GetCrls)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25cda3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(), "GetCrls", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken.GetAttributeCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Tsp::TimeStampToken::*)(::StringW)>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::GetAttributeCertificates)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25cda58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(), "GetAttributeCertificates",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken.Validate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampToken::*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::Validate)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x25cda74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(), "Validate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken.ToCmsSignedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::CmsSignedData* (::Org::BouncyCastle::Tsp::TimeStampToken::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::ToCmsSignedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ce54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(),
                                                                               "ToCmsSignedData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken.GetEncoded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Tsp::TimeStampToken::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::GetEncoded)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x25ce554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(), "GetEncoded",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampToken.GetEncoded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Tsp::TimeStampToken::*)(::StringW)>(
    &::Org::BouncyCastle::Tsp::TimeStampToken::GetEncoded)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25ce5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(), "GetEncoded", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tsToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tsaSignerInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tstInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Tsp::TimeStampToken::_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contentInfo);
}
inline void Org::BouncyCastle::Tsp::TimeStampToken::_ctor(::Org::BouncyCastle::Cms::CmsSignedData* signedData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsSignedData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signedData);
}
inline ::Org::BouncyCastle::Tsp::TimeStampTokenInfo* Org::BouncyCastle::Tsp::TimeStampToken::get_TimeStampInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(),
                                                                             "get_TimeStampInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Tsp::TimeStampTokenInfo*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::SignerID* Org::BouncyCastle::Tsp::TimeStampToken::get_SignerID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(), "get_SignerID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerID*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Tsp::TimeStampToken::get_SignedAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(),
                                                                             "get_SignedAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Tsp::TimeStampToken::get_UnsignedAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(),
                                                                             "get_UnsignedAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Tsp::TimeStampToken::GetCertificates(::StringW type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(), "GetCertificates", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*, false>(this, ___internal_method, type);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Tsp::TimeStampToken::GetCrls(::StringW type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(), "GetCrls", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*, false>(this, ___internal_method, type);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Tsp::TimeStampToken::GetAttributeCertificates(::StringW type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(), "GetAttributeCertificates",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*, false>(this, ___internal_method, type);
}
inline void Org::BouncyCastle::Tsp::TimeStampToken::Validate(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(), "Validate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cert);
}
inline ::Org::BouncyCastle::Cms::CmsSignedData* Org::BouncyCastle::Tsp::TimeStampToken::ToCmsSignedData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(),
                                                                             "ToCmsSignedData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsSignedData*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Tsp::TimeStampToken::GetEncoded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(), "GetEncoded",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Tsp::TimeStampToken::GetEncoded(::StringW encoding) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampToken*>::get(), "GetEncoded", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, encoding);
}
inline ::Org::BouncyCastle::Tsp::TimeStampToken* Org::BouncyCastle::Tsp::TimeStampToken::New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Tsp::TimeStampToken*>(contentInfo));
}
inline ::Org::BouncyCastle::Tsp::TimeStampToken* Org::BouncyCastle::Tsp::TimeStampToken::New_ctor(::Org::BouncyCastle::Cms::CmsSignedData* signedData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Tsp::TimeStampToken*>(signedData));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Tsp::TimeStampToken::TimeStampToken() {}
