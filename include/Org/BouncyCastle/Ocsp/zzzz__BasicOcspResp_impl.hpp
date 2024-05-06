#pragma once
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__BasicOcspResp_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__BasicOcspResponse_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__ResponseData_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__RespData_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__RespID_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__SingleResp_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*)>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x12fc4cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetTbsResponseData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::GetTbsResponseData)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x12fc504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(),
                                                                               "GetTbsResponseData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::get_Version)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x12fc65c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), "get_Version",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.get_ResponderId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Ocsp::RespID* (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::get_ResponderId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x12fc688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(),
                                                                               "get_ResponderId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.get_ProducedAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::get_ProducedAt)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x12fc720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(),
                                                                               "get_ProducedAt", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.get_Responses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Ocsp::SingleResp*, ::Array<::Org::BouncyCastle::Ocsp::SingleResp*>*> (
    ::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::get_Responses)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x12fc744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(),
                                                                               "get_Responses", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.get_ResponseExtensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::get_ResponseExtensions)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x12fc8a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(),
                                                                               "get_ResponseExtensions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetX509Extensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::GetX509Extensions)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x12fc8c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.get_SignatureAlgName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::get_SignatureAlgName)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x12fc8dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(),
                                                                               "get_SignatureAlgName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.get_SignatureAlgOid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::get_SignatureAlgOid)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x12fcaf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(),
                                                                               "get_SignatureAlgOid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetResponseData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Ocsp::RespData* (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::GetResponseData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x12fcb24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(),
                                                                               "GetResponseData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::GetSignature)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x12fcbb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), "GetSignature",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetCertList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::GetCertList)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x12fcbd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), "GetCertList",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetCerts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*> (
    ::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::GetCerts)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x12fd128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), "GetCerts",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)(::StringW)>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::GetCertificates)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x12fd3ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), "GetCertificates",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.Verify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::Verify)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x12fd528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), "Verify", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetEncoded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::GetEncoded)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x12fd810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), "GetEncoded",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)(::System::Object*)>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x12fd82c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x12fd8dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), 2));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*& Org::BouncyCastle::Ocsp::BasicOcspResp::__cordl_internal_get_resp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resp;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*> const& Org::BouncyCastle::Ocsp::BasicOcspResp::__cordl_internal_get_resp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resp;
}
constexpr void Org::BouncyCastle::Ocsp::BasicOcspResp::__cordl_internal_set_resp(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponseData*& Org::BouncyCastle::Ocsp::BasicOcspResp::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*> const& Org::BouncyCastle::Ocsp::BasicOcspResp::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void Org::BouncyCastle::Ocsp::BasicOcspResp::__cordl_internal_set_data(::Org::BouncyCastle::Asn1::Ocsp::ResponseData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Ocsp::BasicOcspResp* Org::BouncyCastle::Ocsp::BasicOcspResp::New_ctor(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* resp) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(resp));
}
inline void Org::BouncyCastle::Ocsp::BasicOcspResp::_ctor(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* resp) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resp);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Ocsp::BasicOcspResp::GetTbsResponseData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(),
                                                                             "GetTbsResponseData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Ocsp::BasicOcspResp::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), "get_Version",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::RespID* Org::BouncyCastle::Ocsp::BasicOcspResp::get_ResponderId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(),
                                                                             "get_ResponderId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::RespID*, false>(this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::Ocsp::BasicOcspResp::get_ProducedAt() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), "get_ProducedAt",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Ocsp::SingleResp*, ::Array<::Org::BouncyCastle::Ocsp::SingleResp*>*> Org::BouncyCastle::Ocsp::BasicOcspResp::get_Responses() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), "get_Responses",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Ocsp::SingleResp*, ::Array<::Org::BouncyCastle::Ocsp::SingleResp*>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Ocsp::BasicOcspResp::get_ResponseExtensions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(),
                                                                             "get_ResponseExtensions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Ocsp::BasicOcspResp::GetX509Extensions() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*, false>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Ocsp::BasicOcspResp::get_SignatureAlgName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(),
                                                                             "get_SignatureAlgName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Ocsp::BasicOcspResp::get_SignatureAlgOid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(),
                                                                             "get_SignatureAlgOid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::RespData* Org::BouncyCastle::Ocsp::BasicOcspResp::GetResponseData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(),
                                                                             "GetResponseData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::RespData*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Ocsp::BasicOcspResp::GetSignature() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), "GetSignature",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::System::Collections::IList* Org::BouncyCastle::Ocsp::BasicOcspResp::GetCertList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), "GetCertList",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*, false>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*> Org::BouncyCastle::Ocsp::BasicOcspResp::GetCerts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), "GetCerts",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Ocsp::BasicOcspResp::GetCertificates(::StringW type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), "GetCertificates", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*, false>(this, ___internal_method, type);
}
inline bool Org::BouncyCastle::Ocsp::BasicOcspResp::Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), "Verify", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, publicKey);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Ocsp::BasicOcspResp::GetEncoded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), "GetEncoded",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Ocsp::BasicOcspResp::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::Ocsp::BasicOcspResp::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::BasicOcspResp::BasicOcspResp() {}
