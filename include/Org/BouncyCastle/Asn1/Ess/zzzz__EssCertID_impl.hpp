#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Ess\EssCertID.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Ess/zzzz__EssCertID_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__IssuerSerial_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::EssCertID.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ess::EssCertID* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Ess::EssCertID::GetInstance)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x337a5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertID*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::EssCertID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ess::EssCertID::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Ess::EssCertID::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x337a77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::EssCertID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ess::EssCertID::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::Ess::EssCertID::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x337a8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertID*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::EssCertID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ess::EssCertID::*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Asn1::X509::IssuerSerial*)>(
    &::Org::BouncyCastle::Asn1::Ess::EssCertID::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x337a920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertID*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::EssCertID.GetCertHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Asn1::Ess::EssCertID::*)()>(&::Org::BouncyCastle::Asn1::Ess::EssCertID::GetCertHash)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x337a98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertID*>(), { "GetCertHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::EssCertID.get_IssuerSerial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::IssuerSerial* (::Org::BouncyCastle::Asn1::Ess::EssCertID::*)()>(
    &::Org::BouncyCastle::Asn1::Ess::EssCertID::get_IssuerSerial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x337a9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertID*>(), { "get_IssuerSerial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::EssCertID.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Ess::EssCertID::*)()>(
    &::Org::BouncyCastle::Asn1::Ess::EssCertID::ToAsn1Object)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x337a9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertID*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertID*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Ess::EssCertID::__cordl_internal_get_certHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certHash;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Ess::EssCertID::__cordl_internal_get_certHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certHash;
}
constexpr void Org::BouncyCastle::Asn1::Ess::EssCertID::__cordl_internal_set_certHash(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certHash = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial*& Org::BouncyCastle::Asn1::Ess::EssCertID::__cordl_internal_get_issuerSerial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerSerial;
}
constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial* const& Org::BouncyCastle::Asn1::Ess::EssCertID::__cordl_internal_get_issuerSerial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerSerial;
}
constexpr void Org::BouncyCastle::Asn1::Ess::EssCertID::__cordl_internal_set_issuerSerial(::Org::BouncyCastle::Asn1::X509::IssuerSerial* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___issuerSerial = value;
}
inline ::Org::BouncyCastle::Asn1::Ess::EssCertID* Org::BouncyCastle::Asn1::Ess::EssCertID::GetInstance(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertID*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ess::EssCertID*>(nullptr, ___internal_method, o);
}
inline void Org::BouncyCastle::Asn1::Ess::EssCertID::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Ess::EssCertID::_ctor(::ArrayW<uint8_t> hash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertID*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash);
}
inline void Org::BouncyCastle::Asn1::Ess::EssCertID::_ctor(::ArrayW<uint8_t> hash, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertID*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash, issuerSerial);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::Ess::EssCertID::GetCertHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertID*>(), { "GetCertHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* Org::BouncyCastle::Asn1::Ess::EssCertID::get_IssuerSerial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertID*>(), { "get_IssuerSerial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Ess::EssCertID::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::EssCertID*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Ess::EssCertID* Org::BouncyCastle::Asn1::Ess::EssCertID::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ess::EssCertID*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Ess::EssCertID* Org::BouncyCastle::Asn1::Ess::EssCertID::New_ctor(::ArrayW<uint8_t> hash) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ess::EssCertID*>(hash));
}
inline ::Org::BouncyCastle::Asn1::Ess::EssCertID* Org::BouncyCastle::Asn1::Ess::EssCertID::New_ctor(::ArrayW<uint8_t> hash, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ess::EssCertID*>(hash, issuerSerial));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Ess::EssCertID::EssCertID() {}
