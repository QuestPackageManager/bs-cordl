#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Ocsp\TbsRequest.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__TbsRequest_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::Ocsp::TbsRequest::GetInstance)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x345edfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Ocsp::TbsRequest::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x345b2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::TbsRequest::*)(
    ::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Org::BouncyCastle::Asn1::Asn1Sequence*, ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(&::Org::BouncyCastle::Asn1::Ocsp::TbsRequest::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x345f154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::TbsRequest::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Ocsp::TbsRequest::_ctor)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x345ee78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Ocsp::TbsRequest::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::TbsRequest::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345f1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest.get_RequestorName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralName* (::Org::BouncyCastle::Asn1::Ocsp::TbsRequest::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::TbsRequest::get_RequestorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345f1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(), { "get_RequestorName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest.get_RequestList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Sequence* (::Org::BouncyCastle::Asn1::Ocsp::TbsRequest::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::TbsRequest::get_RequestList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345f1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(), { "get_RequestList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest.get_RequestExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Asn1::Ocsp::TbsRequest::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::TbsRequest::get_RequestExtensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345f1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(), { "get_RequestExtensions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Ocsp::TbsRequest::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::TbsRequest::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x345f1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Ocsp::TbsRequest::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Ocsp::TbsRequest::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::TbsRequest::__cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& Org::BouncyCastle::Asn1::Ocsp::TbsRequest::__cordl_internal_get_requestorName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestorName;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& Org::BouncyCastle::Asn1::Ocsp::TbsRequest::__cordl_internal_get_requestorName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestorName;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::TbsRequest::__cordl_internal_set_requestorName(::Org::BouncyCastle::Asn1::X509::GeneralName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestorName = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Ocsp::TbsRequest::__cordl_internal_get_requestList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestList;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Ocsp::TbsRequest::__cordl_internal_get_requestList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestList;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::TbsRequest::__cordl_internal_set_requestList(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestList = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Asn1::Ocsp::TbsRequest::__cordl_internal_get_requestExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestExtensions;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& Org::BouncyCastle::Asn1::Ocsp::TbsRequest::__cordl_internal_get_requestExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestExtensions;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::TbsRequest::__cordl_internal_set_requestExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestExtensions = value;
}
constexpr bool& Org::BouncyCastle::Asn1::Ocsp::TbsRequest::__cordl_internal_get_versionSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versionSet;
}
constexpr bool const& Org::BouncyCastle::Asn1::Ocsp::TbsRequest::__cordl_internal_get_versionSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versionSet;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::TbsRequest::__cordl_internal_set_versionSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___versionSet = value;
}
inline void Org::BouncyCastle::Asn1::Ocsp::TbsRequest::setStaticF_V1(::Org::BouncyCastle::Asn1::DerInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "V1", ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(std::forward<::Org::BouncyCastle::Asn1::DerInteger*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Ocsp::TbsRequest::getStaticF_V1() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "V1", ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>();
}
inline ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* Org::BouncyCastle::Asn1::Ocsp::TbsRequest::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* Org::BouncyCastle::Asn1::Ocsp::TbsRequest::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Ocsp::TbsRequest::_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* requestorName, ::Org::BouncyCastle::Asn1::Asn1Sequence* requestList,
                                                             ::Org::BouncyCastle::Asn1::X509::X509Extensions* requestExtensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestorName, requestList, requestExtensions);
}
inline void Org::BouncyCastle::Asn1::Ocsp::TbsRequest::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Ocsp::TbsRequest::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* Org::BouncyCastle::Asn1::Ocsp::TbsRequest::get_RequestorName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(), { "get_RequestorName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralName*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::Ocsp::TbsRequest::get_RequestList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(), { "get_RequestList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Sequence*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::Ocsp::TbsRequest::get_RequestExtensions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(), { "get_RequestExtensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Ocsp::TbsRequest::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* Org::BouncyCastle::Asn1::Ocsp::TbsRequest::New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* requestorName,
                                                                                                        ::Org::BouncyCastle::Asn1::Asn1Sequence* requestList,
                                                                                                        ::Org::BouncyCastle::Asn1::X509::X509Extensions* requestExtensions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(requestorName, requestList, requestExtensions));
}
inline ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* Org::BouncyCastle::Asn1::Ocsp::TbsRequest::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest::TbsRequest() {}
