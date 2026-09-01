#pragma once
// IWYU pragma private; include "System\Net\NetworkInformation\IPGlobalPropertiesFactoryPal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__IPGlobalPropertiesFactoryPal_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPGlobalProperties_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::IPGlobalProperties* (*)()>(&::System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal::Create)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x635229c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal*>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Net::NetworkInformation::IPGlobalProperties* System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal*>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::IPGlobalProperties*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal::IPGlobalPropertiesFactoryPal() {}
