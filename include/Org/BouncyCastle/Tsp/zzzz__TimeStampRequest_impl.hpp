#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Tsp/TimeStampRequest.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_impl.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampRequest_def.hpp"
#include "Org/BouncyCastle/Asn1/Tsp/zzzz__TimeStampReq_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extension_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1InputStream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampRequest::*)(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*)>(
    &::Org::BouncyCastle::Tsp::TimeStampRequest::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x361d148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampRequest::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Tsp::TimeStampRequest::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x361d164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampRequest::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Tsp::TimeStampRequest::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x361d2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampRequest::*)(::Org::BouncyCastle::Asn1::Asn1InputStream*)>(
    &::Org::BouncyCastle::Tsp::TimeStampRequest::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x361d1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequest.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Tsp::TimeStampRequest::*)()>(&::Org::BouncyCastle::Tsp::TimeStampRequest::get_Version)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x361d378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequest.get_MessageImprintAlgOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Tsp::TimeStampRequest::*)()>(&::Org::BouncyCastle::Tsp::TimeStampRequest::get_MessageImprintAlgOid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x361d39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { "get_MessageImprintAlgOid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequest.GetMessageImprintDigest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Tsp::TimeStampRequest::*)()>(&::Org::BouncyCastle::Tsp::TimeStampRequest::GetMessageImprintDigest)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x361d3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { "GetMessageImprintDigest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequest.get_ReqPolicy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Tsp::TimeStampRequest::*)()>(&::Org::BouncyCastle::Tsp::TimeStampRequest::get_ReqPolicy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x361d3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { "get_ReqPolicy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequest.get_Nonce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Tsp::TimeStampRequest::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampRequest::get_Nonce)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x361d424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { "get_Nonce", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequest.get_CertReq
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Tsp::TimeStampRequest::*)()>(&::Org::BouncyCastle::Tsp::TimeStampRequest::get_CertReq)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x361d448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { "get_CertReq", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequest.Validate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampRequest::*)(::System::Collections::IList*, ::System::Collections::IList*,
                                                                                                            ::System::Collections::IList*)>(&::Org::BouncyCastle::Tsp::TimeStampRequest::Validate)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x361d478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(),
                         { "Validate", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequest.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Tsp::TimeStampRequest::*)()>(&::Org::BouncyCastle::Tsp::TimeStampRequest::GetEncoded)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x361dc90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { "GetEncoded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequest.get_Extensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Tsp::TimeStampRequest::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampRequest::get_Extensions)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x361daa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { "get_Extensions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequest.get_HasExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Tsp::TimeStampRequest::*)()>(&::Org::BouncyCastle::Tsp::TimeStampRequest::get_HasExtensions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x361dca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { ::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequest.GetExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extension* (
    ::Org::BouncyCastle::Tsp::TimeStampRequest::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Tsp::TimeStampRequest::GetExtension)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x361dcb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { ::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequest.GetExtensionOids
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Org::BouncyCastle::Tsp::TimeStampRequest::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampRequest::GetExtensionOids)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x361dccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { ::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampRequest.GetX509Extensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Tsp::TimeStampRequest::*)()>(
    &::Org::BouncyCastle::Tsp::TimeStampRequest::GetX509Extensions)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x361dde0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { ::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), 8 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*& Org::BouncyCastle::Tsp::TimeStampRequest::__cordl_internal_get_req() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___req;
}
constexpr ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* const& Org::BouncyCastle::Tsp::TimeStampRequest::__cordl_internal_get_req() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___req;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampRequest::__cordl_internal_set_req(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___req = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Tsp::TimeStampRequest::__cordl_internal_get_extensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& Org::BouncyCastle::Tsp::TimeStampRequest::__cordl_internal_get_extensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr void Org::BouncyCastle::Tsp::TimeStampRequest::__cordl_internal_set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extensions = value;
}
inline void Org::BouncyCastle::Tsp::TimeStampRequest::_ctor(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* req) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, req);
}
inline void Org::BouncyCastle::Tsp::TimeStampRequest::_ctor(::ArrayW<uint8_t> req) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, req);
}
inline void Org::BouncyCastle::Tsp::TimeStampRequest::_ctor(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Tsp::TimeStampRequest::_ctor(::Org::BouncyCastle::Asn1::Asn1InputStream* str) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str);
}
inline int32_t Org::BouncyCastle::Tsp::TimeStampRequest::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Tsp::TimeStampRequest::get_MessageImprintAlgOid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { "get_MessageImprintAlgOid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Tsp::TimeStampRequest::GetMessageImprintDigest() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { "GetMessageImprintDigest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Tsp::TimeStampRequest::get_ReqPolicy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { "get_ReqPolicy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Tsp::TimeStampRequest::get_Nonce() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { "get_Nonce", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Tsp::TimeStampRequest::get_CertReq() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { "get_CertReq", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Tsp::TimeStampRequest::Validate(::System::Collections::IList* algorithms, ::System::Collections::IList* policies, ::System::Collections::IList* extensions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(),
                          { "Validate", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithms, policies, extensions);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Tsp::TimeStampRequest::GetEncoded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { "GetEncoded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Tsp::TimeStampRequest::get_Extensions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), { "get_Extensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Tsp::TimeStampRequest::get_HasExtensions() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extension* Org::BouncyCastle::Tsp::TimeStampRequest::GetExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extension*>(this, ___internal_method, oid);
}
inline ::System::Collections::IList* Org::BouncyCastle::Tsp::TimeStampRequest::GetExtensionOids() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Tsp::TimeStampRequest::GetX509Extensions() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Tsp::TimeStampRequest*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Tsp::TimeStampRequest* Org::BouncyCastle::Tsp::TimeStampRequest::New_ctor(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* req) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::TimeStampRequest*>(req));
}
inline ::Org::BouncyCastle::Tsp::TimeStampRequest* Org::BouncyCastle::Tsp::TimeStampRequest::New_ctor(::ArrayW<uint8_t> req) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::TimeStampRequest*>(req));
}
inline ::Org::BouncyCastle::Tsp::TimeStampRequest* Org::BouncyCastle::Tsp::TimeStampRequest::New_ctor(::System::IO::Stream* input) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::TimeStampRequest*>(input));
}
inline ::Org::BouncyCastle::Tsp::TimeStampRequest* Org::BouncyCastle::Tsp::TimeStampRequest::New_ctor(::Org::BouncyCastle::Asn1::Asn1InputStream* str) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::TimeStampRequest*>(str));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Tsp::TimeStampRequest::TimeStampRequest() {}
