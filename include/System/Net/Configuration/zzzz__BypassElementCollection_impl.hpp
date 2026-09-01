#pragma once
// IWYU pragma private; include "System\Net\Configuration\BypassElementCollection.hpp"
#include "System/Configuration/zzzz__ConfigurationElementCollection_impl.hpp"
#include "System/Net/Configuration/zzzz__BypassElementCollection_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::BypassElementCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::BypassElementCollection::*)()>(&::System::Net::Configuration::BypassElementCollection::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6371b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::BypassElementCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Configuration::BypassElementCollection* System::Net::Configuration::BypassElementCollection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::BypassElementCollection*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::BypassElementCollection::BypassElementCollection() {}
