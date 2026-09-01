#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Ocsp\RespData.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__RespData_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__ResponseData_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__RespID_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__SingleResp_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::RespData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::RespData::*)(::Org::BouncyCastle::Asn1::Ocsp::ResponseData*)>(&::Org::BouncyCastle::Ocsp::RespData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3572490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RespData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::RespData.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Ocsp::RespData::*)()>(&::Org::BouncyCastle::Ocsp::RespData::get_Version)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x357aaf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RespData*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::RespData.GetResponderId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Ocsp::RespID* (::Org::BouncyCastle::Ocsp::RespData::*)()>(&::Org::BouncyCastle::Ocsp::RespData::GetResponderId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x357ab20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RespData*>(), { "GetResponderId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::RespData.get_ProducedAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Org::BouncyCastle::Ocsp::RespData::*)()>(&::Org::BouncyCastle::Ocsp::RespData::get_ProducedAt)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x357ab80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RespData*>(), { "get_ProducedAt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::RespData.GetResponses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Ocsp::SingleResp*> (::Org::BouncyCastle::Ocsp::RespData::*)()>(
    &::Org::BouncyCastle::Ocsp::RespData::GetResponses)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x357aba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RespData*>(), { "GetResponses", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::RespData.get_ResponseExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Ocsp::RespData::*)()>(
    &::Org::BouncyCastle::Ocsp::RespData::get_ResponseExtensions)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x357acd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RespData*>(), { "get_ResponseExtensions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::RespData.GetX509Extensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Ocsp::RespData::*)()>(
    &::Org::BouncyCastle::Ocsp::RespData::GetX509Extensions)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x357acec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RespData*>(), { ::i2c::class_of<::Org::BouncyCastle::Ocsp::RespData*>(), 8 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponseData*& Org::BouncyCastle::Ocsp::RespData::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* const& Org::BouncyCastle::Ocsp::RespData::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void Org::BouncyCastle::Ocsp::RespData::__cordl_internal_set_data(::Org::BouncyCastle::Asn1::Ocsp::ResponseData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void Org::BouncyCastle::Ocsp::RespData::_ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponseData* data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RespData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline int32_t Org::BouncyCastle::Ocsp::RespData::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RespData*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::RespID* Org::BouncyCastle::Ocsp::RespData::GetResponderId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RespData*>(), { "GetResponderId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::RespID*>(this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::Ocsp::RespData::get_ProducedAt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RespData*>(), { "get_ProducedAt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Ocsp::SingleResp*> Org::BouncyCastle::Ocsp::RespData::GetResponses() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RespData*>(), { "GetResponses", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Ocsp::SingleResp*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Ocsp::RespData::get_ResponseExtensions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::RespData*>(), { "get_ResponseExtensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Ocsp::RespData::GetX509Extensions() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Ocsp::RespData*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::RespData* Org::BouncyCastle::Ocsp::RespData::New_ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponseData* data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Ocsp::RespData*>(data));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::RespData::RespData() {}
