#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X9\OtherInfo.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__OtherInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__KeySpecificInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::OtherInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::OtherInfo::*)(
    ::Org::BouncyCastle::Asn1::X9::KeySpecificInfo*, ::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Org::BouncyCastle::Asn1::Asn1OctetString*)>(&::Org::BouncyCastle::Asn1::X9::OtherInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x367805c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::OtherInfo*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::X9::KeySpecificInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::OtherInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::OtherInfo::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X9::OtherInfo::_ctor)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x3678068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::OtherInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::OtherInfo.get_KeyInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X9::KeySpecificInfo* (::Org::BouncyCastle::Asn1::X9::OtherInfo::*)()>(
    &::Org::BouncyCastle::Asn1::X9::OtherInfo::get_KeyInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3678440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::OtherInfo*>(), { "get_KeyInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::OtherInfo.get_PartyAInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::Asn1::X9::OtherInfo::*)()>(
    &::Org::BouncyCastle::Asn1::X9::OtherInfo::get_PartyAInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3678448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::OtherInfo*>(), { "get_PartyAInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::OtherInfo.get_SuppPubInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::Asn1::X9::OtherInfo::*)()>(
    &::Org::BouncyCastle::Asn1::X9::OtherInfo::get_SuppPubInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3678450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::OtherInfo*>(), { "get_SuppPubInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::OtherInfo.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X9::OtherInfo::*)()>(
    &::Org::BouncyCastle::Asn1::X9::OtherInfo::ToAsn1Object)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3678458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::OtherInfo*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::OtherInfo*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X9::KeySpecificInfo*& Org::BouncyCastle::Asn1::X9::OtherInfo::__cordl_internal_get_keyInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyInfo;
}
constexpr ::Org::BouncyCastle::Asn1::X9::KeySpecificInfo* const& Org::BouncyCastle::Asn1::X9::OtherInfo::__cordl_internal_get_keyInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyInfo;
}
constexpr void Org::BouncyCastle::Asn1::X9::OtherInfo::__cordl_internal_set_keyInfo(::Org::BouncyCastle::Asn1::X9::KeySpecificInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyInfo = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::X9::OtherInfo::__cordl_internal_get_partyAInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyAInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::X9::OtherInfo::__cordl_internal_get_partyAInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyAInfo;
}
constexpr void Org::BouncyCastle::Asn1::X9::OtherInfo::__cordl_internal_set_partyAInfo(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___partyAInfo = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::X9::OtherInfo::__cordl_internal_get_suppPubInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___suppPubInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::X9::OtherInfo::__cordl_internal_get_suppPubInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___suppPubInfo;
}
constexpr void Org::BouncyCastle::Asn1::X9::OtherInfo::__cordl_internal_set_suppPubInfo(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___suppPubInfo = value;
}
inline void Org::BouncyCastle::Asn1::X9::OtherInfo::_ctor(::Org::BouncyCastle::Asn1::X9::KeySpecificInfo* keyInfo, ::Org::BouncyCastle::Asn1::Asn1OctetString* partyAInfo,
                                                          ::Org::BouncyCastle::Asn1::Asn1OctetString* suppPubInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::OtherInfo*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::X9::KeySpecificInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyInfo, partyAInfo, suppPubInfo);
}
inline void Org::BouncyCastle::Asn1::X9::OtherInfo::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::OtherInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::X9::KeySpecificInfo* Org::BouncyCastle::Asn1::X9::OtherInfo::get_KeyInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::OtherInfo*>(), { "get_KeyInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::KeySpecificInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::X9::OtherInfo::get_PartyAInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::OtherInfo*>(), { "get_PartyAInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::X9::OtherInfo::get_SuppPubInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::OtherInfo*>(), { "get_SuppPubInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X9::OtherInfo::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::OtherInfo*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::OtherInfo* Org::BouncyCastle::Asn1::X9::OtherInfo::New_ctor(::Org::BouncyCastle::Asn1::X9::KeySpecificInfo* keyInfo,
                                                                                                  ::Org::BouncyCastle::Asn1::Asn1OctetString* partyAInfo,
                                                                                                  ::Org::BouncyCastle::Asn1::Asn1OctetString* suppPubInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::OtherInfo*>(keyInfo, partyAInfo, suppPubInfo));
}
inline ::Org::BouncyCastle::Asn1::X9::OtherInfo* Org::BouncyCastle::Asn1::X9::OtherInfo::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::OtherInfo*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::OtherInfo::OtherInfo() {}
