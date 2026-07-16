#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ocsp/OcspRequest.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__OcspRequest_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__Signature_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__TbsRequest_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::Ocsp::OcspRequest::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3458c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Ocsp::OcspRequest::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3458c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::OcspRequest::*)(
    ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*, ::Org::BouncyCastle::Asn1::Ocsp::Signature*)>(&::Org::BouncyCastle::Asn1::Ocsp::OcspRequest::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3458ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::Signature*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::OcspRequest::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Ocsp::OcspRequest::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3458dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest.get_TbsRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* (::Org::BouncyCastle::Asn1::Ocsp::OcspRequest::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::OcspRequest::get_TbsRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34590e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*>(), { "get_TbsRequest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest.get_OptionalSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::Signature* (::Org::BouncyCastle::Asn1::Ocsp::OcspRequest::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::OcspRequest::get_OptionalSignature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34590ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*>(), { "get_OptionalSignature", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Ocsp::OcspRequest::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::OcspRequest::ToAsn1Object)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x34590f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*& Org::BouncyCastle::Asn1::Ocsp::OcspRequest::__cordl_internal_get_tbsRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tbsRequest;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* const& Org::BouncyCastle::Asn1::Ocsp::OcspRequest::__cordl_internal_get_tbsRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tbsRequest;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::OcspRequest::__cordl_internal_set_tbsRequest(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tbsRequest = value;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::Signature*& Org::BouncyCastle::Asn1::Ocsp::OcspRequest::__cordl_internal_get_optionalSignature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___optionalSignature;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::Signature* const& Org::BouncyCastle::Asn1::Ocsp::OcspRequest::__cordl_internal_get_optionalSignature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___optionalSignature;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::OcspRequest::__cordl_internal_set_optionalSignature(::Org::BouncyCastle::Asn1::Ocsp::Signature* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___optionalSignature = value;
}
inline ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* Org::BouncyCastle::Asn1::Ocsp::OcspRequest::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* Org::BouncyCastle::Asn1::Ocsp::OcspRequest::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Ocsp::OcspRequest::_ctor(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* tbsRequest, ::Org::BouncyCastle::Asn1::Ocsp::Signature* optionalSignature) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::Signature*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tbsRequest, optionalSignature);
}
inline void Org::BouncyCastle::Asn1::Ocsp::OcspRequest::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* Org::BouncyCastle::Asn1::Ocsp::OcspRequest::get_TbsRequest() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*>(), { "get_TbsRequest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::Signature* Org::BouncyCastle::Asn1::Ocsp::OcspRequest::get_OptionalSignature() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*>(), { "get_OptionalSignature", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::Signature*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Ocsp::OcspRequest::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* Org::BouncyCastle::Asn1::Ocsp::OcspRequest::New_ctor(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* tbsRequest,
                                                                                                          ::Org::BouncyCastle::Asn1::Ocsp::Signature* optionalSignature) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*>(tbsRequest, optionalSignature));
}
inline ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* Org::BouncyCastle::Asn1::Ocsp::OcspRequest::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest::OcspRequest() {}
