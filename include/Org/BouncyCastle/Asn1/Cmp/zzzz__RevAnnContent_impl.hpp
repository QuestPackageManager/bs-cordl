#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/RevAnnContent.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__RevAnnContent_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatusEncodable_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__CertId_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::RevAnnContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::RevAnnContent::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cmp::RevAnnContent::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x334eaf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::RevAnnContent.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cmp::RevAnnContent::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x334a1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::RevAnnContent.get_Status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* (::Org::BouncyCastle::Asn1::Cmp::RevAnnContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::RevAnnContent::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334ec50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::RevAnnContent.get_CertID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertId* (::Org::BouncyCastle::Asn1::Cmp::RevAnnContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::RevAnnContent::get_CertID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334ec58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::RevAnnContent.get_WillBeRevokedAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerGeneralizedTime* (::Org::BouncyCastle::Asn1::Cmp::RevAnnContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::RevAnnContent::get_WillBeRevokedAt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334ec60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::RevAnnContent.get_BadSinceDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerGeneralizedTime* (::Org::BouncyCastle::Asn1::Cmp::RevAnnContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::RevAnnContent::get_BadSinceDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334ec68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::RevAnnContent.get_CrlDetails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Asn1::Cmp::RevAnnContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::RevAnnContent::get_CrlDetails)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334ec70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::RevAnnContent.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cmp::RevAnnContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::RevAnnContent::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x334ec78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*& Org::BouncyCastle::Asn1::Cmp::RevAnnContent::__cordl_internal_get_status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* const& Org::BouncyCastle::Asn1::Cmp::RevAnnContent::__cordl_internal_get_status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::RevAnnContent::__cordl_internal_set_status(::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___status = value;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::CertId*& Org::BouncyCastle::Asn1::Cmp::RevAnnContent::__cordl_internal_get_certId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certId;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::CertId* const& Org::BouncyCastle::Asn1::Cmp::RevAnnContent::__cordl_internal_get_certId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certId;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::RevAnnContent::__cordl_internal_set_certId(::Org::BouncyCastle::Asn1::Crmf::CertId* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certId = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Asn1::Cmp::RevAnnContent::__cordl_internal_get_willBeRevokedAt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___willBeRevokedAt;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& Org::BouncyCastle::Asn1::Cmp::RevAnnContent::__cordl_internal_get_willBeRevokedAt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___willBeRevokedAt;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::RevAnnContent::__cordl_internal_set_willBeRevokedAt(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___willBeRevokedAt = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Asn1::Cmp::RevAnnContent::__cordl_internal_get_badSinceDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___badSinceDate;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& Org::BouncyCastle::Asn1::Cmp::RevAnnContent::__cordl_internal_get_badSinceDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___badSinceDate;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::RevAnnContent::__cordl_internal_set_badSinceDate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___badSinceDate = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Asn1::Cmp::RevAnnContent::__cordl_internal_get_crlDetails() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlDetails;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& Org::BouncyCastle::Asn1::Cmp::RevAnnContent::__cordl_internal_get_crlDetails() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlDetails;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::RevAnnContent::__cordl_internal_set_crlDetails(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crlDetails = value;
}
inline void Org::BouncyCastle::Asn1::Cmp::RevAnnContent::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cmp::RevAnnContent* Org::BouncyCastle::Asn1::Cmp::RevAnnContent::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* Org::BouncyCastle::Asn1::Cmp::RevAnnContent::get_Status() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertId* Org::BouncyCastle::Asn1::Cmp::RevAnnContent::get_CertID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertId*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* Org::BouncyCastle::Asn1::Cmp::RevAnnContent::get_WillBeRevokedAt() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* Org::BouncyCastle::Asn1::Cmp::RevAnnContent::get_BadSinceDate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::Cmp::RevAnnContent::get_CrlDetails() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cmp::RevAnnContent::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::RevAnnContent* Org::BouncyCastle::Asn1::Cmp::RevAnnContent::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cmp::RevAnnContent::RevAnnContent() {}
