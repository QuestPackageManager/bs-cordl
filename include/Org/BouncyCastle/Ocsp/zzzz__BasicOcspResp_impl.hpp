#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/BasicOcspResp.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__BasicOcspResp_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__BasicOcspResponse_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__ResponseData_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__RespData_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__RespID_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__SingleResp_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*)>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x356fad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetTbsResponseData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::GetTbsResponseData)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x356faf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "GetTbsResponseData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::get_Version)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x356fc50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.get_ResponderId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Ocsp::RespID* (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::get_ResponderId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x356fc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "get_ResponderId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.get_ProducedAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::get_ProducedAt)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x356fce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "get_ProducedAt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.get_Responses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Ocsp::SingleResp*> (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::get_Responses)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x356fd08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "get_Responses", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.get_ResponseExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::get_ResponseExtensions)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x356fe40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "get_ResponseExtensions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetX509Extensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::GetX509Extensions)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x356fe58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { ::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.get_SignatureAlgName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::get_SignatureAlgName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x356fe70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "get_SignatureAlgName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.get_SignatureAlgOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::get_SignatureAlgOid)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3570080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "get_SignatureAlgOid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetResponseData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Ocsp::RespData* (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::GetResponseData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x35700b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "GetResponseData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::GetSignature)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3570110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "GetSignature", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetCertList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::GetCertList)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x3570138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "GetCertList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetCerts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*> (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::GetCerts)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x3570678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "GetCerts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)(::StringW)>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::GetCertificates)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x357090c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "GetCertificates", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.Verify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Ocsp::BasicOcspResp::Verify)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x3570a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "Verify", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::GetEncoded)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3570d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "GetEncoded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)(::System::Object*)>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::Equals)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3570d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { ::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3570e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { ::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*& Org::BouncyCastle::Ocsp::BasicOcspResp::__cordl_internal_get_resp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resp;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* const& Org::BouncyCastle::Ocsp::BasicOcspResp::__cordl_internal_get_resp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resp;
}
constexpr void Org::BouncyCastle::Ocsp::BasicOcspResp::__cordl_internal_set_resp(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resp = value;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponseData*& Org::BouncyCastle::Ocsp::BasicOcspResp::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* const& Org::BouncyCastle::Ocsp::BasicOcspResp::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void Org::BouncyCastle::Ocsp::BasicOcspResp::__cordl_internal_set_data(::Org::BouncyCastle::Asn1::Ocsp::ResponseData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void Org::BouncyCastle::Ocsp::BasicOcspResp::_ctor(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* resp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resp);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Ocsp::BasicOcspResp::GetTbsResponseData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "GetTbsResponseData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Ocsp::BasicOcspResp::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::RespID* Org::BouncyCastle::Ocsp::BasicOcspResp::get_ResponderId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "get_ResponderId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::RespID*>(this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::Ocsp::BasicOcspResp::get_ProducedAt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "get_ProducedAt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Ocsp::SingleResp*> Org::BouncyCastle::Ocsp::BasicOcspResp::get_Responses() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "get_Responses", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Ocsp::SingleResp*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Ocsp::BasicOcspResp::get_ResponseExtensions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "get_ResponseExtensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Ocsp::BasicOcspResp::GetX509Extensions() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Ocsp::BasicOcspResp::get_SignatureAlgName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "get_SignatureAlgName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Ocsp::BasicOcspResp::get_SignatureAlgOid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "get_SignatureAlgOid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::RespData* Org::BouncyCastle::Ocsp::BasicOcspResp::GetResponseData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "GetResponseData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::RespData*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Ocsp::BasicOcspResp::GetSignature() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "GetSignature", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::System::Collections::IList* Org::BouncyCastle::Ocsp::BasicOcspResp::GetCertList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "GetCertList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*> Org::BouncyCastle::Ocsp::BasicOcspResp::GetCerts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "GetCerts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::X509::X509Certificate*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Ocsp::BasicOcspResp::GetCertificates(::StringW type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "GetCertificates", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*>(this, ___internal_method, type);
}
inline bool Org::BouncyCastle::Ocsp::BasicOcspResp::Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "Verify", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, publicKey);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Ocsp::BasicOcspResp::GetEncoded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), { "GetEncoded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Ocsp::BasicOcspResp::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::Ocsp::BasicOcspResp::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::BasicOcspResp* Org::BouncyCastle::Ocsp::BasicOcspResp::New_ctor(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* resp) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Ocsp::BasicOcspResp*>(resp));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::BasicOcspResp::BasicOcspResp() {}
