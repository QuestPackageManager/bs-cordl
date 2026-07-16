#pragma once
// IWYU pragma private; include "System/Security/Cryptography/Oid.hpp"
#include "System/Security/Cryptography/zzzz__OidGroup_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__Oid_def.hpp"
#include "System/Security/Cryptography/zzzz__OidGroup_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::Oid._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::Oid::*)()>(&::System::Security::Cryptography::Oid::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x639c890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Oid*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Oid._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::Oid::*)(::StringW)>(&::System::Security::Cryptography::Oid::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x639c894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Oid*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Oid._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::Oid::*)(::StringW, ::StringW)>(&::System::Security::Cryptography::Oid::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x639c918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Oid*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Oid._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::Oid::*)(::System::Security::Cryptography::Oid*)>(&::System::Security::Cryptography::Oid::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x639c920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Oid*>(), { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::Oid*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Oid.FromOidValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::Oid* (*)(::StringW, ::System::Security::Cryptography::OidGroup)>(
    &::System::Security::Cryptography::Oid::FromOidValue)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x639c984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Oid*>(),
                                                             { "FromOidValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::OidGroup>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Oid.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::Oid::*)()>(&::System::Security::Cryptography::Oid::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x639cab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Oid*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Oid.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::Oid::*)(::StringW)>(&::System::Security::Cryptography::Oid::set_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x639cabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Oid*>(), { "set_Value", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Oid.get_FriendlyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::Oid::*)()>(&::System::Security::Cryptography::Oid::get_FriendlyName)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x639cac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Oid*>(), { "get_FriendlyName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Oid._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::Oid::*)(::StringW, ::StringW, ::System::Security::Cryptography::OidGroup)>(
    &::System::Security::Cryptography::Oid::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x639caa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Oid*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::OidGroup>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Security::Cryptography::Oid::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr ::StringW const& System::Security::Cryptography::Oid::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void System::Security::Cryptography::Oid::__cordl_internal_set__value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
constexpr ::StringW& System::Security::Cryptography::Oid::__cordl_internal_get__friendlyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____friendlyName;
}
constexpr ::StringW const& System::Security::Cryptography::Oid::__cordl_internal_get__friendlyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____friendlyName;
}
constexpr void System::Security::Cryptography::Oid::__cordl_internal_set__friendlyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____friendlyName = value;
}
constexpr ::System::Security::Cryptography::OidGroup& System::Security::Cryptography::Oid::__cordl_internal_get__group() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____group;
}
constexpr ::System::Security::Cryptography::OidGroup const& System::Security::Cryptography::Oid::__cordl_internal_get__group() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____group;
}
constexpr void System::Security::Cryptography::Oid::__cordl_internal_set__group(::System::Security::Cryptography::OidGroup value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____group = value;
}
inline void System::Security::Cryptography::Oid::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Oid*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::Oid::_ctor(::StringW oid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Oid*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid);
}
inline void System::Security::Cryptography::Oid::_ctor(::StringW value, ::StringW friendlyName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Oid*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, friendlyName);
}
inline void System::Security::Cryptography::Oid::_ctor(::System::Security::Cryptography::Oid* oid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Oid*>(), { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::Oid*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid);
}
inline ::System::Security::Cryptography::Oid* System::Security::Cryptography::Oid::FromOidValue(::StringW oidValue, ::System::Security::Cryptography::OidGroup group) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Oid*>(),
                                                           { "FromOidValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::OidGroup>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::Oid*>(nullptr, ___internal_method, oidValue, group);
}
inline ::StringW System::Security::Cryptography::Oid::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Oid*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Security::Cryptography::Oid::set_Value(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Oid*>(), { "set_Value", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Security::Cryptography::Oid::get_FriendlyName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Oid*>(), { "get_FriendlyName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Security::Cryptography::Oid::_ctor(::StringW value, ::StringW friendlyName, ::System::Security::Cryptography::OidGroup group) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::Oid*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::OidGroup>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, friendlyName, group);
}
inline ::System::Security::Cryptography::Oid* System::Security::Cryptography::Oid::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::Oid*>());
}
inline ::System::Security::Cryptography::Oid* System::Security::Cryptography::Oid::New_ctor(::StringW oid) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::Oid*>(oid));
}
inline ::System::Security::Cryptography::Oid* System::Security::Cryptography::Oid::New_ctor(::StringW value, ::StringW friendlyName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::Oid*>(value, friendlyName));
}
inline ::System::Security::Cryptography::Oid* System::Security::Cryptography::Oid::New_ctor(::System::Security::Cryptography::Oid* oid) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::Oid*>(oid));
}
inline ::System::Security::Cryptography::Oid* System::Security::Cryptography::Oid::New_ctor(::StringW value, ::StringW friendlyName, ::System::Security::Cryptography::OidGroup group) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::Oid*>(value, friendlyName, group));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::Oid::Oid() {}
