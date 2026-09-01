#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cms\AuthenticatedDataParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AuthenticatedDataParser_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfoParser_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SequenceParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SetParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::*)(::Org::BouncyCastle::Asn1::Asn1SequenceParser*)>(
    &::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3355574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1SequenceParser*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33556a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser.GetOriginatorInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* (::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetOriginatorInfo)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x33556a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>(), { "GetOriginatorInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser.GetRecipientInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1SetParser* (::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetRecipientInfos)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3355afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>(), { "GetRecipientInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser.GetMacAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetMacAlgorithm)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3355c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>(), { "GetMacAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser.GetDigestAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetDigestAlgorithm)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x3355d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>(), { "GetDigestAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser.GetEnapsulatedContentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* (::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetEnapsulatedContentInfo)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3355f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>(), { "GetEnapsulatedContentInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser.GetAuthAttrs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1SetParser* (::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetAuthAttrs)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x3356220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>(), { "GetAuthAttrs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser.GetMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetMac)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x33563e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>(), { "GetMac", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser.GetUnauthAttrs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1SetParser* (::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetUnauthAttrs)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x335651c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>(), { "GetUnauthAttrs", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1SequenceParser*& Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__cordl_internal_get_seq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seq;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1SequenceParser* const& Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__cordl_internal_get_seq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seq;
}
constexpr void Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__cordl_internal_set_seq(::Org::BouncyCastle::Asn1::Asn1SequenceParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___seq = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible*& Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__cordl_internal_get_nextObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextObject;
}
constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible* const& Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__cordl_internal_get_nextObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextObject;
}
constexpr void Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__cordl_internal_set_nextObject(::Org::BouncyCastle::Asn1::IAsn1Convertible* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextObject = value;
}
constexpr bool& Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__cordl_internal_get_originatorInfoCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originatorInfoCalled;
}
constexpr bool const& Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__cordl_internal_get_originatorInfoCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originatorInfoCalled;
}
constexpr void Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::__cordl_internal_set_originatorInfoCalled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___originatorInfoCalled = value;
}
inline void Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1SequenceParser*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetOriginatorInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>(), { "GetOriginatorInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1SetParser* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetRecipientInfos() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>(), { "GetRecipientInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1SetParser*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetMacAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>(), { "GetMacAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetDigestAlgorithm() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>(), { "GetDigestAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetEnapsulatedContentInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>(), { "GetEnapsulatedContentInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1SetParser* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetAuthAttrs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>(), { "GetAuthAttrs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1SetParser*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetMac() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>(), { "GetMac", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1SetParser* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::GetUnauthAttrs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>(), { "GetUnauthAttrs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1SetParser*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser* Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser::AuthenticatedDataParser() {}
