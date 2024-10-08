#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/SystemGatewayIPAddressInformation.hpp"
#include "System/Net/NetworkInformation/zzzz__GatewayIPAddressInformation_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__SystemGatewayIPAddressInformation_def.hpp"
#include "System/Net/NetworkInformation/zzzz__GatewayIPAddressInformationCollection_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPAddressCollection_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::SystemGatewayIPAddressInformation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::SystemGatewayIPAddressInformation::*)(::System::Net::IPAddress*)>(
    &::System::Net::NetworkInformation::SystemGatewayIPAddressInformation::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4372988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::SystemGatewayIPAddressInformation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::SystemGatewayIPAddressInformation.ToGatewayIpAddressInformationCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* (*)(::System::Net::NetworkInformation::IPAddressCollection*)>(
        &::System::Net::NetworkInformation::SystemGatewayIPAddressInformation::ToGatewayIpAddressInformationCollection)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x43729b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::SystemGatewayIPAddressInformation*>::get(),
                                    "ToGatewayIpAddressInformationCollection", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::IPAddressCollection*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Net::IPAddress*& System::Net::NetworkInformation::SystemGatewayIPAddressInformation::__cordl_internal_get_address() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___address;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IPAddress*> const& System::Net::NetworkInformation::SystemGatewayIPAddressInformation::__cordl_internal_get_address() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___address;
}
constexpr void System::Net::NetworkInformation::SystemGatewayIPAddressInformation::__cordl_internal_set_address(::System::Net::IPAddress* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___address)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::NetworkInformation::SystemGatewayIPAddressInformation* System::Net::NetworkInformation::SystemGatewayIPAddressInformation::New_ctor(::System::Net::IPAddress* address) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::NetworkInformation::SystemGatewayIPAddressInformation*>(address));
}
inline void System::Net::NetworkInformation::SystemGatewayIPAddressInformation::_ctor(::System::Net::IPAddress* address) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::SystemGatewayIPAddressInformation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, address);
}
inline ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*
System::Net::NetworkInformation::SystemGatewayIPAddressInformation::ToGatewayIpAddressInformationCollection(::System::Net::NetworkInformation::IPAddressCollection* addresses) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::SystemGatewayIPAddressInformation*>::get(),
                                  "ToGatewayIpAddressInformationCollection", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::IPAddressCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*, false>(nullptr, ___internal_method, addresses);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::SystemGatewayIPAddressInformation::SystemGatewayIPAddressInformation() {}
