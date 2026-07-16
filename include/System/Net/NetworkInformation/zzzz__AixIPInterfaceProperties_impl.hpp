#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/AixIPInterfaceProperties.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixIPInterfaceProperties_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__AixIPInterfaceProperties_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/NetworkInformation/zzzz__AixNetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__GatewayIPAddressInformationCollection_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::AixIPInterfaceProperties._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::AixIPInterfaceProperties::*)(
    ::System::Net::NetworkInformation::AixNetworkInterface*, ::System::Collections::Generic::List_1<::System::Net::IPAddress*>*, int32_t)>(
    &::System::Net::NetworkInformation::AixIPInterfaceProperties::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x634d3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixIPInterfaceProperties*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::NetworkInformation::AixNetworkInterface*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::System::Net::IPAddress*>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixIPInterfaceProperties.ParseRouteInfo_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::ArrayW<::StringW>>)>(&::System::Net::NetworkInformation::AixIPInterfaceProperties::ParseRouteInfo_icall)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x634d42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixIPInterfaceProperties*>(),
                                                             { "ParseRouteInfo_icall", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixIPInterfaceProperties.get_GatewayAddresses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* (::System::Net::NetworkInformation::AixIPInterfaceProperties::*)()>(
    &::System::Net::NetworkInformation::AixIPInterfaceProperties::get_GatewayAddresses)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x634d470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixIPInterfaceProperties*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::AixIPInterfaceProperties*>(), 5 }));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::NetworkInformation::AixIPInterfaceProperties::__cordl_internal_get__mtu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mtu;
}
constexpr int32_t const& System::Net::NetworkInformation::AixIPInterfaceProperties::__cordl_internal_get__mtu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mtu;
}
constexpr void System::Net::NetworkInformation::AixIPInterfaceProperties::__cordl_internal_set__mtu(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mtu = value;
}
inline void System::Net::NetworkInformation::AixIPInterfaceProperties::_ctor(::System::Net::NetworkInformation::AixNetworkInterface* iface,
                                                                             ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses, int32_t mtu) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixIPInterfaceProperties*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Net::NetworkInformation::AixNetworkInterface*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::System::Net::IPAddress*>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, iface, addresses, mtu);
}
inline bool System::Net::NetworkInformation::AixIPInterfaceProperties::ParseRouteInfo_icall(::StringW iface, ::by_ref<::ArrayW<::StringW>> gw_addr_list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixIPInterfaceProperties*>(),
                                                           { "ParseRouteInfo_icall", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, iface, gw_addr_list);
}
inline ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* System::Net::NetworkInformation::AixIPInterfaceProperties::get_GatewayAddresses() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::AixIPInterfaceProperties*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::AixIPInterfaceProperties*
System::Net::NetworkInformation::AixIPInterfaceProperties::New_ctor(::System::Net::NetworkInformation::AixNetworkInterface* iface,
                                                                    ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses, int32_t mtu) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::AixIPInterfaceProperties*>(iface, addresses, mtu));
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::AixIPInterfaceProperties::AixIPInterfaceProperties() {}
