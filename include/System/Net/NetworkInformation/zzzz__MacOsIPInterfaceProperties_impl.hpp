#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/MacOsIPInterfaceProperties.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixIPInterfaceProperties_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__MacOsIPInterfaceProperties_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/NetworkInformation/zzzz__GatewayIPAddressInformationCollection_def.hpp"
#include "System/Net/NetworkInformation/zzzz__MacOsNetworkInterface_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsIPInterfaceProperties._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::MacOsIPInterfaceProperties::*)(::System::Net::NetworkInformation::MacOsNetworkInterface*,
                                                                                                                               ::System::Collections::Generic::List_1<::System::Net::IPAddress*>*)>(
    &::System::Net::NetworkInformation::MacOsIPInterfaceProperties::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6350618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Net::NetworkInformation::MacOsIPInterfaceProperties*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Net::NetworkInformation::MacOsNetworkInterface*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Net::IPAddress*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsIPInterfaceProperties.ParseRouteInfo_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::ArrayW<::StringW>>)>(&::System::Net::NetworkInformation::MacOsIPInterfaceProperties::ParseRouteInfo_icall)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6350680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::MacOsIPInterfaceProperties*>(),
                                                             { "ParseRouteInfo_icall", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsIPInterfaceProperties.get_GatewayAddresses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* (::System::Net::NetworkInformation::MacOsIPInterfaceProperties::*)()>(
    &::System::Net::NetworkInformation::MacOsIPInterfaceProperties::get_GatewayAddresses)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6350680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::MacOsIPInterfaceProperties*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::MacOsIPInterfaceProperties*>(), 5 }));
    return ___internal_method;
  }
};
inline void System::Net::NetworkInformation::MacOsIPInterfaceProperties::_ctor(::System::Net::NetworkInformation::MacOsNetworkInterface* iface,
                                                                               ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Net::NetworkInformation::MacOsIPInterfaceProperties*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Net::NetworkInformation::MacOsNetworkInterface*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Net::IPAddress*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, iface, addresses);
}
inline bool System::Net::NetworkInformation::MacOsIPInterfaceProperties::ParseRouteInfo_icall(::StringW iface, ::by_ref<::ArrayW<::StringW>> gw_addr_list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::MacOsIPInterfaceProperties*>(),
                                                           { "ParseRouteInfo_icall", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, iface, gw_addr_list);
}
inline ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* System::Net::NetworkInformation::MacOsIPInterfaceProperties::get_GatewayAddresses() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::MacOsIPInterfaceProperties*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::MacOsIPInterfaceProperties*
System::Net::NetworkInformation::MacOsIPInterfaceProperties::New_ctor(::System::Net::NetworkInformation::MacOsNetworkInterface* iface,
                                                                      ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::MacOsIPInterfaceProperties*>(iface, addresses));
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::MacOsIPInterfaceProperties::MacOsIPInterfaceProperties() {}
