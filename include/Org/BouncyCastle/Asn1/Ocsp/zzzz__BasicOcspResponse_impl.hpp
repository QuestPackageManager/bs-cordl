#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Ocsp\BasicOcspResponse.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__BasicOcspResponse_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__ResponseData_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x34599e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x34599f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::*)(
    ::Org::BouncyCastle::Asn1::Ocsp::ResponseData*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Asn1::DerBitString*, ::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3459d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x3459b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse.GetTbsResponseData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::ResponseData* (::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::GetTbsResponseData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3459ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { "GetTbsResponseData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse.get_TbsResponseData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::ResponseData* (::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::get_TbsResponseData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3459ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { "get_TbsResponseData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse.GetSignatureAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::GetSignatureAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3459ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { "GetSignatureAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse.get_SignatureAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::get_SignatureAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3459ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { "get_SignatureAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse.GetSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::GetSignature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3459ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { "GetSignature", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse.get_Signature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::get_Signature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3459ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { "get_Signature", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse.GetSignatureOctets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::GetSignatureOctets)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3459f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { "GetSignatureOctets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse.GetCerts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Sequence* (::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::GetCerts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3459f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { "GetCerts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse.get_Certs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Sequence* (::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::get_Certs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3459f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { "get_Certs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::ToAsn1Object)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3459f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponseData*& Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::__cordl_internal_get_tbsResponseData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tbsResponseData;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* const& Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::__cordl_internal_get_tbsResponseData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tbsResponseData;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::__cordl_internal_set_tbsResponseData(::Org::BouncyCastle::Asn1::Ocsp::ResponseData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tbsResponseData = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::__cordl_internal_get_signatureAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureAlgorithm;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::__cordl_internal_get_signatureAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureAlgorithm;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::__cordl_internal_set_signatureAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signatureAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString*& Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::__cordl_internal_get_signature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signature;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::__cordl_internal_get_signature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signature;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::__cordl_internal_set_signature(::Org::BouncyCastle::Asn1::DerBitString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signature = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::__cordl_internal_get_certs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certs;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::__cordl_internal_get_certs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certs;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::__cordl_internal_set_certs(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certs = value;
}
inline ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::_ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponseData* tbsResponseData,
                                                                    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm, ::Org::BouncyCastle::Asn1::DerBitString* signature,
                                                                    ::Org::BouncyCastle::Asn1::Asn1Sequence* certs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tbsResponseData, signatureAlgorithm, signature, certs);
}
inline void Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::GetTbsResponseData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { "GetTbsResponseData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::get_TbsResponseData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { "get_TbsResponseData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::GetSignatureAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { "GetSignatureAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::get_SignatureAlgorithm() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { "get_SignatureAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::GetSignature() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { "GetSignature", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::get_Signature() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { "get_Signature", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::GetSignatureOctets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { "GetSignatureOctets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::GetCerts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { "GetCerts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Sequence*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::get_Certs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), { "get_Certs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Sequence*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::New_ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponseData* tbsResponseData,
                                                                                                                      ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm,
                                                                                                                      ::Org::BouncyCastle::Asn1::DerBitString* signature,
                                                                                                                      ::Org::BouncyCastle::Asn1::Asn1Sequence* certs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(tbsResponseData, signatureAlgorithm, signature, certs));
}
inline ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse::BasicOcspResponse() {}
