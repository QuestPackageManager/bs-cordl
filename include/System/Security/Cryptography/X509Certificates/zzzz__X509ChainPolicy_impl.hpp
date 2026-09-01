#pragma once
// IWYU pragma private; include "System\Security\Cryptography\X509Certificates\X509ChainPolicy.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationFlag_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509VerificationFlags_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainPolicy_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Collection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationFlag_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509VerificationFlags_def.hpp"
#include "System/Security/Cryptography/zzzz__OidCollection_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainPolicy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainPolicy::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509ChainPolicy::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63af3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainPolicy.get_ExtraStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* (
    ::System::Security::Cryptography::X509Certificates::X509ChainPolicy::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainPolicy::get_ExtraStore)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x63af4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*>(), { "get_ExtraStore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainPolicy.get_RevocationFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509RevocationFlag (
    ::System::Security::Cryptography::X509Certificates::X509ChainPolicy::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainPolicy::get_RevocationFlag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63af704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*>(), { "get_RevocationFlag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainPolicy.get_RevocationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509RevocationMode (
    ::System::Security::Cryptography::X509Certificates::X509ChainPolicy::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainPolicy::get_RevocationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63af70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*>(), { "get_RevocationMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainPolicy.set_RevocationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainPolicy::*)(
    ::System::Security::Cryptography::X509Certificates::X509RevocationMode)>(&::System::Security::Cryptography::X509Certificates::X509ChainPolicy::set_RevocationMode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x63af714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*>(),
                                                             { "set_RevocationMode", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509RevocationMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainPolicy.get_VerificationFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509VerificationFlags (
    ::System::Security::Cryptography::X509Certificates::X509ChainPolicy::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainPolicy::get_VerificationFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63af770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*>(), { "get_VerificationFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainPolicy.set_VerificationFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainPolicy::*)(
    ::System::Security::Cryptography::X509Certificates::X509VerificationFlags)>(&::System::Security::Cryptography::X509Certificates::X509ChainPolicy::set_VerificationFlags)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x63af778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*>(),
                                                             { "set_VerificationFlags", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509VerificationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainPolicy.get_VerificationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Security::Cryptography::X509Certificates::X509ChainPolicy::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509ChainPolicy::get_VerificationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63af7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*>(), { "get_VerificationTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainPolicy.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainPolicy::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509ChainPolicy::Reset)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x63af3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::OidCollection*& System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_get_apps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___apps;
}
constexpr ::System::Security::Cryptography::OidCollection* const& System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_get_apps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___apps;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_set_apps(::System::Security::Cryptography::OidCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___apps = value;
}
constexpr ::System::Security::Cryptography::OidCollection*& System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_get_cert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cert;
}
constexpr ::System::Security::Cryptography::OidCollection* const& System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_get_cert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cert;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_set_cert(::System::Security::Cryptography::OidCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cert = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_get_store() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___store;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* const& System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_get_store() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___store;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_set_store(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___store = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*& System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_get_store2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___store2;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* const&
System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_get_store2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___store2;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_set_store2(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___store2 = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationFlag& System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_get_rflag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rflag;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationFlag const& System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_get_rflag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rflag;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_set_rflag(::System::Security::Cryptography::X509Certificates::X509RevocationFlag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rflag = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode& System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_get_mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode const& System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_get_mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_set_mode(::System::Security::Cryptography::X509Certificates::X509RevocationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mode = value;
}
constexpr ::System::TimeSpan& System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_get_timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeout;
}
constexpr ::System::TimeSpan const& System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_get_timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeout;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_set_timeout(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeout = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags& System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_get_vflags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vflags;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const& System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_get_vflags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vflags;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_set_vflags(::System::Security::Cryptography::X509Certificates::X509VerificationFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vflags = value;
}
constexpr ::System::DateTime& System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_get_vtime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vtime;
}
constexpr ::System::DateTime const& System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_get_vtime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vtime;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainPolicy::__cordl_internal_set_vtime(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vtime = value;
}
inline void System::Security::Cryptography::X509Certificates::X509ChainPolicy::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* System::Security::Cryptography::X509Certificates::X509ChainPolicy::get_ExtraStore() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*>(), { "get_ExtraStore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509RevocationFlag System::Security::Cryptography::X509Certificates::X509ChainPolicy::get_RevocationFlag() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*>(), { "get_RevocationFlag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509RevocationFlag>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509RevocationMode System::Security::Cryptography::X509Certificates::X509ChainPolicy::get_RevocationMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*>(), { "get_RevocationMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509RevocationMode>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainPolicy::set_RevocationMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*>(),
                                                           { "set_RevocationMode", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509RevocationMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::X509Certificates::X509VerificationFlags System::Security::Cryptography::X509Certificates::X509ChainPolicy::get_VerificationFlags() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*>(), { "get_VerificationFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509VerificationFlags>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainPolicy::set_VerificationFlags(::System::Security::Cryptography::X509Certificates::X509VerificationFlags value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*>(),
                                                           { "set_VerificationFlags", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509VerificationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime System::Security::Cryptography::X509Certificates::X509ChainPolicy::get_VerificationTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*>(), { "get_VerificationTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainPolicy::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* System::Security::Cryptography::X509Certificates::X509ChainPolicy::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainPolicy::X509ChainPolicy() {}
