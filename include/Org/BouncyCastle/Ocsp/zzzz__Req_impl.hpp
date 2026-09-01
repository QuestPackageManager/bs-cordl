#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Ocsp\Req.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__Req_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__Request_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateID_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::Req._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::Req::*)(::Org::BouncyCastle::Asn1::Ocsp::Request*)>(&::Org::BouncyCastle::Ocsp::Req::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3575b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::Req*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::Request*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::Req.GetCertID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Ocsp::CertificateID* (::Org::BouncyCastle::Ocsp::Req::*)()>(&::Org::BouncyCastle::Ocsp::Req::GetCertID)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x357aa58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::Req*>(), { "GetCertID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::Req.get_SingleRequestExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Ocsp::Req::*)()>(
    &::Org::BouncyCastle::Ocsp::Req::get_SingleRequestExtensions)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x357aac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::Req*>(), { "get_SingleRequestExtensions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::Req.GetX509Extensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Ocsp::Req::*)()>(&::Org::BouncyCastle::Ocsp::Req::GetX509Extensions)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x357aadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::Req*>(), { ::i2c::class_of<::Org::BouncyCastle::Ocsp::Req*>(), 8 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Ocsp::Request*& Org::BouncyCastle::Ocsp::Req::__cordl_internal_get_req() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___req;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::Request* const& Org::BouncyCastle::Ocsp::Req::__cordl_internal_get_req() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___req;
}
constexpr void Org::BouncyCastle::Ocsp::Req::__cordl_internal_set_req(::Org::BouncyCastle::Asn1::Ocsp::Request* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___req = value;
}
inline void Org::BouncyCastle::Ocsp::Req::_ctor(::Org::BouncyCastle::Asn1::Ocsp::Request* req) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::Req*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::Request*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, req);
}
inline ::Org::BouncyCastle::Ocsp::CertificateID* Org::BouncyCastle::Ocsp::Req::GetCertID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::Req*>(), { "GetCertID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::CertificateID*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Ocsp::Req::get_SingleRequestExtensions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::Req*>(), { "get_SingleRequestExtensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Ocsp::Req::GetX509Extensions() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Ocsp::Req*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::Req* Org::BouncyCastle::Ocsp::Req::New_ctor(::Org::BouncyCastle::Asn1::Ocsp::Request* req) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Ocsp::Req*>(req));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::Req::Req() {}
