#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\BC\LinkedCertificate.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/BC/zzzz__LinkedCertificate_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__DigestInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralNames_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BC::LinkedCertificate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BC::LinkedCertificate::*)(
    ::Org::BouncyCastle::Asn1::X509::DigestInfo*, ::Org::BouncyCastle::Asn1::X509::GeneralName*)>(&::Org::BouncyCastle::Asn1::BC::LinkedCertificate::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x334638c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DigestInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BC::LinkedCertificate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BC::LinkedCertificate::*)(
    ::Org::BouncyCastle::Asn1::X509::DigestInfo*, ::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Org::BouncyCastle::Asn1::X509::X509Name*, ::Org::BouncyCastle::Asn1::X509::GeneralNames*)>(
    &::Org::BouncyCastle::Asn1::BC::LinkedCertificate::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3346398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DigestInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BC::LinkedCertificate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BC::LinkedCertificate::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::BC::LinkedCertificate::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x33463a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BC::LinkedCertificate.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::BC::LinkedCertificate* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::BC::LinkedCertificate::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3346564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BC::LinkedCertificate.get_Digest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::DigestInfo* (::Org::BouncyCastle::Asn1::BC::LinkedCertificate::*)()>(
    &::Org::BouncyCastle::Asn1::BC::LinkedCertificate::get_Digest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3346604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BC::LinkedCertificate.get_CertLocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralName* (::Org::BouncyCastle::Asn1::BC::LinkedCertificate::*)()>(
    &::Org::BouncyCastle::Asn1::BC::LinkedCertificate::get_CertLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334660c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BC::LinkedCertificate.get_CertIssuer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (::Org::BouncyCastle::Asn1::BC::LinkedCertificate::*)()>(
    &::Org::BouncyCastle::Asn1::BC::LinkedCertificate::get_CertIssuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3346614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BC::LinkedCertificate.get_CACerts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralNames* (::Org::BouncyCastle::Asn1::BC::LinkedCertificate::*)()>(
    &::Org::BouncyCastle::Asn1::BC::LinkedCertificate::get_CACerts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334661c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BC::LinkedCertificate.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::BC::LinkedCertificate::*)()>(
    &::Org::BouncyCastle::Asn1::BC::LinkedCertificate::ToAsn1Object)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3346624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::DigestInfo*& Org::BouncyCastle::Asn1::BC::LinkedCertificate::__cordl_internal_get_mDigest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDigest;
}
constexpr ::Org::BouncyCastle::Asn1::X509::DigestInfo* const& Org::BouncyCastle::Asn1::BC::LinkedCertificate::__cordl_internal_get_mDigest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDigest;
}
constexpr void Org::BouncyCastle::Asn1::BC::LinkedCertificate::__cordl_internal_set_mDigest(::Org::BouncyCastle::Asn1::X509::DigestInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mDigest = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& Org::BouncyCastle::Asn1::BC::LinkedCertificate::__cordl_internal_get_mCertLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCertLocation;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& Org::BouncyCastle::Asn1::BC::LinkedCertificate::__cordl_internal_get_mCertLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCertLocation;
}
constexpr void Org::BouncyCastle::Asn1::BC::LinkedCertificate::__cordl_internal_set_mCertLocation(::Org::BouncyCastle::Asn1::X509::GeneralName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mCertLocation = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& Org::BouncyCastle::Asn1::BC::LinkedCertificate::__cordl_internal_get_mCertIssuer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCertIssuer;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name* const& Org::BouncyCastle::Asn1::BC::LinkedCertificate::__cordl_internal_get_mCertIssuer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCertIssuer;
}
constexpr void Org::BouncyCastle::Asn1::BC::LinkedCertificate::__cordl_internal_set_mCertIssuer(::Org::BouncyCastle::Asn1::X509::X509Name* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mCertIssuer = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames*& Org::BouncyCastle::Asn1::BC::LinkedCertificate::__cordl_internal_get_mCACerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCACerts;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames* const& Org::BouncyCastle::Asn1::BC::LinkedCertificate::__cordl_internal_get_mCACerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCACerts;
}
constexpr void Org::BouncyCastle::Asn1::BC::LinkedCertificate::__cordl_internal_set_mCACerts(::Org::BouncyCastle::Asn1::X509::GeneralNames* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mCACerts = value;
}
inline void Org::BouncyCastle::Asn1::BC::LinkedCertificate::_ctor(::Org::BouncyCastle::Asn1::X509::DigestInfo* digest, ::Org::BouncyCastle::Asn1::X509::GeneralName* certLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DigestInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest, certLocation);
}
inline void Org::BouncyCastle::Asn1::BC::LinkedCertificate::_ctor(::Org::BouncyCastle::Asn1::X509::DigestInfo* digest, ::Org::BouncyCastle::Asn1::X509::GeneralName* certLocation,
                                                                  ::Org::BouncyCastle::Asn1::X509::X509Name* certIssuer, ::Org::BouncyCastle::Asn1::X509::GeneralNames* caCerts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DigestInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralNames*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest, certLocation, certIssuer, caCerts);
}
inline void Org::BouncyCastle::Asn1::BC::LinkedCertificate::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::BC::LinkedCertificate* Org::BouncyCastle::Asn1::BC::LinkedCertificate::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::X509::DigestInfo* Org::BouncyCastle::Asn1::BC::LinkedCertificate::get_Digest() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::DigestInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* Org::BouncyCastle::Asn1::BC::LinkedCertificate::get_CertLocation() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralName*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Asn1::BC::LinkedCertificate::get_CertIssuer() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* Org::BouncyCastle::Asn1::BC::LinkedCertificate::get_CACerts() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralNames*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::BC::LinkedCertificate::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::BC::LinkedCertificate* Org::BouncyCastle::Asn1::BC::LinkedCertificate::New_ctor(::Org::BouncyCastle::Asn1::X509::DigestInfo* digest,
                                                                                                                  ::Org::BouncyCastle::Asn1::X509::GeneralName* certLocation) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(digest, certLocation));
}
inline ::Org::BouncyCastle::Asn1::BC::LinkedCertificate* Org::BouncyCastle::Asn1::BC::LinkedCertificate::New_ctor(::Org::BouncyCastle::Asn1::X509::DigestInfo* digest,
                                                                                                                  ::Org::BouncyCastle::Asn1::X509::GeneralName* certLocation,
                                                                                                                  ::Org::BouncyCastle::Asn1::X509::X509Name* certIssuer,
                                                                                                                  ::Org::BouncyCastle::Asn1::X509::GeneralNames* caCerts) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(digest, certLocation, certIssuer, caCerts));
}
inline ::Org::BouncyCastle::Asn1::BC::LinkedCertificate* Org::BouncyCastle::Asn1::BC::LinkedCertificate::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BC::LinkedCertificate*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::BC::LinkedCertificate::LinkedCertificate() {}
