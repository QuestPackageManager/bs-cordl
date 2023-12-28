#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__OcspReqGenerator_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__OcspReq_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateID_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__OcspReqGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__Request_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::__OcspReqGenerator__RequestObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Ocsp::__OcspReqGenerator__RequestObject::*)(
    ::Org::BouncyCastle::Ocsp::CertificateID*, ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(&::Org::BouncyCastle::Ocsp::__OcspReqGenerator__RequestObject::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x10a09b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::__OcspReqGenerator__RequestObject*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Ocsp::CertificateID*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::__OcspReqGenerator__RequestObject.ToRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::Request* (::Org::BouncyCastle::Ocsp::__OcspReqGenerator__RequestObject::*)()>(
    &::Org::BouncyCastle::Ocsp::__OcspReqGenerator__RequestObject::ToRequest)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x10a181c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::__OcspReqGenerator__RequestObject*>::get(), "ToRequest",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Ocsp::CertificateID*& Org::BouncyCastle::Ocsp::__OcspReqGenerator__RequestObject::__get_certId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certId;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Ocsp::CertificateID*> const& Org::BouncyCastle::Ocsp::__OcspReqGenerator__RequestObject::__get_certId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certId;
}
constexpr void Org::BouncyCastle::Ocsp::__OcspReqGenerator__RequestObject::__set_certId(::Org::BouncyCastle::Ocsp::CertificateID* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Ocsp::__OcspReqGenerator__RequestObject::__get_extensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> const& Org::BouncyCastle::Ocsp::__OcspReqGenerator__RequestObject::__get_extensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr void Org::BouncyCastle::Ocsp::__OcspReqGenerator__RequestObject::__set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___extensions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Ocsp::__OcspReqGenerator__RequestObject* Org::BouncyCastle::Ocsp::__OcspReqGenerator__RequestObject::New_ctor(::Org::BouncyCastle::Ocsp::CertificateID* certId,
                                                                                                                                          ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Ocsp::__OcspReqGenerator__RequestObject*>(certId, extensions));
}
inline void Org::BouncyCastle::Ocsp::__OcspReqGenerator__RequestObject::_ctor(::Org::BouncyCastle::Ocsp::CertificateID* certId, ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::__OcspReqGenerator__RequestObject*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Ocsp::CertificateID*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certId, extensions);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::Request* Org::BouncyCastle::Ocsp::__OcspReqGenerator__RequestObject::ToRequest() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::__OcspReqGenerator__RequestObject*>::get(), "ToRequest",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::Request*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::__OcspReqGenerator__RequestObject::__OcspReqGenerator__RequestObject() {}
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator.AddRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(::Org::BouncyCastle::Ocsp::CertificateID*)>(
    &::Org::BouncyCastle::Ocsp::OcspReqGenerator::AddRequest)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x10a08d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>::get(), "AddRequest", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Ocsp::CertificateID*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator.AddRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(
    ::Org::BouncyCastle::Ocsp::CertificateID*, ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(&::Org::BouncyCastle::Ocsp::OcspReqGenerator::AddRequest)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x10a09e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>::get(), "AddRequest", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Ocsp::CertificateID*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator.SetRequestorName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(
    &::Org::BouncyCastle::Ocsp::OcspReqGenerator::SetRequestorName)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x10a0ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>::get(), "SetRequestorName", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator.SetRequestorName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(::Org::BouncyCastle::Asn1::X509::GeneralName*)>(
    &::Org::BouncyCastle::Ocsp::OcspReqGenerator::SetRequestorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10a0c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>::get(), "SetRequestorName", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator.SetRequestExtensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Ocsp::OcspReqGenerator::SetRequestExtensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10a0c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>::get(), "SetRequestExtensions", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator.GenerateRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Ocsp::OcspReq* (
    ::Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*,
                                                    ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*>,
                                                    ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Ocsp::OcspReqGenerator::GenerateRequest)> {
  constexpr static std::size_t size = 0xc0c;
  constexpr static std::size_t addrs = 0x10a0c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>::get(), "GenerateRequest", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Ocsp::OcspReq* (::Org::BouncyCastle::Ocsp::OcspReqGenerator::*)()>(
    &::Org::BouncyCastle::Ocsp::OcspReqGenerator::Generate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x10a1894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>::get(), "Generate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Ocsp::OcspReq* (
    ::Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(::StringW, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*,
                                                    ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*>)>(
    &::Org::BouncyCastle::Ocsp::OcspReqGenerator::Generate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10a18a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Ocsp::OcspReq* (
    ::Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(::StringW, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*,
                                                    ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*>,
                                                    ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Ocsp::OcspReqGenerator::Generate)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x10a18b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator.get_SignatureAlgNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Ocsp::OcspReqGenerator::*)()>(
    &::Org::BouncyCastle::Ocsp::OcspReqGenerator::get_SignatureAlgNames)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x10a1c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>::get(),
                                                                               "get_SignatureAlgNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Ocsp::OcspReqGenerator::*)()>(&::Org::BouncyCastle::Ocsp::OcspReqGenerator::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x10a1cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::Ocsp::OcspReqGenerator::__get_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& Org::BouncyCastle::Ocsp::OcspReqGenerator::__get_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr void Org::BouncyCastle::Ocsp::OcspReqGenerator::__set_list(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___list)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& Org::BouncyCastle::Ocsp::OcspReqGenerator::__get_requestorName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestorName;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& Org::BouncyCastle::Ocsp::OcspReqGenerator::__get_requestorName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestorName;
}
constexpr void Org::BouncyCastle::Ocsp::OcspReqGenerator::__set_requestorName(::Org::BouncyCastle::Asn1::X509::GeneralName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___requestorName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Ocsp::OcspReqGenerator::__get_requestExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestExtensions;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> const& Org::BouncyCastle::Ocsp::OcspReqGenerator::__get_requestExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestExtensions;
}
constexpr void Org::BouncyCastle::Ocsp::OcspReqGenerator::__set_requestExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___requestExtensions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Ocsp::OcspReqGenerator::AddRequest(::Org::BouncyCastle::Ocsp::CertificateID* certId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>::get(), "AddRequest", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Ocsp::CertificateID*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certId);
}
inline void Org::BouncyCastle::Ocsp::OcspReqGenerator::AddRequest(::Org::BouncyCastle::Ocsp::CertificateID* certId, ::Org::BouncyCastle::Asn1::X509::X509Extensions* singleRequestExtensions) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>::get(), "AddRequest", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Ocsp::CertificateID*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certId, singleRequestExtensions);
}
inline void Org::BouncyCastle::Ocsp::OcspReqGenerator::SetRequestorName(::Org::BouncyCastle::Asn1::X509::X509Name* requestorName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>::get(), "SetRequestorName", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestorName);
}
inline void Org::BouncyCastle::Ocsp::OcspReqGenerator::SetRequestorName(::Org::BouncyCastle::Asn1::X509::GeneralName* requestorName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>::get(), "SetRequestorName", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestorName);
}
inline void Org::BouncyCastle::Ocsp::OcspReqGenerator::SetRequestExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* requestExtensions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>::get(), "SetRequestExtensions", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestExtensions);
}
inline ::Org::BouncyCastle::Ocsp::OcspReq*
Org::BouncyCastle::Ocsp::OcspReqGenerator::GenerateRequest(::Org::BouncyCastle::Asn1::DerObjectIdentifier* signingAlgorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                           ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*> chain,
                                                           ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>::get(), "GenerateRequest", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::OcspReq*, false>(this, ___internal_method, signingAlgorithm, privateKey, chain, random);
}
inline ::Org::BouncyCastle::Ocsp::OcspReq* Org::BouncyCastle::Ocsp::OcspReqGenerator::Generate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>::get(), "Generate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::OcspReq*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::OcspReq*
Org::BouncyCastle::Ocsp::OcspReqGenerator::Generate(::StringW signingAlgorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                    ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*> chain) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::OcspReq*, false>(this, ___internal_method, signingAlgorithm, privateKey, chain);
}
inline ::Org::BouncyCastle::Ocsp::OcspReq*
Org::BouncyCastle::Ocsp::OcspReqGenerator::Generate(::StringW signingAlgorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                    ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*> chain,
                                                    ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::OcspReq*, false>(this, ___internal_method, signingAlgorithm, privateKey, chain, random);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Ocsp::OcspReqGenerator::get_SignatureAlgNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>::get(),
                                                                             "get_SignatureAlgNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::OcspReqGenerator* Org::BouncyCastle::Ocsp::OcspReqGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>());
}
inline void Org::BouncyCastle::Ocsp::OcspReqGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::OcspReqGenerator::OcspReqGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
