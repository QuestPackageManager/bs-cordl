#pragma once
// IWYU pragma private; include "System\Net\NetworkInformation\LinuxIPInterfaceProperties.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixIPInterfaceProperties_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__LinuxIPInterfaceProperties_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/NetworkInformation/zzzz__GatewayIPAddressInformationCollection_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPAddressCollection_def.hpp"
#include "System/Net/NetworkInformation/zzzz__LinuxNetworkInterface_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxIPInterfaceProperties._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::LinuxIPInterfaceProperties::*)(::System::Net::NetworkInformation::LinuxNetworkInterface*,
                                                                                                                               ::System::Collections::Generic::List_1<::System::Net::IPAddress*>*)>(
    &::System::Net::NetworkInformation::LinuxIPInterfaceProperties::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6354604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Net::NetworkInformation::LinuxIPInterfaceProperties*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Net::NetworkInformation::LinuxNetworkInterface*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Net::IPAddress*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxIPInterfaceProperties.ParseRouteInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::IPAddressCollection* (::System::Net::NetworkInformation::LinuxIPInterfaceProperties::*)(::StringW)>(
    &::System::Net::NetworkInformation::LinuxIPInterfaceProperties::ParseRouteInfo)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x635466c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxIPInterfaceProperties*>(), { "ParseRouteInfo", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxIPInterfaceProperties.get_GatewayAddresses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* (::System::Net::NetworkInformation::LinuxIPInterfaceProperties::*)()>(
    &::System::Net::NetworkInformation::LinuxIPInterfaceProperties::get_GatewayAddresses)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6354af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxIPInterfaceProperties*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::LinuxIPInterfaceProperties*>(), 5 }));
    return ___internal_method;
  }
};
inline void System::Net::NetworkInformation::LinuxIPInterfaceProperties::_ctor(::System::Net::NetworkInformation::LinuxNetworkInterface* iface,
                                                                               ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Net::NetworkInformation::LinuxIPInterfaceProperties*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Net::NetworkInformation::LinuxNetworkInterface*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Net::IPAddress*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, iface, addresses);
}
inline ::System::Net::NetworkInformation::IPAddressCollection* System::Net::NetworkInformation::LinuxIPInterfaceProperties::ParseRouteInfo(::StringW iface) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxIPInterfaceProperties*>(), { "ParseRouteInfo", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::IPAddressCollection*>(this, ___internal_method, iface);
}
inline ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* System::Net::NetworkInformation::LinuxIPInterfaceProperties::get_GatewayAddresses() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::LinuxIPInterfaceProperties*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::LinuxIPInterfaceProperties*
System::Net::NetworkInformation::LinuxIPInterfaceProperties::New_ctor(::System::Net::NetworkInformation::LinuxNetworkInterface* iface,
                                                                      ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::LinuxIPInterfaceProperties*>(iface, addresses));
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::LinuxIPInterfaceProperties::LinuxIPInterfaceProperties() {}
