#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/OtherCertID.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__OtherCertID_def.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__OtherHash_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__IssuerSerial_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherCertID.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::OtherCertID* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Esf::OtherCertID::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x336ee04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherCertID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::OtherCertID::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Esf::OtherCertID::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x3372eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherCertID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::OtherCertID::*)(::Org::BouncyCastle::Asn1::Esf::OtherHash*)>(
    &::Org::BouncyCastle::Asn1::Esf::OtherCertID::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3373064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherCertID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::OtherCertID::*)(
    ::Org::BouncyCastle::Asn1::Esf::OtherHash*, ::Org::BouncyCastle::Asn1::X509::IssuerSerial*)>(&::Org::BouncyCastle::Asn1::Esf::OtherCertID::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x337306c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherCertID.get_OtherCertHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::OtherHash* (::Org::BouncyCastle::Asn1::Esf::OtherCertID::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::OtherCertID::get_OtherCertHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33730c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>(), { "get_OtherCertHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherCertID.get_IssuerSerial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::IssuerSerial* (::Org::BouncyCastle::Asn1::Esf::OtherCertID::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::OtherCertID::get_IssuerSerial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33730cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>(), { "get_IssuerSerial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::OtherCertID.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Esf::OtherCertID::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::OtherCertID::ToAsn1Object)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x33730d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHash*& Org::BouncyCastle::Asn1::Esf::OtherCertID::__cordl_internal_get_otherCertHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherCertHash;
}
constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHash* const& Org::BouncyCastle::Asn1::Esf::OtherCertID::__cordl_internal_get_otherCertHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherCertHash;
}
constexpr void Org::BouncyCastle::Asn1::Esf::OtherCertID::__cordl_internal_set_otherCertHash(::Org::BouncyCastle::Asn1::Esf::OtherHash* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___otherCertHash = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial*& Org::BouncyCastle::Asn1::Esf::OtherCertID::__cordl_internal_get_issuerSerial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerSerial;
}
constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial* const& Org::BouncyCastle::Asn1::Esf::OtherCertID::__cordl_internal_get_issuerSerial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerSerial;
}
constexpr void Org::BouncyCastle::Asn1::Esf::OtherCertID::__cordl_internal_set_issuerSerial(::Org::BouncyCastle::Asn1::X509::IssuerSerial* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___issuerSerial = value;
}
inline ::Org::BouncyCastle::Asn1::Esf::OtherCertID* Org::BouncyCastle::Asn1::Esf::OtherCertID::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Esf::OtherCertID::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Esf::OtherCertID::_ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* otherCertHash) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherCertHash);
}
inline void Org::BouncyCastle::Asn1::Esf::OtherCertID::_ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* otherCertHash, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherCertHash, issuerSerial);
}
inline ::Org::BouncyCastle::Asn1::Esf::OtherHash* Org::BouncyCastle::Asn1::Esf::OtherCertID::get_OtherCertHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>(), { "get_OtherCertHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::OtherHash*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* Org::BouncyCastle::Asn1::Esf::OtherCertID::get_IssuerSerial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>(), { "get_IssuerSerial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Esf::OtherCertID::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::OtherCertID* Org::BouncyCastle::Asn1::Esf::OtherCertID::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Esf::OtherCertID* Org::BouncyCastle::Asn1::Esf::OtherCertID::New_ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* otherCertHash) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>(otherCertHash));
}
inline ::Org::BouncyCastle::Asn1::Esf::OtherCertID* Org::BouncyCastle::Asn1::Esf::OtherCertID::New_ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* otherCertHash,
                                                                                                        ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>(otherCertHash, issuerSerial));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Esf::OtherCertID::OtherCertID() {}
