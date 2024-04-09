#pragma once
#include "System/Net/NetworkInformation/zzzz__UnixIPInterfaceProperties_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__AixIPInterfaceProperties_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/NetworkInformation/zzzz__AixNetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__GatewayIPAddressInformationCollection_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::AixIPInterfaceProperties._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::AixIPInterfaceProperties::*)(
    ::System::Net::NetworkInformation::AixNetworkInterface*, ::System::Collections::Generic::List_1<::System::Net::IPAddress*>*, int32_t)>(
    &::System::Net::NetworkInformation::AixIPInterfaceProperties::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2f1c8c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixIPInterfaceProperties*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::AixNetworkInterface*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Net::IPAddress*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixIPInterfaceProperties.ParseRouteInfo_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>)>(
    &::System::Net::NetworkInformation::AixIPInterfaceProperties::ParseRouteInfo_icall)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f1c970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixIPInterfaceProperties*>::get(), "ParseRouteInfo_icall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixIPInterfaceProperties.get_GatewayAddresses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* (
    ::System::Net::NetworkInformation::AixIPInterfaceProperties::*)()>(&::System::Net::NetworkInformation::AixIPInterfaceProperties::get_GatewayAddresses)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2f1c9b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixIPInterfaceProperties*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixIPInterfaceProperties*>::get(), 5));
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
inline ::System::Net::NetworkInformation::AixIPInterfaceProperties*
System::Net::NetworkInformation::AixIPInterfaceProperties::New_ctor(::System::Net::NetworkInformation::AixNetworkInterface* iface,
                                                                    ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses, int32_t mtu) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::NetworkInformation::AixIPInterfaceProperties*>(iface, addresses, mtu));
}
inline void System::Net::NetworkInformation::AixIPInterfaceProperties::_ctor(::System::Net::NetworkInformation::AixNetworkInterface* iface,
                                                                             ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses, int32_t mtu) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixIPInterfaceProperties*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::AixNetworkInterface*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Net::IPAddress*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, iface, addresses, mtu);
}
inline bool System::Net::NetworkInformation::AixIPInterfaceProperties::ParseRouteInfo_icall(::StringW iface, ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> gw_addr_list) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixIPInterfaceProperties*>::get(), "ParseRouteInfo_icall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, iface, gw_addr_list);
}
inline ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* System::Net::NetworkInformation::AixIPInterfaceProperties::get_GatewayAddresses() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixIPInterfaceProperties*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::AixIPInterfaceProperties::AixIPInterfaceProperties() {}
