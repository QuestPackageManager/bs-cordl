#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\AttributeCertificate.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttributeCertificate_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttributeCertificateInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttributeCertificate.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AttributeCertificate* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::X509::AttributeCertificate::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x355b89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttributeCertificate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::AttributeCertificate::*)(
    ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Asn1::DerBitString*)>(
    &::Org::BouncyCastle::Asn1::X509::AttributeCertificate::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x355baa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttributeCertificate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::AttributeCertificate::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::AttributeCertificate::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x355b93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttributeCertificate.get_ACInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* (::Org::BouncyCastle::Asn1::X509::AttributeCertificate::*)()>(
    &::Org::BouncyCastle::Asn1::X509::AttributeCertificate::get_ACInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x355bc38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(), { "get_ACInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttributeCertificate.get_SignatureAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::X509::AttributeCertificate::*)()>(
    &::Org::BouncyCastle::Asn1::X509::AttributeCertificate::get_SignatureAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x355bc40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(), { "get_SignatureAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttributeCertificate.get_SignatureValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (::Org::BouncyCastle::Asn1::X509::AttributeCertificate::*)()>(
    &::Org::BouncyCastle::Asn1::X509::AttributeCertificate::get_SignatureValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x355bc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(), { "get_SignatureValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttributeCertificate.GetSignatureOctets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Asn1::X509::AttributeCertificate::*)()>(
    &::Org::BouncyCastle::Asn1::X509::AttributeCertificate::GetSignatureOctets)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x355bc50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(), { "GetSignatureOctets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::AttributeCertificate.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::AttributeCertificate::*)()>(
    &::Org::BouncyCastle::Asn1::X509::AttributeCertificate::ToAsn1Object)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x355bc6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*& Org::BouncyCastle::Asn1::X509::AttributeCertificate::__cordl_internal_get_acinfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acinfo;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* const& Org::BouncyCastle::Asn1::X509::AttributeCertificate::__cordl_internal_get_acinfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acinfo;
}
constexpr void Org::BouncyCastle::Asn1::X509::AttributeCertificate::__cordl_internal_set_acinfo(::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___acinfo = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::X509::AttributeCertificate::__cordl_internal_get_signatureAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureAlgorithm;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Asn1::X509::AttributeCertificate::__cordl_internal_get_signatureAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureAlgorithm;
}
constexpr void Org::BouncyCastle::Asn1::X509::AttributeCertificate::__cordl_internal_set_signatureAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signatureAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString*& Org::BouncyCastle::Asn1::X509::AttributeCertificate::__cordl_internal_get_signatureValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureValue;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& Org::BouncyCastle::Asn1::X509::AttributeCertificate::__cordl_internal_get_signatureValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureValue;
}
constexpr void Org::BouncyCastle::Asn1::X509::AttributeCertificate::__cordl_internal_set_signatureValue(::Org::BouncyCastle::Asn1::DerBitString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signatureValue = value;
}
inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* Org::BouncyCastle::Asn1::X509::AttributeCertificate::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X509::AttributeCertificate::_ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* acinfo,
                                                                       ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm,
                                                                       ::Org::BouncyCastle::Asn1::DerBitString* signatureValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, acinfo, signatureAlgorithm, signatureValue);
}
inline void Org::BouncyCastle::Asn1::X509::AttributeCertificate::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* Org::BouncyCastle::Asn1::X509::AttributeCertificate::get_ACInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(), { "get_ACInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::X509::AttributeCertificate::get_SignatureAlgorithm() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(), { "get_SignatureAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::X509::AttributeCertificate::get_SignatureValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(), { "get_SignatureValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::X509::AttributeCertificate::GetSignatureOctets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(), { "GetSignatureOctets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::AttributeCertificate::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* Org::BouncyCastle::Asn1::X509::AttributeCertificate::New_ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* acinfo,
                                                                                                                            ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm,
                                                                                                                            ::Org::BouncyCastle::Asn1::DerBitString* signatureValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(acinfo, signatureAlgorithm, signatureValue));
}
inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* Org::BouncyCastle::Asn1::X509::AttributeCertificate::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::AttributeCertificate::AttributeCertificate() {}
