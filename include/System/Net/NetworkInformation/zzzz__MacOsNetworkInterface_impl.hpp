#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/MacOsNetworkInterface.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterface_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__MacOsNetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_def.hpp"
#include "System/Net/NetworkInformation/zzzz__OperationalStatus_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsNetworkInterface._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::MacOsNetworkInterface::*)(::StringW, uint32_t)>(
    &::System::Net::NetworkInformation::MacOsNetworkInterface::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x30439e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterface*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsNetworkInterface.GetIPProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::IPInterfaceProperties* (
    ::System::Net::NetworkInformation::MacOsNetworkInterface::*)()>(&::System::Net::NetworkInformation::MacOsNetworkInterface::GetIPProperties)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3043a08;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterface*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterface*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsNetworkInterface.get_OperationalStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::OperationalStatus (::System::Net::NetworkInformation::MacOsNetworkInterface::*)()>(
    &::System::Net::NetworkInformation::MacOsNetworkInterface::get_OperationalStatus)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3043a7c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterface*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterface*>::get(), 6));
    return ___internal_method;
  }
};
constexpr uint32_t& System::Net::NetworkInformation::MacOsNetworkInterface::__cordl_internal_get__ifa_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ifa_flags;
}
constexpr uint32_t const& System::Net::NetworkInformation::MacOsNetworkInterface::__cordl_internal_get__ifa_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ifa_flags;
}
constexpr void System::Net::NetworkInformation::MacOsNetworkInterface::__cordl_internal_set__ifa_flags(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ifa_flags = value;
}
inline ::System::Net::NetworkInformation::MacOsNetworkInterface* System::Net::NetworkInformation::MacOsNetworkInterface::New_ctor(::StringW name, uint32_t ifa_flags) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::NetworkInformation::MacOsNetworkInterface*>(name, ifa_flags));
}
inline void System::Net::NetworkInformation::MacOsNetworkInterface::_ctor(::StringW name, uint32_t ifa_flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterface*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, ifa_flags);
}
inline ::System::Net::NetworkInformation::IPInterfaceProperties* System::Net::NetworkInformation::MacOsNetworkInterface::GetIPProperties() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterface*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::IPInterfaceProperties*, false>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::OperationalStatus System::Net::NetworkInformation::MacOsNetworkInterface::get_OperationalStatus() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterface*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::OperationalStatus, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::MacOsNetworkInterface::MacOsNetworkInterface() {}
