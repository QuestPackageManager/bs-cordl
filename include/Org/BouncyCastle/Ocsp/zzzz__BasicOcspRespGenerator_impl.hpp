#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Ocsp\BasicOcspRespGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__BasicOcspRespGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__CertStatus_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__SingleResponse_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__BasicOcspRespGenerator_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__BasicOcspResp_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateID_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateStatus_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__RespID_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::*)(
    ::Org::BouncyCastle::Ocsp::CertificateID*, ::Org::BouncyCastle::Ocsp::CertificateStatus*, ::System::DateTime, ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3573624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateID*>(), ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateStatus*>(),
                                                                 ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::*)(
    ::Org::BouncyCastle::Ocsp::CertificateID*, ::Org::BouncyCastle::Ocsp::CertificateStatus*, ::System::DateTime, ::System::DateTime, ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3573930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateID*>(), ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateStatus*>(),
                                             ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::*)(
    ::Org::BouncyCastle::Ocsp::CertificateID*, ::Org::BouncyCastle::Ocsp::CertificateStatus*, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*,
    ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(&::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::_ctor)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x3574bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateID*>(), ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateStatus*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject.ToResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* (::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::*)()>(
    &::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::ToResponse)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3574734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject*>(), { "ToResponse", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Ocsp::CertificateID*& Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::__cordl_internal_get_certId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certId;
}
constexpr ::Org::BouncyCastle::Ocsp::CertificateID* const& Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::__cordl_internal_get_certId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certId;
}
constexpr void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::__cordl_internal_set_certId(::Org::BouncyCastle::Ocsp::CertificateID* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certId = value;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertStatus*& Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::__cordl_internal_get_certStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certStatus;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* const& Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::__cordl_internal_get_certStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certStatus;
}
constexpr void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::__cordl_internal_set_certStatus(::Org::BouncyCastle::Asn1::Ocsp::CertStatus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certStatus = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::__cordl_internal_get_thisUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thisUpdate;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::__cordl_internal_get_thisUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thisUpdate;
}
constexpr void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::__cordl_internal_set_thisUpdate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___thisUpdate = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::__cordl_internal_get_nextUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextUpdate;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::__cordl_internal_get_nextUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextUpdate;
}
constexpr void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::__cordl_internal_set_nextUpdate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextUpdate = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::__cordl_internal_get_extensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::__cordl_internal_get_extensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::__cordl_internal_set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extensions = value;
}
inline void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::_ctor(::Org::BouncyCastle::Ocsp::CertificateID* certId, ::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus,
                                                                                  ::System::DateTime thisUpdate, ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateID*>(), ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateStatus*>(),
                                                               ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certId, certStatus, thisUpdate, extensions);
}
inline void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::_ctor(::Org::BouncyCastle::Ocsp::CertificateID* certId, ::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus,
                                                                                  ::System::DateTime thisUpdate, ::System::DateTime nextUpdate,
                                                                                  ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateID*>(), ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateStatus*>(),
                                                  ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certId, certStatus, thisUpdate, nextUpdate, extensions);
}
inline void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::_ctor(::Org::BouncyCastle::Ocsp::CertificateID* certId, ::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus,
                                                                                  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* thisUpdate, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* nextUpdate,
                                                                                  ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateID*>(), ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateStatus*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certId, certStatus, thisUpdate, nextUpdate, extensions);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::ToResponse() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject*>(), { "ToResponse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject*
Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::New_ctor(::Org::BouncyCastle::Ocsp::CertificateID* certId, ::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus,
                                                                         ::System::DateTime thisUpdate, ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject*>(certId, certStatus, thisUpdate, extensions));
}
inline ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject*
Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::New_ctor(::Org::BouncyCastle::Ocsp::CertificateID* certId, ::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus,
                                                                         ::System::DateTime thisUpdate, ::System::DateTime nextUpdate, ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject*>(certId, certStatus, thisUpdate, nextUpdate, extensions));
}
inline ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject*
Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::New_ctor(::Org::BouncyCastle::Ocsp::CertificateID* certId, ::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus,
                                                                         ::Org::BouncyCastle::Asn1::DerGeneralizedTime* thisUpdate, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* nextUpdate,
                                                                         ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject*>(certId, certStatus, thisUpdate, nextUpdate, extensions));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::BasicOcspRespGenerator_ResponseObject() {}
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)(::Org::BouncyCastle::Ocsp::RespID*)>(
    &::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x35731ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Ocsp::RespID*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x357325c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator.AddResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)(
    ::Org::BouncyCastle::Ocsp::CertificateID*, ::Org::BouncyCastle::Ocsp::CertificateStatus*)>(&::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::AddResponse)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x35734f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(),
                                         { "AddResponse", {}, { ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateID*>(), ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateStatus*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator.AddResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)(
    ::Org::BouncyCastle::Ocsp::CertificateID*, ::Org::BouncyCastle::Ocsp::CertificateStatus*, ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::AddResponse)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x35736b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(),
                                                             { "AddResponse",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateID*>(), ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateStatus*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator.AddResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)(
    ::Org::BouncyCastle::Ocsp::CertificateID*, ::Org::BouncyCastle::Ocsp::CertificateStatus*, ::System::DateTime, ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::AddResponse)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x35737f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(),
                                                             { "AddResponse",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateID*>(), ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateStatus*>(),
                                                                 ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator.AddResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)(
    ::Org::BouncyCastle::Ocsp::CertificateID*, ::Org::BouncyCastle::Ocsp::CertificateStatus*, ::System::DateTime, ::System::DateTime, ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::AddResponse)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x35739e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(),
                                         { "AddResponse",
                                           {},
                                           { ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateID*>(), ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateStatus*>(),
                                             ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator.SetResponseExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)(::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::SetResponseExtensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3573afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(),
                                                                                           { "SetResponseExtensions", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator.GenerateResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Ocsp::BasicOcspResp* (
    ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)(::Org::BouncyCastle::Crypto::ISignatureFactory*, ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>, ::System::DateTime)>(
    &::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::GenerateResponse)> {
  constexpr static std::size_t size = 0xc30;
  constexpr static std::size_t addrs = 0x3573b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(),
                                                             { "GenerateResponse",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>(),
                                                                 ::i2c::type_of<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Ocsp::BasicOcspResp* (
    ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)(::StringW, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>, ::System::DateTime)>(
    &::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::Generate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3574904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(),
                                                             { "Generate",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                                 ::i2c::type_of<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Ocsp::BasicOcspResp* (
    ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)(::StringW, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>, ::System::DateTime,
                                                          ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::Generate)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x357490c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(),
                                                             { "Generate",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                                 ::i2c::type_of<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>>(), ::i2c::type_of<::System::DateTime>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Ocsp::BasicOcspResp* (
    ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)(::Org::BouncyCastle::Crypto::ISignatureFactory*, ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>, ::System::DateTime)>(
    &::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::Generate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x35749f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(),
                                                             { "Generate",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>(),
                                                                 ::i2c::type_of<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator.get_SignatureAlgNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)()>(
    &::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::get_SignatureAlgNames)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3574a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(), { "get_SignatureAlgNames", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::__cordl_internal_get_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::__cordl_internal_get_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::__cordl_internal_set_list(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___list = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::__cordl_internal_get_responseExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___responseExtensions;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::__cordl_internal_get_responseExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___responseExtensions;
}
constexpr void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::__cordl_internal_set_responseExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___responseExtensions = value;
}
constexpr ::Org::BouncyCastle::Ocsp::RespID*& Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::__cordl_internal_get_responderID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___responderID;
}
constexpr ::Org::BouncyCastle::Ocsp::RespID* const& Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::__cordl_internal_get_responderID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___responderID;
}
constexpr void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::__cordl_internal_set_responderID(::Org::BouncyCastle::Ocsp::RespID* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___responderID = value;
}
inline void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::_ctor(::Org::BouncyCastle::Ocsp::RespID* responderID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Ocsp::RespID*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, responderID);
}
inline void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, publicKey);
}
inline void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::AddResponse(::Org::BouncyCastle::Ocsp::CertificateID* certID, ::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(),
                                       { "AddResponse", {}, { ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateID*>(), ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateStatus*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certID, certStatus);
}
inline void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::AddResponse(::Org::BouncyCastle::Ocsp::CertificateID* certID, ::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus,
                                                                         ::Org::BouncyCastle::Asn1::X509::X509Extensions* singleExtensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(),
                                                           { "AddResponse",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateID*>(), ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateStatus*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certID, certStatus, singleExtensions);
}
inline void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::AddResponse(::Org::BouncyCastle::Ocsp::CertificateID* certID, ::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus,
                                                                         ::System::DateTime nextUpdate, ::Org::BouncyCastle::Asn1::X509::X509Extensions* singleExtensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(),
                                                           { "AddResponse",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateID*>(), ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateStatus*>(),
                                                               ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certID, certStatus, nextUpdate, singleExtensions);
}
inline void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::AddResponse(::Org::BouncyCastle::Ocsp::CertificateID* certID, ::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus,
                                                                         ::System::DateTime thisUpdate, ::System::DateTime nextUpdate,
                                                                         ::Org::BouncyCastle::Asn1::X509::X509Extensions* singleExtensions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(),
                                              { "AddResponse",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateID*>(), ::i2c::type_of<::Org::BouncyCastle::Ocsp::CertificateStatus*>(),
                                                  ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certID, certStatus, thisUpdate, nextUpdate, singleExtensions);
}
inline void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::SetResponseExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* responseExtensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(),
                                                                                         { "SetResponseExtensions", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, responseExtensions);
}
inline ::Org::BouncyCastle::Ocsp::BasicOcspResp* Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::GenerateResponse(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureCalculator,
                                                                                                                   ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*> chain,
                                                                                                                   ::System::DateTime producedAt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(),
                                                           { "GenerateResponse",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>(),
                                                               ::i2c::type_of<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(this, ___internal_method, signatureCalculator, chain, producedAt);
}
inline ::Org::BouncyCastle::Ocsp::BasicOcspResp* Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::Generate(::StringW signingAlgorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                                                           ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*> chain, ::System::DateTime thisUpdate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(),
                                                           { "Generate",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                               ::i2c::type_of<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(this, ___internal_method, signingAlgorithm, privateKey, chain, thisUpdate);
}
inline ::Org::BouncyCastle::Ocsp::BasicOcspResp* Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::Generate(::StringW signingAlgorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                                                           ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*> chain, ::System::DateTime producedAt,
                                                                                                           ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(),
                                                           { "Generate",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                               ::i2c::type_of<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>>(), ::i2c::type_of<::System::DateTime>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(this, ___internal_method, signingAlgorithm, privateKey, chain, producedAt, random);
}
inline ::Org::BouncyCastle::Ocsp::BasicOcspResp* Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::Generate(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureCalculatorFactory,
                                                                                                           ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*> chain, ::System::DateTime producedAt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(),
                                                           { "Generate",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>(),
                                                               ::i2c::type_of<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(this, ___internal_method, signatureCalculatorFactory, chain, producedAt);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::get_SignatureAlgNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(), { "get_SignatureAlgNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator* Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::New_ctor(::Org::BouncyCastle::Ocsp::RespID* responderID) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(responderID));
}
inline ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator* Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*>(publicKey));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::BasicOcspRespGenerator() {}
