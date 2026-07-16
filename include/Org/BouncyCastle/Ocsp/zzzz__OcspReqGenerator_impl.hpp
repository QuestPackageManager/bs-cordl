#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/OcspReqGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__OcspReqGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__Request_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateID_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__OcspReqGenerator_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__OcspReq_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject::*)(
    ::Org::BouncyCastle::Ocsp::CertificateID*, ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(&::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3574648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateID*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject.ToRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::Request* (::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject::*)()>(
    &::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject::ToRequest)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3575458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject*>(), { "ToRequest", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Ocsp::CertificateID*& Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject::__cordl_internal_get_certId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certId;
}
constexpr ::Org::BouncyCastle::Ocsp::CertificateID* const& Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject::__cordl_internal_get_certId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certId;
}
constexpr void Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject::__cordl_internal_set_certId(::Org::BouncyCastle::Ocsp::CertificateID* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certId = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject::__cordl_internal_get_extensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject::__cordl_internal_get_extensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr void Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject::__cordl_internal_set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extensions = value;
}
inline void Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject::_ctor(::Org::BouncyCastle::Ocsp::CertificateID* certId, ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateID*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certId, extensions);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::Request* Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject::ToRequest() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject*>(), { "ToRequest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::Request*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject* Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject::New_ctor(::Org::BouncyCastle::Ocsp::CertificateID* certId,
                                                                                                                                    ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject*>(certId, extensions));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject::OcspReqGenerator_RequestObject() {}
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator.AddRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(::Org::BouncyCastle::Ocsp::CertificateID*)>(
    &::Org::BouncyCastle::Ocsp::OcspReqGenerator::AddRequest)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3574568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>(), { "AddRequest", {}, { ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateID*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator.AddRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(
    ::Org::BouncyCastle::Ocsp::CertificateID*, ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(&::Org::BouncyCastle::Ocsp::OcspReqGenerator::AddRequest)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3574650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>(),
                                         { "AddRequest", {}, { ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateID*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator.SetRequestorName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(
    &::Org::BouncyCastle::Ocsp::OcspReqGenerator::SetRequestorName)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3574734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>(),
                                                                                           { "SetRequestorName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator.SetRequestorName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(::Org::BouncyCastle::Asn1::X509::GeneralName*)>(
    &::Org::BouncyCastle::Ocsp::OcspReqGenerator::SetRequestorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x357485c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>(),
                                                                                           { "SetRequestorName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator.SetRequestExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Ocsp::OcspReqGenerator::SetRequestExtensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3574864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>(),
                                                                                           { "SetRequestExtensions", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator.GenerateRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Ocsp::OcspReq* (
    ::Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*,
                                                    ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Ocsp::OcspReqGenerator::GenerateRequest)> {
  constexpr static std::size_t size = 0xbec;
  constexpr static std::size_t addrs = 0x357486c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>(),
                                                { "GenerateRequest",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                    ::i2c::type_of<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Ocsp::OcspReq* (::Org::BouncyCastle::Ocsp::OcspReqGenerator::*)()>(
    &::Org::BouncyCastle::Ocsp::OcspReqGenerator::Generate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x35754d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>(), { "Generate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Ocsp::OcspReq* (
    ::Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(::StringW, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>)>(
    &::Org::BouncyCastle::Ocsp::OcspReqGenerator::Generate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35754e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>(),
                                                                                           { "Generate",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                                                               ::i2c::type_of<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Ocsp::OcspReq* (
    ::Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(::StringW, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>,
                                                    ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Ocsp::OcspReqGenerator::Generate)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x35754ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>(),
                                                { "Generate",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                    ::i2c::type_of<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator.get_SignatureAlgNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Ocsp::OcspReqGenerator::*)()>(
    &::Org::BouncyCastle::Ocsp::OcspReqGenerator::get_SignatureAlgNames)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x35758b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>(), { "get_SignatureAlgNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReqGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::OcspReqGenerator::*)()>(&::Org::BouncyCastle::Ocsp::OcspReqGenerator::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3575904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::Ocsp::OcspReqGenerator::__cordl_internal_get_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Ocsp::OcspReqGenerator::__cordl_internal_get_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr void Org::BouncyCastle::Ocsp::OcspReqGenerator::__cordl_internal_set_list(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___list = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& Org::BouncyCastle::Ocsp::OcspReqGenerator::__cordl_internal_get_requestorName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestorName;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& Org::BouncyCastle::Ocsp::OcspReqGenerator::__cordl_internal_get_requestorName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestorName;
}
constexpr void Org::BouncyCastle::Ocsp::OcspReqGenerator::__cordl_internal_set_requestorName(::Org::BouncyCastle::Asn1::X509::GeneralName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestorName = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Ocsp::OcspReqGenerator::__cordl_internal_get_requestExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestExtensions;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& Org::BouncyCastle::Ocsp::OcspReqGenerator::__cordl_internal_get_requestExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestExtensions;
}
constexpr void Org::BouncyCastle::Ocsp::OcspReqGenerator::__cordl_internal_set_requestExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestExtensions = value;
}
inline void Org::BouncyCastle::Ocsp::OcspReqGenerator::AddRequest(::Org::BouncyCastle::Ocsp::CertificateID* certId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>(), { "AddRequest", {}, { ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateID*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certId);
}
inline void Org::BouncyCastle::Ocsp::OcspReqGenerator::AddRequest(::Org::BouncyCastle::Ocsp::CertificateID* certId, ::Org::BouncyCastle::Asn1::X509::X509Extensions* singleRequestExtensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>(),
                                       { "AddRequest", {}, { ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateID*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certId, singleRequestExtensions);
}
inline void Org::BouncyCastle::Ocsp::OcspReqGenerator::SetRequestorName(::Org::BouncyCastle::Asn1::X509::X509Name* requestorName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>(), { "SetRequestorName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestorName);
}
inline void Org::BouncyCastle::Ocsp::OcspReqGenerator::SetRequestorName(::Org::BouncyCastle::Asn1::X509::GeneralName* requestorName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>(),
                                                                                         { "SetRequestorName", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestorName);
}
inline void Org::BouncyCastle::Ocsp::OcspReqGenerator::SetRequestExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* requestExtensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>(),
                                                                                         { "SetRequestExtensions", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestExtensions);
}
inline ::Org::BouncyCastle::Ocsp::OcspReq* Org::BouncyCastle::Ocsp::OcspReqGenerator::GenerateRequest(::Org::BouncyCastle::Asn1::DerObjectIdentifier* signingAlgorithm,
                                                                                                      ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                                                      ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*> chain,
                                                                                                      ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>(),
                                              { "GenerateRequest",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                  ::i2c::type_of<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::OcspReq*>(this, ___internal_method, signingAlgorithm, privateKey, chain, random);
}
inline ::Org::BouncyCastle::Ocsp::OcspReq* Org::BouncyCastle::Ocsp::OcspReqGenerator::Generate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>(), { "Generate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::OcspReq*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::OcspReq* Org::BouncyCastle::Ocsp::OcspReqGenerator::Generate(::StringW signingAlgorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                                               ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*> chain) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>(),
                                                                                         { "Generate",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                                                             ::i2c::type_of<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::OcspReq*>(this, ___internal_method, signingAlgorithm, privateKey, chain);
}
inline ::Org::BouncyCastle::Ocsp::OcspReq* Org::BouncyCastle::Ocsp::OcspReqGenerator::Generate(::StringW signingAlgorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                                               ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*> chain,
                                                                                               ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>(),
                                              { "Generate",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                  ::i2c::type_of<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::OcspReq*>(this, ___internal_method, signingAlgorithm, privateKey, chain, random);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Ocsp::OcspReqGenerator::get_SignatureAlgNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>(), { "get_SignatureAlgNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Ocsp::OcspReqGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::OcspReqGenerator* Org::BouncyCastle::Ocsp::OcspReqGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Ocsp::OcspReqGenerator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::OcspReqGenerator::OcspReqGenerator() {}
