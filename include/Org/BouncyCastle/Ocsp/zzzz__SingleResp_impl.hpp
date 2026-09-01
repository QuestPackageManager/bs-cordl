#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Ocsp\SingleResp.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__SingleResp_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__SingleResponse_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateID_def.hpp"
#include "Org/BouncyCastle/Utilities/Date/zzzz__DateTimeObject_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::SingleResp._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::SingleResp::*)(::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*)>(
    &::Org::BouncyCastle::Ocsp::SingleResp::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35721c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::SingleResp*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::SingleResp.GetCertID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Ocsp::CertificateID* (::Org::BouncyCastle::Ocsp::SingleResp::*)()>(&::Org::BouncyCastle::Ocsp::SingleResp::GetCertID)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x357afa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::SingleResp*>(), { "GetCertID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::SingleResp.GetCertStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Ocsp::SingleResp::*)()>(&::Org::BouncyCastle::Ocsp::SingleResp::GetCertStatus)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x357b014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::SingleResp*>(), { "GetCertStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::SingleResp.get_ThisUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Org::BouncyCastle::Ocsp::SingleResp::*)()>(&::Org::BouncyCastle::Ocsp::SingleResp::get_ThisUpdate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x357b134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::SingleResp*>(), { "get_ThisUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::SingleResp.get_NextUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Date::DateTimeObject* (::Org::BouncyCastle::Ocsp::SingleResp::*)()>(
    &::Org::BouncyCastle::Ocsp::SingleResp::get_NextUpdate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x357b158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::SingleResp*>(), { "get_NextUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::SingleResp.get_SingleExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Ocsp::SingleResp::*)()>(
    &::Org::BouncyCastle::Ocsp::SingleResp::get_SingleExtensions)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x357b1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::SingleResp*>(), { "get_SingleExtensions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::SingleResp.GetX509Extensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Ocsp::SingleResp::*)()>(
    &::Org::BouncyCastle::Ocsp::SingleResp::GetX509Extensions)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x357b1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::SingleResp*>(), { ::i2c::class_of<::Org::BouncyCastle::Ocsp::SingleResp*>(), 8 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*& Org::BouncyCastle::Ocsp::SingleResp::__cordl_internal_get_resp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resp;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* const& Org::BouncyCastle::Ocsp::SingleResp::__cordl_internal_get_resp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resp;
}
constexpr void Org::BouncyCastle::Ocsp::SingleResp::__cordl_internal_set_resp(::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resp = value;
}
inline void Org::BouncyCastle::Ocsp::SingleResp::_ctor(::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* resp) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::SingleResp*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resp);
}
inline ::Org::BouncyCastle::Ocsp::CertificateID* Org::BouncyCastle::Ocsp::SingleResp::GetCertID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::SingleResp*>(), { "GetCertID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::CertificateID*>(this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Ocsp::SingleResp::GetCertStatus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::SingleResp*>(), { "GetCertStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::Ocsp::SingleResp::get_ThisUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::SingleResp*>(), { "get_ThisUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* Org::BouncyCastle::Ocsp::SingleResp::get_NextUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::SingleResp*>(), { "get_NextUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Ocsp::SingleResp::get_SingleExtensions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::SingleResp*>(), { "get_SingleExtensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Ocsp::SingleResp::GetX509Extensions() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Ocsp::SingleResp*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::SingleResp* Org::BouncyCastle::Ocsp::SingleResp::New_ctor(::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* resp) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Ocsp::SingleResp*>(resp));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::SingleResp::SingleResp() {}
