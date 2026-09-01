#pragma once
// IWYU pragma private; include "System\Net\Configuration\WebRequestModuleElementCollection.hpp"
#include "System/Configuration/zzzz__ConfigurationElementCollection_impl.hpp"
#include "System/Net/Configuration/zzzz__WebRequestModuleElementCollection_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::WebRequestModuleElementCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::WebRequestModuleElementCollection::*)()>(
    &::System::Net::Configuration::WebRequestModuleElementCollection::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6372164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::WebRequestModuleElementCollection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::WebRequestModuleElementCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::WebRequestModuleElementCollection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Configuration::WebRequestModuleElementCollection* System::Net::Configuration::WebRequestModuleElementCollection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::WebRequestModuleElementCollection*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::WebRequestModuleElementCollection::WebRequestModuleElementCollection() {}
