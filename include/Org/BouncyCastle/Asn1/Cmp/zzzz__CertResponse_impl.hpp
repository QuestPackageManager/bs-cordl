#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cmp\CertResponse.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__CertResponse_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__CertifiedKeyPair_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatusInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CertResponse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::CertResponse::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cmp::CertResponse::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x3348524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CertResponse.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::CertResponse* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cmp::CertResponse::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x33482e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CertResponse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::CertResponse::*)(::Org::BouncyCastle::Asn1::DerInteger*, ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*)>(
    &::Org::BouncyCastle::Asn1::Cmp::CertResponse::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33487f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CertResponse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::CertResponse::*)(
    ::Org::BouncyCastle::Asn1::DerInteger*, ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*, ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*, ::Org::BouncyCastle::Asn1::Asn1OctetString*)>(
    &::Org::BouncyCastle::Asn1::Cmp::CertResponse::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x33487fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CertResponse.get_CertReqID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Cmp::CertResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::CertResponse::get_CertReqID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3348880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CertResponse.get_Status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* (::Org::BouncyCastle::Asn1::Cmp::CertResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::CertResponse::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3348888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CertResponse.get_CertifiedKeyPair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* (::Org::BouncyCastle::Asn1::Cmp::CertResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::CertResponse::get_CertifiedKeyPair)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3348890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::CertResponse.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cmp::CertResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::CertResponse::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x3348898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Cmp::CertResponse::__cordl_internal_get_certReqId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certReqId;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Cmp::CertResponse::__cordl_internal_get_certReqId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certReqId;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::CertResponse::__cordl_internal_set_certReqId(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certReqId = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*& Org::BouncyCastle::Asn1::Cmp::CertResponse::__cordl_internal_get_status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* const& Org::BouncyCastle::Asn1::Cmp::CertResponse::__cordl_internal_get_status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::CertResponse::__cordl_internal_set_status(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___status = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*& Org::BouncyCastle::Asn1::Cmp::CertResponse::__cordl_internal_get_certifiedKeyPair() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certifiedKeyPair;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* const& Org::BouncyCastle::Asn1::Cmp::CertResponse::__cordl_internal_get_certifiedKeyPair() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certifiedKeyPair;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::CertResponse::__cordl_internal_set_certifiedKeyPair(::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certifiedKeyPair = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Cmp::CertResponse::__cordl_internal_get_rspInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rspInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Cmp::CertResponse::__cordl_internal_get_rspInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rspInfo;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::CertResponse::__cordl_internal_set_rspInfo(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rspInfo = value;
}
inline void Org::BouncyCastle::Asn1::Cmp::CertResponse::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cmp::CertResponse* Org::BouncyCastle::Asn1::Cmp::CertResponse::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Cmp::CertResponse::_ctor(::Org::BouncyCastle::Asn1::DerInteger* certReqId, ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* status) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certReqId, status);
}
inline void Org::BouncyCastle::Asn1::Cmp::CertResponse::_ctor(::Org::BouncyCastle::Asn1::DerInteger* certReqId, ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* status,
                                                              ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* certifiedKeyPair, ::Org::BouncyCastle::Asn1::Asn1OctetString* rspInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certReqId, status, certifiedKeyPair, rspInfo);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cmp::CertResponse::get_CertReqID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* Org::BouncyCastle::Asn1::Cmp::CertResponse::get_Status() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* Org::BouncyCastle::Asn1::Cmp::CertResponse::get_CertifiedKeyPair() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cmp::CertResponse::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::CertResponse* Org::BouncyCastle::Asn1::Cmp::CertResponse::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Cmp::CertResponse* Org::BouncyCastle::Asn1::Cmp::CertResponse::New_ctor(::Org::BouncyCastle::Asn1::DerInteger* certReqId,
                                                                                                          ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* status) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(certReqId, status));
}
inline ::Org::BouncyCastle::Asn1::Cmp::CertResponse* Org::BouncyCastle::Asn1::Cmp::CertResponse::New_ctor(::Org::BouncyCastle::Asn1::DerInteger* certReqId,
                                                                                                          ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* status,
                                                                                                          ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* certifiedKeyPair,
                                                                                                          ::Org::BouncyCastle::Asn1::Asn1OctetString* rspInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>(certReqId, status, certifiedKeyPair, rspInfo));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cmp::CertResponse::CertResponse() {}
