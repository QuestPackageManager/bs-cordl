#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/SystemNetworkInterface.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__SystemNetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceFactory_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::SystemNetworkInterface.GetNetworkInterfaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*> (*)()>(
    &::System::Net::NetworkInformation::SystemNetworkInterface::GetNetworkInterfaces)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x634cbb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::SystemNetworkInterface*>(), { "GetNetworkInterfaces", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Net::NetworkInformation::SystemNetworkInterface::setStaticF_nif(::System::Net::NetworkInformation::NetworkInterfaceFactory* value) {
  ::cordl_internals::setStaticField<::System::Net::NetworkInformation::NetworkInterfaceFactory*, "nif", ::System::Net::NetworkInformation::SystemNetworkInterface*>(
      std::forward<::System::Net::NetworkInformation::NetworkInterfaceFactory*>(value));
}
inline ::System::Net::NetworkInformation::NetworkInterfaceFactory* System::Net::NetworkInformation::SystemNetworkInterface::getStaticF_nif() {
  return ::cordl_internals::getStaticField<::System::Net::NetworkInformation::NetworkInterfaceFactory*, "nif", ::System::Net::NetworkInformation::SystemNetworkInterface*>();
}
inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*> System::Net::NetworkInformation::SystemNetworkInterface::GetNetworkInterfaces() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::SystemNetworkInterface*>(), { "GetNetworkInterfaces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::SystemNetworkInterface::SystemNetworkInterface() {}
