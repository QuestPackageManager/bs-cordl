#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/KeyRecRepContent.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__KeyRecRepContent_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__CertifiedKeyPair_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__CmpCertificate_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatusInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::_ctor)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x3348828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x33489cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent.get_Status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* (::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3348b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent.get_NewSigCert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* (::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::get_NewSigCert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3348b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent.GetCACerts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*> (::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::GetCACerts)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3348b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent.GetKeyPairHist
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*> (::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::GetKeyPairHist)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3348c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::ToAsn1Object)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x3348d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*& Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_get_status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* const& Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_get_status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_set_status(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___status = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*& Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_get_newSigCert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newSigCert;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* const& Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_get_newSigCert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newSigCert;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_set_newSigCert(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newSigCert = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_get_caCerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___caCerts;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_get_caCerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___caCerts;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_set_caCerts(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___caCerts = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_get_keyPairHist() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyPairHist;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_get_keyPairHist() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyPairHist;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_set_keyPairHist(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyPairHist = value;
}
inline void Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent* Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::get_Status() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::get_NewSigCert() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*> Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::GetCACerts() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*> Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::GetKeyPairHist() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent* Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::KeyRecRepContent() {}
