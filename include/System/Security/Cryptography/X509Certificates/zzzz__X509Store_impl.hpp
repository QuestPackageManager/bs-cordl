#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509Store.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__OpenFlags_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__StoreLocation_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Store_def.hpp"
#include "Mono/Security/X509/zzzz__X509Store_def.hpp"
#include "Mono/Security/X509/zzzz__X509Stores_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__OpenFlags_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__StoreLocation_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__StoreName_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Collection_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Store._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Store::*)(::System::Security::Cryptography::X509Certificates::StoreName,
                                                                                                                               ::System::Security::Cryptography::X509Certificates::StoreLocation)>(
    &::System::Security::Cryptography::X509Certificates::X509Store::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x63ac8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Store*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::StoreName>(),
                                                                                               ::i2c::type_of<::System::Security::Cryptography::X509Certificates::StoreLocation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Store.get_Certificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* (
    ::System::Security::Cryptography::X509Certificates::X509Store::*)()>(&::System::Security::Cryptography::X509Certificates::X509Store::get_Certificates)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x63aca1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Store*>(), { "get_Certificates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Store.get_Factory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Stores* (::System::Security::Cryptography::X509Certificates::X509Store::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Store::get_Factory)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x63acaa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Store*>(), { "get_Factory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Store.get_Store
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Store* (::System::Security::Cryptography::X509Certificates::X509Store::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Store::get_Store)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63acabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Store*>(), { "get_Store", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Store.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Store::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Store::Close)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x63acac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Store*>(), { "Close", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Store.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Store::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Store::Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x63acae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Store*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Store.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Store::*)(::System::Security::Cryptography::X509Certificates::OpenFlags)>(
    &::System::Security::Cryptography::X509Certificates::X509Store::Open)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x63acafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Store*>(),
                                                                                           { "Open", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::OpenFlags>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____name = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::StoreLocation& System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_get__location() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____location;
}
constexpr ::System::Security::Cryptography::X509Certificates::StoreLocation const& System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_get__location() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____location;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_set__location(::System::Security::Cryptography::X509Certificates::StoreLocation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____location = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*& System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_get_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* const& System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_get_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_set_list(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___list = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::OpenFlags& System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_get__flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags;
}
constexpr ::System::Security::Cryptography::X509Certificates::OpenFlags const& System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_get__flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_set__flags(::System::Security::Cryptography::X509Certificates::OpenFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flags = value;
}
constexpr ::Mono::Security::X509::X509Store*& System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_get_store() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___store;
}
constexpr ::Mono::Security::X509::X509Store* const& System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_get_store() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___store;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Store::__cordl_internal_set_store(::Mono::Security::X509::X509Store* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___store = value;
}
inline void System::Security::Cryptography::X509Certificates::X509Store::_ctor(::System::Security::Cryptography::X509Certificates::StoreName storeName,
                                                                               ::System::Security::Cryptography::X509Certificates::StoreLocation storeLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Store*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::StoreName>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::StoreLocation>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, storeName, storeLocation);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* System::Security::Cryptography::X509Certificates::X509Store::get_Certificates() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Store*>(), { "get_Certificates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Stores* System::Security::Cryptography::X509Certificates::X509Store::get_Factory() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Store*>(), { "get_Factory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Stores*>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Store* System::Security::Cryptography::X509Certificates::X509Store::get_Store() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Store*>(), { "get_Store", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Store*>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509Store::Close() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Store*>(), { "Close", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509Store::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Store*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509Store::Open(::System::Security::Cryptography::X509Certificates::OpenFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Store*>(),
                                                                                         { "Open", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::OpenFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags);
}
inline ::System::Security::Cryptography::X509Certificates::X509Store*
System::Security::Cryptography::X509Certificates::X509Store::New_ctor(::System::Security::Cryptography::X509Certificates::StoreName storeName,
                                                                      ::System::Security::Cryptography::X509Certificates::StoreLocation storeLocation) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Store*>(storeName, storeLocation));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Security::Cryptography::X509Certificates::X509Store::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Security::Cryptography::X509Certificates::X509Store::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509Store::X509Store() {}
