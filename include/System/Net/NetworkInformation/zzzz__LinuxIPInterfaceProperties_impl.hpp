#pragma once
#include "System/Net/NetworkInformation/zzzz__UnixIPInterfaceProperties_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__LinuxIPInterfaceProperties_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/NetworkInformation/zzzz__GatewayIPAddressInformationCollection_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPAddressCollection_def.hpp"
#include "System/Net/NetworkInformation/zzzz__LinuxNetworkInterface_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxIPInterfaceProperties._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::LinuxIPInterfaceProperties::*)(
    ::System::Net::NetworkInformation::LinuxNetworkInterface*, ::System::Collections::Generic::List_1<::System::Net::IPAddress*>*)>(
    &::System::Net::NetworkInformation::LinuxIPInterfaceProperties::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f232dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxIPInterfaceProperties*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::LinuxNetworkInterface*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Net::IPAddress*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxIPInterfaceProperties.ParseRouteInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::IPAddressCollection* (
    ::System::Net::NetworkInformation::LinuxIPInterfaceProperties::*)(::StringW)>(&::System::Net::NetworkInformation::LinuxIPInterfaceProperties::ParseRouteInfo)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x2f2334c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxIPInterfaceProperties*>::get(), "ParseRouteInfo",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxIPInterfaceProperties.get_GatewayAddresses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* (
    ::System::Net::NetworkInformation::LinuxIPInterfaceProperties::*)()>(&::System::Net::NetworkInformation::LinuxIPInterfaceProperties::get_GatewayAddresses)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f237d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxIPInterfaceProperties*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxIPInterfaceProperties*>::get(), 5));
    return ___internal_method;
  }
};
inline ::System::Net::NetworkInformation::LinuxIPInterfaceProperties*
System::Net::NetworkInformation::LinuxIPInterfaceProperties::New_ctor(::System::Net::NetworkInformation::LinuxNetworkInterface* iface,
                                                                      ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::NetworkInformation::LinuxIPInterfaceProperties*>(iface, addresses));
}
inline void System::Net::NetworkInformation::LinuxIPInterfaceProperties::_ctor(::System::Net::NetworkInformation::LinuxNetworkInterface* iface,
                                                                               ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxIPInterfaceProperties*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::LinuxNetworkInterface*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Net::IPAddress*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, iface, addresses);
}
inline ::System::Net::NetworkInformation::IPAddressCollection* System::Net::NetworkInformation::LinuxIPInterfaceProperties::ParseRouteInfo(::StringW iface) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxIPInterfaceProperties*>::get(), "ParseRouteInfo",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::IPAddressCollection*, false>(this, ___internal_method, iface);
}
inline ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* System::Net::NetworkInformation::LinuxIPInterfaceProperties::get_GatewayAddresses() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxIPInterfaceProperties*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::LinuxIPInterfaceProperties::LinuxIPInterfaceProperties() {}
