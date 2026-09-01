#pragma once
// IWYU pragma private; include "Mono\Security\X509\X509Stores.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__X509Stores_def.hpp"
#include "Mono/Security/X509/zzzz__X509Store_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509Stores._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Stores::*)(::StringW, bool)>(&::Mono::Security::X509::X509Stores::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a99630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Stores*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Stores.get_TrustedRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Store* (::Mono::Security::X509::X509Stores::*)()>(&::Mono::Security::X509::X509Stores::get_TrustedRoot)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5a996cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Stores*>(), { "get_TrustedRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Stores.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Store* (::Mono::Security::X509::X509Stores::*)(::StringW, bool)>(&::Mono::Security::X509::X509Stores::Open)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5a99794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Stores*>(), { "Open", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Mono::Security::X509::X509Stores::__cordl_internal_get__storePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____storePath;
}
constexpr ::StringW const& Mono::Security::X509::X509Stores::__cordl_internal_get__storePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____storePath;
}
constexpr void Mono::Security::X509::X509Stores::__cordl_internal_set__storePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____storePath = value;
}
constexpr bool& Mono::Security::X509::X509Stores::__cordl_internal_get__newFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newFormat;
}
constexpr bool const& Mono::Security::X509::X509Stores::__cordl_internal_get__newFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newFormat;
}
constexpr void Mono::Security::X509::X509Stores::__cordl_internal_set__newFormat(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____newFormat = value;
}
constexpr ::Mono::Security::X509::X509Store*& Mono::Security::X509::X509Stores::__cordl_internal_get__trusted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trusted;
}
constexpr ::Mono::Security::X509::X509Store* const& Mono::Security::X509::X509Stores::__cordl_internal_get__trusted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trusted;
}
constexpr void Mono::Security::X509::X509Stores::__cordl_internal_set__trusted(::Mono::Security::X509::X509Store* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trusted = value;
}
inline void Mono::Security::X509::X509Stores::_ctor(::StringW path, bool newFormat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Stores*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, newFormat);
}
inline ::Mono::Security::X509::X509Store* Mono::Security::X509::X509Stores::get_TrustedRoot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Stores*>(), { "get_TrustedRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Store*>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Store* Mono::Security::X509::X509Stores::Open(::StringW storeName, bool create) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::X509::X509Stores*>(), { "Open", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Store*>(this, ___internal_method, storeName, create);
}
inline ::Mono::Security::X509::X509Stores* Mono::Security::X509::X509Stores::New_ctor(::StringW path, bool newFormat) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X509Stores*>(path, newFormat));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509Stores::X509Stores() {}
