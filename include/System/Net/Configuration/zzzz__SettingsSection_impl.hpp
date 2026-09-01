#pragma once
// IWYU pragma private; include "System\Net\Configuration\SettingsSection.hpp"
#include "System/Configuration/zzzz__ConfigurationSection_impl.hpp"
#include "System/Net/Configuration/zzzz__SettingsSection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::SettingsSection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::SettingsSection::*)()>(&::System::Net::Configuration::SettingsSection::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6371e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::SettingsSection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSection.get_Properties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::SettingsSection::*)()>(
    &::System::Net::Configuration::SettingsSection::get_Properties)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6371ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Configuration::SettingsSection*>(), { ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(), 4 }));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::SettingsSection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::SettingsSection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::SettingsSection::get_Properties() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Configuration::SettingsSection*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::System::Net::Configuration::SettingsSection* System::Net::Configuration::SettingsSection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::SettingsSection*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::SettingsSection::SettingsSection() {}
