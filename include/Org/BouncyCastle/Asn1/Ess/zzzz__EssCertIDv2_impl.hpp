#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ess/EssCertIDv2.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Ess/zzzz__EssCertIDv2_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__IssuerSerial_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Ess::EssCertIDv2::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x337877c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ess::EssCertIDv2::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Ess::EssCertIDv2::_ctor)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x337881c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ess::EssCertIDv2::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::Ess::EssCertIDv2::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3378a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ess::EssCertIDv2::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Asn1::Ess::EssCertIDv2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3378b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ess::EssCertIDv2::*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Asn1::X509::IssuerSerial*)>(
    &::Org::BouncyCastle::Asn1::Ess::EssCertIDv2::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3378b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ess::EssCertIDv2::*)(
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::ArrayW<uint8_t>, ::Org::BouncyCastle::Asn1::X509::IssuerSerial*)>(&::Org::BouncyCastle::Asn1::Ess::EssCertIDv2::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3378a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2.get_HashAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Ess::EssCertIDv2::*)()>(
    &::Org::BouncyCastle::Asn1::Ess::EssCertIDv2::get_HashAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3378b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(), { "get_HashAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2.GetCertHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Asn1::Ess::EssCertIDv2::*)()>(&::Org::BouncyCastle::Asn1::Ess::EssCertIDv2::GetCertHash)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3378b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(), { "GetCertHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2.get_IssuerSerial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::IssuerSerial* (::Org::BouncyCastle::Asn1::Ess::EssCertIDv2::*)()>(
    &::Org::BouncyCastle::Asn1::Ess::EssCertIDv2::get_IssuerSerial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3378b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(), { "get_IssuerSerial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Ess::EssCertIDv2::*)()>(
    &::Org::BouncyCastle::Asn1::Ess::EssCertIDv2::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x3378b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::Ess::EssCertIDv2::__cordl_internal_get_hashAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashAlgorithm;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Asn1::Ess::EssCertIDv2::__cordl_internal_get_hashAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashAlgorithm;
}
constexpr void Org::BouncyCastle::Asn1::Ess::EssCertIDv2::__cordl_internal_set_hashAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashAlgorithm = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Asn1::Ess::EssCertIDv2::__cordl_internal_get_certHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certHash;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Asn1::Ess::EssCertIDv2::__cordl_internal_get_certHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certHash;
}
constexpr void Org::BouncyCastle::Asn1::Ess::EssCertIDv2::__cordl_internal_set_certHash(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certHash = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial*& Org::BouncyCastle::Asn1::Ess::EssCertIDv2::__cordl_internal_get_issuerSerial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerSerial;
}
constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial* const& Org::BouncyCastle::Asn1::Ess::EssCertIDv2::__cordl_internal_get_issuerSerial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerSerial;
}
constexpr void Org::BouncyCastle::Asn1::Ess::EssCertIDv2::__cordl_internal_set_issuerSerial(::Org::BouncyCastle::Asn1::X509::IssuerSerial* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___issuerSerial = value;
}
inline void Org::BouncyCastle::Asn1::Ess::EssCertIDv2::setStaticF_DefaultAlgID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, "DefaultAlgID", ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(
      std::forward<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Ess::EssCertIDv2::getStaticF_DefaultAlgID() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, "DefaultAlgID", ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>();
}
inline ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* Org::BouncyCastle::Asn1::Ess::EssCertIDv2::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Ess::EssCertIDv2::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Ess::EssCertIDv2::_ctor(::ArrayW<uint8_t> certHash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certHash);
}
inline void Org::BouncyCastle::Asn1::Ess::EssCertIDv2::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, ::ArrayW<uint8_t> certHash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algId, certHash);
}
inline void Org::BouncyCastle::Asn1::Ess::EssCertIDv2::_ctor(::ArrayW<uint8_t> certHash, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certHash, issuerSerial);
}
inline void Org::BouncyCastle::Asn1::Ess::EssCertIDv2::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, ::ArrayW<uint8_t> certHash,
                                                             ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algId, certHash, issuerSerial);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Ess::EssCertIDv2::get_HashAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(), { "get_HashAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::Ess::EssCertIDv2::GetCertHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(), { "GetCertHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* Org::BouncyCastle::Asn1::Ess::EssCertIDv2::get_IssuerSerial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(), { "get_IssuerSerial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Ess::EssCertIDv2::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* Org::BouncyCastle::Asn1::Ess::EssCertIDv2::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* Org::BouncyCastle::Asn1::Ess::EssCertIDv2::New_ctor(::ArrayW<uint8_t> certHash) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(certHash));
}
inline ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* Org::BouncyCastle::Asn1::Ess::EssCertIDv2::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, ::ArrayW<uint8_t> certHash) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(algId, certHash));
}
inline ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* Org::BouncyCastle::Asn1::Ess::EssCertIDv2::New_ctor(::ArrayW<uint8_t> certHash, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(certHash, issuerSerial));
}
inline ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* Org::BouncyCastle::Asn1::Ess::EssCertIDv2::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, ::ArrayW<uint8_t> certHash,
                                                                                                        ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>(algId, certHash, issuerSerial));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2::EssCertIDv2() {}
