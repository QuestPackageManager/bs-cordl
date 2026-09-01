#pragma once
// IWYU pragma private; include "System\Net\Configuration\ServicePointManagerElement.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Net/Configuration/zzzz__ServicePointManagerElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::ServicePointManagerElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::ServicePointManagerElement::*)()>(&::System::Net::Configuration::ServicePointManagerElement::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6371f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::ServicePointManagerElement*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ServicePointManagerElement.get_Properties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::ServicePointManagerElement::*)()>(
    &::System::Net::Configuration::ServicePointManagerElement::get_Properties)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6371fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Configuration::ServicePointManagerElement*>(),
                                                                                          { ::i2c::class_of<::System::Net::Configuration::ServicePointManagerElement*>(), 4 }));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::ServicePointManagerElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::ServicePointManagerElement*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::ServicePointManagerElement::get_Properties() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Configuration::ServicePointManagerElement*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::System::Net::Configuration::ServicePointManagerElement* System::Net::Configuration::ServicePointManagerElement::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::ServicePointManagerElement*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::ServicePointManagerElement::ServicePointManagerElement() {}
