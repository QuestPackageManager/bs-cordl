#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ocsp/OcspResponse.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__OcspResponse_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__OcspResponseStatus_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__ResponseBytes_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::Ocsp::OcspResponse::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x345920c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Ocsp::OcspResponse::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3459220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::OcspResponse::*)(
    ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus*, ::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes*)>(&::Org::BouncyCastle::Asn1::Ocsp::OcspResponse::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x34594f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::OcspResponse::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Ocsp::OcspResponse::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x34593a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse.get_ResponseStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus* (::Org::BouncyCastle::Asn1::Ocsp::OcspResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::OcspResponse::get_ResponseStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34596c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*>(), { "get_ResponseStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse.get_ResponseBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes* (::Org::BouncyCastle::Asn1::Ocsp::OcspResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::OcspResponse::get_ResponseBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34596c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*>(), { "get_ResponseBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Ocsp::OcspResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::OcspResponse::ToAsn1Object)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x34596d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus*& Org::BouncyCastle::Asn1::Ocsp::OcspResponse::__cordl_internal_get_responseStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___responseStatus;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus* const& Org::BouncyCastle::Asn1::Ocsp::OcspResponse::__cordl_internal_get_responseStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___responseStatus;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::OcspResponse::__cordl_internal_set_responseStatus(::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___responseStatus = value;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes*& Org::BouncyCastle::Asn1::Ocsp::OcspResponse::__cordl_internal_get_responseBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___responseBytes;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes* const& Org::BouncyCastle::Asn1::Ocsp::OcspResponse::__cordl_internal_get_responseBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___responseBytes;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::OcspResponse::__cordl_internal_set_responseBytes(::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___responseBytes = value;
}
inline ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* Org::BouncyCastle::Asn1::Ocsp::OcspResponse::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* Org::BouncyCastle::Asn1::Ocsp::OcspResponse::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Ocsp::OcspResponse::_ctor(::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus* responseStatus, ::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes* responseBytes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, responseStatus, responseBytes);
}
inline void Org::BouncyCastle::Asn1::Ocsp::OcspResponse::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus* Org::BouncyCastle::Asn1::Ocsp::OcspResponse::get_ResponseStatus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*>(), { "get_ResponseStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes* Org::BouncyCastle::Asn1::Ocsp::OcspResponse::get_ResponseBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*>(), { "get_ResponseBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Ocsp::OcspResponse::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* Org::BouncyCastle::Asn1::Ocsp::OcspResponse::New_ctor(::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus* responseStatus,
                                                                                                            ::Org::BouncyCastle::Asn1::Ocsp::ResponseBytes* responseBytes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*>(responseStatus, responseBytes));
}
inline ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* Org::BouncyCastle::Asn1::Ocsp::OcspResponse::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Ocsp::OcspResponse::OcspResponse() {}
