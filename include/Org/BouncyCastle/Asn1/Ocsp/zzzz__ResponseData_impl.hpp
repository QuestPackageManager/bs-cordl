#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ocsp/ResponseData.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__ResponseData_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__ResponderID_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::ResponseData.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::ResponseData* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::Ocsp::ResponseData::GetInstance)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x345af64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::ResponseData.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::ResponseData* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Ocsp::ResponseData::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x34579c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::ResponseData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::ResponseData::*)(
    ::Org::BouncyCastle::Asn1::DerInteger*, ::Org::BouncyCastle::Asn1::Ocsp::ResponderID*, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*, ::Org::BouncyCastle::Asn1::Asn1Sequence*,
    ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(&::Org::BouncyCastle::Asn1::Ocsp::ResponseData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x345b2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::ResponseData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::ResponseData::*)(
    ::Org::BouncyCastle::Asn1::Ocsp::ResponderID*, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*, ::Org::BouncyCastle::Asn1::Asn1Sequence*, ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Asn1::Ocsp::ResponseData::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x345b2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::ResponseData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::ResponseData::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Ocsp::ResponseData::_ctor)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x345afe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::ResponseData.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Ocsp::ResponseData::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::ResponseData::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345b360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::ResponseData.get_ResponderID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::ResponderID* (::Org::BouncyCastle::Asn1::Ocsp::ResponseData::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::ResponseData::get_ResponderID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345b368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(), { "get_ResponderID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::ResponseData.get_ProducedAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerGeneralizedTime* (::Org::BouncyCastle::Asn1::Ocsp::ResponseData::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::ResponseData::get_ProducedAt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345b370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(), { "get_ProducedAt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::ResponseData.get_Responses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Sequence* (::Org::BouncyCastle::Asn1::Ocsp::ResponseData::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::ResponseData::get_Responses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345b378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(), { "get_Responses", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::ResponseData.get_ResponseExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Asn1::Ocsp::ResponseData::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::ResponseData::get_ResponseExtensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345b380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(), { "get_ResponseExtensions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::ResponseData.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Ocsp::ResponseData::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::ResponseData::ToAsn1Object)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x345b388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(), 5 }));
    return ___internal_method;
  }
};
constexpr bool& Org::BouncyCastle::Asn1::Ocsp::ResponseData::__cordl_internal_get_versionPresent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versionPresent;
}
constexpr bool const& Org::BouncyCastle::Asn1::Ocsp::ResponseData::__cordl_internal_get_versionPresent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versionPresent;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::ResponseData::__cordl_internal_set_versionPresent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___versionPresent = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Ocsp::ResponseData::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Ocsp::ResponseData::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::ResponseData::__cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponderID*& Org::BouncyCastle::Asn1::Ocsp::ResponseData::__cordl_internal_get_responderID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___responderID;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* const& Org::BouncyCastle::Asn1::Ocsp::ResponseData::__cordl_internal_get_responderID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___responderID;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::ResponseData::__cordl_internal_set_responderID(::Org::BouncyCastle::Asn1::Ocsp::ResponderID* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___responderID = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Asn1::Ocsp::ResponseData::__cordl_internal_get_producedAt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___producedAt;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& Org::BouncyCastle::Asn1::Ocsp::ResponseData::__cordl_internal_get_producedAt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___producedAt;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::ResponseData::__cordl_internal_set_producedAt(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___producedAt = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Ocsp::ResponseData::__cordl_internal_get_responses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___responses;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Ocsp::ResponseData::__cordl_internal_get_responses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___responses;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::ResponseData::__cordl_internal_set_responses(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___responses = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Asn1::Ocsp::ResponseData::__cordl_internal_get_responseExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___responseExtensions;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& Org::BouncyCastle::Asn1::Ocsp::ResponseData::__cordl_internal_get_responseExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___responseExtensions;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::ResponseData::__cordl_internal_set_responseExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___responseExtensions = value;
}
inline void Org::BouncyCastle::Asn1::Ocsp::ResponseData::setStaticF_V1(::Org::BouncyCastle::Asn1::DerInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "V1", ::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(std::forward<::Org::BouncyCastle::Asn1::DerInteger*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Ocsp::ResponseData::getStaticF_V1() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "V1", ::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>();
}
inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* Org::BouncyCastle::Asn1::Ocsp::ResponseData::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* Org::BouncyCastle::Asn1::Ocsp::ResponseData::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Ocsp::ResponseData::_ctor(::Org::BouncyCastle::Asn1::DerInteger* version, ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* responderID,
                                                               ::Org::BouncyCastle::Asn1::DerGeneralizedTime* producedAt, ::Org::BouncyCastle::Asn1::Asn1Sequence* responses,
                                                               ::Org::BouncyCastle::Asn1::X509::X509Extensions* responseExtensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, version, responderID, producedAt, responses, responseExtensions);
}
inline void Org::BouncyCastle::Asn1::Ocsp::ResponseData::_ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponderID* responderID, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* producedAt,
                                                               ::Org::BouncyCastle::Asn1::Asn1Sequence* responses, ::Org::BouncyCastle::Asn1::X509::X509Extensions* responseExtensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, responderID, producedAt, responses, responseExtensions);
}
inline void Org::BouncyCastle::Asn1::Ocsp::ResponseData::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Ocsp::ResponseData::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* Org::BouncyCastle::Asn1::Ocsp::ResponseData::get_ResponderID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(), { "get_ResponderID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* Org::BouncyCastle::Asn1::Ocsp::ResponseData::get_ProducedAt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(), { "get_ProducedAt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::Ocsp::ResponseData::get_Responses() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(), { "get_Responses", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Sequence*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::Ocsp::ResponseData::get_ResponseExtensions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(), { "get_ResponseExtensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Ocsp::ResponseData::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* Org::BouncyCastle::Asn1::Ocsp::ResponseData::New_ctor(::Org::BouncyCastle::Asn1::DerInteger* version,
                                                                                                            ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* responderID,
                                                                                                            ::Org::BouncyCastle::Asn1::DerGeneralizedTime* producedAt,
                                                                                                            ::Org::BouncyCastle::Asn1::Asn1Sequence* responses,
                                                                                                            ::Org::BouncyCastle::Asn1::X509::X509Extensions* responseExtensions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(version, responderID, producedAt, responses, responseExtensions));
}
inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* Org::BouncyCastle::Asn1::Ocsp::ResponseData::New_ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponderID* responderID,
                                                                                                            ::Org::BouncyCastle::Asn1::DerGeneralizedTime* producedAt,
                                                                                                            ::Org::BouncyCastle::Asn1::Asn1Sequence* responses,
                                                                                                            ::Org::BouncyCastle::Asn1::X509::X509Extensions* responseExtensions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(responderID, producedAt, responses, responseExtensions));
}
inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* Org::BouncyCastle::Asn1::Ocsp::ResponseData::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponseData::ResponseData() {}
