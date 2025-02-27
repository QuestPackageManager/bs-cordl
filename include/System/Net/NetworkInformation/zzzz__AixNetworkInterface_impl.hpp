#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/AixNetworkInterface.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterface_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__AixNetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_def.hpp"
#include "System/Net/NetworkInformation/zzzz__OperationalStatus_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterface._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::AixNetworkInterface::*)(::StringW, uint32_t, int32_t)>(
    &::System::Net::NetworkInformation::AixNetworkInterface::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x43f8fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterface*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterface.GetIPProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::IPInterfaceProperties* (
    ::System::Net::NetworkInformation::AixNetworkInterface::*)()>(&::System::Net::NetworkInformation::AixNetworkInterface::GetIPProperties)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x43f9128;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterface*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterface*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterface.get_OperationalStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::OperationalStatus (::System::Net::NetworkInformation::AixNetworkInterface::*)()>(
    &::System::Net::NetworkInformation::AixNetworkInterface::get_OperationalStatus)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x43f91a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterface*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterface*>::get(), 6));
    return ___internal_method;
  }
};
constexpr uint32_t& System::Net::NetworkInformation::AixNetworkInterface::__cordl_internal_get__ifa_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ifa_flags;
}
constexpr uint32_t const& System::Net::NetworkInformation::AixNetworkInterface::__cordl_internal_get__ifa_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ifa_flags;
}
constexpr void System::Net::NetworkInformation::AixNetworkInterface::__cordl_internal_set__ifa_flags(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ifa_flags = value;
}
constexpr int32_t& System::Net::NetworkInformation::AixNetworkInterface::__cordl_internal_get__ifru_mtu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ifru_mtu;
}
constexpr int32_t const& System::Net::NetworkInformation::AixNetworkInterface::__cordl_internal_get__ifru_mtu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ifru_mtu;
}
constexpr void System::Net::NetworkInformation::AixNetworkInterface::__cordl_internal_set__ifru_mtu(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ifru_mtu = value;
}
inline void System::Net::NetworkInformation::AixNetworkInterface::_ctor(::StringW name, uint32_t ifa_flags, int32_t ifru_mtu) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterface*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, ifa_flags, ifru_mtu);
}
inline ::System::Net::NetworkInformation::IPInterfaceProperties* System::Net::NetworkInformation::AixNetworkInterface::GetIPProperties() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterface*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::IPInterfaceProperties*, false>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::OperationalStatus System::Net::NetworkInformation::AixNetworkInterface::get_OperationalStatus() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::AixNetworkInterface*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::OperationalStatus, false>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::AixNetworkInterface* System::Net::NetworkInformation::AixNetworkInterface::New_ctor(::StringW name, uint32_t ifa_flags, int32_t ifru_mtu) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::NetworkInformation::AixNetworkInterface*>(name, ifa_flags, ifru_mtu));
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::AixNetworkInterface::AixNetworkInterface() {}
