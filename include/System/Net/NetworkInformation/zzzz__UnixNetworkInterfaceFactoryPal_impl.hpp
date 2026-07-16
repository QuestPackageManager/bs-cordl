#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/UnixNetworkInterfaceFactoryPal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceFactoryPal_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceFactory_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::NetworkInterfaceFactory* (*)()>(&::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal::Create)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6351334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal*>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Net::NetworkInformation::NetworkInterfaceFactory* System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal*>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::NetworkInterfaceFactory*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal::UnixNetworkInterfaceFactoryPal() {}
