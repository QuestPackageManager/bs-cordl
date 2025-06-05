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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::MacOsIPInterfaceProperties::*)(
    ::System::Net::NetworkInformation::MacOsNetworkInterface*, ::System::Collections::Generic::List_1<::System::Net::IPAddress*>*)>(
    &::System::Net::NetworkInformation::MacOsIPInterfaceProperties::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x43ed62c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsIPInterfaceProperties*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::MacOsNetworkInterface*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Net::IPAddress*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsIPInterfaceProperties.ParseRouteInfo_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>)>(
    &::System::Net::NetworkInformation::MacOsIPInterfaceProperties::ParseRouteInfo_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x43ed69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsIPInterfaceProperties*>::get(), "ParseRouteInfo_icall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsIPInterfaceProperties.get_GatewayAddresses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* (
    ::System::Net::NetworkInformation::MacOsIPInterfaceProperties::*)()>(&::System::Net::NetworkInformation::MacOsIPInterfaceProperties::get_GatewayAddresses)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x43ed6a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsIPInterfaceProperties*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsIPInterfaceProperties*>::get(), 5));
    return ___internal_method;
  }
};
inline void System::Net::NetworkInformation::MacOsIPInterfaceProperties::_ctor(::System::Net::NetworkInformation::MacOsNetworkInterface* iface,
                                                                               ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsIPInterfaceProperties*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::MacOsNetworkInterface*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Net::IPAddress*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, iface, addresses);
}
inline bool System::Net::NetworkInformation::MacOsIPInterfaceProperties::ParseRouteInfo_icall(::StringW iface, ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> gw_addr_list) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsIPInterfaceProperties*>::get(), "ParseRouteInfo_icall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, iface, gw_addr_list);
}
inline ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* System::Net::NetworkInformation::MacOsIPInterfaceProperties::get_GatewayAddresses() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsIPInterfaceProperties*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*, false>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::MacOsIPInterfaceProperties*
System::Net::NetworkInformation::MacOsIPInterfaceProperties::New_ctor(::System::Net::NetworkInformation::MacOsNetworkInterface* iface,
                                                                      ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::NetworkInformation::MacOsIPInterfaceProperties*>(iface, addresses));
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::MacOsIPInterfaceProperties::MacOsIPInterfaceProperties() {}
