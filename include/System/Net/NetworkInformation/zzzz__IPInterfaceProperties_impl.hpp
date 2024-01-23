#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_def.hpp"
#include "System/Net/NetworkInformation/zzzz__GatewayIPAddressInformationCollection_def.hpp"
#include "System/Net/NetworkInformation/zzzz__UnicastIPAddressInformationCollection_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::IPInterfaceProperties.get_UnicastAddresses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* (
    ::System::Net::NetworkInformation::IPInterfaceProperties::*)()>(&::System::Net::NetworkInformation::IPInterfaceProperties::get_UnicastAddresses)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::IPInterfaceProperties*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::IPInterfaceProperties*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::IPInterfaceProperties.get_GatewayAddresses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* (
    ::System::Net::NetworkInformation::IPInterfaceProperties::*)()>(&::System::Net::NetworkInformation::IPInterfaceProperties::get_GatewayAddresses)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::IPInterfaceProperties*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::IPInterfaceProperties*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::IPInterfaceProperties._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::IPInterfaceProperties::*)()>(
    &::System::Net::NetworkInformation::IPInterfaceProperties::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29eb70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::IPInterfaceProperties*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* System::Net::NetworkInformation::IPInterfaceProperties::get_UnicastAddresses() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::IPInterfaceProperties*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::UnicastIPAddressInformationCollection*, false>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* System::Net::NetworkInformation::IPInterfaceProperties::get_GatewayAddresses() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::IPInterfaceProperties*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*, false>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::IPInterfaceProperties* System::Net::NetworkInformation::IPInterfaceProperties::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::NetworkInformation::IPInterfaceProperties*>());
}
inline void System::Net::NetworkInformation::IPInterfaceProperties::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::IPInterfaceProperties*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::IPInterfaceProperties::IPInterfaceProperties() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
