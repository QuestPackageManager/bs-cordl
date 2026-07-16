#pragma once
// IWYU pragma private; include "System/Net/Configuration/SettingsSectionInternal.hpp"
#include "System/Net/Sockets/zzzz__IPProtectionLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Configuration/zzzz__SettingsSectionInternal_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal.get_Section
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::SettingsSectionInternal* (*)()>(&::System::Net::Configuration::SettingsSectionInternal::get_Section)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6351d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(), { "get_Section", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal.get_Ipv6Enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Configuration::SettingsSectionInternal::*)()>(&::System::Net::Configuration::SettingsSectionInternal::get_Ipv6Enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6351db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(), { "get_Ipv6Enabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::SettingsSectionInternal::*)()>(&::System::Net::Configuration::SettingsSectionInternal::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6351dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get_HttpListenerUnescapeRequestUrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HttpListenerUnescapeRequestUrl;
}
constexpr bool const& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get_HttpListenerUnescapeRequestUrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HttpListenerUnescapeRequestUrl;
}
constexpr void System::Net::Configuration::SettingsSectionInternal::__cordl_internal_set_HttpListenerUnescapeRequestUrl(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HttpListenerUnescapeRequestUrl = value;
}
constexpr ::System::Net::Sockets::IPProtectionLevel& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get_IPProtectionLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IPProtectionLevel;
}
constexpr ::System::Net::Sockets::IPProtectionLevel const& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get_IPProtectionLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IPProtectionLevel;
}
constexpr void System::Net::Configuration::SettingsSectionInternal::__cordl_internal_set_IPProtectionLevel(::System::Net::Sockets::IPProtectionLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IPProtectionLevel = value;
}
inline void System::Net::Configuration::SettingsSectionInternal::setStaticF_instance(::System::Net::Configuration::SettingsSectionInternal* value) {
  ::cordl_internals::setStaticField<::System::Net::Configuration::SettingsSectionInternal*, "instance", ::System::Net::Configuration::SettingsSectionInternal*>(
      std::forward<::System::Net::Configuration::SettingsSectionInternal*>(value));
}
inline ::System::Net::Configuration::SettingsSectionInternal* System::Net::Configuration::SettingsSectionInternal::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::System::Net::Configuration::SettingsSectionInternal*, "instance", ::System::Net::Configuration::SettingsSectionInternal*>();
}
inline ::System::Net::Configuration::SettingsSectionInternal* System::Net::Configuration::SettingsSectionInternal::get_Section() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(), { "get_Section", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::SettingsSectionInternal*>(nullptr, ___internal_method);
}
inline bool System::Net::Configuration::SettingsSectionInternal::get_Ipv6Enabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(), { "get_Ipv6Enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Configuration::SettingsSectionInternal::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Configuration::SettingsSectionInternal* System::Net::Configuration::SettingsSectionInternal::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::SettingsSectionInternal*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::SettingsSectionInternal::SettingsSectionInternal() {}
