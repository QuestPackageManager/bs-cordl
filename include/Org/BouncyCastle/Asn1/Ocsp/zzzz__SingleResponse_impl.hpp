#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Ocsp\SingleResponse.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__SingleResponse_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__CertID_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__CertStatus_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::*)(
    ::Org::BouncyCastle::Asn1::Ocsp::CertID*, ::Org::BouncyCastle::Asn1::Ocsp::CertStatus*, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*,
    ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(&::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x345e7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::CertID*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::_ctor)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x345e7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x345eab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x345eac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse.get_CertId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::CertID* (::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::get_CertId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345ec4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(), { "get_CertId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse.get_CertStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::CertStatus* (::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::get_CertStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345ec54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(), { "get_CertStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse.get_ThisUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerGeneralizedTime* (::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::get_ThisUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345ec5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(), { "get_ThisUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse.get_NextUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerGeneralizedTime* (::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::get_NextUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345ec64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(), { "get_NextUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse.get_SingleExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::get_SingleExtensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345ec6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(), { "get_SingleExtensions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::ToAsn1Object)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x345ec74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertID*& Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_get_certID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certID;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertID* const& Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_get_certID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certID;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_set_certID(::Org::BouncyCastle::Asn1::Ocsp::CertID* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certID = value;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertStatus*& Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_get_certStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certStatus;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* const& Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_get_certStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certStatus;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_set_certStatus(::Org::BouncyCastle::Asn1::Ocsp::CertStatus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certStatus = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_get_thisUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thisUpdate;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_get_thisUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thisUpdate;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_set_thisUpdate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___thisUpdate = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_get_nextUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextUpdate;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_get_nextUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextUpdate;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_set_nextUpdate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextUpdate = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_get_singleExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleExtensions;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_get_singleExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleExtensions;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_set_singleExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___singleExtensions = value;
}
inline void Org::BouncyCastle::Asn1::Ocsp::SingleResponse::_ctor(::Org::BouncyCastle::Asn1::Ocsp::CertID* certID, ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* certStatus,
                                                                 ::Org::BouncyCastle::Asn1::DerGeneralizedTime* thisUpdate, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* nextUpdate,
                                                                 ::Org::BouncyCastle::Asn1::X509::X509Extensions* singleExtensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::CertID*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certID, certStatus, thisUpdate, nextUpdate, singleExtensions);
}
inline void Org::BouncyCastle::Asn1::Ocsp::SingleResponse::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* Org::BouncyCastle::Asn1::Ocsp::SingleResponse::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* Org::BouncyCastle::Asn1::Ocsp::SingleResponse::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::CertID* Org::BouncyCastle::Asn1::Ocsp::SingleResponse::get_CertId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(), { "get_CertId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::CertID*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* Org::BouncyCastle::Asn1::Ocsp::SingleResponse::get_CertStatus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(), { "get_CertStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* Org::BouncyCastle::Asn1::Ocsp::SingleResponse::get_ThisUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(), { "get_ThisUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* Org::BouncyCastle::Asn1::Ocsp::SingleResponse::get_NextUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(), { "get_NextUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::Ocsp::SingleResponse::get_SingleExtensions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(), { "get_SingleExtensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Ocsp::SingleResponse::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* Org::BouncyCastle::Asn1::Ocsp::SingleResponse::New_ctor(::Org::BouncyCastle::Asn1::Ocsp::CertID* certID,
                                                                                                                ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* certStatus,
                                                                                                                ::Org::BouncyCastle::Asn1::DerGeneralizedTime* thisUpdate,
                                                                                                                ::Org::BouncyCastle::Asn1::DerGeneralizedTime* nextUpdate,
                                                                                                                ::Org::BouncyCastle::Asn1::X509::X509Extensions* singleExtensions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(certID, certStatus, thisUpdate, nextUpdate, singleExtensions));
}
inline ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* Org::BouncyCastle::Asn1::Ocsp::SingleResponse::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::SingleResponse() {}
