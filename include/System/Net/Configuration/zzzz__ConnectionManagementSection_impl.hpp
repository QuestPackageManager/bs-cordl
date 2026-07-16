#pragma once
// IWYU pragma private; include "System/Net/Configuration/ConnectionManagementSection.hpp"
#include "System/Configuration/zzzz__ConfigurationSection_impl.hpp"
#include "System/Net/Configuration/zzzz__ConnectionManagementSection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::ConnectionManagementSection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::ConnectionManagementSection::*)()>(&::System::Net::Configuration::ConnectionManagementSection::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x636c3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::ConnectionManagementSection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ConnectionManagementSection.get_Properties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::ConnectionManagementSection::*)()>(
    &::System::Net::Configuration::ConnectionManagementSection::get_Properties)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x636c3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Configuration::ConnectionManagementSection*>(),
                                                                                          { ::i2c::class_of<::System::Net::Configuration::ConnectionManagementSection*>(), 4 }));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::ConnectionManagementSection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::ConnectionManagementSection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::ConnectionManagementSection::get_Properties() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Configuration::ConnectionManagementSection*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::System::Net::Configuration::ConnectionManagementSection* System::Net::Configuration::ConnectionManagementSection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::ConnectionManagementSection*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::ConnectionManagementSection::ConnectionManagementSection() {}
