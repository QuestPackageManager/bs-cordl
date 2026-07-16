#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Tsp/TimeStampResp.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Tsp/zzzz__TimeStampResp_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatusInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Tsp::TimeStampResp::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x354ed84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Tsp::TimeStampResp::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Tsp::TimeStampResp::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x354ee24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Tsp::TimeStampResp::*)(
    ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*, ::Org::BouncyCastle::Asn1::Cms::ContentInfo*)>(&::Org::BouncyCastle::Asn1::Tsp::TimeStampResp::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354eea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp.get_Status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* (::Org::BouncyCastle::Asn1::Tsp::TimeStampResp::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TimeStampResp::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354eeac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*>(), { "get_Status", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp.get_TimeStampToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::ContentInfo* (::Org::BouncyCastle::Asn1::Tsp::TimeStampResp::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TimeStampResp::get_TimeStampToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x354eeb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*>(), { "get_TimeStampToken", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Tsp::TimeStampResp::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TimeStampResp::ToAsn1Object)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x354eebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*& Org::BouncyCastle::Asn1::Tsp::TimeStampResp::__cordl_internal_get_pkiStatusInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pkiStatusInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* const& Org::BouncyCastle::Asn1::Tsp::TimeStampResp::__cordl_internal_get_pkiStatusInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pkiStatusInfo;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TimeStampResp::__cordl_internal_set_pkiStatusInfo(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pkiStatusInfo = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& Org::BouncyCastle::Asn1::Tsp::TimeStampResp::__cordl_internal_get_timeStampToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeStampToken;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo* const& Org::BouncyCastle::Asn1::Tsp::TimeStampResp::__cordl_internal_get_timeStampToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeStampToken;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TimeStampResp::__cordl_internal_set_timeStampToken(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeStampToken = value;
}
inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* Org::BouncyCastle::Asn1::Tsp::TimeStampResp::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Tsp::TimeStampResp::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Tsp::TimeStampResp::_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* pkiStatusInfo, ::Org::BouncyCastle::Asn1::Cms::ContentInfo* timeStampToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pkiStatusInfo, timeStampToken);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* Org::BouncyCastle::Asn1::Tsp::TimeStampResp::get_Status() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*>(), { "get_Status", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* Org::BouncyCastle::Asn1::Tsp::TimeStampResp::get_TimeStampToken() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*>(), { "get_TimeStampToken", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Tsp::TimeStampResp::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* Org::BouncyCastle::Asn1::Tsp::TimeStampResp::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* Org::BouncyCastle::Asn1::Tsp::TimeStampResp::New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* pkiStatusInfo,
                                                                                                            ::Org::BouncyCastle::Asn1::Cms::ContentInfo* timeStampToken) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*>(pkiStatusInfo, timeStampToken));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp::TimeStampResp() {}
