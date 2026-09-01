#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cms\ScvpReqRes.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ScvpReqRes_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::ScvpReqRes.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cms::ScvpReqRes::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x335f968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::ScvpReqRes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::ScvpReqRes::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cms::ScvpReqRes::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x335fa08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::ScvpReqRes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::ScvpReqRes::*)(::Org::BouncyCastle::Asn1::Cms::ContentInfo*)>(
    &::Org::BouncyCastle::Asn1::Cms::ScvpReqRes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335fb00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::ScvpReqRes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::ScvpReqRes::*)(
    ::Org::BouncyCastle::Asn1::Cms::ContentInfo*, ::Org::BouncyCastle::Asn1::Cms::ContentInfo*)>(&::Org::BouncyCastle::Asn1::Cms::ScvpReqRes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335fb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::ScvpReqRes.get_Request
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::ContentInfo* (::Org::BouncyCastle::Asn1::Cms::ScvpReqRes::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::ScvpReqRes::get_Request)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335fb10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::ScvpReqRes.get_Response
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::ContentInfo* (::Org::BouncyCastle::Asn1::Cms::ScvpReqRes::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::ScvpReqRes::get_Response)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335fb18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::ScvpReqRes.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cms::ScvpReqRes::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::ScvpReqRes::ToAsn1Object)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x335fb20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& Org::BouncyCastle::Asn1::Cms::ScvpReqRes::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo* const& Org::BouncyCastle::Asn1::Cms::ScvpReqRes::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr void Org::BouncyCastle::Asn1::Cms::ScvpReqRes::__cordl_internal_set_request(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___request = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& Org::BouncyCastle::Asn1::Cms::ScvpReqRes::__cordl_internal_get_response() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___response;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo* const& Org::BouncyCastle::Asn1::Cms::ScvpReqRes::__cordl_internal_get_response() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___response;
}
constexpr void Org::BouncyCastle::Asn1::Cms::ScvpReqRes::__cordl_internal_set_response(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___response = value;
}
inline ::Org::BouncyCastle::Asn1::Cms::ScvpReqRes* Org::BouncyCastle::Asn1::Cms::ScvpReqRes::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Cms::ScvpReqRes::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Cms::ScvpReqRes::_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* response) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void Org::BouncyCastle::Asn1::Cms::ScvpReqRes::_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* request, ::Org::BouncyCastle::Asn1::Cms::ContentInfo* response) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, response);
}
inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* Org::BouncyCastle::Asn1::Cms::ScvpReqRes::get_Request() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* Org::BouncyCastle::Asn1::Cms::ScvpReqRes::get_Response() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cms::ScvpReqRes::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::ScvpReqRes* Org::BouncyCastle::Asn1::Cms::ScvpReqRes::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Cms::ScvpReqRes* Org::BouncyCastle::Asn1::Cms::ScvpReqRes::New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* response) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*>(response));
}
inline ::Org::BouncyCastle::Asn1::Cms::ScvpReqRes* Org::BouncyCastle::Asn1::Cms::ScvpReqRes::New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* request,
                                                                                                      ::Org::BouncyCastle::Asn1::Cms::ContentInfo* response) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*>(request, response));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::ScvpReqRes::ScvpReqRes() {}
