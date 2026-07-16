#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Tsp/TimeStampResponse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampResponse_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiFailureInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Tsp/zzzz__TimeStampResp_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1InputStream_def.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampRequest_def.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampToken_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampResponse::*)(::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*)>(
    &::Org::BouncyCastle::Tsp::TimeStampResponse::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x361e648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponse*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampResponse::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Tsp::TimeStampResponse::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x361e734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponse*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampResponse::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Tsp::TimeStampResponse::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x361e8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponse*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponse.readTimeStampResp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* (*)(::Org::BouncyCastle::Asn1::Asn1InputStream*)>(
    &::Org::BouncyCastle::Tsp::TimeStampResponse::readTimeStampResp)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x361e7ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponse*>(),
                                                                                           { "readTimeStampResp", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponse.get_Status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Tsp::TimeStampResponse::*)()>(&::Org::BouncyCastle::Tsp::TimeStampResponse::get_Status)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x361e9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponse*>(), { "get_Status", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponse.GetStatusString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Tsp::TimeStampResponse::*)()>(&::Org::BouncyCastle::Tsp::TimeStampResponse::GetStatusString)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x361e9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponse*>(), { "GetStatusString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponse.GetFailInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo* (::Org::BouncyCastle::Tsp::TimeStampResponse::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampResponse::GetFailInfo)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x361eb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponse*>(), { "GetFailInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponse.get_TimeStampToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Tsp::TimeStampToken* (::Org::BouncyCastle::Tsp::TimeStampResponse::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampResponse::get_TimeStampToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x361eb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponse*>(), { "get_TimeStampToken", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponse.Validate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampResponse::*)(::Org::BouncyCastle::Tsp::TimeStampRequest*)>(
    &::Org::BouncyCastle::Tsp::TimeStampResponse::Validate)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x361eb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponse*>(), { "Validate", {}, { ::i2c::type_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampResponse.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Tsp::TimeStampResponse::*)()>(&::Org::BouncyCastle::Tsp::TimeStampResponse::GetEncoded)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x361ef84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponse*>(), { "GetEncoded", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*& Org::BouncyCastle::Tsp::TimeStampResponse::__cordl_internal_get_resp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resp;
}
constexpr ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* const& Org::BouncyCastle::Tsp::TimeStampResponse::__cordl_internal_get_resp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resp;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampResponse::__cordl_internal_set_resp(::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resp = value;
}
constexpr ::Org::BouncyCastle::Tsp::TimeStampToken*& Org::BouncyCastle::Tsp::TimeStampResponse::__cordl_internal_get_timeStampToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeStampToken;
}
constexpr ::Org::BouncyCastle::Tsp::TimeStampToken* const& Org::BouncyCastle::Tsp::TimeStampResponse::__cordl_internal_get_timeStampToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeStampToken;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampResponse::__cordl_internal_set_timeStampToken(::Org::BouncyCastle::Tsp::TimeStampToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeStampToken = value;
}
inline void Org::BouncyCastle::Tsp::TimeStampResponse::_ctor(::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* resp) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponse*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resp);
}
inline void Org::BouncyCastle::Tsp::TimeStampResponse::_ctor(::ArrayW<uint8_t> resp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponse*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resp);
}
inline void Org::BouncyCastle::Tsp::TimeStampResponse::_ctor(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponse*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* Org::BouncyCastle::Tsp::TimeStampResponse::readTimeStampResp(::Org::BouncyCastle::Asn1::Asn1InputStream* input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponse*>(),
                                                                                         { "readTimeStampResp", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*>(nullptr, ___internal_method, input);
}
inline int32_t Org::BouncyCastle::Tsp::TimeStampResponse::get_Status() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponse*>(), { "get_Status", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Tsp::TimeStampResponse::GetStatusString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponse*>(), { "GetStatusString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo* Org::BouncyCastle::Tsp::TimeStampResponse::GetFailInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponse*>(), { "GetFailInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Tsp::TimeStampToken* Org::BouncyCastle::Tsp::TimeStampResponse::get_TimeStampToken() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponse*>(), { "get_TimeStampToken", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Tsp::TimeStampToken*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Tsp::TimeStampResponse::Validate(::Org::BouncyCastle::Tsp::TimeStampRequest* request) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponse*>(), { "Validate", {}, { ::i2c::type_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Tsp::TimeStampResponse::GetEncoded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampResponse*>(), { "GetEncoded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Tsp::TimeStampResponse* Org::BouncyCastle::Tsp::TimeStampResponse::New_ctor(::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* resp) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::TimeStampResponse*>(resp));
}
inline ::Org::BouncyCastle::Tsp::TimeStampResponse* Org::BouncyCastle::Tsp::TimeStampResponse::New_ctor(::ArrayW<uint8_t> resp) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::TimeStampResponse*>(resp));
}
inline ::Org::BouncyCastle::Tsp::TimeStampResponse* Org::BouncyCastle::Tsp::TimeStampResponse::New_ctor(::System::IO::Stream* input) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::TimeStampResponse*>(input));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Tsp::TimeStampResponse::TimeStampResponse() {}
