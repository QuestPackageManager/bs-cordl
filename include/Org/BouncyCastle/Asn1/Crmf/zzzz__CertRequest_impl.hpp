#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Crmf/CertRequest.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__CertRequest_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__CertTemplate_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__Controls_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::CertRequest::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Crmf::CertRequest::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x33635b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertRequest.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertRequest* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Crmf::CertRequest::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3363020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::CertRequest::*)(
    int32_t, ::Org::BouncyCastle::Asn1::Crmf::CertTemplate*, ::Org::BouncyCastle::Asn1::Crmf::Controls*)>(&::Org::BouncyCastle::Asn1::Crmf::CertRequest::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3363864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(),
            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::Controls*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::CertRequest::*)(
    ::Org::BouncyCastle::Asn1::DerInteger*, ::Org::BouncyCastle::Asn1::Crmf::CertTemplate*, ::Org::BouncyCastle::Asn1::Crmf::Controls*)>(&::Org::BouncyCastle::Asn1::Crmf::CertRequest::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33638e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::Controls*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertRequest.get_CertReqID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Crmf::CertRequest::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::CertRequest::get_CertReqID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33638ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertRequest.get_CertTemplate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertTemplate* (::Org::BouncyCastle::Asn1::Crmf::CertRequest::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::CertRequest::get_CertTemplate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33638f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertRequest.get_Controls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::Controls* (::Org::BouncyCastle::Asn1::Crmf::CertRequest::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::CertRequest::get_Controls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33638fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertRequest.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Crmf::CertRequest::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::CertRequest::ToAsn1Object)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x3363904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Crmf::CertRequest::__cordl_internal_get_certReqId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certReqId;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Crmf::CertRequest::__cordl_internal_get_certReqId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certReqId;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertRequest::__cordl_internal_set_certReqId(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certReqId = value;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplate*& Org::BouncyCastle::Asn1::Crmf::CertRequest::__cordl_internal_get_certTemplate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certTemplate;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* const& Org::BouncyCastle::Asn1::Crmf::CertRequest::__cordl_internal_get_certTemplate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certTemplate;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertRequest::__cordl_internal_set_certTemplate(::Org::BouncyCastle::Asn1::Crmf::CertTemplate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certTemplate = value;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::Controls*& Org::BouncyCastle::Asn1::Crmf::CertRequest::__cordl_internal_get_controls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controls;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::Controls* const& Org::BouncyCastle::Asn1::Crmf::CertRequest::__cordl_internal_get_controls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controls;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertRequest::__cordl_internal_set_controls(::Org::BouncyCastle::Asn1::Crmf::Controls* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controls = value;
}
inline void Org::BouncyCastle::Asn1::Crmf::CertRequest::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertRequest* Org::BouncyCastle::Asn1::Crmf::CertRequest::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Crmf::CertRequest::_ctor(int32_t certReqId, ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certTemplate, ::Org::BouncyCastle::Asn1::Crmf::Controls* controls) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::Controls*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certReqId, certTemplate, controls);
}
inline void Org::BouncyCastle::Asn1::Crmf::CertRequest::_ctor(::Org::BouncyCastle::Asn1::DerInteger* certReqId, ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certTemplate,
                                                              ::Org::BouncyCastle::Asn1::Crmf::Controls* controls) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::Controls*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certReqId, certTemplate, controls);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Crmf::CertRequest::get_CertReqID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* Org::BouncyCastle::Asn1::Crmf::CertRequest::get_CertTemplate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Crmf::Controls* Org::BouncyCastle::Asn1::Crmf::CertRequest::get_Controls() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::Controls*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Crmf::CertRequest::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertRequest* Org::BouncyCastle::Asn1::Crmf::CertRequest::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertRequest* Org::BouncyCastle::Asn1::Crmf::CertRequest::New_ctor(int32_t certReqId, ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certTemplate,
                                                                                                          ::Org::BouncyCastle::Asn1::Crmf::Controls* controls) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(certReqId, certTemplate, controls));
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertRequest* Org::BouncyCastle::Asn1::Crmf::CertRequest::New_ctor(::Org::BouncyCastle::Asn1::DerInteger* certReqId,
                                                                                                          ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certTemplate,
                                                                                                          ::Org::BouncyCastle::Asn1::Crmf::Controls* controls) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(certReqId, certTemplate, controls));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Crmf::CertRequest::CertRequest() {}
