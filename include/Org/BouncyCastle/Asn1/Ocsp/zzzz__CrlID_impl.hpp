#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Ocsp\CrlID.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__CrlID_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerIA5String_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::CrlID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::CrlID::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Asn1::Ocsp::CrlID::_ctor)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x345a870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CrlID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::CrlID.get_CrlUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerIA5String* (::Org::BouncyCastle::Asn1::Ocsp::CrlID::*)()>(&::Org::BouncyCastle::Asn1::Ocsp::CrlID::get_CrlUrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345ac00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CrlID*>(), { "get_CrlUrl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::CrlID.get_CrlNum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Ocsp::CrlID::*)()>(&::Org::BouncyCastle::Asn1::Ocsp::CrlID::get_CrlNum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345ac08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CrlID*>(), { "get_CrlNum", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::CrlID.get_CrlTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerGeneralizedTime* (::Org::BouncyCastle::Asn1::Ocsp::CrlID::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::CrlID::get_CrlTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345ac10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CrlID*>(), { "get_CrlTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::CrlID.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Ocsp::CrlID::*)()>(&::Org::BouncyCastle::Asn1::Ocsp::CrlID::ToAsn1Object)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x345ac18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CrlID*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CrlID*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerIA5String*& Org::BouncyCastle::Asn1::Ocsp::CrlID::__cordl_internal_get_crlUrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlUrl;
}
constexpr ::Org::BouncyCastle::Asn1::DerIA5String* const& Org::BouncyCastle::Asn1::Ocsp::CrlID::__cordl_internal_get_crlUrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlUrl;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::CrlID::__cordl_internal_set_crlUrl(::Org::BouncyCastle::Asn1::DerIA5String* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crlUrl = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Ocsp::CrlID::__cordl_internal_get_crlNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlNum;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Ocsp::CrlID::__cordl_internal_get_crlNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlNum;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::CrlID::__cordl_internal_set_crlNum(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crlNum = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Asn1::Ocsp::CrlID::__cordl_internal_get_crlTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlTime;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& Org::BouncyCastle::Asn1::Ocsp::CrlID::__cordl_internal_get_crlTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlTime;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::CrlID::__cordl_internal_set_crlTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crlTime = value;
}
inline void Org::BouncyCastle::Asn1::Ocsp::CrlID::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CrlID*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::DerIA5String* Org::BouncyCastle::Asn1::Ocsp::CrlID::get_CrlUrl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CrlID*>(), { "get_CrlUrl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerIA5String*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Ocsp::CrlID::get_CrlNum() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CrlID*>(), { "get_CrlNum", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* Org::BouncyCastle::Asn1::Ocsp::CrlID::get_CrlTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CrlID*>(), { "get_CrlTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Ocsp::CrlID::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ocsp::CrlID*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::CrlID* Org::BouncyCastle::Asn1::Ocsp::CrlID::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ocsp::CrlID*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Ocsp::CrlID::CrlID() {}
