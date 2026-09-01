#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\X509Extension.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extension_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBoolean_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509Extension::*)(::Org::BouncyCastle::Asn1::DerBoolean*, ::Org::BouncyCastle::Asn1::Asn1OctetString*)>(
    &::Org::BouncyCastle::Asn1::X509::X509Extension::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x366c5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extension*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509Extension::*)(bool, ::Org::BouncyCastle::Asn1::Asn1OctetString*)>(
    &::Org::BouncyCastle::Asn1::X509::X509Extension::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x366aa28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extension*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extension.get_IsCritical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::X509::X509Extension::*)()>(&::Org::BouncyCastle::Asn1::X509::X509Extension::get_IsCritical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x366c63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extension*>(), { "get_IsCritical", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extension.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::Asn1::X509::X509Extension::*)()>(
    &::Org::BouncyCastle::Asn1::X509::X509Extension::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x366c644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extension*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extension.GetParsedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (::Org::BouncyCastle::Asn1::X509::X509Extension::*)()>(
    &::Org::BouncyCastle::Asn1::X509::X509Extension::GetParsedValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x366c64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extension*>(), { "GetParsedValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extension.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::X509::X509Extension::*)()>(&::Org::BouncyCastle::Asn1::X509::X509Extension::GetHashCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x366c650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extension*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extension*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extension.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::X509::X509Extension::*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X509::X509Extension::Equals)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x366c680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extension*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extension*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extension.ConvertValueToObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (*)(::Org::BouncyCastle::Asn1::X509::X509Extension*)>(
    &::Org::BouncyCastle::Asn1::X509::X509Extension::ConvertValueToObject)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x365bf98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extension*>(),
                                                                                           { "ConvertValueToObject", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extension*>() } })));
    return ___internal_method;
  }
};
constexpr bool& Org::BouncyCastle::Asn1::X509::X509Extension::__cordl_internal_get_critical() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___critical;
}
constexpr bool const& Org::BouncyCastle::Asn1::X509::X509Extension::__cordl_internal_get_critical() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___critical;
}
constexpr void Org::BouncyCastle::Asn1::X509::X509Extension::__cordl_internal_set_critical(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___critical = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::X509::X509Extension::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::X509::X509Extension::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void Org::BouncyCastle::Asn1::X509::X509Extension::__cordl_internal_set_value(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline void Org::BouncyCastle::Asn1::X509::X509Extension::_ctor(::Org::BouncyCastle::Asn1::DerBoolean* critical, ::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extension*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBoolean*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critical, value);
}
inline void Org::BouncyCastle::Asn1::X509::X509Extension::_ctor(bool critical, ::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extension*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critical, value);
}
inline bool Org::BouncyCastle::Asn1::X509::X509Extension::get_IsCritical() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extension*>(), { "get_IsCritical", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::X509::X509Extension::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extension*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Asn1::X509::X509Extension::GetParsedValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extension*>(), { "GetParsedValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Asn1::X509::X509Extension::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extension*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Asn1::X509::X509Extension::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extension*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::X509Extension::ConvertValueToObject(::Org::BouncyCastle::Asn1::X509::X509Extension* ext) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extension*>(),
                                                                                         { "ConvertValueToObject", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extension*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(nullptr, ___internal_method, ext);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extension* Org::BouncyCastle::Asn1::X509::X509Extension::New_ctor(::Org::BouncyCastle::Asn1::DerBoolean* critical,
                                                                                                              ::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509Extension*>(critical, value));
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extension* Org::BouncyCastle::Asn1::X509::X509Extension::New_ctor(bool critical, ::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509Extension*>(critical, value));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extension::X509Extension() {}
