#pragma once
// IWYU pragma private; include "System\Net\Configuration\DefaultProxySectionInternal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Configuration/zzzz__DefaultProxySectionInternal_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySectionInternal.GetDefaultProxy_UsingOldMonoCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IWebProxy* (*)()>(&::System::Net::Configuration::DefaultProxySectionInternal::GetDefaultProxy_UsingOldMonoCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63573b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::DefaultProxySectionInternal*>(), { "GetDefaultProxy_UsingOldMonoCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySectionInternal.GetSystemWebProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IWebProxy* (*)()>(&::System::Net::Configuration::DefaultProxySectionInternal::GetSystemWebProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63573c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::DefaultProxySectionInternal*>(), { "GetSystemWebProxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySectionInternal.get_ClassSyncObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)()>(&::System::Net::Configuration::DefaultProxySectionInternal::get_ClassSyncObject)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x63573c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::DefaultProxySectionInternal*>(), { "get_ClassSyncObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySectionInternal.GetSection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::DefaultProxySectionInternal* (*)()>(&::System::Net::Configuration::DefaultProxySectionInternal::GetSection)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x635745c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::DefaultProxySectionInternal*>(), { "GetSection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySectionInternal.get_WebProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IWebProxy* (::System::Net::Configuration::DefaultProxySectionInternal::*)()>(
    &::System::Net::Configuration::DefaultProxySectionInternal::get_WebProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6357568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::DefaultProxySectionInternal*>(), { "get_WebProxy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySectionInternal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::DefaultProxySectionInternal::*)()>(&::System::Net::Configuration::DefaultProxySectionInternal::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6357564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::DefaultProxySectionInternal*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Net::IWebProxy*& System::Net::Configuration::DefaultProxySectionInternal::__cordl_internal_get_webProxy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___webProxy;
}
constexpr ::System::Net::IWebProxy* const& System::Net::Configuration::DefaultProxySectionInternal::__cordl_internal_get_webProxy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___webProxy;
}
constexpr void System::Net::Configuration::DefaultProxySectionInternal::__cordl_internal_set_webProxy(::System::Net::IWebProxy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___webProxy = value;
}
inline void System::Net::Configuration::DefaultProxySectionInternal::setStaticF_classSyncObject(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "classSyncObject", ::System::Net::Configuration::DefaultProxySectionInternal*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Net::Configuration::DefaultProxySectionInternal::getStaticF_classSyncObject() {
  return ::cordl_internals::getStaticField<::System::Object*, "classSyncObject", ::System::Net::Configuration::DefaultProxySectionInternal*>();
}
inline ::System::Net::IWebProxy* System::Net::Configuration::DefaultProxySectionInternal::GetDefaultProxy_UsingOldMonoCode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::DefaultProxySectionInternal*>(), { "GetDefaultProxy_UsingOldMonoCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*>(nullptr, ___internal_method);
}
inline ::System::Net::IWebProxy* System::Net::Configuration::DefaultProxySectionInternal::GetSystemWebProxy() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::DefaultProxySectionInternal*>(), { "GetSystemWebProxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*>(nullptr, ___internal_method);
}
inline ::System::Object* System::Net::Configuration::DefaultProxySectionInternal::get_ClassSyncObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::DefaultProxySectionInternal*>(), { "get_ClassSyncObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method);
}
inline ::System::Net::Configuration::DefaultProxySectionInternal* System::Net::Configuration::DefaultProxySectionInternal::GetSection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::DefaultProxySectionInternal*>(), { "GetSection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::DefaultProxySectionInternal*>(nullptr, ___internal_method);
}
inline ::System::Net::IWebProxy* System::Net::Configuration::DefaultProxySectionInternal::get_WebProxy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::DefaultProxySectionInternal*>(), { "get_WebProxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*>(this, ___internal_method);
}
inline void System::Net::Configuration::DefaultProxySectionInternal::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::DefaultProxySectionInternal*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Configuration::DefaultProxySectionInternal* System::Net::Configuration::DefaultProxySectionInternal::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::DefaultProxySectionInternal*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::DefaultProxySectionInternal::DefaultProxySectionInternal() {}
