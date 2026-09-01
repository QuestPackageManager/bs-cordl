#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Ocsp\OcspReq.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__OcspReq_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__OcspRequest_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1InputStream_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__Req_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReq._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::OcspReq::*)(::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*)>(&::Org::BouncyCastle::Ocsp::OcspReq::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35756ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReq._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::OcspReq::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Ocsp::OcspReq::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x35756b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReq._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::OcspReq::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Ocsp::OcspReq::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3575868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReq._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::OcspReq::*)(::Org::BouncyCastle::Asn1::Asn1InputStream*)>(&::Org::BouncyCastle::Ocsp::OcspReq::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x3575724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReq.GetTbsRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Ocsp::OcspReq::*)()>(&::Org::BouncyCastle::Ocsp::OcspReq::GetTbsRequest)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x35758e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "GetTbsRequest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReq.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Ocsp::OcspReq::*)()>(&::Org::BouncyCastle::Ocsp::OcspReq::get_Version)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x35759dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReq.get_RequestorName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralName* (::Org::BouncyCastle::Ocsp::OcspReq::*)()>(
    &::Org::BouncyCastle::Ocsp::OcspReq::get_RequestorName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3575a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "get_RequestorName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReq.GetRequestList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Ocsp::Req*> (::Org::BouncyCastle::Ocsp::OcspReq::*)()>(&::Org::BouncyCastle::Ocsp::OcspReq::GetRequestList)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x3575a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "GetRequestList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReq.get_RequestExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Ocsp::OcspReq::*)()>(
    &::Org::BouncyCastle::Ocsp::OcspReq::get_RequestExtensions)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3575b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "get_RequestExtensions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReq.GetX509Extensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Ocsp::OcspReq::*)()>(
    &::Org::BouncyCastle::Ocsp::OcspReq::GetX509Extensions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3575bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { ::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReq.get_SignatureAlgOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Ocsp::OcspReq::*)()>(&::Org::BouncyCastle::Ocsp::OcspReq::get_SignatureAlgOid)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3575bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "get_SignatureAlgOid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReq.GetSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Ocsp::OcspReq::*)()>(&::Org::BouncyCastle::Ocsp::OcspReq::GetSignature)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3575c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "GetSignature", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReq.GetCertList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Org::BouncyCastle::Ocsp::OcspReq::*)()>(&::Org::BouncyCastle::Ocsp::OcspReq::GetCertList)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x3575c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "GetCertList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReq.GetCerts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*> (::Org::BouncyCastle::Ocsp::OcspReq::*)()>(
    &::Org::BouncyCastle::Ocsp::OcspReq::GetCerts)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x3576154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "GetCerts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReq.GetCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Ocsp::OcspReq::*)(::StringW)>(
    &::Org::BouncyCastle::Ocsp::OcspReq::GetCertificates)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x35763fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "GetCertificates", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReq.get_IsSigned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Ocsp::OcspReq::*)()>(&::Org::BouncyCastle::Ocsp::OcspReq::get_IsSigned)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3575c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "get_IsSigned", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReq.Verify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Ocsp::OcspReq::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Ocsp::OcspReq::Verify)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x3576590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "Verify", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspReq.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Ocsp::OcspReq::*)()>(&::Org::BouncyCastle::Ocsp::OcspReq::GetEncoded)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x35768d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "GetEncoded", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*& Org::BouncyCastle::Ocsp::OcspReq::__cordl_internal_get_req() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___req;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* const& Org::BouncyCastle::Ocsp::OcspReq::__cordl_internal_get_req() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___req;
}
constexpr void Org::BouncyCastle::Ocsp::OcspReq::__cordl_internal_set_req(::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___req = value;
}
inline void Org::BouncyCastle::Ocsp::OcspReq::_ctor(::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* req) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, req);
}
inline void Org::BouncyCastle::Ocsp::OcspReq::_ctor(::ArrayW<uint8_t> req) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, req);
}
inline void Org::BouncyCastle::Ocsp::OcspReq::_ctor(::System::IO::Stream* inStr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inStr);
}
inline void Org::BouncyCastle::Ocsp::OcspReq::_ctor(::Org::BouncyCastle::Asn1::Asn1InputStream* aIn) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aIn);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Ocsp::OcspReq::GetTbsRequest() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "GetTbsRequest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Ocsp::OcspReq::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* Org::BouncyCastle::Ocsp::OcspReq::get_RequestorName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "get_RequestorName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralName*>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Ocsp::Req*> Org::BouncyCastle::Ocsp::OcspReq::GetRequestList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "GetRequestList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Ocsp::Req*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Ocsp::OcspReq::get_RequestExtensions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "get_RequestExtensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Ocsp::OcspReq::GetX509Extensions() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Ocsp::OcspReq::get_SignatureAlgOid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "get_SignatureAlgOid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Ocsp::OcspReq::GetSignature() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "GetSignature", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::System::Collections::IList* Org::BouncyCastle::Ocsp::OcspReq::GetCertList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "GetCertList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*> Org::BouncyCastle::Ocsp::OcspReq::GetCerts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "GetCerts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Ocsp::OcspReq::GetCertificates(::StringW type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "GetCertificates", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*>(this, ___internal_method, type);
}
inline bool Org::BouncyCastle::Ocsp::OcspReq::get_IsSigned() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "get_IsSigned", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Ocsp::OcspReq::Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "Verify", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, publicKey);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Ocsp::OcspReq::GetEncoded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::OcspReq*>(), { "GetEncoded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::OcspReq* Org::BouncyCastle::Ocsp::OcspReq::New_ctor(::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* req) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Ocsp::OcspReq*>(req));
}
inline ::Org::BouncyCastle::Ocsp::OcspReq* Org::BouncyCastle::Ocsp::OcspReq::New_ctor(::ArrayW<uint8_t> req) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Ocsp::OcspReq*>(req));
}
inline ::Org::BouncyCastle::Ocsp::OcspReq* Org::BouncyCastle::Ocsp::OcspReq::New_ctor(::System::IO::Stream* inStr) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Ocsp::OcspReq*>(inStr));
}
inline ::Org::BouncyCastle::Ocsp::OcspReq* Org::BouncyCastle::Ocsp::OcspReq::New_ctor(::Org::BouncyCastle::Asn1::Asn1InputStream* aIn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Ocsp::OcspReq*>(aIn));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::OcspReq::OcspReq() {}
