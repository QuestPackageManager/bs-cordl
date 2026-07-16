#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Icao/LdsVersionInfo.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Icao/zzzz__LdsVersionInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerPrintableString_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::*)(::StringW, ::StringW)>(&::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x344dd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x344dde4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x344d8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo.GetLdsVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::*)()>(&::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::GetLdsVersion)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x344dec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo.GetUnicodeVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::*)()>(&::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::GetUnicodeVersion)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x344dedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::*)()>(
    &::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::ToAsn1Object)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x344def8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerPrintableString*& Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::__cordl_internal_get_ldsVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ldsVersion;
}
constexpr ::Org::BouncyCastle::Asn1::DerPrintableString* const& Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::__cordl_internal_get_ldsVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ldsVersion;
}
constexpr void Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::__cordl_internal_set_ldsVersion(::Org::BouncyCastle::Asn1::DerPrintableString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ldsVersion = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerPrintableString*& Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::__cordl_internal_get_unicodeVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unicodeVersion;
}
constexpr ::Org::BouncyCastle::Asn1::DerPrintableString* const& Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::__cordl_internal_get_unicodeVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unicodeVersion;
}
constexpr void Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::__cordl_internal_set_unicodeVersion(::Org::BouncyCastle::Asn1::DerPrintableString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unicodeVersion = value;
}
inline void Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::_ctor(::StringW ldsVersion, ::StringW unicodeVersion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ldsVersion, unicodeVersion);
}
inline void Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>(nullptr, ___internal_method, obj);
}
inline ::StringW Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::GetLdsVersion() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::GetUnicodeVersion() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::New_ctor(::StringW ldsVersion, ::StringW unicodeVersion) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>(ldsVersion, unicodeVersion));
}
inline ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo::LdsVersionInfo() {}
